/*
 * XREFs of _CmValidateInstallerClassName @ 0x1406AA688
 * Callers:
 *     _CmGetCommonClassRegKeyPath @ 0x1406AA550 (_CmGetCommonClassRegKeyPath.c)
 *     _PnpDispatchInterfaceClass @ 0x1406B4230 (_PnpDispatchInterfaceClass.c)
 *     _PnpDispatchInstallerClass @ 0x140724470 (_PnpDispatchInstallerClass.c)
 *     _CmGetDeviceInterfaceName @ 0x14072E55C (_CmGetDeviceInterfaceName.c)
 *     _CmClassSubkeyCallback @ 0x1407A7470 (_CmClassSubkeyCallback.c)
 * Callees:
 *     _PnpIsValidGuidString @ 0x1406AA6AC (_PnpIsValidGuidString.c)
 */

__int64 __fastcall CmValidateInstallerClassName(__int64 a1, const WCHAR *a2)
{
  return (unsigned __int8)PnpIsValidGuidString(a2) == 0 ? 0xC0000033 : 0;
}
