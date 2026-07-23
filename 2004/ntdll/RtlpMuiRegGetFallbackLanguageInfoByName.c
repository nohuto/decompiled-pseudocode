/*
 * XREFs of RtlpMuiRegGetFallbackLanguageInfoByName @ 0x18010481C
 * Callers:
 *     RtlGetUILanguageInfo @ 0x1800EED40 (RtlGetUILanguageInfo.c)
 *     RtlpAutoCompleteLanguageFallback @ 0x1800EF77C (RtlpAutoCompleteLanguageFallback.c)
 *     RtlpMuiRegGetFallbackLanguageInfoByLangId @ 0x18010465C (RtlpMuiRegGetFallbackLanguageInfoByLangId.c)
 * Callees:
 *     RtlpMuiRegGetOrAddString @ 0x18003AB74 (RtlpMuiRegGetOrAddString.c)
 *     RtlCultureNameToLCID @ 0x18003B850 (RtlCultureNameToLCID.c)
 *     RtlInitUnicodeString @ 0x18003BA40 (RtlInitUnicodeString.c)
 *     RtlpMuiRegGetFallbackLanguageInfoByLangId @ 0x18010465C (RtlpMuiRegGetFallbackLanguageInfoByLangId.c)
 */

__int64 __fastcall RtlpMuiRegGetFallbackLanguageInfoByName(__int64 a1, __int64 a2, WCHAR *a3, char a4, __int64 a5)
{
  __int64 v9; // rbx
  __int16 v10; // r9
  __int16 v11; // r10
  __int16 i; // dx
  __int16 v13; // r8
  __int64 v14; // r8
  __int64 v15; // rcx
  __int64 result; // rax
  _UNICODE_STRING DestinationString; // [rsp+30h] [rbp-28h] BYREF
  DWORD Lcid; // [rsp+60h] [rbp+8h] BYREF

  if ( !a1 )
    return 3221225485LL;
  if ( !a2 )
    return 3221225485LL;
  if ( !a3 )
    return 3221225485LL;
  v9 = a5;
  if ( !a5 )
    return 3221225485LL;
  if ( (int)RtlpMuiRegGetOrAddString(a1, a3, 0LL, (__int16 *)&Lcid) >= 0 )
  {
    v10 = Lcid;
    v11 = 0;
    for ( i = 0; i < 8; i += 2 )
    {
      v13 = (*(_WORD *)(a2 + 8) >> i) & 3;
      if ( v13 == 2 )
      {
        v14 = *(__int16 *)(a2 + 2LL * v11 + 12);
        v15 = *(_QWORD *)(*(_QWORD *)(a1 + 24) + 16LL);
        if ( *(_WORD *)(28 * v14 + v15 + 6) == (_WORD)Lcid )
        {
          *(_OWORD *)v9 = *(_OWORD *)(28 * v14 + v15);
          *(_QWORD *)(v9 + 16) = *(_QWORD *)(28 * v14 + v15 + 16);
          *(_DWORD *)(v9 + 24) = *(_DWORD *)(28 * v14 + v15 + 24);
          return 0LL;
        }
      }
      else if ( *(_WORD *)(a2 + 2LL * v11 + 12) != (_WORD)Lcid && v13 != 3 )
      {
        result = 0LL;
        *(_OWORD *)v9 = 0LL;
        *(_QWORD *)(v9 + 16) = 0LL;
        *(_DWORD *)(v9 + 24) = 0;
        *(_WORD *)(v9 + 6) = v10;
        return result;
      }
      ++v11;
    }
  }
  if ( a4
    && (RtlInitUnicodeString(&DestinationString, a3), RtlCultureNameToLCID(&DestinationString, &Lcid))
    && Lcid != 4096 )
  {
    return RtlpMuiRegGetFallbackLanguageInfoByLangId(a1, a2, Lcid, 0, v9);
  }
  else
  {
    return 3221225524LL;
  }
}
