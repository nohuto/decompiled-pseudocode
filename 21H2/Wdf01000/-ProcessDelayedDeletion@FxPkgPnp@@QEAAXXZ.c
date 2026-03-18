/*
 * XREFs of ?ProcessDelayedDeletion@FxPkgPnp@@QEAAXXZ @ 0x1C00888B0
 * Callers:
 *     ?Evaluate@FxPostProcessInfo@@QEAAXPEAVFxPkgPnp@@@Z @ 0x1C0016054 (-Evaluate@FxPostProcessInfo@@QEAAXPEAVFxPkgPnp@@@Z.c)
 * Callees:
 *     ?GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ @ 0x1C0002928 (-GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ.c)
 *     WPP_IFR_SF_qq @ 0x1C00134A8 (WPP_IFR_SF_qq.c)
 *     ?CleanupStateMachines@FxPkgPnp@@QEAAXE@Z @ 0x1C0030434 (-CleanupStateMachines@FxPkgPnp@@QEAAXE@Z.c)
 *     ?DeleteDevice@FxPkgPnp@@IEAAXXZ @ 0x1C0088068 (-DeleteDevice@FxPkgPnp@@IEAAXXZ.c)
 */

void __fastcall FxPkgPnp::ProcessDelayedDeletion(FxPkgPnp *this)
{
  const void *_a1; // rax
  __int64 v3; // rdx

  _a1 = (const void *)FxObject::GetObjectHandleUnchecked(this->m_DeviceBase);
  WPP_IFR_SF_qq(
    this->m_Globals,
    4u,
    0xCu,
    0x22u,
    (const _GUID *)&WPP_FxPkgPnp_cpp_Traceguids,
    _a1,
    *(const void **)(v3 + 144));
  FxPkgPnp::CleanupStateMachines(this, 0);
  FxPkgPnp::DeleteDevice(this);
}
