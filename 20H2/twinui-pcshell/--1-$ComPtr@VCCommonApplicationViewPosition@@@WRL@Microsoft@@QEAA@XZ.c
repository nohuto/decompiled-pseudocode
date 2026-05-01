/*
 * XREFs of ??1?$ComPtr@VCCommonApplicationViewPosition@@@WRL@Microsoft@@QEAA@XZ @ 0x1801848A4
 * Callers:
 *     _wil::MakeAndInitializeOrThrow_CCommonApplicationViewPosition_Geometry::CRect_&__::_1_::dtor$0 @ 0x1803D98B6 (_wil--MakeAndInitializeOrThrow_CCommonApplicationViewPosition_Geometry--CRect_-__--_1_--dtor$0.c)
 *     _KioskPositioner::SetUwpViewFullScreen_::_1_::dtor$0 @ 0x1803DCF2C (_KioskPositioner--SetUwpViewFullScreen_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall Microsoft::WRL::ComPtr<CCommonApplicationViewPosition>::~ComPtr<CCommonApplicationViewPosition>(
        __int64 a1)
{
  return Microsoft::WRL::ComPtr<CCommonApplicationViewPosition>::InternalRelease(a1);
}
