/*
 * XREFs of GetCpuIdInfo @ 0x1C000EC00
 * Callers:
 *     AllowSchedulerDirectedPerfStates @ 0x1C00020C4 (AllowSchedulerDirectedPerfStates.c)
 *     IsACountMCountSupported @ 0x1C000230C (IsACountMCountSupported.c)
 *     ValidatePStateCapability @ 0x1C0002760 (ValidatePStateCapability.c)
 *     InitEnergyCountersOnCurrentProcessor @ 0x1C0020A50 (InitEnergyCountersOnCurrentProcessor.c)
 *     InitMonitorMWaitSupport @ 0x1C0020E90 (InitMonitorMWaitSupport.c)
 *     IsMonitorMWaitSupported @ 0x1C0020F54 (IsMonitorMWaitSupported.c)
 *     InitDriver @ 0x1C003803C (InitDriver.c)
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
