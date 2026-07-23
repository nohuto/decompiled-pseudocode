/*
 * XREFs of HalpIommuLocateFromDevice @ 0x1407656C0
 * Callers:
 *     IommuMapDevice @ 0x1404D90D0 (IommuMapDevice.c)
 *     HalpQueryIommuReservedRegionInformation @ 0x140765644 (HalpQueryIommuReservedRegionInformation.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 */

__int64 __fastcall HalpIommuLocateFromDevice(__int64 a1, __int64 *a2, __int64 a3)
{
  __int64 v3; // rdi
  unsigned int v4; // ebx
  __int64 v5; // rbp
  char v6; // al
  __int64 v7; // rsi
  __int64 i; // rdi

  v3 = HalpIommuList;
  v4 = 0;
  v5 = a3;
  v6 = 0;
  v7 = 0LL;
  while ( (__int64 *)v3 != &HalpIommuList )
  {
    v7 = v3;
    if ( *(_QWORD *)(v3 + 192) )
    {
      v6 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD, __int64))(v3 + 192))(*(_QWORD *)(v3 + 16), a1, 0LL, v5);
      if ( v6 )
        break;
    }
    v3 = *(_QWORD *)v3;
  }
  for ( i = HalpIommuList; (__int64 *)i != &HalpIommuList; i = *(_QWORD *)i )
  {
    if ( v6 )
      goto LABEL_8;
    v7 = i;
    if ( *(_QWORD *)(i + 192) )
    {
      LOBYTE(a3) = 1;
      v6 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64, __int64))(i + 192))(*(_QWORD *)(i + 16), a1, a3, v5);
      if ( v6 )
        goto LABEL_8;
    }
  }
  if ( !v6 )
    return (unsigned int)-1073741275;
LABEL_8:
  *a2 = v7;
  return v4;
}
