/*
 * XREFs of ?RecalcDCVisRgn@@YAXPEAUHDC__@@@Z @ 0x1C024CFE0
 * Callers:
 *     xxxMNInvertItem @ 0x1C024DDE8 (xxxMNInvertItem.c)
 *     xxxMenuBarDraw @ 0x1C024E57C (xxxMenuBarDraw.c)
 * Callees:
 *     RevalidateDCE @ 0x1C00E8A90 (RevalidateDCE.c)
 */

void __fastcall RecalcDCVisRgn(HDC a1)
{
  __int64 v2; // rax

  GreLockVisRgn(*(_QWORD *)(gpDispInfo + 40LL));
  v2 = LookupDC(a1, 1LL);
  if ( v2 )
    RevalidateDCE(v2);
  GreUnlockVisRgn(*(_QWORD *)(gpDispInfo + 40LL));
}
