/*
 * XREFs of _RtlpGetCompleteLanguageFallback@20 @ 0x4B353F7A
 * Callers:
 *     _RtlpAutoCompleteLanguageFallback@12 @ 0x4B35338F (_RtlpAutoCompleteLanguageFallback@12.c)
 * Callees:
 *     _RtlStringCchCopyExW@24 @ 0x4B330DC4 (_RtlStringCchCopyExW@24.c)
 *     _RtlpGetDefaultLanguageBaseOrParent@28 @ 0x4B354076 (_RtlpGetDefaultLanguageBaseOrParent@28.c)
 */

int __fastcall RtlpGetCompleteLanguageFallback(int a1, _BYTE *a2, _WORD *a3, _WORD *a4, int a5)
{
  _WORD *v6; // eax
  int DefaultLanguageBaseOrParent; // esi
  int v8; // ecx
  _WORD *v9; // eax
  int v10; // edi
  bool v11; // zf
  int v12; // ecx
  _BYTE *v14; // [esp+10h] [ebp-Ch] BYREF
  _WORD *v15; // [esp+14h] [ebp-8h] BYREF
  int v16; // [esp+18h] [ebp-4h] BYREF

  if ( !a1 )
    return -1073741811;
  if ( !a2 )
    return -1073741811;
  v6 = a4;
  if ( !a4 )
    return -1073741811;
  if ( !a3 )
  {
    v8 = a5;
    goto LABEL_10;
  }
  DefaultLanguageBaseOrParent = RtlStringCchCopyExW(a4, a5, a3, &v15, &v16, a1);
  if ( DefaultLanguageBaseOrParent >= 0 )
  {
    if ( !v16 )
      return -1073741789;
    v8 = v16 - 1;
    v6 = v15 + 1;
LABEL_10:
    v15 = v6;
    v16 = v8;
    DefaultLanguageBaseOrParent = RtlpGetDefaultLanguageBaseOrParent(&v14, v6, v8, &v15, &v16);
    if ( DefaultLanguageBaseOrParent < 0 )
      return DefaultLanguageBaseOrParent;
    if ( !v16 )
      return -1073741789;
    DefaultLanguageBaseOrParent = 0;
    v9 = v15 + 1;
    v10 = v16 - 1;
    v11 = (*a2 & 4) == 0;
    v12 = v16 - 1;
    ++v15;
    --v16;
    if ( v11 && v14 && (*v14 & 2) != 0 )
    {
      RtlpGetDefaultLanguageBaseOrParent(0, v9, v10, &v15, &v16);
      if ( !v16 )
        return -1073741789;
      v9 = v15 + 1;
      v12 = v16 - 1;
    }
    if ( v12 )
    {
      *v9 = 0;
      return DefaultLanguageBaseOrParent;
    }
    return -1073741789;
  }
  return DefaultLanguageBaseOrParent;
}
