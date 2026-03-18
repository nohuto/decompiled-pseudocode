/*
 * XREFs of MiCreateResidentBasePfnTemplate @ 0x140A3BCD4
 * Callers:
 *     MiInitNucleus @ 0x140A43414 (MiInitNucleus.c)
 * Callees:
 *     <none>
 */

char __fastcall MiCreateResidentBasePfnTemplate(__int64 a1)
{
  char result; // al

  *(_OWORD *)a1 = xmmword_140C4E400;
  *(_OWORD *)(a1 + 16) = xmmword_140C4E410;
  *(_OWORD *)(a1 + 32) = xmmword_140C4E420;
  result = *(_BYTE *)(a1 + 34) & 0xF8 | 5;
  *(_BYTE *)(a1 + 34) = result;
  return result;
}
