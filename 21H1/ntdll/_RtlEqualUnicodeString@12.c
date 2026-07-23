/*
 * XREFs of _RtlEqualUnicodeString@12 @ 0x4B2D1250
 * Callers:
 *     _RtlpCheckForSameCurdir@4 @ 0x4B2A7B3D (_RtlpCheckForSameCurdir@4.c)
 *     _RtlpIsDosDeviceName_Ustr@4 @ 0x4B2C9330 (_RtlpIsDosDeviceName_Ustr@4.c)
 *     _LdrpFindLoadedDllByNameLockHeld@20 @ 0x4B2CDF40 (_LdrpFindLoadedDllByNameLockHeld@20.c)
 *     _LdrpFindLoadedDllByName@20 @ 0x4B2CF350 (_LdrpFindLoadedDllByName@20.c)
 *     _LdrpMinimalMapModule@8 @ 0x4B2D110F (_LdrpMinimalMapModule@8.c)
 *     _LdrpCheckKnownDllFullPath@8 @ 0x4B2E3ACB (_LdrpCheckKnownDllFullPath@8.c)
 *     _RtlpDetermineDosPathNameType4@16 @ 0x4B2E400E (_RtlpDetermineDosPathNameType4@16.c)
 *     _RtlDeriveCapabilitySidsFromName@12 @ 0x4B2EE4F0 (_RtlDeriveCapabilitySidsFromName@12.c)
 *     _EtwpGetPrivateLoggerContextByName@8 @ 0x4B2F1B33 (_EtwpGetPrivateLoggerContextByName@8.c)
 *     _RtlEqualDomainName@8 @ 0x4B34DB90 (_RtlEqualDomainName@8.c)
 *     _RtlpGetNtProductTypeFromRegistry@4 @ 0x4B36374F (_RtlpGetNtProductTypeFromRegistry@4.c)
 * Callees:
 *     <none>
 */

BOOLEAN __cdecl RtlEqualUnicodeString(PUNICODE_STRING String1, PUNICODE_STRING String2, BOOLEAN CaseInSensitive)
{
  int Length; // esi
  wchar_t *Buffer; // eax
  wchar_t *v5; // edx
  char *v6; // ecx
  unsigned int v7; // ebx
  unsigned int v8; // edi
  __int16 v9; // cx
  __int16 v11; // cx
  char *v12; // esi
  char *v13; // [esp+Ch] [ebp-8h]
  wchar_t *v14; // [esp+10h] [ebp-4h]

  Length = String1->Length;
  if ( Length == String2->Length )
  {
    Buffer = String1->Buffer;
    v5 = (wchar_t *)((char *)Buffer + Length);
    v14 = (wchar_t *)((char *)Buffer + Length);
    if ( Buffer >= (wchar_t *)((char *)Buffer + Length) )
      return 1;
    if ( CaseInSensitive )
    {
      v6 = (char *)((char *)String2->Buffer - (char *)Buffer);
      v13 = v6;
      while ( 1 )
      {
        v7 = *Buffer;
        v8 = *(unsigned __int16 *)((char *)Buffer + (_DWORD)v6);
        if ( (_WORD)v7 != (_WORD)v8 )
          break;
LABEL_12:
        if ( ++Buffer >= v5 )
          return 1;
      }
      if ( v7 < 0x61 )
      {
LABEL_7:
        if ( v8 >= 0x61 )
        {
          if ( v8 <= 0x7A )
          {
            v9 = v8 - 32;
LABEL_10:
            if ( (_WORD)v7 != v9 )
              return 0;
            v6 = v13;
            goto LABEL_12;
          }
          if ( Nls844UnicodeUpcaseTable && (unsigned __int16)v8 >= 0xC0u )
          {
            v5 = v14;
            v9 = v8
               + *(_WORD *)(Nls844UnicodeUpcaseTable
                          + 2
                          * ((v8 & 0xF)
                           + *(unsigned __int16 *)(Nls844UnicodeUpcaseTable
                                                 + 2
                                                 * (((unsigned __int8)v8 >> 4)
                                                  + *(unsigned __int16 *)(Nls844UnicodeUpcaseTable + 2 * (v8 >> 8))))));
            goto LABEL_10;
          }
        }
        v9 = v8;
        goto LABEL_10;
      }
      if ( v7 > 0x7A )
      {
        if ( !Nls844UnicodeUpcaseTable || (unsigned __int16)v7 < 0xC0u )
          goto LABEL_7;
        v5 = v14;
        v11 = v7
            + *(_WORD *)(Nls844UnicodeUpcaseTable
                       + 2
                       * ((v7 & 0xF)
                        + *(unsigned __int16 *)(Nls844UnicodeUpcaseTable
                                              + 2
                                              * (((unsigned __int8)v7 >> 4)
                                               + *(unsigned __int16 *)(Nls844UnicodeUpcaseTable + 2 * (v7 >> 8))))));
      }
      else
      {
        v11 = v7 - 32;
      }
      LOWORD(v7) = v11;
      goto LABEL_7;
    }
    v12 = (char *)((char *)String2->Buffer - (char *)Buffer);
    while ( *Buffer == *(wchar_t *)((char *)Buffer + (_DWORD)v12) )
    {
      if ( ++Buffer >= v5 )
        return 1;
    }
  }
  return 0;
}
