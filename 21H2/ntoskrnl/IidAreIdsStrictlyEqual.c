/*
 * XREFs of IidAreIdsStrictlyEqual @ 0x14064F634
 * Callers:
 *     HalpDmaFindAdapterByDeviceId @ 0x140503F38 (HalpDmaFindAdapterByDeviceId.c)
 *     HalpIommuCreateIncreaseAliasTrack @ 0x14051A670 (HalpIommuCreateIncreaseAliasTrack.c)
 *     HalpIommuDecreaseAliasTrack @ 0x14051A77C (HalpIommuDecreaseAliasTrack.c)
 *     HalpIommuGetReservedRanges @ 0x14051B2B8 (HalpIommuGetReservedRanges.c)
 *     HalpIommuCreateDevice @ 0x140846E20 (HalpIommuCreateDevice.c)
 *     HalpIommuDeleteDevice @ 0x140908DD4 (HalpIommuDeleteDevice.c)
 * Callees:
 *     <none>
 */

bool __fastcall IidAreIdsStrictlyEqual(int *a1, __int64 a2)
{
  char v2; // r9
  int v3; // r8d
  int v4; // r8d
  int v5; // r8d
  unsigned __int8 *v8; // rax
  __int64 v9; // r8
  int v10; // edx
  int v11; // ecx

  v2 = 0;
  if ( !a1 )
    return 0;
  if ( !a2 )
    return 0;
  v3 = *a1;
  if ( (unsigned int)(*a1 - 1) > 5 || (unsigned int)(*(_DWORD *)a2 - 1) > 5 || v3 != *(_DWORD *)a2 )
    return 0;
  v4 = v3 - 1;
  if ( v4 )
  {
    v5 = v4 - 1;
    if ( !v5 )
    {
      v8 = (unsigned __int8 *)*((_QWORD *)a1 + 1);
      v9 = *(_QWORD *)(a2 + 8) - (_QWORD)v8;
      do
      {
        v10 = v8[v9];
        v11 = *v8 - v10;
        if ( v11 )
          break;
        ++v8;
      }
      while ( v10 );
      return v11 == 0;
    }
    if ( v5 == 4 )
      return *((_QWORD *)a1 + 1) == *(_QWORD *)(a2 + 8);
    return 0;
  }
  if ( *((_WORD *)a1 + 4) == *(_WORD *)(a2 + 8) && (*((_BYTE *)a1 + 10) & 4) == 0 && (*(_BYTE *)(a2 + 10) & 4) == 0 )
    return *((_WORD *)a1 + 6) == *(_WORD *)(a2 + 12);
  return v2;
}
