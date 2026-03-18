/*
 * XREFs of IofCallDriverSpecifyReturn @ 0x14036D120
 * Callers:
 *     PopRequestPowerIrp @ 0x14036CAE0 (PopRequestPowerIrp.c)
 *     VerifierPoCallDriver @ 0x1409D0850 (VerifierPoCallDriver.c)
 * Callees:
 *     IopfCallDriver @ 0x14036D144 (IopfCallDriver.c)
 *     IopPerfCallDriver @ 0x140502A78 (IopPerfCallDriver.c)
 *     IovCallDriver @ 0x1409C1CA4 (IovCallDriver.c)
 */

__int64 __fastcall IofCallDriverSpecifyReturn(struct _DMA_ADAPTER *a1)
{
  if ( !IopDispatchCallDriver )
    return IopfCallDriver();
  if ( IopDispatchCallDriver == 3 )
    return IopPerfCallDriver(a1);
  return IovCallDriver(a1);
}
