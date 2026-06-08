/*
 * XREFs of GetCpuIdInfo @ 0x1C000EA60
 * Callers:
 *     AllowSchedulerDirectedPerfStates @ 0x1C00020F4 (AllowSchedulerDirectedPerfStates.c)
 *     IsACountMCountSupported @ 0x1C0002324 (IsACountMCountSupported.c)
 *     ValidatePStateCapability @ 0x1C00026C0 (ValidatePStateCapability.c)
 *     InitEnergyCountersOnCurrentProcessor @ 0x1C001EA50 (InitEnergyCountersOnCurrentProcessor.c)
 *     InitMonitorMWaitSupport @ 0x1C001EE90 (InitMonitorMWaitSupport.c)
 *     IsMonitorMWaitSupported @ 0x1C001EF54 (IsMonitorMWaitSupported.c)
 *     InitDriver @ 0x1C003603C (InitDriver.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetCpuIdInfo(unsigned int a1, _DWORD *a2)
{
  __int64 result; // rax

  _RAX = a1;
  __asm { cpuid }
  *a2 = result;
  a2[1] = _RBX;
  a2[2] = _RCX;
  a2[3] = _RDX;
  return result;
}
