/*
 * XREFs of ?PixieHack@@YGXPAUtagWND@@PAUtagRECT@@@Z @ 0x196427
 * Callers:
 *     ?InternalInvalidate2@@YGHPAUtagWND@@PAUHRGN__@@1PAUtagRECT@@K@Z @ 0x36A50 (-InternalInvalidate2@@YGHPAUtagWND@@PAUHRGN__@@1PAUtagRECT@@K@Z.c)
 * Callees:
 *     _SetOrClrWF@16 @ 0x1B9C0 (_SetOrClrWF@16.c)
 *     _IntersectRect@12 @ 0x36374 (_IntersectRect@12.c)
 *     _GetThreadDesktopWindow@4 @ 0x9E52A (_GetThreadDesktopWindow@4.c)
 */

void __fastcall PixieHack(int a1, int *a2)
{
  int v4; // esi
  int v5; // ecx
  _DWORD v6[4]; // [esp+10h] [ebp-10h] BYREF

  if ( a1 != GetThreadDesktopWindow(0) && (*(_BYTE *)(*(_DWORD *)(a1 + 20) + 23) & 0x22) == 2 )
  {
    v4 = *(_DWORD *)(a1 + 60);
    memset(v6, 0, sizeof(v6));
    for ( ; v4; v4 = *(_DWORD *)(v4 + 48) )
    {
      v5 = *(_DWORD *)(v4 + 20);
      if ( (*(_BYTE *)(v5 + 9) & 8) == 0 && (*(_BYTE *)(v5 + 22) & 0xC0) == 0xC0 )
      {
        if ( IntersectRect(v6, a2, (int *)(v5 + 52)) )
        {
          SetOrClrWF(1, v4, 0x108u, 1);
          SetOrClrWF(1, v4, 0x680u, 1);
        }
      }
    }
  }
}
