/*
 * XREFs of atol @ 0x1403D0FB0
 * Callers:
 *     HvlDebuggerSupportInitialize @ 0x1403CF220 (HvlDebuggerSupportInitialize.c)
 *     atoi @ 0x1403D0F90 (atoi.c)
 *     KdInitSystem @ 0x1409B8160 (KdInitSystem.c)
 *     InitBootProcessor @ 0x140A3CF64 (InitBootProcessor.c)
 *     Phase1InitializationDiscard @ 0x140A3DB24 (Phase1InitializationDiscard.c)
 *     RamdiskStart @ 0x140A983D8 (RamdiskStart.c)
 * Callees:
 *     strtolX @ 0x1403D0B60 (strtolX.c)
 */

int __cdecl atol(const char *Str)
{
  if ( Str )
    return strtolX((unsigned __int8 *)Str, 0LL, 0xAu, 1);
  else
    return 0;
}
