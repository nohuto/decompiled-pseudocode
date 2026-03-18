/*
 * XREFs of imp_WdfIoResourceRequirementsListAppendIoResList @ 0x1C005CD20
 * Callers:
 *     <none>
 * Callees:
 *     FxIoResourceRequirementsListInsertIoResList @ 0x1C005C3D0 (FxIoResourceRequirementsListInsertIoResList.c)
 */

int __fastcall imp_WdfIoResourceRequirementsListAppendIoResList(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFIORESREQLIST__ *RequirementsList,
        WDFIORESLIST__ *IoResList)
{
  return FxIoResourceRequirementsListInsertIoResList(DriverGlobals, RequirementsList, IoResList, 0xFFFFFFFF);
}
