/*
 * XREFs of ?PrintDisposeMessage@FxIoTarget@@IEAAXXZ @ 0x1C0065754
 * Callers:
 *     ?DecrementIoCount@FxIoTarget@@IEAAXXZ @ 0x1C000C9A0 (-DecrementIoCount@FxIoTarget@@IEAAXXZ.c)
 * Callees:
 *     ?GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ @ 0x1C0003FA0 (-GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ.c)
 *     WPP_IFR_SF_qq @ 0x1C0013E44 (WPP_IFR_SF_qq.c)
 */

void __fastcall FxIoTarget::PrintDisposeMessage(FxIoTarget *this)
{
  const void *_a1; // rax
  __int64 v2; // r10

  _a1 = (const void *)FxObject::GetObjectHandleUnchecked(this);
  WPP_IFR_SF_qq(
    *(_FX_DRIVER_GLOBALS **)(v2 + 16),
    4u,
    0xEu,
    0xAu,
    (const _GUID *)&WPP_FxIoTarget_cpp_Traceguids,
    _a1,
    *(const void **)(v2 + 240));
}
