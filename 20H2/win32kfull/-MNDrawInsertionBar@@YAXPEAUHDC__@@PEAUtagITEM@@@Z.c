/*
 * XREFs of ?MNDrawInsertionBar@@YAXPEAUHDC__@@PEAUtagITEM@@@Z @ 0x1C0033824
 * Callers:
 *     xxxMenuDraw @ 0x1C003354C (xxxMenuDraw.c)
 *     xxxDrawMenuItem @ 0x1C00338A8 (xxxDrawMenuItem.c)
 * Callees:
 *     GrePolyPatBlt @ 0x1C0037B68 (GrePolyPatBlt.c)
 *     __security_check_cookie @ 0x1C015A0C0 (__security_check_cookie.c)
 */

void __fastcall MNDrawInsertionBar(HDC a1, struct tagITEM *a2)
{
  int v2; // ebx

  v2 = *(_DWORD *)(*(_QWORD *)a2 + 4LL);
  if ( v2 < 0 || (v2 & 0x40000000) != 0 )
    GrePolyPatBlt(a1);
}
