/*
 * XREFs of _xxxFillWindow@16 @ 0x720DE
 * Callers:
 *     _xxxDWP_EraseBkgnd@12 @ 0xA4032 (_xxxDWP_EraseBkgnd@12.c)
 *     _NtUserFillWindow@16 @ 0xBF3BE (_NtUserFillWindow@16.c)
 * Callees:
 *     _UT_GetParentDCClipBox@12 @ 0x71660 (_UT_GetParentDCClipBox@12.c)
 *     _xxxPaintRect@20 @ 0x7215C (_xxxPaintRect@20.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 */

int __fastcall xxxFillWindow(int a1, int a2, int a3, int a4)
{
  int v4; // ebx
  int v7[4]; // [esp+14h] [ebp-14h] BYREF

  v4 = a1;
  memset(v7, 0, sizeof(v7));
  if ( !a1 )
    v4 = a2;
  if ( UT_GetParentDCClipBox(a2, a3, v7) )
    return xxxPaintRect(v4, a2, a3, a4, v7);
  else
    return 1;
}
