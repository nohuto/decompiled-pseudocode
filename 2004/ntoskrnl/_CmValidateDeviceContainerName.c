/*
 * XREFs of _CmValidateDeviceContainerName @ 0x1406C2BC0
 * Callers:
 *     _PnpDispatchDeviceContainer @ 0x1406C25A0 (_PnpDispatchDeviceContainer.c)
 *     _CmGetDeviceContainerRegKeyPath @ 0x1406C2B0C (_CmGetDeviceContainerRegKeyPath.c)
 *     _CmGetDeviceContainerIdFromBase @ 0x140744F70 (_CmGetDeviceContainerIdFromBase.c)
 *     _CmContainerListGenericObjectCallback @ 0x1407B9C70 (_CmContainerListGenericObjectCallback.c)
 * Callees:
 *     wcscmp @ 0x1403D0940 (wcscmp.c)
 *     _PnpIsValidGuidString @ 0x1405DC108 (_PnpIsValidGuidString.c)
 */

__int64 __fastcall CmValidateDeviceContainerName(__int64 a1, const WCHAR *a2)
{
  unsigned int v3; // ebx

  v3 = 0;
  if ( !PnpIsValidGuidString(a2) || !wcscmp(L"{00000000-0000-0000-0000-000000000000}", a2) )
    return (unsigned int)-1073741773;
  return v3;
}
