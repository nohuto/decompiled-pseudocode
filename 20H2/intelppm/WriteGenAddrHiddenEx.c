/*
 * XREFs of WriteGenAddrHiddenEx @ 0x1C0008B84
 * Callers:
 *     WriteGenAddrMaybeHiddenEx @ 0x1C0008BB0 (WriteGenAddrMaybeHiddenEx.c)
 *     PerfControlCpcHidden @ 0x1C0009460 (PerfControlCpcHidden.c)
 * Callees:
 *     WriteGenAddrEx @ 0x1C0008A68 (WriteGenAddrEx.c)
 *     WriteGenAddrHidden @ 0x1C0008AE0 (WriteGenAddrHidden.c)
 */

void __fastcall WriteGenAddrHiddenEx(unsigned int a1, _BYTE *a2, __int64 a3)
{
  if ( *a2 == 10 )
    WriteGenAddrEx(a2, a3);
  else
    WriteGenAddrHidden(a1, a2, a3);
}
