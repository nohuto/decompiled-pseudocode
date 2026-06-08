/*
 * XREFs of CpcSetTimeWindow @ 0x1C00091E0
 * Callers:
 *     <none>
 * Callees:
 *     WriteGenAddrMaybeHiddenEx @ 0x1C0008BB0 (WriteGenAddrMaybeHiddenEx.c)
 */

void __fastcall CpcSetTimeWindow(__int64 *a1, unsigned int a2)
{
  WriteGenAddrMaybeHiddenEx(*a1, (_BYTE *)(a1[14] + 224), a2);
}
