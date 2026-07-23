/*
 * XREFs of PipSetDevNodeFlags @ 0x1407457DC
 * Callers:
 *     PiProcessSetDeviceProblem @ 0x140731744 (PiProcessSetDeviceProblem.c)
 *     PnpProcessQueryRemoveAndEject @ 0x140736AD4 (PnpProcessQueryRemoveAndEject.c)
 *     IopReleaseDeviceResources @ 0x140738908 (IopReleaseDeviceResources.c)
 *     PipSetDevNodeProblem @ 0x1407396AC (PipSetDevNodeProblem.c)
 *     PnpProcessAssignResources @ 0x14074074C (PnpProcessAssignResources.c)
 *     PipCallDriverAddDevice @ 0x140741B48 (PipCallDriverAddDevice.c)
 *     PipCallDriverAddDeviceQueryRoutine @ 0x1407426D8 (PipCallDriverAddDeviceQueryRoutine.c)
 *     PiProcessNewDeviceNode @ 0x140744650 (PiProcessNewDeviceNode.c)
 *     PipEnumerateCompleted @ 0x140745540 (PipEnumerateCompleted.c)
 *     PipProcessEnumeratedChildDevice @ 0x14074571C (PipProcessEnumeratedChildDevice.c)
 *     PnpQueryID @ 0x140747310 (PnpQueryID.c)
 *     PipProcessStartPhase3 @ 0x14074AD30 (PipProcessStartPhase3.c)
 *     IopInitializeDeviceInstanceKey @ 0x14074EF10 (IopInitializeDeviceInstanceKey.c)
 *     PnpBuildCmResourceLists @ 0x14074F70C (PnpBuildCmResourceLists.c)
 *     PnpAllocateResources @ 0x14074FEA8 (PnpAllocateResources.c)
 *     PiQueryAndAllocateBootResources @ 0x14075044C (PiQueryAndAllocateBootResources.c)
 *     PiQueryResourceRequirements @ 0x140750D54 (PiQueryResourceRequirements.c)
 *     IopLegacyResourceAllocation @ 0x140753634 (IopLegacyResourceAllocation.c)
 *     PiMarkDeviceTreeForReenumeration @ 0x14076DAC4 (PiMarkDeviceTreeForReenumeration.c)
 *     PiMarkDeviceTreeForReenumerationWorker @ 0x140780EF0 (PiMarkDeviceTreeForReenumerationWorker.c)
 *     IoReportDetectedDevice @ 0x1407AEB10 (IoReportDetectedDevice.c)
 *     IopAllocateBootResourcesInternal @ 0x1407B5FF0 (IopAllocateBootResourcesInternal.c)
 *     PiProcessResourceRequirementsChanged @ 0x1408A2848 (PiProcessResourceRequirementsChanged.c)
 *     PnpReallocateResources @ 0x1408B32C0 (PnpReallocateResources.c)
 *     PiInitializeDevice @ 0x1408B3DCC (PiInitializeDevice.c)
 *     PnpQueryRebalanceWorker @ 0x1408B86D8 (PnpQueryRebalanceWorker.c)
 *     PnpQueryStopDeviceNode @ 0x1408B8874 (PnpQueryStopDeviceNode.c)
 *     IopInitializePlugPlayServices @ 0x140A53280 (IopInitializePlugPlayServices.c)
 *     IopAllocateLegacyBootResources @ 0x140A684D8 (IopAllocateLegacyBootResources.c)
 *     PnpMarkHalDeviceNode @ 0x140A72228 (PnpMarkHalDeviceNode.c)
 * Callees:
 *     _PnpRaiseNtPlugPlayDevicePropertyChangeEvent @ 0x140746200 (_PnpRaiseNtPlugPlayDevicePropertyChangeEvent.c)
 */

__int64 __fastcall PipSetDevNodeFlags(__int64 a1, int a2)
{
  unsigned int v2; // edi
  __int64 result; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rcx

  v2 = *(_DWORD *)(a1 + 396);
  *(_DWORD *)(a1 + 396) = a2 | v2;
  result = v2 ^ (a2 | v2);
  if ( (result & 0x307000) != 0 )
  {
    v5 = *(_QWORD *)(a1 + 48);
    if ( v5 )
    {
      PnpRaiseNtPlugPlayDevicePropertyChangeEvent(a1, v5, 11LL);
      v6 = *(unsigned int *)(a1 + 396);
      result = v2 ^ *(_DWORD *)(a1 + 396);
      if ( (((unsigned __int16)v2 ^ *(_WORD *)(a1 + 396)) & 0x4000) != 0 )
      {
        result = PnpRaiseNtPlugPlayDevicePropertyChangeEvent(v6, *(_QWORD *)(a1 + 48), 28LL);
        LODWORD(v6) = *(_DWORD *)(a1 + 396);
      }
      v7 = v2 ^ (unsigned int)v6;
      if ( (v7 & 0x2000) != 0 )
        return PnpRaiseNtPlugPlayDevicePropertyChangeEvent(v7, *(_QWORD *)(a1 + 48), 27LL);
    }
  }
  return result;
}
