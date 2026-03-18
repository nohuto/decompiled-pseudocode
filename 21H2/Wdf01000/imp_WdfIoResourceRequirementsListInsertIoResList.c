/*
 * XREFs of imp_WdfIoResourceRequirementsListInsertIoResList @ 0x1C006FB30
 * Callers:
 *     <none>
 * Callees:
 *     FxIoResourceRequirementsListInsertIoResList @ 0x1C006F57C (FxIoResourceRequirementsListInsertIoResList.c)
 */

int __fastcall imp_WdfIoResourceRequirementsListInsertIoResList(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFIORESREQLIST__ *RequirementsList,
        WDFIORESLIST__ *IoResList,
        unsigned int Index)
{
  return FxIoResourceRequirementsListInsertIoResList(DriverGlobals, RequirementsList, IoResList, Index);
}
