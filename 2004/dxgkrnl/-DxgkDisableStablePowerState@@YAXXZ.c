/*
 * XREFs of ?DxgkDisableStablePowerState@@YAXXZ @ 0x1C0268E08
 * Callers:
 *     ?DxgkEtwEnableCallback@@YAXKK_K@Z @ 0x1C00233DC (-DxgkEtwEnableCallback@@YAXKK_K@Z.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0004010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?DisableStablePowerState@DXGGLOBAL@@QEAAXXZ @ 0x1C0268D08 (-DisableStablePowerState@DXGGLOBAL@@QEAAXXZ.c)
 */

void __fastcall DxgkDisableStablePowerState(__int64 a1, __int64 a2)
{
  DXGGLOBAL *Global; // rax

  Global = DXGGLOBAL::GetGlobal(a1, a2);
  DXGGLOBAL::DisableStablePowerState(Global);
}
