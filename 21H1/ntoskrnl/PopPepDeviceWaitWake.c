/*
 * XREFs of PopPepDeviceWaitWake @ 0x14056EAE0
 * Callers:
 *     PopRequestPowerIrp @ 0x14036CE40 (PopRequestPowerIrp.c)
 *     PopRequestCompletion @ 0x140377BC0 (PopRequestCompletion.c)
 * Callees:
 *     PopPepUpdateConstraints @ 0x14039D04C (PopPepUpdateConstraints.c)
 */

int __fastcall PopPepDeviceWaitWake(__int64 a1, char a2)
{
  int result; // eax

  if ( a2 )
    result = _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 128), 0xFFFFFFFF);
  else
    result = _InterlockedIncrement((volatile signed __int32 *)(a1 + 128));
  if ( result == 1 )
    return PopPepUpdateConstraints(a1, 5, a2);
  return result;
}
