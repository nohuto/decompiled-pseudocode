/*
 * XREFs of WriteGenAddrHiddenEx @ 0x1C0003290
 * Callers:
 *     WriteGenAddrMaybeHiddenEx @ 0x1C00032BC (WriteGenAddrMaybeHiddenEx.c)
 *     PerfControlCpcHidden @ 0x1C0004BA0 (PerfControlCpcHidden.c)
 * Callees:
 *     WriteGenAddrEx @ 0x1C0003174 (WriteGenAddrEx.c)
 *     WriteGenAddrHidden @ 0x1C00031EC (WriteGenAddrHidden.c)
 */

void __fastcall WriteGenAddrHiddenEx(unsigned int a1, _BYTE *a2, __int64 a3)
{
  if ( *a2 == 10 )
    WriteGenAddrEx(a2, a3);
  else
    WriteGenAddrHidden(a1, a2, a3);
}
