/*
 * XREFs of CpcSetTimeWindow @ 0x1C0003FD0
 * Callers:
 *     <none>
 * Callees:
 *     WriteGenAddrMaybeHiddenEx @ 0x1C000321C (WriteGenAddrMaybeHiddenEx.c)
 */

void __fastcall CpcSetTimeWindow(__int64 *a1, unsigned int a2)
{
  WriteGenAddrMaybeHiddenEx(*a1, (_BYTE *)(a1[14] + 224), a2);
}
