/*
 * XREFs of ?PowerGotoDNotZeroIoStopped@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z @ 0x1C0011390
 * Callers:
 *     <none>
 * Callees:
 *     ?PowerGotoDxIoStoppedCommon@FxPkgPnp@@IEAAEE@Z @ 0x1C001C05C (-PowerGotoDxIoStoppedCommon@FxPkgPnp@@IEAAEE@Z.c)
 */

__int64 __fastcall FxPkgPnp::PowerGotoDNotZeroIoStopped(FxPkgPnp *This)
{
  return FxPkgPnp::PowerGotoDxIoStoppedCommon(This, 0) != 0 ? 799 : 853;
}
