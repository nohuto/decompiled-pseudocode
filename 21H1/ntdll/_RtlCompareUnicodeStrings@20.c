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

LONG __cdecl RtlCompareUnicodeStrings(
        PCWCH String1,
        SIZE_T String1Length,
        PCWCH String2,
        SIZE_T String2Length,
        BOOLEAN CaseInSensitive)
{
  int v5; // edx
  PCWCH v6; // eax
  int v7; // ebx
  const WCHAR *v8; // esi
  int i; // edx
  unsigned __int16 v10; // bx
  unsigned __int16 v11; // cx
  unsigned __int16 v12; // di
  unsigned __int16 v13; // dx
  unsigned __int16 v15; // cx
  const WCHAR *v16; // [esp+10h] [ebp-Ch]
  WCHAR v17; // [esp+1Ah] [ebp-2h]

  v5 = (int)String2;
  v6 = String1;
  v7 = String1Length;
  if ( (unsigned int)String1Length <= (unsigned int)String2 )
    v5 = String1Length;
  v8 = &String1[v5];
  v16 = v8;
  if ( String1 >= v8 )
    return v7 - (_DWORD)String2;
  if ( (_BYTE)String2Length )
  {
    for ( i = HIDWORD(String1Length) - (_DWORD)String1; ; i = HIDWORD(String1Length) - (_DWORD)String1 )
    {
      v10 = *(PCWCH)((char *)v6 + i);
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
      if ( ++v6 >= v8 )
      {
        v7 = String1Length;
        return v7 - (_DWORD)String2;
      }
    }
  }
  while ( 1 )
  {
    v15 = *(PCWCH)((char *)v6 + HIDWORD(String1Length) - (_DWORD)String1);
    if ( *v6 != v15 )
      break;
    if ( ++v6 >= v8 )
      return String1Length - (_DWORD)String2;
  }
  return *(unsigned __int16 *)v6 - v15;
}
