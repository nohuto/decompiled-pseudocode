/*
 * XREFs of _RtlCompareUnicodeStrings@20 @ 0x4B2D04C0
 * Callers:
 *     _ApiSetpSearchForApiSetHost@16 @ 0x4B2CD9A9 (_ApiSetpSearchForApiSetHost@16.c)
 *     _ApiSetpSearchForApiSet@12 @ 0x4B2D03B0 (_ApiSetpSearchForApiSet@12.c)
 *     _RtlCompareUnicodeString@12 @ 0x4B2D0490 (_RtlCompareUnicodeString@12.c)
 *     _LdrpSearchPath@36 @ 0x4B2D2450 (_LdrpSearchPath@36.c)
 *     _RtlpQueryEnvironmentCache@24 @ 0x4B32E179 (_RtlpQueryEnvironmentCache@24.c)
 *     _LdrpIsSubstringFound@8 @ 0x4B332FBA (_LdrpIsSubstringFound@8.c)
 *     __RtlpMuiRegInitLIPLanguage@12 @ 0x4B36C534 (__RtlpMuiRegInitLIPLanguage@12.c)
 *     __RtlpMuiRegPopulateBaseLanguages@20 @ 0x4B36C81E (__RtlpMuiRegPopulateBaseLanguages@20.c)
 * Callees:
 *     <none>
 */

int __stdcall RtlCompareUnicodeStrings(unsigned __int16 *a1, unsigned int a2, int a3, unsigned int a4, char a5)
{
  unsigned int v5; // edx
  unsigned __int16 *v6; // eax
  unsigned int v7; // ebx
  unsigned int v8; // esi
  int i; // edx
  unsigned __int16 v10; // bx
  unsigned __int16 v11; // cx
  unsigned __int16 v12; // di
  unsigned __int16 v13; // dx
  unsigned __int16 v15; // cx
  unsigned int v16; // [esp+10h] [ebp-Ch]
  unsigned __int16 v17; // [esp+1Ah] [ebp-2h]

  v5 = a4;
  v6 = a1;
  v7 = a2;
  if ( a2 <= a4 )
    v5 = a2;
  v8 = (unsigned int)&a1[v5];
  v16 = v8;
  if ( (unsigned int)a1 >= v8 )
    return v7 - a4;
  if ( a5 )
  {
    for ( i = a3 - (_DWORD)a1; ; i = a3 - (_DWORD)a1 )
    {
      v10 = *(unsigned __int16 *)((char *)v6 + i);
      v11 = *v6;
      v12 = v10;
      v13 = *v6;
      v17 = *v6;
      if ( *v6 == v10 )
        goto LABEL_7;
      if ( v11 >= 0x61u )
      {
        if ( v11 <= 0x7Au )
        {
          v13 = v11 - 32;
LABEL_19:
          v17 = v13;
          goto LABEL_12;
        }
        if ( Nls844UnicodeUpcaseTable && v11 >= 0xC0u )
        {
          v13 = *(_WORD *)(Nls844UnicodeUpcaseTable
                         + 2
                         * ((v11 & 0xF)
                          + *(unsigned __int16 *)(Nls844UnicodeUpcaseTable
                                                + 2
                                                * (((v11 >> 4) & 0xF)
                                                 + *(unsigned __int16 *)(Nls844UnicodeUpcaseTable + 2 * HIBYTE(v11))))))
              + v17;
          v8 = v16;
          goto LABEL_19;
        }
      }
LABEL_12:
      if ( v10 >= 0x61u )
      {
        if ( v10 > 0x7Au )
        {
          if ( Nls844UnicodeUpcaseTable )
          {
            if ( v10 >= 0xC0u )
            {
              v13 = v17;
              v8 = v16;
              v12 = *(_WORD *)(Nls844UnicodeUpcaseTable
                             + 2
                             * ((v10 & 0xF)
                              + *(unsigned __int16 *)(Nls844UnicodeUpcaseTable
                                                    + 2
                                                    * (((v10 >> 4) & 0xF)
                                                     + *(unsigned __int16 *)(Nls844UnicodeUpcaseTable + 2 * HIBYTE(v10))))))
                  + v10;
            }
          }
        }
        else
        {
          v12 = v10 - 32;
        }
      }
      if ( v13 != v12 )
        return v13 - v12;
LABEL_7:
      if ( (unsigned int)++v6 >= v8 )
      {
        v7 = a2;
        return v7 - a4;
      }
    }
  }
  while ( 1 )
  {
    v15 = *(unsigned __int16 *)((char *)v6 + a3 - (_DWORD)a1);
    if ( *v6 != v15 )
      break;
    if ( (unsigned int)++v6 >= v8 )
      return a2 - a4;
  }
  return *v6 - v15;
}
