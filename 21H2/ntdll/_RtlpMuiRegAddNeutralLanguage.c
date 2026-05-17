/*
 * XREFs of _RtlpMuiRegAddNeutralLanguage @ 0x18007064C
 * Callers:
 *     _RtlpMuiRegAddNeutralToInstalled @ 0x180070550 (_RtlpMuiRegAddNeutralToInstalled.c)
 *     _RtlpMuiRegInitAnyLanguage @ 0x180106878 (_RtlpMuiRegInitAnyLanguage.c)
 *     _RtlpMuiRegValidateInstalled @ 0x180107458 (_RtlpMuiRegValidateInstalled.c)
 * Callees:
 *     RtlFreeHeap @ 0x180024760 (RtlFreeHeap.c)
 *     _MuiRegAllocArray @ 0x18003B244 (_MuiRegAllocArray.c)
 *     RtlGetParentLocaleName @ 0x18003C490 (RtlGetParentLocaleName.c)
 *     RtlpMuiRegGetLanguageSpec @ 0x180070764 (RtlpMuiRegGetLanguageSpec.c)
 */

__int64 __fastcall RtlpMuiRegAddNeutralLanguage(__int64 a1, __int64 a2, const WCHAR *a3)
{
  int v5; // r15d
  __int64 v6; // r14
  unsigned __int8 v7; // si
  __int64 v8; // rax
  int ParentLocaleName; // edi
  int v10; // r9d
  int v12; // [rsp+30h] [rbp-10h] BYREF
  __int64 v13; // [rsp+38h] [rbp-8h]
  unsigned __int8 v14; // [rsp+70h] [rbp+30h] BYREF
  __int16 v15; // [rsp+88h] [rbp+48h] BYREF

  v15 = 0;
  v14 = 0;
  v5 = a1;
  v6 = 0LL;
  v7 = 0;
  if ( a1 && a2 )
  {
    v8 = MuiRegAllocArray(a1, 0x55u);
    v6 = v8;
    if ( !v8 )
    {
      ParentLocaleName = -1073741801;
LABEL_17:
      *(_WORD *)(a2 + 10) = 0;
      *(_WORD *)(a2 + 8) &= 0x3FFFu;
      return (unsigned int)ParentLocaleName;
    }
    v13 = v8;
    v12 = 11141120;
    ParentLocaleName = RtlGetParentLocaleName(a3, (__int64)&v12, 6u, 0);
    if ( ParentLocaleName >= 0 )
    {
      ParentLocaleName = RtlpMuiRegGetLanguageSpec(v5, v13, (unsigned int)&v14, v10, (__int64)&v15);
      if ( ParentLocaleName < 0 )
      {
        v14 = 0;
        v15 = 0;
      }
      else
      {
        v7 = v14;
      }
    }
  }
  else
  {
    ParentLocaleName = -1073741811;
  }
  if ( v6 )
  {
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v6);
    v7 = v14;
  }
  if ( ParentLocaleName < 0 )
    goto LABEL_17;
  if ( !v7 )
  {
    ParentLocaleName = -1073741823;
    goto LABEL_17;
  }
  *(_WORD *)(a2 + 8) &= 0x3FFFu;
  *(_WORD *)(a2 + 8) |= v7 << 14;
  *(_WORD *)(a2 + 10) = v15;
  return (unsigned int)ParentLocaleName;
}
