/*
 * XREFs of HalpIommuGetReservedRanges @ 0x1404C9A54
 * Callers:
 *     HalpDmaAddReservedRangesToDomain @ 0x1404C4C50 (HalpDmaAddReservedRangesToDomain.c)
 * Callees:
 *     IidAreIdsStrictlyEqual @ 0x1405C65BC (IidAreIdsStrictlyEqual.c)
 */

__int64 __fastcall HalpIommuGetReservedRanges(__int64 a1, _DWORD *a2, _QWORD *a3)
{
  __int64 *i; // r11
  unsigned int *v7; // rdi
  unsigned int v8; // ebp
  __int64 v9; // rbx
  __int64 v10; // rsi

  *a2 = 0;
  *a3 = 0LL;
  for ( i = (__int64 *)HalpIommuList; i != &HalpIommuList; i = (__int64 *)*i )
  {
    v7 = (unsigned int *)i[66];
    if ( v7 )
    {
      v8 = *v7;
      v9 = 0LL;
      if ( *v7 )
      {
        while ( 1 )
        {
          v10 = *(_QWORD *)&v7[2 * v9 + 2];
          if ( (unsigned __int8)IidAreIdsStrictlyEqual(*(_QWORD *)v10, a1) )
            break;
          v9 = (unsigned int)(v9 + 1);
          if ( (unsigned int)v9 >= v8 )
            goto LABEL_8;
        }
        *a2 = *(_DWORD *)(v10 + 24);
        *a3 = v10 + 32;
      }
    }
LABEL_8:
    ;
  }
  return 0LL;
}
