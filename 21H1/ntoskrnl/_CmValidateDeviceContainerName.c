/*
 * XREFs of _CmValidateDeviceContainerName @ 0x1406D9DE0
 * Callers:
 *     _PnpDispatchDeviceContainer @ 0x1406D97C0 (_PnpDispatchDeviceContainer.c)
 *     _CmGetDeviceContainerRegKeyPath @ 0x1406D9D2C (_CmGetDeviceContainerRegKeyPath.c)
 *     _CmGetDeviceContainerIdFromBase @ 0x1407433F0 (_CmGetDeviceContainerIdFromBase.c)
 *     _CmContainerListGenericObjectCallback @ 0x1407B6B00 (_CmContainerListGenericObjectCallback.c)
 * Callees:
 *     wcscmp @ 0x1403CFB00 (wcscmp.c)
 *     _PnpIsValidGuidString @ 0x1406AA6AC (_PnpIsValidGuidString.c)
 */

__int64 __fastcall CmValidateDeviceContainerName(__int64 a1, const WCHAR *a2)
{
  unsigned int v3; // ebx

  v3 = 0;
  if ( !PnpIsValidGuidString(a2) || !wcscmp(L"{00000000-0000-0000-0000-000000000000}", a2) )
    return (unsigned int)-1073741773;
  return v3;
}
