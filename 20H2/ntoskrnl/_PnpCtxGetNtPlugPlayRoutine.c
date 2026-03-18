/*
 * XREFs of _PnpCtxGetNtPlugPlayRoutine @ 0x14066B750
 * Callers:
 *     _NtPlugPlayGetDeviceInterfaceEnabled @ 0x14066B6F8 (_NtPlugPlayGetDeviceInterfaceEnabled.c)
 *     _NtPlugPlayGetDeviceProperty @ 0x1406DCF00 (_NtPlugPlayGetDeviceProperty.c)
 *     _NtPlugPlayGetDeviceRelatedDevice @ 0x1406E487C (_NtPlugPlayGetDeviceRelatedDevice.c)
 *     _NtPlugPlayGetDeviceStatus @ 0x1406EBF0C (_NtPlugPlayGetDeviceStatus.c)
 *     _NtPlugPlayGetDeviceRelationsList @ 0x14097EA3C (_NtPlugPlayGetDeviceRelationsList.c)
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
