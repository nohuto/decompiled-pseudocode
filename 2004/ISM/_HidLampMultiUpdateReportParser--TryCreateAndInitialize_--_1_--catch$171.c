/*
 * XREFs of _HidLampMultiUpdateReportParser::TryCreateAndInitialize_::_1_::catch$171 @ 0x1800ABB0F
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180094FEC (-Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall HidLampMultiUpdateReportParser::TryCreateAndInitialize_::_1_::catch_171(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  *(_DWORD *)(a2 + 56) = wil::details::in1diag3::Return_CaughtException(
                           *(wil::details::in1diag3 **)(a2 + 40),
                           (void *)0x6B,
                           (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\hidlamp"
                                    "multiupdatereportparser.cpp",
                           a4);
  return 0LL;
}
