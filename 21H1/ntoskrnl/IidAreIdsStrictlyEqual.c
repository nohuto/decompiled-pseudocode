/*
 * XREFs of IidAreIdsStrictlyEqual @ 0x1405C07BC
 * Callers:
 *     HalpDmaFindAdapterByDeviceId @ 0x1403EB8D4 (HalpDmaFindAdapterByDeviceId.c)
 *     HalpIommuCreateIncreaseAliasTrack @ 0x1403EBCF4 (HalpIommuCreateIncreaseAliasTrack.c)
 *     HalpIommuDecreaseAliasTrack @ 0x1403EBE00 (HalpIommuDecreaseAliasTrack.c)
 *     HalpIommuGetReservedRanges @ 0x1404C4468 (HalpIommuGetReservedRanges.c)
 *     HalpIommuCreateDevice @ 0x140860044 (HalpIommuCreateDevice.c)
 *     HalpIommuDeleteDevice @ 0x14086031C (HalpIommuDeleteDevice.c)
 * Callees:
 *     <none>
 */

bool __fastcall IidAreIdsStrictlyEqual(int *a1, __int64 a2)
{
  char v2; // r8
  int v3; // r9d
  int v5; // r9d
  int v6; // r9d
  unsigned __int8 *v9; // rax
  __int64 v10; // r9
  int v11; // edx
  int v12; // ecx

  v2 = 0;
  if ( !a1 || !a2 )
    return 0;
  v3 = *a1;
  if ( (unsigned int)(*a1 - 1) > 5 || (unsigned int)(*(_DWORD *)a2 - 1) > 5 || v3 != *(_DWORD *)a2 )
    return 0;
  v5 = v3 - 1;
  if ( v5 )
  {
    v6 = v5 - 1;
    if ( !v6 )
    {
      v9 = (unsigned __int8 *)*((_QWORD *)a1 + 1);
      v10 = *(_QWORD *)(a2 + 8) - (_QWORD)v9;
      do
      {
        v11 = v9[v10];
        v12 = *v9 - v11;
        if ( v12 )
          break;
        ++v9;
      }
      while ( v11 );
      return v12 == 0;
    }
    if ( v6 == 4 )
      return *((_QWORD *)a1 + 1) == *(_QWORD *)(a2 + 8);
    return 0;
  }
  if ( *((_WORD *)a1 + 4) == *(_WORD *)(a2 + 8) && (*((_BYTE *)a1 + 10) & 4) == 0 && (*(_BYTE *)(a2 + 10) & 4) == 0 )
    return *((_WORD *)a1 + 6) == *(_WORD *)(a2 + 12);
  return v2;
}
