/*
 * XREFs of KeExitRetpoline @ 0x140329324
 * Callers:
 *     KiDispatchCallout @ 0x1403290C0 (KiDispatchCallout.c)
 *     KiLockServiceTable @ 0x14039C404 (KiLockServiceTable.c)
 *     KeOptimizeSpecCtrlSettings @ 0x1403C3E50 (KeOptimizeSpecCtrlSettings.c)
 *     CcBcbProfiler @ 0x1403D8390 (CcBcbProfiler.c)
 *     sub_1403D95C0 @ 0x1403D95C0 (sub_1403D95C0.c)
 *     KiSwInterruptDispatch @ 0x1403D9620 (KiSwInterruptDispatch.c)
 *     sub_1403DA550 @ 0x1403DA550 (sub_1403DA550.c)
 *     sub_1403E6BC0 @ 0x1403E6BC0 (sub_1403E6BC0.c)
 *     RtlpComputeEpilogueOffset @ 0x1403E8564 (RtlpComputeEpilogueOffset.c)
 *     sub_1405B9C20 @ 0x1405B9C20 (sub_1405B9C20.c)
 *     FsRtlTruncateSmallMcb @ 0x1405BA110 (FsRtlTruncateSmallMcb.c)
 *     sub_1405C7010 @ 0x1405C7010 (sub_1405C7010.c)
 *     KeUserModeCallback @ 0x1406AF450 (KeUserModeCallback.c)
 * Callees:
 *     __guard_retpoline_exit @ 0x140A14560 (__guard_retpoline_exit.c)
 */

char KeExitRetpoline()
{
  char result; // al
  __int16 v1; // bx
  struct _KPRCB *CurrentPrcb; // rax
  bool v3; // bl
  __int16 v4; // [rsp+20h] [rbp-8h]

  result = (KiSpeculationFeatures & 0x2000000) != 0;
  if ( (KiSpeculationFeatures & 0x2000000) != 0 )
  {
    v1 = v4;
    _disable();
    CurrentPrcb = KeGetCurrentPrcb();
    v3 = (v1 & 0x200) != 0;
    CurrentPrcb->BpbRetpolineState |= 1u;
    result = CurrentPrcb->BpbRetpolineState;
    if ( (result & 2) == 0 )
      result = _guard_retpoline_exit();
    if ( v3 )
      _enable();
  }
  _mm_lfence();
  return result;
}
