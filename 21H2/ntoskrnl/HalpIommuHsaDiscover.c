/*
 * XREFs of HalpIommuHsaDiscover @ 0x140A3AD14
 * Callers:
 *     HalpIommuRegisterBuiltinPlugins @ 0x1403AA248 (HalpIommuRegisterBuiltinPlugins.c)
 * Callees:
 *     HalpAcpiGetTable @ 0x140216340 (HalpAcpiGetTable.c)
 *     HalpIommuProcessIvhdEntry @ 0x1404E1D20 (HalpIommuProcessIvhdEntry.c)
 */

int __fastcall HalpIommuHsaDiscover(_QWORD *a1)
{
  __int64 Table; // rax
  __int64 v3; // rbp
  int result; // eax
  __int64 v5; // rax
  unsigned __int64 v6; // rbx
  int v7; // eax
  bool v8; // di
  unsigned __int64 v9; // rsi
  __int64 v10; // rax
  _BYTE *v11; // rdx
  unsigned __int64 v12; // rsi
  __int64 v13; // rax
  _BYTE *v14; // rdx
  char v15; // [rsp+40h] [rbp+8h] BYREF

  *a1 = 0LL;
  qword_140C489B8 = (__int64)&HsaIvhdList;
  HsaIvhdList = (__int64)&HsaIvhdList;
  v15 = 0;
  if ( HalpExtEnvLoaderBlock )
  {
    Table = HalpAcpiGetTable(HalpExtEnvLoaderBlock, 1397904969, 0, 0);
    v3 = Table;
    if ( Table )
    {
      v5 = *(unsigned int *)(Table + 4);
      if ( (unsigned int)v5 >= 0x5A )
      {
        v6 = v5 + v3;
        v7 = *(_DWORD *)(v3 + 36);
        if ( (v7 & 1) != 0 )
        {
          if ( (v7 & 2) != 0 )
          {
            v8 = 1;
            v9 = v3 + 48;
            while ( v9 < v6 )
            {
              if ( v9 + 4 > v6 )
                return -1073741811;
              v10 = *(unsigned __int16 *)(v9 + 2);
              if ( (unsigned int)v10 < 4 || v9 + v10 > v6 )
                return -1073741811;
              v11 = (_BYTE *)v9;
              v9 += v10;
              if ( *v11 == 64 )
              {
                result = HalpIommuProcessIvhdEntry(v3, (__int64)v11, &v15);
                if ( result < 0 )
                  return result;
                v8 = v8 && !v15;
              }
            }
          }
          else
          {
            v8 = 0;
          }
          v12 = v3 + 48;
          while ( v12 < v6 )
          {
            if ( v12 + 4 > v6 )
              return -1073741811;
            v13 = *(unsigned __int16 *)(v12 + 2);
            if ( (unsigned int)v13 < 4 || v12 + v13 > v6 )
              return -1073741811;
            v14 = (_BYTE *)v12;
            v12 += v13;
            if ( *v14 == 17 )
            {
              result = HalpIommuProcessIvhdEntry(v3, (__int64)v14, &v15);
              if ( result < 0 )
                return result;
              v8 = v8 && !v15;
            }
          }
          *a1 ^= (*(_DWORD *)a1 ^ (2 * v8)) & 2;
        }
      }
    }
  }
  return 0;
}
