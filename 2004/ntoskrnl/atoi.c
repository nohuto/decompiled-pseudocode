/*
 * XREFs of atoi @ 0x1403CE300
 * Callers:
 *     KiInitializeBootStructures @ 0x140998800 (KiInitializeBootStructures.c)
 *     HalpMiscGetParameters @ 0x140A69688 (HalpMiscGetParameters.c)
 * Callees:
 *     atol @ 0x1403CE320 (atol.c)
 */

int __cdecl atoi(const char *Str)
{
  return atol(Str);
}
