/*
 * XREFs of PpProfileIncludeInHardwareProfileTransition @ 0x1408A852C
 * Callers:
 *     PipProcessStartPhase1 @ 0x14072C90C (PipProcessStartPhase1.c)
 *     PnpProcessQueryRemoveAndEject @ 0x1407303C4 (PnpProcessQueryRemoveAndEject.c)
 * Callees:
 *     ExAcquireFastMutex @ 0x1402071B0 (ExAcquireFastMutex.c)
 *     KeReleaseGuardedMutex @ 0x14020AC90 (KeReleaseGuardedMutex.c)
 *     PnpIrpQueryID @ 0x140750D90 (PnpIrpQueryID.c)
 *     ExFreePoolWithTag @ 0x1409B1140 (ExFreePoolWithTag.c)
 */

void __fastcall PpProfileIncludeInHardwareProfileTransition(__int64 a1, int a2)
{
  __int64 *v4; // rbx
  __int64 v5; // rax
  PVOID P; // [rsp+40h] [rbp+18h] BYREF

  P = 0LL;
  if ( a2 == 2 )
  {
    v4 = (__int64 *)(a1 + 576);
    if ( (__int64 *)*v4 == v4 )
    {
      ExAcquireFastMutex(&PiProfileDeviceListLock);
      v5 = PiProfileDeviceListHead;
      if ( *(__int64 **)(PiProfileDeviceListHead + 8) != &PiProfileDeviceListHead )
        __fastfail(3u);
      v4[1] = (__int64)&PiProfileDeviceListHead;
      *v4 = v5;
      *(_QWORD *)(v5 + 8) = v4;
      ++PiProfileDeviceCount;
      PiProfileDeviceListHead = (__int64)v4;
      KeReleaseGuardedMutex(&PiProfileDeviceListLock);
    }
    if ( (int)PnpIrpQueryID(*(struct _DEVICE_OBJECT **)(a1 + 32), 4, &P) >= 0 && P )
      ExFreePoolWithTag(P, 0);
  }
  _InterlockedIncrement(&PiProfileDevicesInTransition);
  *(_DWORD *)(a1 + 568) = a2;
}
