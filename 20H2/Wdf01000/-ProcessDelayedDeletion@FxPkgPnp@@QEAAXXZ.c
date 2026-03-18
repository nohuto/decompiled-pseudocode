/*
 * XREFs of ?ProcessDelayedDeletion@FxPkgPnp@@QEAAXXZ @ 0x1C008186C
 * Callers:
 *     ?Evaluate@FxPostProcessInfo@@QEAAXPEAVFxPkgPnp@@@Z @ 0x1C0011A14 (-Evaluate@FxPostProcessInfo@@QEAAXPEAVFxPkgPnp@@@Z.c)
 *     ?PowerPolicyProcessEvent@FxPkgPnp@@QEAAXW4FxPowerPolicyEvent@@E@Z @ 0x1C0011B20 (-PowerPolicyProcessEvent@FxPkgPnp@@QEAAXW4FxPowerPolicyEvent@@E@Z.c)
 *     ?EventQueueWorker@FxEventQueue@@IEAAXXZ @ 0x1C00166F8 (-EventQueueWorker@FxEventQueue@@IEAAXXZ.c)
 * Callees:
 *     ?GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ @ 0x1C0003FA0 (-GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ.c)
 *     WPP_IFR_SF_qq @ 0x1C0013E44 (WPP_IFR_SF_qq.c)
 *     ?CleanupStateMachines@FxPkgPnp@@QEAAXE@Z @ 0x1C007F248 (-CleanupStateMachines@FxPkgPnp@@QEAAXE@Z.c)
 *     ?DeleteDevice@FxPkgPnp@@IEAAXXZ @ 0x1C007F6A4 (-DeleteDevice@FxPkgPnp@@IEAAXXZ.c)
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
