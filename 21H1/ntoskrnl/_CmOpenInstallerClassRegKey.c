/*
 * XREFs of _CmOpenInstallerClassRegKey @ 0x1406AA15C
 * Callers:
 *     PiCMOpenClassKey @ 0x14069F5F4 (PiCMOpenClassKey.c)
 *     _CmGetDeviceSoftwareKey @ 0x1406AEE88 (_CmGetDeviceSoftwareKey.c)
 *     _CmSetInstallerClassMappedPropertyFromRegValue @ 0x14071D240 (_CmSetInstallerClassMappedPropertyFromRegValue.c)
 *     _CmGetInstallerClassMappedPropertyFromRegValue @ 0x140722E94 (_CmGetInstallerClassMappedPropertyFromRegValue.c)
 *     _PnpDispatchInstallerClass @ 0x140724470 (_PnpDispatchInstallerClass.c)
 *     _CmGetInstallerClassCompoundFilters @ 0x140724AAC (_CmGetInstallerClassCompoundFilters.c)
 *     _CmGetInstallerClassRegPropWorker @ 0x140724F9C (_CmGetInstallerClassRegPropWorker.c)
 *     PipCallDriverAddDevice @ 0x140727018 (PipCallDriverAddDevice.c)
 *     PpForEachDeviceInstanceDriver @ 0x140731320 (PpForEachDeviceInstanceDriver.c)
 *     _CmCreateInstallerClassWorker @ 0x1409703D4 (_CmCreateInstallerClassWorker.c)
 *     _CmSetInstallerClassRegPropWorker @ 0x1409711C8 (_CmSetInstallerClassRegPropWorker.c)
 *     _CmDeleteInstallerClassMappedPropertyFromRegValue @ 0x140974ED0 (_CmDeleteInstallerClassMappedPropertyFromRegValue.c)
 * Callees:
 *     _CmOpenCommonClassRegKey @ 0x1406AA1A4 (_CmOpenCommonClassRegKey.c)
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
