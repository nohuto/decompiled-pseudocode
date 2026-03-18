/*
 * XREFs of ?_Destroy@?$_Ref_count@UTOUCH_TELEMETRY_UPDATE_INFO@@@std@@EEAAXXZ @ 0x180230180
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall std::_Ref_count<TOUCH_TELEMETRY_UPDATE_INFO>::_Destroy(__int64 a1)
{
  operator delete(*(void **)(a1 + 16));
}
