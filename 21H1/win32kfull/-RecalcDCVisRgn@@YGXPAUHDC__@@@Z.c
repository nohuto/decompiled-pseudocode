/*
 * XREFs of ?RecalcDCVisRgn@@YGXPAUHDC__@@@Z @ 0x1A90C1
 * Callers:
 *     _xxxMNInvertItem@20 @ 0x1A9C22 (_xxxMNInvertItem@20.c)
 *     _xxxMenuBarDraw@16 @ 0x1AA275 (_xxxMenuBarDraw@16.c)
 * Callees:
 *     _RevalidateDCE@4 @ 0x83C68 (_RevalidateDCE@4.c)
 */

void __thiscall RecalcDCVisRgn(void *this)
{
  int *v2; // eax

  GreLockVisRgn(*(_DWORD *)(_gpDispInfo + 20));
  v2 = (int *)LookupDC(this, 1);
  if ( v2 )
    RevalidateDCE(v2);
  GreUnlockVisRgn(*(_DWORD *)(_gpDispInfo + 20));
}
