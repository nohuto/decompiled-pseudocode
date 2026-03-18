/*
 * XREFs of atoi @ 0x1403CD4C0
 * Callers:
 *     KiInitializeBootStructures @ 0x1409977A0 (KiInitializeBootStructures.c)
 *     HalpMiscGetParameters @ 0x140A69208 (HalpMiscGetParameters.c)
 * Callees:
 *     atol @ 0x1403CD4E0 (atol.c)
 */

int __cdecl atoi(const char *Str)
{
  return atol(Str);
}
