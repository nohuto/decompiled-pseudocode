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

int __fastcall _RtlpMuiRegAddNeutralLanguage(int a1, int a2, PCWSTR SourceString)
{
  unsigned __int8 v4; // bl
  int v5; // eax
  int v6; // eax
  int v7; // ecx
  int ParentLocaleName; // esi
  __int16 v9; // ax
  int v11; // [esp+10h] [ebp-1Ch] BYREF
  int v12; // [esp+14h] [ebp-18h]
  int v13; // [esp+18h] [ebp-14h]
  int v14; // [esp+1Ch] [ebp-10h]
  __int16 v15[3]; // [esp+20h] [ebp-Ch] BYREF
  char v16[5]; // [esp+27h] [ebp-5h] BYREF

  v13 = a1;
  v4 = 0;
  v5 = 0;
  v15[0] = 0;
  v16[0] = 0;
  if ( a1 && a2 )
  {
    v6 = MuiRegAllocArray();
    v14 = v6;
    if ( !v6 )
    {
      ParentLocaleName = -1073741801;
LABEL_18:
      *(_WORD *)(a2 + 8) &= 0x3FFFu;
      v9 = 0;
      goto LABEL_13;
    }
    v12 = v6;
    v11 = 11141120;
    ParentLocaleName = RtlGetParentLocaleName(SourceString, (int)&v11, 6, 0);
    if ( ParentLocaleName >= 0 )
    {
      ParentLocaleName = RtlpMuiRegGetLanguageSpec(v13, v12, v16, v7, v15);
      if ( ParentLocaleName < 0 )
      {
        v4 = 0;
        v16[0] = 0;
        v15[0] = 0;
      }
      else
      {
        v4 = v16[0];
      }
    }
    v5 = v14;
  }
  else
  {
    ParentLocaleName = -1073741811;
  }
  if ( v5 )
  {
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v5);
    v4 = v16[0];
  }
  if ( ParentLocaleName < 0 )
    goto LABEL_18;
  if ( !v4 )
  {
    ParentLocaleName = -1073741823;
    goto LABEL_18;
  }
  v9 = v15[0];
  *(_WORD *)(a2 + 8) = *(_WORD *)(a2 + 8) & 0x3FFF | (v4 << 14);
LABEL_13:
  *(_WORD *)(a2 + 10) = v9;
  return ParentLocaleName;
}
