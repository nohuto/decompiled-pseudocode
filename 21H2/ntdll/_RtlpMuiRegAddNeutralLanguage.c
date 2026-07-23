/*
 * XREFs of _RtlpMuiRegAddNeutralLanguage @ 0x18007064C
 * Callers:
 *     _RtlpMuiRegAddNeutralToInstalled @ 0x180070550 (_RtlpMuiRegAddNeutralToInstalled.c)
 *     _RtlpMuiRegInitAnyLanguage @ 0x180106838 (_RtlpMuiRegInitAnyLanguage.c)
 *     _RtlpMuiRegValidateInstalled @ 0x180107418 (_RtlpMuiRegValidateInstalled.c)
 * Callees:
 *     RtlFreeHeap @ 0x180024760 (RtlFreeHeap.c)
 *     _MuiRegAllocArray @ 0x18003B244 (_MuiRegAllocArray.c)
 *     RtlGetParentLocaleName @ 0x18003C490 (RtlGetParentLocaleName.c)
 *     RtlpMuiRegGetLanguageSpec @ 0x180070764 (RtlpMuiRegGetLanguageSpec.c)
 */

__int64 __fastcall RtlpMuiRegAddNeutralLanguage(__int64 a1, __int64 a2, const WCHAR *a3)
{
  int v5; // r15d
  wchar_t *v6; // r14
  unsigned __int8 v7; // si
  wchar_t *v8; // rax
  NTSTATUS LanguageSpec; // edi
  int v10; // r9d
  _UNICODE_STRING ParentLocaleName; // [rsp+30h] [rbp-10h] BYREF
  unsigned __int8 v13; // [rsp+70h] [rbp+30h] BYREF
  __int16 v14; // [rsp+88h] [rbp+48h] BYREF

  v14 = 0;
  v13 = 0;
  v5 = a1;
  v6 = 0LL;
  v7 = 0;
  if ( a1 && a2 )
  {
    v8 = (wchar_t *)MuiRegAllocArray(a1, 0x55u);
    v6 = v8;
    if ( !v8 )
    {
      LanguageSpec = -1073741801;
LABEL_17:
      *(_WORD *)(a2 + 10) = 0;
      *(_WORD *)(a2 + 8) &= 0x3FFFu;
      return (unsigned int)LanguageSpec;
    }
    ParentLocaleName.Buffer = v8;
    *(_DWORD *)&ParentLocaleName.Length = 11141120;
    LanguageSpec = RtlGetParentLocaleName(a3, &ParentLocaleName, 6u, 0);
    if ( LanguageSpec >= 0 )
    {
      LanguageSpec = RtlpMuiRegGetLanguageSpec(v5, ParentLocaleName.Buffer, (unsigned int)&v13, v10, (__int64)&v14);
      if ( LanguageSpec < 0 )
      {
        v13 = 0;
        v14 = 0;
      }
      else
      {
        v7 = v13;
      }
    }
  }
  else
  {
    LanguageSpec = -1073741811;
  }
  if ( v6 )
  {
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v6);
    v7 = v13;
  }
  if ( LanguageSpec < 0 )
    goto LABEL_17;
  if ( !v7 )
  {
    LanguageSpec = -1073741823;
    goto LABEL_17;
  }
  *(_WORD *)(a2 + 8) &= 0x3FFFu;
  *(_WORD *)(a2 + 8) |= v7 << 14;
  *(_WORD *)(a2 + 10) = v14;
  return (unsigned int)LanguageSpec;
}
