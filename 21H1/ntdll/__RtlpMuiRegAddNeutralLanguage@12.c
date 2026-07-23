/*
 * XREFs of __RtlpMuiRegAddNeutralLanguage@12 @ 0x4B2ACADE
 * Callers:
 *     __RtlpMuiRegValidateInstalled@4 @ 0x4B2AC387 (__RtlpMuiRegValidateInstalled@4.c)
 *     __RtlpMuiRegInitAnyLanguage@16 @ 0x4B2ACA44 (__RtlpMuiRegInitAnyLanguage@16.c)
 * Callees:
 *     _RtlpMuiRegGetLanguageSpec@20 @ 0x4B2ACBB5 (_RtlpMuiRegGetLanguageSpec@20.c)
 *     _MuiRegAllocArray @ 0x4B2AD7D8 (_MuiRegAllocArray.c)
 *     _RtlFreeHeap@12 @ 0x4B2C3B70 (_RtlFreeHeap@12.c)
 *     _RtlGetParentLocaleName@16 @ 0x4B2D41A0 (_RtlGetParentLocaleName@16.c)
 */

NTSTATUS __fastcall _RtlpMuiRegAddNeutralLanguage(int a1, int a2, PCWSTR LocaleName)
{
  unsigned __int8 v4; // bl
  PVOID v5; // eax
  void *v6; // eax
  int v7; // ecx
  NTSTATUS LanguageSpec; // esi
  __int16 v9; // ax
  _UNICODE_STRING ParentLocaleName; // [esp+10h] [ebp-1Ch] BYREF
  int v12; // [esp+18h] [ebp-14h]
  PVOID BaseAddress; // [esp+1Ch] [ebp-10h]
  _WORD v14[3]; // [esp+20h] [ebp-Ch] BYREF
  _BYTE v15[5]; // [esp+27h] [ebp-5h] BYREF

  v12 = a1;
  v4 = 0;
  v5 = 0;
  v14[0] = 0;
  v15[0] = 0;
  if ( a1 && a2 )
  {
    v6 = (void *)MuiRegAllocArray();
    BaseAddress = v6;
    if ( !v6 )
    {
      LanguageSpec = -1073741801;
LABEL_18:
      *(_WORD *)(a2 + 8) &= 0x3FFFu;
      v9 = 0;
      goto LABEL_13;
    }
    ParentLocaleName.Buffer = (wchar_t *)v6;
    *(_DWORD *)&ParentLocaleName.Length = 11141120;
    LanguageSpec = RtlGetParentLocaleName(LocaleName, &ParentLocaleName, 6u, 0);
    if ( LanguageSpec >= 0 )
    {
      LanguageSpec = RtlpMuiRegGetLanguageSpec(v12, ParentLocaleName.Buffer, v15, v7, v14);
      if ( LanguageSpec < 0 )
      {
        v4 = 0;
        v15[0] = 0;
        v14[0] = 0;
      }
      else
      {
        v4 = v15[0];
      }
    }
    v5 = BaseAddress;
  }
  else
  {
    LanguageSpec = -1073741811;
  }
  if ( v5 )
  {
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v5);
    v4 = v15[0];
  }
  if ( LanguageSpec < 0 )
    goto LABEL_18;
  if ( !v4 )
  {
    LanguageSpec = -1073741823;
    goto LABEL_18;
  }
  v9 = v14[0];
  *(_WORD *)(a2 + 8) = *(_WORD *)(a2 + 8) & 0x3FFF | (v4 << 14);
LABEL_13:
  *(_WORD *)(a2 + 10) = v9;
  return LanguageSpec;
}
