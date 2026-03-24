/*
 * XREFs of IofCallDriverSpecifyReturn @ 0x14036E360
 * Callers:
 *     PopRequestPowerIrp @ 0x14036DD20 (PopRequestPowerIrp.c)
 *     VerifierPoCallDriver @ 0x1409D3860 (VerifierPoCallDriver.c)
 * Callees:
 *     IopfCallDriver @ 0x14036E384 (IopfCallDriver.c)
 *     IopPerfCallDriver @ 0x140507FC0 (IopPerfCallDriver.c)
 *     IovCallDriver @ 0x1409C4CB4 (IovCallDriver.c)
 */

__int64 __fastcall IofCallDriverSpecifyReturn(struct _DMA_ADAPTER *a1)
{
  if ( !IopDispatchCallDriver )
    return IopfCallDriver();
  if ( IopDispatchCallDriver == 3 )
    return IopPerfCallDriver(a1);
  return IovCallDriver(a1);
}
