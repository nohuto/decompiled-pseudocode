/*
 * XREFs of _VWPLGetData@12 @ 0x7FF58
 * Callers:
 *     ?GetWindowMessageFilter@@YGPAPAXPAUtagWND@@@Z @ 0x7FF2A (-GetWindowMessageFilter@@YGPAPAXPAUtagWND@@@Z.c)
 *     ?GetGCData@@YGPAUtagVWPLGESTUREDATA@@PAUtagWND@@@Z @ 0xE353A (-GetGCData@@YGPAUtagVWPLGESTUREDATA@@PAUtagWND@@@Z.c)
 *     ?GetWindowGCList@@YGPAPAXPAUtagWND@@@Z @ 0xE35F0 (-GetWindowGCList@@YGPAPAXPAUtagWND@@@Z.c)
 * Callees:
 *     <none>
 */

int __fastcall VWPLGetData(unsigned int *a1, int a2, _DWORD *a3)
{
  unsigned int v5; // esi
  unsigned int v6; // ecx
  _DWORD *v7; // edx

  if ( !a1 )
    return 0;
  v5 = *a1;
  v6 = 0;
  if ( *a1 )
  {
    v7 = a1 + 5;
    do
    {
      if ( a2 == *v7 )
        break;
      ++v6;
      v7 += 2;
    }
    while ( v6 < v5 );
  }
  if ( v6 >= v5 )
    return 0;
  *a3 = a1[2 * v6 + 4];
  return 1;
}
