/*
 * XREFs of PipSetDevNodeFlags @ 0x14074561C
 * Callers:
 *     PiProcessSetDeviceProblem @ 0x140731584 (PiProcessSetDeviceProblem.c)
 *     PnpProcessQueryRemoveAndEject @ 0x140736914 (PnpProcessQueryRemoveAndEject.c)
 *     IopReleaseDeviceResources @ 0x140738748 (IopReleaseDeviceResources.c)
 *     PipSetDevNodeProblem @ 0x1407394EC (PipSetDevNodeProblem.c)
 *     PnpProcessAssignResources @ 0x14074058C (PnpProcessAssignResources.c)
 *     PipCallDriverAddDevice @ 0x140741988 (PipCallDriverAddDevice.c)
 *     PipCallDriverAddDeviceQueryRoutine @ 0x140742518 (PipCallDriverAddDeviceQueryRoutine.c)
 *     PiProcessNewDeviceNode @ 0x140744490 (PiProcessNewDeviceNode.c)
 *     PipEnumerateCompleted @ 0x140745380 (PipEnumerateCompleted.c)
 *     PipProcessEnumeratedChildDevice @ 0x14074555C (PipProcessEnumeratedChildDevice.c)
 *     PnpQueryID @ 0x140747150 (PnpQueryID.c)
 *     PipProcessStartPhase3 @ 0x14074AB70 (PipProcessStartPhase3.c)
 *     IopInitializeDeviceInstanceKey @ 0x14074ED50 (IopInitializeDeviceInstanceKey.c)
 *     PnpBuildCmResourceLists @ 0x14074F54C (PnpBuildCmResourceLists.c)
 *     PnpAllocateResources @ 0x14074FCE8 (PnpAllocateResources.c)
 *     PiQueryAndAllocateBootResources @ 0x14075028C (PiQueryAndAllocateBootResources.c)
 *     PiQueryResourceRequirements @ 0x140750B94 (PiQueryResourceRequirements.c)
 *     IopLegacyResourceAllocation @ 0x140753474 (IopLegacyResourceAllocation.c)
 *     PiMarkDeviceTreeForReenumeration @ 0x14076D904 (PiMarkDeviceTreeForReenumeration.c)
 *     PiMarkDeviceTreeForReenumerationWorker @ 0x140780D30 (PiMarkDeviceTreeForReenumerationWorker.c)
 *     IoReportDetectedDevice @ 0x1407AE910 (IoReportDetectedDevice.c)
 *     IopAllocateBootResourcesInternal @ 0x1407B46D0 (IopAllocateBootResourcesInternal.c)
 *     PiProcessResourceRequirementsChanged @ 0x1408A26E8 (PiProcessResourceRequirementsChanged.c)
 *     PnpReallocateResources @ 0x1408B3160 (PnpReallocateResources.c)
 *     PiInitializeDevice @ 0x1408B3C6C (PiInitializeDevice.c)
 *     PnpQueryRebalanceWorker @ 0x1408B8578 (PnpQueryRebalanceWorker.c)
 *     PnpQueryStopDeviceNode @ 0x1408B8714 (PnpQueryStopDeviceNode.c)
 *     IopInitializePlugPlayServices @ 0x140A52280 (IopInitializePlugPlayServices.c)
 *     IopAllocateLegacyBootResources @ 0x140A674D8 (IopAllocateLegacyBootResources.c)
 *     PnpMarkHalDeviceNode @ 0x140A71228 (PnpMarkHalDeviceNode.c)
 * Callees:
 *     _PnpRaiseNtPlugPlayDevicePropertyChangeEvent @ 0x140746040 (_PnpRaiseNtPlugPlayDevicePropertyChangeEvent.c)
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
