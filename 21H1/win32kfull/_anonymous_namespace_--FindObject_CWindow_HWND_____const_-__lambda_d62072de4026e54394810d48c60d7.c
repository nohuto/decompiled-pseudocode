/*
 * XREFs of _anonymous_namespace_::FindObject_CWindow_HWND_____const_&__lambda_d62072de4026e54394810d48c60d742e___ @ 0x19E6E7
 * Callers:
 *     CWindowGroupManager::_ExecuteGroupAction__lambda_10653f091205cdfaef55327f2586c792___ @ 0x19E81D (CWindowGroupManager--_ExecuteGroupAction__lambda_10653f091205cdfaef55327f2586c792___.c)
 *     CWindowGroupManager::_ExecuteGroupAction__lambda_57cc7dbb9ba0774bf0b9dad19f24d5d8___ @ 0x19E86C (CWindowGroupManager--_ExecuteGroupAction__lambda_57cc7dbb9ba0774bf0b9dad19f24d5d8___.c)
 *     CWindowGroupManager::_ExecuteGroupAction__lambda_951217d13ca0ee100fcd06e96d7215d9___ @ 0x19E8BD (CWindowGroupManager--_ExecuteGroupAction__lambda_951217d13ca0ee100fcd06e96d7215d9___.c)
 *     ?GetWindowForActivationWithFallbackLogic@CWindowGroup@@QAEPAUtagWND@@PBU2@@Z @ 0x19F137 (-GetWindowForActivationWithFallbackLogic@CWindowGroup@@QAEPAUtagWND@@PBU2@@Z.c)
 * Callees:
 *     <none>
 */

int __fastcall anonymous_namespace_::FindObject_CWindow_HWND_____const____lambda_d62072de4026e54394810d48c60d742e___(
        int a1,
        int a2,
        _DWORD *a3,
        int a4)
{
  int v4; // esi
  unsigned int v5; // eax
  int v6; // edi
  int v7; // ebx

  v4 = 0;
  v5 = *(_DWORD *)(a1 + 4);
  v6 = -1 << (*(_BYTE *)(a1 + 4) & 0x1F);
  v7 = a2 & v6;
  while ( 1 )
  {
    if ( v4 )
      goto LABEL_5;
    if ( !(v5 >> 5) )
      return 0;
    v4 = *(_DWORD *)(a1 + 8)
       + 4
       * ((37 * ((unsigned __int8)(BYTE2(a2) & BYTE2(v6)) + 37 * (BYTE1(v7) + 37 * (unsigned __int8)v7))
         + (unsigned __int8)((unsigned __int16)(HIWORD(a2) & HIWORD(v6)) >> 8)
         + 374026047) & ((v5 >> 5) - 1));
LABEL_5:
    while ( 1 )
    {
      v4 = *(_DWORD *)v4;
      if ( (v4 & 1) != 0 )
        break;
      if ( v7 == (v6 & *(_DWORD *)(v4 + 4)) )
        goto LABEL_9;
    }
    v4 = 0;
LABEL_9:
    if ( !v4 || *a3 == *(_DWORD *)(v4 + 8) )
      return v4;
    v5 = *(_DWORD *)(a1 + 4);
  }
}
