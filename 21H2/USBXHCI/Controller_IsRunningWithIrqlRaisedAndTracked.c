/*
 * XREFs of Controller_IsRunningWithIrqlRaisedAndTracked @ 0x1C00326B0
 * Callers:
 *     ESM_ShouldQueueWorkItem @ 0x1C0005910 (ESM_ShouldQueueWorkItem.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0010010 (WPP_RECORDER_SF_d.c)
 *     _guard_dispatch_icall_nop @ 0x1C00199B0 (_guard_dispatch_icall_nop.c)
 */

char __fastcall Controller_IsRunningWithIrqlRaisedAndTracked(__int64 a1)
{
  ULONG CurrentProcessorNumber; // eax
  int v3; // edx
  ULONG_PTR v4; // rax

  CurrentProcessorNumber = KeGetCurrentProcessorNumberEx(0LL);
  if ( CurrentProcessorNumber >= *(_DWORD *)(a1 + 816) )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v3) = 2;
      WPP_RECORDER_SF_d(
        *(_QWORD *)(a1 + 72),
        v3,
        4,
        317,
        (__int64)&WPP_ff2e52b0a40430e0f7756a6ff2f45ac0_Traceguids,
        CurrentProcessorNumber);
    }
    v4 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01023 + 264))(
           WdfDriverGlobals,
           *(_QWORD *)a1);
    KeBugCheckEx(0x144u, 4uLL, v4, 2uLL, 4uLL);
  }
  return *(_BYTE *)(*(_QWORD *)(a1 + 808) + 2LL * CurrentProcessorNumber);
}
