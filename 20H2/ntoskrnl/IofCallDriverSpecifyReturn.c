/*
 * XREFs of IofCallDriverSpecifyReturn @ 0x14036FD20
 * Callers:
 *     PopRequestPowerIrp @ 0x14036F6E0 (PopRequestPowerIrp.c)
 *     VerifierPoCallDriver @ 0x1409D6870 (VerifierPoCallDriver.c)
 * Callees:
 *     IopfCallDriver @ 0x14036FD44 (IopfCallDriver.c)
 *     IopPerfCallDriver @ 0x140506488 (IopPerfCallDriver.c)
 *     IovCallDriver @ 0x1409C7CC4 (IovCallDriver.c)
 */

__int64 __fastcall IofCallDriverSpecifyReturn(struct _DMA_ADAPTER *a1)
{
  if ( !IopDispatchCallDriver )
    return IopfCallDriver();
  if ( IopDispatchCallDriver == 3 )
    return IopPerfCallDriver(a1);
  return IovCallDriver(a1);
}
