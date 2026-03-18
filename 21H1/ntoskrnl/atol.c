/*
 * XREFs of atol @ 0x1403CD4E0
 * Callers:
 *     HvlDebuggerSupportInitialize @ 0x1403CB78C (HvlDebuggerSupportInitialize.c)
 *     atoi @ 0x1403CD4C0 (atoi.c)
 *     KdInitSystem @ 0x1409B2160 (KdInitSystem.c)
 *     InitBootProcessor @ 0x140A37A74 (InitBootProcessor.c)
 *     Phase1InitializationDiscard @ 0x140A382A8 (Phase1InitializationDiscard.c)
 *     RamdiskStart @ 0x140A93068 (RamdiskStart.c)
 * Callees:
 *     strtolX @ 0x1403CD090 (strtolX.c)
 */

int __cdecl atol(const char *Str)
{
  if ( Str )
    return strtolX((unsigned __int8 *)Str, 0LL, 0xAu, 1);
  else
    return 0;
}
