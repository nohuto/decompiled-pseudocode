/*
 * XREFs of ?GCRemoveHashElement@@YGXPAPAUtagGESTURECONFIGLIST@@I@Z @ 0x1886BF
 * Callers:
 *     ?_StoreGestureConfig@@YGHPAUtagWND@@IPAUtagGESTURECONFIG@@@Z @ 0xE3328 (-_StoreGestureConfig@@YGHPAUtagWND@@IPAUtagGESTURECONFIG@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall GCRemoveHashElement(int a1, int a2)
{
  _DWORD *v2; // edi
  int v3; // esi
  _DWORD *v4; // ebx
  _DWORD *i; // eax
  _DWORD *v6; // ecx

  v2 = 0;
  v3 = a2 & 7;
  v4 = *(_DWORD **)(a1 + 4 * v3);
  for ( i = v4; i; i = (_DWORD *)*i )
  {
    v6 = (_DWORD *)*i;
    if ( i[1] == a2 )
    {
      if ( i == v4 )
        *(_DWORD *)(a1 + 4 * v3) = v6;
      else
        *v2 = v6;
      Win32FreePool(i);
      return;
    }
    v2 = i;
  }
}
