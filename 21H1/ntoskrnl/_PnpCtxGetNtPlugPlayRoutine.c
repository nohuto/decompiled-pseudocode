/*
 * XREFs of _PnpCtxGetNtPlugPlayRoutine @ 0x1406B0FE0
 * Callers:
 *     _NtPlugPlayGetDeviceStatus @ 0x1406B0D50 (_NtPlugPlayGetDeviceStatus.c)
 *     _NtPlugPlayGetDeviceInterfaceEnabled @ 0x1406B0F88 (_NtPlugPlayGetDeviceInterfaceEnabled.c)
 *     _NtPlugPlayGetDeviceRelatedDevice @ 0x1406B17F8 (_NtPlugPlayGetDeviceRelatedDevice.c)
 *     _NtPlugPlayGetDeviceProperty @ 0x1406B2E20 (_NtPlugPlayGetDeviceProperty.c)
 *     _NtPlugPlayGetDeviceRelationsList @ 0x1409778CC (_NtPlugPlayGetDeviceRelationsList.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PnpCtxGetNtPlugPlayRoutine(__int64 a1, int a2, _QWORD *a3)
{
  unsigned int v3; // r9d

  v3 = 0;
  if ( a2 >= 6 )
    return (unsigned int)-1073741811;
  else
    *a3 = *(_QWORD *)(a1 + 8LL * a2 + 248);
  return v3;
}
