/*
 * XREFs of DpiSetDevicePowerTransitionState @ 0x1C00242A8
 * Callers:
 *     ?DpiFinishSuspendAdapter@@YAXPEAU_FDO_CONTEXT@@@Z @ 0x1C0023E3C (-DpiFinishSuspendAdapter@@YAXPEAU_FDO_CONTEXT@@@Z.c)
 *     ?DpiStartSuspendingAdapter@@YAEPEAU_FDO_CONTEXT@@@Z @ 0x1C0023EE8 (-DpiStartSuspendingAdapter@@YAEPEAU_FDO_CONTEXT@@@Z.c)
 *     DpiRequestDevicePowerState @ 0x1C0023FC0 (DpiRequestDevicePowerState.c)
 * Callees:
 *     McTemplateK0pt_EtwWriteTransfer @ 0x1C0044CF4 (McTemplateK0pt_EtwWriteTransfer.c)
 */

__int64 __fastcall DpiSetDevicePowerTransitionState(__int64 a1, int a2)
{
  __int64 result; // rax
  __int64 v5; // r8
  bool v6; // zf

  result = WdLogSingleEntry3(9LL, a1, a2, 0LL);
  v6 = bTracingEnabled == 0;
  *(_DWORD *)(a1 + 4144) = a2;
  if ( !v6 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
    return McTemplateK0pt_EtwWriteTransfer(
             &DxgkControlGuid_Context,
             &Dxgk_SetDevicePowerTransitionState,
             v5,
             *(_QWORD *)(a1 + 3896),
             a2);
  return result;
}
