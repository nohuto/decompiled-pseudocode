/*
 * XREFs of _SBCtlSetup@4 @ 0x1A3664
 * Callers:
 *     ?DrawCtlThumb@@YGXPAUtagSBWND@@@Z @ 0x1A28A9 (-DrawCtlThumb@@YGXPAUtagSBWND@@@Z.c)
 *     _xxxDoScrollMenu@16 @ 0x1A370F (_xxxDoScrollMenu@16.c)
 *     _xxxSBWndProc@16 @ 0x1A3EEF (_xxxSBWndProc@16.c)
 * Callees:
 *     _CalcSBStuff2@16 @ 0x6DB64 (_CalcSBStuff2@16.c)
 *     _GetRect@12 @ 0x6E5F2 (_GetRect@12.c)
 */

int __thiscall SBCtlSetup(int *this)
{
  int v3[4]; // [esp+8h] [ebp-10h] BYREF

  memset(v3, 0, sizeof(v3));
  GetRect(*this, v3, 17);
  return CalcSBStuff2(this + 3, v3, this + 3, this[1]);
}
