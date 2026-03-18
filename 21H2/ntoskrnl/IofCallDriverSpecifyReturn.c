/*
 * XREFs of IofCallDriverSpecifyReturn @ 0x1403B51A0
 * Callers:
 *     PopRequestPowerIrp @ 0x1403A3C90 (PopRequestPowerIrp.c)
 *     VerifierPoCallDriver @ 0x140A8F2A0 (VerifierPoCallDriver.c)
 * Callees:
 *     IopfCallDriver @ 0x1403B51C4 (IopfCallDriver.c)
 *     IopPerfCallDriver @ 0x14055969C (IopPerfCallDriver.c)
 *     IovCallDriver @ 0x140A802F0 (IovCallDriver.c)
 */

__int64 __fastcall IofCallDriverSpecifyReturn(void *a1)
{
  if ( !IopDispatchCallDriver )
    return IopfCallDriver();
  if ( IopDispatchCallDriver == 3 )
    return IopPerfCallDriver(a1);
  return IovCallDriver(a1);
}
