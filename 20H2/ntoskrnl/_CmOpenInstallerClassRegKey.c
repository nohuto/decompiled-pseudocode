/*
 * XREFs of _CmOpenInstallerClassRegKey @ 0x14064040C
 * Callers:
 *     _CmGetDeviceSoftwareKey @ 0x1406CAC2C (_CmGetDeviceSoftwareKey.c)
 *     PiCMOpenClassKey @ 0x1406DEBF0 (PiCMOpenClassKey.c)
 *     _CmSetInstallerClassMappedPropertyFromRegValue @ 0x14072CF10 (_CmSetInstallerClassMappedPropertyFromRegValue.c)
 *     PipCallDriverAddDevice @ 0x1407361D4 (PipCallDriverAddDevice.c)
 *     PpForEachDeviceInstanceDriver @ 0x140743360 (PpForEachDeviceInstanceDriver.c)
 *     _PnpDispatchInstallerClass @ 0x14075A3E0 (_PnpDispatchInstallerClass.c)
 *     _CmGetInstallerClassCompoundFilters @ 0x14075AA1C (_CmGetInstallerClassCompoundFilters.c)
 *     _CmGetInstallerClassRegPropWorker @ 0x14075AF0C (_CmGetInstallerClassRegPropWorker.c)
 *     _CmGetInstallerClassMappedPropertyFromRegValue @ 0x14075B19C (_CmGetInstallerClassMappedPropertyFromRegValue.c)
 *     _CmCreateInstallerClassWorker @ 0x140977544 (_CmCreateInstallerClassWorker.c)
 *     _CmSetInstallerClassRegPropWorker @ 0x140978338 (_CmSetInstallerClassRegPropWorker.c)
 *     _CmDeleteInstallerClassMappedPropertyFromRegValue @ 0x14097C040 (_CmDeleteInstallerClassMappedPropertyFromRegValue.c)
 * Callees:
 *     _CmOpenCommonClassRegKey @ 0x140640454 (_CmOpenCommonClassRegKey.c)
 */

__int64 __fastcall CmOpenInstallerClassRegKey(
        int a1,
        int a2,
        __int64 a3,
        __int64 a4,
        int a5,
        char a6,
        __int64 a7,
        __int64 a8)
{
  return CmOpenCommonClassRegKey(a1, a2, 32, 0, a5, a6, a7, a8);
}
