/*
 * XREFs of LdrpGetParentLangId @ 0x18007EB94
 * Callers:
 *     LdrpSearchResourceSection_U @ 0x180033BCC (LdrpSearchResourceSection_U.c)
 *     LdrpLoadResourceFromAlternativeModule @ 0x1800356C0 (LdrpLoadResourceFromAlternativeModule.c)
 *     LdrResFallbackLangList @ 0x180057BE8 (LdrResFallbackLangList.c)
 * Callees:
 *     RtlFreeHeap @ 0x180024760 (RtlFreeHeap.c)
 *     RtlLcidToLocaleName @ 0x18003B2F0 (RtlLcidToLocaleName.c)
 *     RtlLocaleNameToLcid @ 0x18003BA90 (RtlLocaleNameToLcid.c)
 *     RtlGetParentLocaleName @ 0x18003C490 (RtlGetParentLocaleName.c)
 *     __security_check_cookie @ 0x18008C940 (__security_check_cookie.c)
 */

__int64 __fastcall LdrpGetParentLangId(unsigned __int16 a1, _WORD *a2)
{
  unsigned int v3; // ebx
  int v4; // eax
  const WCHAR *v5; // rdi
  int ParentLocaleName; // eax
  int v7; // ebx
  PCWSTR SourceString[2]; // [rsp+20h] [rbp-39h] BYREF
  PCWSTR v10[2]; // [rsp+30h] [rbp-29h] BYREF
  int v11; // [rsp+40h] [rbp-19h] BYREF
  _BYTE v12[32]; // [rsp+48h] [rbp-11h] BYREF
  _BYTE v13[32]; // [rsp+68h] [rbp+Fh] BYREF

  *(_OWORD *)SourceString = 0LL;
  *(_OWORD *)v10 = 0LL;
  if ( !a2 )
    return 3221225485LL;
  v3 = a1;
  *a2 = 0;
  v10[1] = (PCWSTR)v13;
  WORD1(v10[0]) = 30;
  v4 = RtlLcidToLocaleName(a1, (__int64)v10, 2, 0);
  if ( v4 >= 0 )
    goto LABEL_3;
  if ( v4 == -1073741789 )
  {
    v10[1] = 0LL;
    WORD1(v10[0]) = 0;
    v4 = RtlLcidToLocaleName(v3, (__int64)v10, 2, 1);
  }
  if ( v4 >= 0 )
  {
LABEL_3:
    v5 = v10[1];
    WORD1(SourceString[0]) = 30;
    SourceString[1] = (PCWSTR)v12;
    ParentLocaleName = RtlGetParentLocaleName(v10[1], (__int64)SourceString, 6u, 0);
    v7 = ParentLocaleName;
    if ( ParentLocaleName >= 0 )
      goto LABEL_23;
    if ( ParentLocaleName == -1073741789 )
    {
      SourceString[1] = 0LL;
      WORD1(SourceString[0]) = 0;
      v7 = RtlGetParentLocaleName(v5, (__int64)SourceString, 6u, 1);
    }
    if ( v7 >= 0 )
    {
LABEL_23:
      if ( LOWORD(SourceString[0]) )
      {
        v7 = RtlLocaleNameToLcid(SourceString[1], &v11, 3);
        if ( v7 >= 0 )
          *a2 = v11;
      }
    }
  }
  else
  {
    v5 = v10[1];
    v7 = -1073741811;
  }
  if ( (_BYTE *)SourceString[1] != v12 )
  {
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (__int64)SourceString[1]);
    v5 = v10[1];
  }
  if ( v5 != (const WCHAR *)v13 )
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (__int64)v10[1]);
  return (unsigned int)v7;
}
