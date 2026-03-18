/*
 * XREFs of KeExitRetpoline @ 0x140324204
 * Callers:
 *     KiDispatchCallout @ 0x140323FA0 (KiDispatchCallout.c)
 *     KiLockServiceTable @ 0x14039BC74 (KiLockServiceTable.c)
 *     KeOptimizeSpecCtrlSettings @ 0x1403C2F90 (KeOptimizeSpecCtrlSettings.c)
 *     CcBcbProfiler @ 0x1403D7550 (CcBcbProfiler.c)
 *     sub_1403D8780 @ 0x1403D8780 (sub_1403D8780.c)
 *     KiSwInterruptDispatch @ 0x1403D87E0 (KiSwInterruptDispatch.c)
 *     sub_1403D9710 @ 0x1403D9710 (sub_1403D9710.c)
 *     sub_1403E5D80 @ 0x1403E5D80 (sub_1403E5D80.c)
 *     RtlpComputeEpilogueOffset @ 0x1403E7724 (RtlpComputeEpilogueOffset.c)
 *     sub_1405B9500 @ 0x1405B9500 (sub_1405B9500.c)
 *     FsRtlTruncateSmallMcb @ 0x1405B99F0 (FsRtlTruncateSmallMcb.c)
 *     sub_1405C6010 @ 0x1405C6010 (sub_1405C6010.c)
 *     KeUserModeCallback @ 0x140705310 (KeUserModeCallback.c)
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
