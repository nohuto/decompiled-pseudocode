/*
 * XREFs of ?MNDrawInsertionBar@@YAXPEAUHDC__@@PEAUtagITEM@@@Z @ 0x1C0060C90
 * Callers:
 *     xxxMenuDraw @ 0x1C00609B8 (xxxMenuDraw.c)
 *     xxxDrawMenuItem @ 0x1C0060D14 (xxxDrawMenuItem.c)
 * Callees:
 *     GrePolyPatBlt @ 0x1C0062084 (GrePolyPatBlt.c)
 *     __security_check_cookie @ 0x1C0157760 (__security_check_cookie.c)
 */

void __fastcall MNDrawInsertionBar(HDC a1, struct tagITEM *a2)
{
  int v2; // ebx

  v2 = *(_DWORD *)(*(_QWORD *)a2 + 4LL);
  if ( v2 < 0 || (v2 & 0x40000000) != 0 )
    GrePolyPatBlt(a1);
}
