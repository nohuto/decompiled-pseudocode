/*
 * XREFs of atoi @ 0x1403D0F90
 * Callers:
 *     KiInitializeBootStructures @ 0x14099E840 (KiInitializeBootStructures.c)
 *     HalpMiscGetParameters @ 0x140A70008 (HalpMiscGetParameters.c)
 * Callees:
 *     atol @ 0x1403D0FB0 (atol.c)
 */

int __cdecl atoi(const char *Str)
{
  return atol(Str);
}
