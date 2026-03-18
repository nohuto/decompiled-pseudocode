/*
 * XREFs of ?SwpCalcVisRgn@@YGHPAUtagWND@@PAUHRGN__@@@Z @ 0x2D4D2
 * Callers:
 *     ?zzzBltValidBits@@YG?AW4BltBitsResult@@PAUtagSMWP@@@Z @ 0x339E2 (-zzzBltValidBits@@YG-AW4BltBitsResult@@PAUtagSMWP@@@Z.c)
 *     ?BltValidInit@@YGHPAUtagSMWP@@@Z @ 0x3C58C (-BltValidInit@@YGHPAUtagSMWP@@@Z.c)
 * Callees:
 *     ?IsMinimizedSausageWindow@@YGHQAUtagWND@@@Z @ 0x2D45A (-IsMinimizedSausageWindow@@YGHQAUtagWND@@@Z.c)
 *     _GetLayeredOrRedirectedParent@4 @ 0x2D54A (_GetLayeredOrRedirectedParent@4.c)
 *     _GetRedirectionBitmap@4 @ 0x30300 (_GetRedirectionBitmap@4.c)
 *     _CalcVisRgn@16 @ 0x36880 (_CalcVisRgn@16.c)
 */

int __fastcall SwpCalcVisRgn(int a1, int a2)
{
  char v3; // al
  int v4; // esi
  _DWORD *LayeredOrRedirectedParent; // eax
  int v6; // edi
  int v8; // [esp+10h] [ebp-8h] BYREF
  _DWORD *v9; // [esp+14h] [ebp-4h]

  v8 = a2;
  v3 = *(_BYTE *)(*(_DWORD *)(a1 + 20) + 23);
  if ( (v3 & 0x10) == 0 )
    return 0;
  v4 = (4 * (v3 & 4)) | 1;
  LayeredOrRedirectedParent = (_DWORD *)GetLayeredOrRedirectedParent(a1);
  v9 = LayeredOrRedirectedParent;
  v6 = v4;
  if ( LayeredOrRedirectedParent
    && (*(_DWORD *)(LayeredOrRedirectedParent[5] + 16) & 0x20000000) != 0
    && GetRedirectionBitmap(LayeredOrRedirectedParent)
    && !IsMinimizedSausageWindow(v9) )
  {
    v6 = v4 | 0x4000;
  }
  return CalcVisRgn(&v8, a1, a1, v6);
}
