/*
 * XREFs of IofCallDriverSpecifyReturn @ 0x14036E510
 * Callers:
 *     PopRequestPowerIrp @ 0x14036DED0 (PopRequestPowerIrp.c)
 *     VerifierPoCallDriver @ 0x1409D4860 (VerifierPoCallDriver.c)
 * Callees:
 *     IopfCallDriver @ 0x14036E534 (IopfCallDriver.c)
 *     IopPerfCallDriver @ 0x140507F40 (IopPerfCallDriver.c)
 *     IovCallDriver @ 0x1409C5CB4 (IovCallDriver.c)
 */

__int64 __fastcall IofCallDriverSpecifyReturn(struct _DMA_ADAPTER *a1)
{
  if ( !IopDispatchCallDriver )
    return IopfCallDriver();
  if ( IopDispatchCallDriver == 3 )
    return IopPerfCallDriver(a1);
  return IovCallDriver(a1);
}
