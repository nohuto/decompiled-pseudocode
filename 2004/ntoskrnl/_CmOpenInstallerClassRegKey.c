/*
 * XREFs of _CmOpenInstallerClassRegKey @ 0x1405DBB2C
 * Callers:
 *     PiCMOpenClassKey @ 0x1405D01E4 (PiCMOpenClassKey.c)
 *     _CmGetDeviceSoftwareKey @ 0x1406F7B3C (_CmGetDeviceSoftwareKey.c)
 *     _CmSetInstallerClassMappedPropertyFromRegValue @ 0x14071EEC0 (_CmSetInstallerClassMappedPropertyFromRegValue.c)
 *     PipCallDriverAddDevice @ 0x140727744 (PipCallDriverAddDevice.c)
 *     PpForEachDeviceInstanceDriver @ 0x140733ED0 (PpForEachDeviceInstanceDriver.c)
 *     _PnpDispatchInstallerClass @ 0x14074B800 (_PnpDispatchInstallerClass.c)
 *     _CmGetInstallerClassCompoundFilters @ 0x14074BE3C (_CmGetInstallerClassCompoundFilters.c)
 *     _CmGetInstallerClassRegPropWorker @ 0x14074C32C (_CmGetInstallerClassRegPropWorker.c)
 *     _CmGetInstallerClassMappedPropertyFromRegValue @ 0x14074C5BC (_CmGetInstallerClassMappedPropertyFromRegValue.c)
 *     _CmCreateInstallerClassWorker @ 0x140971774 (_CmCreateInstallerClassWorker.c)
 *     _CmSetInstallerClassRegPropWorker @ 0x140972568 (_CmSetInstallerClassRegPropWorker.c)
 *     _CmDeleteInstallerClassMappedPropertyFromRegValue @ 0x140976270 (_CmDeleteInstallerClassMappedPropertyFromRegValue.c)
 * Callees:
 *     _CmOpenCommonClassRegKey @ 0x1405DBB74 (_CmOpenCommonClassRegKey.c)
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
