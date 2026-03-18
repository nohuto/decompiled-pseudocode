/*
 * XREFs of ?IsEqualRectToArrangedWindow@@YGHPAUtagWND@@QBUtagRECT@@@Z @ 0x17184A
 * Callers:
 *     ?xxxEndSetWindowArrangement@@YG_NPAUtagWND@@PAUtagRECT@@1K@Z @ 0x1739DF (-xxxEndSetWindowArrangement@@YG_NPAUtagWND@@PAUtagRECT@@1K@Z.c)
 * Callees:
 *     ?GetWindowExtendedMargin@@YG_NPBUtagWND@@PAUFRAME_MARGIN@@@Z @ 0x15D24 (-GetWindowExtendedMargin@@YG_NPBUtagWND@@PAUFRAME_MARGIN@@@Z.c)
 *     ?EqualRectInl@@YGKPBUtagRECT@@0@Z @ 0x334C0 (-EqualRectInl@@YGKPBUtagRECT@@0@Z.c)
 */

BOOL __fastcall IsEqualRectToArrangedWindow(int a1, _DWORD *a2)
{
  BOOL v4; // edi
  int v5; // edx
  int v7; // [esp+10h] [ebp-8h] BYREF
  int v8; // [esp+14h] [ebp-4h]

  v4 = EqualRectInl(a2, (const void *)(*(_DWORD *)(a1 + 20) + 52));
  if ( !v4 )
  {
    v7 = 0;
    v8 = 0;
    if ( GetWindowExtendedMargin(a1, (int)&v7) )
    {
      v5 = *(_DWORD *)(a1 + 20);
      return a2[1] - (__int16)v8 == *(_DWORD *)(v5 + 56)
          && *a2 - (__int16)v7 == *(_DWORD *)(v5 + 52)
          && __PAIR64__(a2[3] + SHIWORD(v8), a2[2] + SHIWORD(v7)) == *(_QWORD *)(v5 + 60);
    }
  }
  return v4;
}
