/*
 * XREFs of KeyboardClassRemoveDevice @ 0x1C00053E0
 * Callers:
 *     KeyboardPnP @ 0x1C0001F50 (KeyboardPnP.c)
 * Callees:
 *     KeyboardClassCleanupQueue @ 0x1C0004CD8 (KeyboardClassCleanupQueue.c)
 */

void __fastcall KeyboardClassRemoveDevice(__int64 a1)
{
  IRP *v1; // rdi
  KIRQL v3; // al
  IRP *v4; // rdx
  __int32 v5; // eax
  void *v6; // rcx

  v1 = 0LL;
  if ( !_InterlockedExchange((volatile __int32 *)(a1 + 320), 1) )
  {
    v3 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 72));
    v4 = *(IRP **)(a1 + 296);
    if ( v4 && !*(_BYTE *)(a1 + 304) )
    {
      *(_BYTE *)(a1 + 304) = 1;
      v1 = v4;
    }
    KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 72), v3);
    if ( v1 )
      IoCancelIrp(v1);
    v5 = _InterlockedExchange((volatile __int32 *)(a1 + 320), 2);
    if ( v1 && v5 == 3 )
      IofCompleteRequest(v1, 0);
  }
  IoWMIRegistrationControl(*(PDEVICE_OBJECT *)a1, 2u);
  if ( *(_BYTE *)(a1 + 65) )
  {
    ExAcquireFastMutex((PFAST_MUTEX)&WPP_MAIN_CB.Queue.Wcb.DeviceObject);
    if ( *(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels )
    {
      if ( SHIDWORD(WPP_MAIN_CB.Queue.Wcb.DeviceContext) <= 0 )
      {
        ExReleaseFastMutex((PFAST_MUTEX)&WPP_MAIN_CB.Queue.Wcb.DeviceObject);
      }
      else
      {
        *((_BYTE *)WPP_MAIN_CB.Queue.Wcb.DeviceRoutine + 24 * *(unsigned int *)(a1 + 196) + 16) = 0;
        ExReleaseFastMutex((PFAST_MUTEX)&WPP_MAIN_CB.Queue.Wcb.DeviceObject);
        v6 = (void *)_InterlockedExchange64((volatile __int64 *)(a1 + 328), 0LL);
        if ( v6 )
          IoUnregisterPlugPlayNotification(v6);
      }
    }
    else
    {
      ExReleaseFastMutex((PFAST_MUTEX)&WPP_MAIN_CB.Queue.Wcb.DeviceObject);
      if ( !*(_BYTE *)(a1 + 363) && *(_QWORD *)(a1 + 96) )
        IoSetDeviceInterfaceState((PUNICODE_STRING)(a1 + 88), 0);
    }
  }
  if ( *(_BYTE *)(a1 + 64) )
    KeyboardClassCleanupQueue((__int64)v6, a1, 0LL);
}
