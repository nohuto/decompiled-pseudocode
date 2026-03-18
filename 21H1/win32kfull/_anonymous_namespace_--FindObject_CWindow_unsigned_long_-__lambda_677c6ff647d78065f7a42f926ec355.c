/*
 * XREFs of _anonymous_namespace_::FindObject_CWindow_unsigned_long_&__lambda_677c6ff647d78065f7a42f926ec355a9___ @ 0x19E64B
 * Callers:
 *     ?_GetWindowFromRole@CWindowGroup@@ABEPAVCWindow@@W4GROUP_WINDOW_ROLE@@@Z @ 0x19F6D5 (-_GetWindowFromRole@CWindowGroup@@ABEPAVCWindow@@W4GROUP_WINDOW_ROLE@@@Z.c)
 * Callees:
 *     <none>
 */

int __fastcall anonymous_namespace_::FindObject_CWindow_unsigned_long____lambda_677c6ff647d78065f7a42f926ec355a9___(
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
    if ( !v4 || *(unsigned __int16 *)(v4 + 8) == *a3 )
      return v4;
    v5 = *(_DWORD *)(a1 + 4);
  }
}
