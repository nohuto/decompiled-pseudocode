/*
 * XREFs of MouseClassHandleRead @ 0x1C0002230
 * Callers:
 *     MouseClassRead @ 0x1C0001AD0 (MouseClassRead.c)
 * Callees:
 *     MouseClassReadCopyData @ 0x1C00047C8 (MouseClassReadCopyData.c)
 *     WPP_RECORDER_SF_qq @ 0x1C0005E54 (WPP_RECORDER_SF_qq.c)
 */

__int64 __fastcall MouseClassHandleRead(__int64 a1, __int64 a2)
{
  unsigned int CopyData; // ebp
  char v5; // r14
  KIRQL v6; // r15
  __int64 **v7; // rdx
  __int64 *v8; // rcx
  __int64 *v10; // rdx
  __int64 **v11; // rax

  CopyData = 259;
  v5 = 0;
  v6 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 144));
  if ( *(_DWORD *)(a1 + 84) )
  {
    CopyData = MouseClassReadCopyData(a1, a2);
    *(_DWORD *)(a2 + 48) = CopyData;
  }
  else
  {
    v7 = *(__int64 ***)(a1 + 160);
    v8 = (__int64 *)(a2 + 168);
    if ( *v7 != (__int64 *)(a1 + 152) )
      goto LABEL_15;
    *v8 = a1 + 152;
    *(_QWORD *)(a2 + 176) = v7;
    *v7 = v8;
    *(_QWORD *)(a1 + 160) = v8;
    _InterlockedExchange64((volatile __int64 *)(a2 + 104), (__int64)MouseClassCancel);
    if ( !*(_BYTE *)(a2 + 68) )
    {
LABEL_4:
      *(_BYTE *)(*(_QWORD *)(a2 + 184) + 3LL) |= 1u;
      goto LABEL_5;
    }
    if ( !_InterlockedExchange64((volatile __int64 *)(a2 + 104), 0LL) )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_qq(WPP_GLOBAL_Control->DeviceExtension, 3, 3, 47);
      goto LABEL_4;
    }
    v10 = (__int64 *)*v8;
    if ( *(__int64 **)(*v8 + 8) != v8 || (v11 = *(__int64 ***)(a2 + 176), *v11 != v8) )
LABEL_15:
      __fastfail(3u);
    *v11 = v10;
    CopyData = -1073741536;
    v10[1] = (__int64)v11;
    *(_DWORD *)(a2 + 48) = -1073741536;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_qq(WPP_GLOBAL_Control->DeviceExtension, 3, 3, 46);
  }
  v5 = 1;
LABEL_5:
  KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 144), v6);
  if ( v5 )
  {
    IoReleaseRemoveLockEx((PIO_REMOVE_LOCK)(a1 + 32), (PVOID)a2, 0x20u);
    IofCompleteRequest((PIRP)a2, 0);
  }
  return CopyData;
}
