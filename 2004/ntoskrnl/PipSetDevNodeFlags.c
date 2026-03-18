/*
 * XREFs of PipSetDevNodeFlags @ 0x140725AEC
 * Callers:
 *     PiProcessSetDeviceProblem @ 0x14071F204 (PiProcessSetDeviceProblem.c)
 *     PiProcessNewDeviceNode @ 0x140724960 (PiProcessNewDeviceNode.c)
 *     PipEnumerateCompleted @ 0x140725850 (PipEnumerateCompleted.c)
 *     PipProcessEnumeratedChildDevice @ 0x140725A2C (PipProcessEnumeratedChildDevice.c)
 *     PipCallDriverAddDevice @ 0x140727744 (PipCallDriverAddDevice.c)
 *     PipCallDriverAddDeviceQueryRoutine @ 0x1407282D4 (PipCallDriverAddDeviceQueryRoutine.c)
 *     PnpProcessAssignResources @ 0x140729B0C (PnpProcessAssignResources.c)
 *     PipProcessStartPhase3 @ 0x14072ACC0 (PipProcessStartPhase3.c)
 *     PnpProcessQueryRemoveAndEject @ 0x1407303C4 (PnpProcessQueryRemoveAndEject.c)
 *     IopReleaseDeviceResources @ 0x1407322A4 (IopReleaseDeviceResources.c)
 *     PipSetDevNodeProblem @ 0x140733048 (PipSetDevNodeProblem.c)
 *     PiMarkDeviceTreeForReenumeration @ 0x140737EB4 (PiMarkDeviceTreeForReenumeration.c)
 *     IopInitializeDeviceInstanceKey @ 0x140739284 (IopInitializeDeviceInstanceKey.c)
 *     PnpBuildCmResourceLists @ 0x140739A7C (PnpBuildCmResourceLists.c)
 *     PnpAllocateResources @ 0x14073A218 (PnpAllocateResources.c)
 *     PiQueryAndAllocateBootResources @ 0x14073A7BC (PiQueryAndAllocateBootResources.c)
 *     PiQueryResourceRequirements @ 0x14073B0C4 (PiQueryResourceRequirements.c)
 *     IopLegacyResourceAllocation @ 0x14073D9A4 (IopLegacyResourceAllocation.c)
 *     PnpQueryID @ 0x140750C90 (PnpQueryID.c)
 *     PiMarkDeviceTreeForReenumerationWorker @ 0x14076E520 (PiMarkDeviceTreeForReenumerationWorker.c)
 *     IoReportDetectedDevice @ 0x140796830 (IoReportDetectedDevice.c)
 *     IopAllocateBootResourcesInternal @ 0x1407A1B30 (IopAllocateBootResourcesInternal.c)
 *     PiProcessResourceRequirementsChanged @ 0x14089F5E8 (PiProcessResourceRequirementsChanged.c)
 *     PnpReallocateResources @ 0x1408B0060 (PnpReallocateResources.c)
 *     PiInitializeDevice @ 0x1408B0B6C (PiInitializeDevice.c)
 *     PnpQueryRebalanceWorker @ 0x1408B5478 (PnpQueryRebalanceWorker.c)
 *     PnpQueryStopDeviceNode @ 0x1408B5614 (PnpQueryStopDeviceNode.c)
 *     IopInitializePlugPlayServices @ 0x140A505F8 (IopInitializePlugPlayServices.c)
 *     IopAllocateLegacyBootResources @ 0x140A62BAC (IopAllocateLegacyBootResources.c)
 *     PnpMarkHalDeviceNode @ 0x140A6DB88 (PnpMarkHalDeviceNode.c)
 * Callees:
 *     _PnpRaiseNtPlugPlayDevicePropertyChangeEvent @ 0x140726510 (_PnpRaiseNtPlugPlayDevicePropertyChangeEvent.c)
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
