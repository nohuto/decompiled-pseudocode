/*
 * XREFs of _CmValidateInstallerClassName @ 0x140640938
 * Callers:
 *     _CmGetCommonClassRegKeyPath @ 0x140640800 (_CmGetCommonClassRegKeyPath.c)
 *     _PnpDispatchInterfaceClass @ 0x1406E94B0 (_PnpDispatchInterfaceClass.c)
 *     _CmGetDeviceInterfaceName @ 0x140744F1C (_CmGetDeviceInterfaceName.c)
 *     _PnpDispatchInstallerClass @ 0x14075A3E0 (_PnpDispatchInstallerClass.c)
 *     _CmClassSubkeyCallback @ 0x1407B8510 (_CmClassSubkeyCallback.c)
 * Callees:
 *     _PnpIsValidGuidString @ 0x14064095C (_PnpIsValidGuidString.c)
 */

__int64 __fastcall CmValidateInstallerClassName(__int64 a1, const WCHAR *a2)
{
  return (unsigned __int8)PnpIsValidGuidString(a2) == 0 ? 0xC0000033 : 0;
}
