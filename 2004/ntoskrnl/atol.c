/*
 * XREFs of atol @ 0x1403CE320
 * Callers:
 *     HvlDebuggerSupportInitialize @ 0x1403CC584 (HvlDebuggerSupportInitialize.c)
 *     atoi @ 0x1403CE300 (atoi.c)
 *     KdInitSystem @ 0x1409B2160 (KdInitSystem.c)
 *     InitBootProcessor @ 0x140A36F64 (InitBootProcessor.c)
 *     Phase1InitializationDiscard @ 0x140A37B24 (Phase1InitializationDiscard.c)
 *     RamdiskStart @ 0x140A92778 (RamdiskStart.c)
 * Callees:
 *     strtolX @ 0x1403CDED0 (strtolX.c)
 */

int __cdecl atol(const char *Str)
{
  if ( Str )
    return strtolX((unsigned __int8 *)Str, 0LL, 0xAu, 1);
  else
    return 0;
}
