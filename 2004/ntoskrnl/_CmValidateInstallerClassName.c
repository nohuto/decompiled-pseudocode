/*
 * XREFs of _CmValidateInstallerClassName @ 0x1405DC058
 * Callers:
 *     _CmGetCommonClassRegKeyPath @ 0x1405DBF20 (_CmGetCommonClassRegKeyPath.c)
 *     _PnpDispatchInterfaceClass @ 0x1406BEB70 (_PnpDispatchInterfaceClass.c)
 *     _CmGetDeviceInterfaceName @ 0x140735A90 (_CmGetDeviceInterfaceName.c)
 *     _PnpDispatchInstallerClass @ 0x14074B800 (_PnpDispatchInstallerClass.c)
 *     _CmClassSubkeyCallback @ 0x1407AA5D0 (_CmClassSubkeyCallback.c)
 * Callees:
 *     _PnpIsValidGuidString @ 0x1405DC108 (_PnpIsValidGuidString.c)
 */

__int64 __fastcall CmValidateInstallerClassName(__int64 a1, const WCHAR *a2)
{
  return (unsigned __int8)PnpIsValidGuidString(a2) == 0 ? 0xC0000033 : 0;
}
