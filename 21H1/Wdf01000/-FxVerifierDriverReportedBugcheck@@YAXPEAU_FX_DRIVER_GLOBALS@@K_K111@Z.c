/*
 * XREFs of ?FxVerifierDriverReportedBugcheck@@YAXPEAU_FX_DRIVER_GLOBALS@@K_K111@Z @ 0x1C0059204
 * Callers:
 *     imp_WdfCxVerifierKeBugCheck @ 0x1C0049740 (imp_WdfCxVerifierKeBugCheck.c)
 *     imp_WdfVerifierKeBugCheck @ 0x1C0049810 (imp_WdfVerifierKeBugCheck.c)
 *     imp_WdfDriverErrorReportApiMissing @ 0x1C004C290 (imp_WdfDriverErrorReportApiMissing.c)
 * Callees:
 *     <none>
 */

void __fastcall __noreturn FxVerifierDriverReportedBugcheck(
        _FX_DRIVER_GLOBALS *FxDriverGlobals,
        ULONG BugCheckCode,
        ULONG_PTR BugCheckParameter1,
        ULONG_PTR BugCheckParameter2,
        ULONG_PTR BugCheckParameter3,
        ULONG_PTR BugCheckParameter4)
{
  FxDriverGlobals->FxForceLogsInMiniDump = 1;
  KeBugCheckEx(BugCheckCode, BugCheckParameter1, BugCheckParameter2, BugCheckParameter3, BugCheckParameter4);
}
