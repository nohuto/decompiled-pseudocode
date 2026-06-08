/*
 * XREFs of InitEnergyCountersMsr @ 0x1C0025E84
 * Callers:
 *     InitEnergyCounters @ 0x1C0025D30 (InitEnergyCounters.c)
 * Callees:
 *     <none>
 */

char (__fastcall *__fastcall InitEnergyCountersMsr(
        int a1))(__int64 a1, __int64 a2, __int64 a3, __int64 a4, unsigned __int64 *a5)
{
  char (__fastcall *result)(__int64, __int64, __int64, __int64, unsigned __int64 *); // rax

  if ( !a1 )
  {
    *(_DWORD *)&WPP_MAIN_CB.DeviceQueue.Type &= ~0x40u;
    result = ComputeProcessorEnergyMsr;
    qword_1C001CAF8[0] = 0LL;
    qword_1C001CAF0[0] = (__int64)ComputeProcessorEnergyMsr;
  }
  return result;
}
