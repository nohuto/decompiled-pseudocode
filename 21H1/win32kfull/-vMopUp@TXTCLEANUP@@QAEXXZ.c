/*
 * XREFs of ?vMopUp@TXTCLEANUP@@QAEXXZ @ 0x2221B6
 * Callers:
 *     ?GreExtTextOutWLocked@@YGHAAVXDCOBJ@@HHIPAUtagRECT@@PAGHPAHKPAXK@Z @ 0x61F50 (-GreExtTextOutWLocked@@YGHAAVXDCOBJ@@HHIPAUtagRECT@@PAGHPAHKPAXK@Z.c)
 * Callees:
 *     <none>
 */

void __thiscall TXTCLEANUP::vMopUp(TXTCLEANUP *this)
{
  int v2; // eax
  int v3; // [esp+4h] [ebp-4h] BYREF

  v3 = *(_DWORD *)(**(_DWORD **)this + 1144);
  RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v3);
  v2 = **(_DWORD **)this;
  *(_DWORD *)(v2 + 24) |= 0x10u;
  *(_DWORD *)(v2 + 1144) = 0;
}
