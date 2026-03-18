/*
 * XREFs of imp_WdfCxVerifierKeBugCheck @ 0x1C0049740
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectHandleGetPtrAndGlobals@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAXPEAPEAU1@@Z @ 0x1C002E5B0 (-FxObjectHandleGetPtrAndGlobals@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAXPEAPEAU1@@Z.c)
 *     ?FxVerifierDriverReportedBugcheck@@YAXPEAU_FX_DRIVER_GLOBALS@@K_K111@Z @ 0x1C0059204 (-FxVerifierDriverReportedBugcheck@@YAXPEAU_FX_DRIVER_GLOBALS@@K_K111@Z.c)
 */

void __fastcall __noreturn imp_WdfCxVerifierKeBugCheck(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        unsigned __int64 Object,
        unsigned int BugCheckCode,
        unsigned __int64 BugCheckParameter1,
        unsigned __int64 BugCheckParameter2,
        unsigned __int64 BugCheckParameter3,
        unsigned __int64 BugCheckParameter4)
{
  _FX_DRIVER_GLOBALS *DriverName; // rcx
  FxObject *pObject; // [rsp+30h] [rbp-18h] BYREF
  _FX_DRIVER_GLOBALS *pFxDriverGlobals; // [rsp+58h] [rbp+10h] BYREF

  pObject = 0LL;
  DriverName = (_FX_DRIVER_GLOBALS *)DriverGlobals[-8].DriverName;
  pFxDriverGlobals = 0LL;
  if ( Object )
  {
    FxObjectHandleGetPtrAndGlobals(DriverName, Object, 0x1000u, (void **)&pObject, &pFxDriverGlobals);
    DriverName = pFxDriverGlobals;
  }
  FxVerifierDriverReportedBugcheck(
    DriverName,
    BugCheckCode,
    BugCheckParameter1,
    BugCheckParameter2,
    BugCheckParameter3,
    BugCheckParameter4);
}
