/*
 * XREFs of _lambda_e38443a3a25c903e7c5b58388f45a0a4_::operator() @ 0xDE294
 * Callers:
 *     UmfdLoadFontFileView @ 0xDDE4C (UmfdLoadFontFileView.c)
 * Callees:
 *     ?MapFontFiles@@YG_NKPAPAU_FONTFILEVIEW@@PAPAXPAK@Z @ 0xDE468 (-MapFontFiles@@YG_NKPAPAU_FONTFILEVIEW@@PAPAXPAK@Z.c)
 */

int __fastcall lambda_e38443a3a25c903e7c5b58388f45a0a4_::operator()(int a1, int a2, char a3, int a4)
{
  void **v5; // [esp+0h] [ebp-10h]
  unsigned int *v6; // [esp+4h] [ebp-Ch]
  int v7; // [esp+Ch] [ebp-4h]

  v7 = a1;
  if ( !a3 )
    return (*(int (__stdcall **)(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, int))(**(_DWORD **)v7 + 2080))(
             **(_DWORD **)(a1 + 8),
             **(_DWORD **)(a1 + 12),
             **(_DWORD **)(a1 + 16),
             **(_DWORD **)(a1 + 20),
             **(_DWORD **)(a1 + 4),
             _gusLanguageID,
             a4);
  if ( MapFontFiles(**(_DWORD **)(a1 + 16), **(struct _FONTFILEVIEW ****)(a1 + 20), v5, v6) )
  {
    a1 = v7;
    return (*(int (__stdcall **)(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, int))(**(_DWORD **)v7 + 2080))(
             **(_DWORD **)(a1 + 8),
             **(_DWORD **)(a1 + 12),
             **(_DWORD **)(a1 + 16),
             **(_DWORD **)(a1 + 20),
             **(_DWORD **)(a1 + 4),
             _gusLanguageID,
             a4);
  }
  return 0;
}
