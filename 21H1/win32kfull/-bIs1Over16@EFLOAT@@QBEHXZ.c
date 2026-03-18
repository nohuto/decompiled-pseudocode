/*
 * XREFs of ?bIs1Over16@EFLOAT@@QBEHXZ @ 0xE29CE
 * Callers:
 *     ?bTextExtent@RFONTOBJ@@QAEHAAVXDCOBJ@@PAGHJJJJIPAUtagSIZE@@@Z @ 0xE2810 (-bTextExtent@RFONTOBJ@@QAEHAAVXDCOBJ@@PAGHJJJJIPAUtagSIZE@@@Z.c)
 * Callees:
 *     <none>
 */

BOOL __thiscall EFLOAT::bIs1Over16(EFLOAT *this)
{
  return *(_DWORD *)this == 0x40000000 && *((_DWORD *)this + 1) == -2;
}
