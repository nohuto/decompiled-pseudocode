/*
 * XREFs of ?IsEqualRectToArrangedWindow@@YAHPEAUtagWND@@QEBUtagRECT@@@Z @ 0x1C020B2D8
 * Callers:
 *     ?xxxEndSetWindowArrangement@@YA_NPEAUtagWND@@PEAUtagRECT@@1K@Z @ 0x1C020DB00 (-xxxEndSetWindowArrangement@@YA_NPEAUtagWND@@PEAUtagRECT@@1K@Z.c)
 * Callees:
 *     ?GetWindowExtendedMargin@@YA_NPEBUtagWND@@PEAUFRAME_MARGIN@@@Z @ 0x1C001BEC8 (-GetWindowExtendedMargin@@YA_NPEBUtagWND@@PEAUFRAME_MARGIN@@@Z.c)
 */

__int64 __fastcall IsEqualRectToArrangedWindow(struct tagWND *a1, const struct tagRECT *const a2)
{
  __int64 v2; // r8
  __int64 v5; // rdx
  unsigned int v6; // ebx
  __int64 v7; // rdx
  __int64 v9; // [rsp+30h] [rbp+8h] BYREF

  v2 = *((_QWORD *)a1 + 5);
  v5 = *(_QWORD *)&a2->left - *(_QWORD *)(v2 + 88);
  if ( !v5 )
    v5 = *(_QWORD *)&a2->right - *(_QWORD *)(v2 + 96);
  v6 = 0;
  if ( !v5 )
    return 1;
  v9 = 0LL;
  if ( GetWindowExtendedMargin(a1, (struct FRAME_MARGIN *)&v9) )
  {
    v7 = *((_QWORD *)a1 + 5);
    if ( __PAIR64__(a2->top - SWORD2(v9), a2->left - (__int16)v9) == *(_QWORD *)(v7 + 88)
      && __PAIR64__(a2->bottom + SHIWORD(v9), a2->right + SWORD1(v9)) == *(_QWORD *)(v7 + 96) )
    {
      return 1;
    }
  }
  return v6;
}
