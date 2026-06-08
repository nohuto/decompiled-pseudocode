/*
 * XREFs of CpcSetAutonomousMode @ 0x1C00048F0
 * Callers:
 *     <none>
 * Callees:
 *     WriteGenAddrMaybeHiddenEx @ 0x1C00032BC (WriteGenAddrMaybeHiddenEx.c)
 */

void __fastcall CpcSetAutonomousMode(__int64 *a1, int a2)
{
  WriteGenAddrMaybeHiddenEx(*a1, (_BYTE *)(a1[14] + 368), a2 != 0);
}
