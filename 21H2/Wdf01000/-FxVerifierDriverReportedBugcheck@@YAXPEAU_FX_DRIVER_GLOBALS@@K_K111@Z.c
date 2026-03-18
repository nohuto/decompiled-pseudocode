/*
 * XREFs of ?FxVerifierDriverReportedBugcheck@@YAXPEAU_FX_DRIVER_GLOBALS@@K_K111@Z @ 0x1C006CA94
 * Callers:
 *     imp_WdfCxVerifierKeBugCheck @ 0x1C0063ED0 (imp_WdfCxVerifierKeBugCheck.c)
 *     imp_WdfVerifierKeBugCheck @ 0x1C0063FA0 (imp_WdfVerifierKeBugCheck.c)
 *     imp_WdfDriverErrorReportApiMissing @ 0x1C0066540 (imp_WdfDriverErrorReportApiMissing.c)
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
