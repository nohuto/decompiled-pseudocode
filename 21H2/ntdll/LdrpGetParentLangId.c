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
  LCID v3; // ebx
  NTSTATUS v4; // eax
  wchar_t *Buffer; // rdi
  NTSTATUS v6; // eax
  NTSTATUS v7; // ebx
  _UNICODE_STRING ParentLocaleName; // [rsp+20h] [rbp-39h] BYREF
  _UNICODE_STRING LocaleName; // [rsp+30h] [rbp-29h] BYREF
  DWORD lcid; // [rsp+40h] [rbp-19h] BYREF
  _BYTE v12[32]; // [rsp+48h] [rbp-11h] BYREF
  _BYTE v13[32]; // [rsp+68h] [rbp+Fh] BYREF

  ParentLocaleName = 0LL;
  LocaleName = 0LL;
  if ( !a2 )
    return 3221225485LL;
  v3 = a1;
  *a2 = 0;
  LocaleName.Buffer = (wchar_t *)v13;
  LocaleName.MaximumLength = 30;
  v4 = RtlLcidToLocaleName(a1, &LocaleName, 2u, 0);
  if ( v4 >= 0 )
    goto LABEL_3;
  if ( v4 == -1073741789 )
  {
    LocaleName.Buffer = 0LL;
    LocaleName.MaximumLength = 0;
    v4 = RtlLcidToLocaleName(v3, &LocaleName, 2u, 1u);
  }
  if ( v4 >= 0 )
  {
LABEL_3:
    Buffer = LocaleName.Buffer;
    ParentLocaleName.MaximumLength = 30;
    ParentLocaleName.Buffer = (wchar_t *)v12;
    v6 = RtlGetParentLocaleName(LocaleName.Buffer, &ParentLocaleName, 6u, 0);
    v7 = v6;
    if ( v6 >= 0 )
      goto LABEL_23;
    if ( v6 == -1073741789 )
    {
      ParentLocaleName.Buffer = 0LL;
      ParentLocaleName.MaximumLength = 0;
      v7 = RtlGetParentLocaleName(Buffer, &ParentLocaleName, 6u, 1u);
    }
    if ( v7 >= 0 )
    {
LABEL_23:
      if ( ParentLocaleName.Length )
      {
        v7 = RtlLocaleNameToLcid(ParentLocaleName.Buffer, &lcid, 3u);
        if ( v7 >= 0 )
          *a2 = lcid;
      }
    }
  }
  else
  {
    Buffer = LocaleName.Buffer;
    v7 = -1073741811;
  }
  if ( (_BYTE *)ParentLocaleName.Buffer != v12 )
  {
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, ParentLocaleName.Buffer);
    Buffer = LocaleName.Buffer;
  }
  if ( Buffer != (wchar_t *)v13 )
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, LocaleName.Buffer);
  return (unsigned int)v7;
}
