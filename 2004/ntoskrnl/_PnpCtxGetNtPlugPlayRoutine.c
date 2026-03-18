/*
 * XREFs of _PnpCtxGetNtPlugPlayRoutine @ 0x1405E0440
 * Callers:
 *     _NtPlugPlayGetDeviceInterfaceEnabled @ 0x1405E03E8 (_NtPlugPlayGetDeviceInterfaceEnabled.c)
 *     _NtPlugPlayGetDeviceStatus @ 0x1406C1A38 (_NtPlugPlayGetDeviceStatus.c)
 *     _NtPlugPlayGetDeviceRelatedDevice @ 0x1406C314C (_NtPlugPlayGetDeviceRelatedDevice.c)
 *     _NtPlugPlayGetDeviceProperty @ 0x14070AB10 (_NtPlugPlayGetDeviceProperty.c)
 *     _NtPlugPlayGetDeviceRelationsList @ 0x140978C6C (_NtPlugPlayGetDeviceRelationsList.c)
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
