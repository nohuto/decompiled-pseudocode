/*
 * XREFs of IofCallDriverSpecifyReturn @ 0x14036D480
 * Callers:
 *     PopRequestPowerIrp @ 0x14036CE40 (PopRequestPowerIrp.c)
 *     VerifierPoCallDriver @ 0x1409D0840 (VerifierPoCallDriver.c)
 * Callees:
 *     IopfCallDriver @ 0x14036D4A4 (IopfCallDriver.c)
 *     IopPerfCallDriver @ 0x140502428 (IopPerfCallDriver.c)
 *     IovCallDriver @ 0x1409C1C94 (IovCallDriver.c)
 */

__int64 __fastcall IofCallDriverSpecifyReturn(struct _DMA_ADAPTER *a1)
{
  if ( !IopDispatchCallDriver )
    return IopfCallDriver();
  if ( IopDispatchCallDriver == 3 )
    return IopPerfCallDriver(a1);
  return IovCallDriver(a1);
}
