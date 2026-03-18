/*
 * XREFs of ??$ReportFailure_Base@$01$0A@@details@wil@@YAXPEAXIPEBD110AEBUResultStatus@01@PEBGW4ReportFailureOptions@01@@Z @ 0x180176EFC
 * Callers:
 *     ??$ReportFailure_Hr@$01@details@wil@@YAXPEAXIPEBD110J@Z @ 0x1801770B0 (--$ReportFailure_Hr@$01@details@wil@@YAXPEAXIPEBD110J@Z.c)
 *     ??$ReportFailure_GetLastError@$01@details@wil@@YAKPEAXIPEBD110@Z @ 0x1801E8C3C (--$ReportFailure_GetLastError@$01@details@wil@@YAKPEAXIPEBD110@Z.c)
 *     ??$ReportFailure_NtStatus@$01@details@wil@@YAJPEAXIPEBD110J@Z @ 0x180267ACC (--$ReportFailure_NtStatus@$01@details@wil@@YAJPEAXIPEBD110J@Z.c)
 * Callees:
 *     ??$ReportFailure_Return@$01@details@wil@@YAXPEAXIPEBD110AEBUResultStatus@01@PEBGW4ReportFailureOptions@01@@Z @ 0x18017743C (--$ReportFailure_Return@$01@details@wil@@YAXPEAXIPEBD110AEBUResultStatus@01@PEBGW4ReportFailureO.c)
 */

__int64 __fastcall wil::details::ReportFailure_Base<2,0>(
        int a1,
        int a2,
        int a3,
        int a4,
        __int64 a5,
        __int64 a6,
        __int64 a7)
{
  return wil::details::ReportFailure_Return<2>(a1, a2, a3, a4, a5, a6, a7, 0LL);
}
