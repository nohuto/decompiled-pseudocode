/*
 * XREFs of PipSetDevNodeFlags @ 0x14073457C
 * Callers:
 *     PiProcessSetDeviceProblem @ 0x14072D254 (PiProcessSetDeviceProblem.c)
 *     PiProcessNewDeviceNode @ 0x1407333F0 (PiProcessNewDeviceNode.c)
 *     PipEnumerateCompleted @ 0x1407342E0 (PipEnumerateCompleted.c)
 *     PipProcessEnumeratedChildDevice @ 0x1407344BC (PipProcessEnumeratedChildDevice.c)
 *     PipCallDriverAddDevice @ 0x1407361D4 (PipCallDriverAddDevice.c)
 *     PipCallDriverAddDeviceQueryRoutine @ 0x140736D64 (PipCallDriverAddDeviceQueryRoutine.c)
 *     PnpProcessAssignResources @ 0x14073859C (PnpProcessAssignResources.c)
 *     PipProcessStartPhase3 @ 0x140739750 (PipProcessStartPhase3.c)
 *     PiMarkDeviceTreeForReenumeration @ 0x14073F4B0 (PiMarkDeviceTreeForReenumeration.c)
 *     PnpProcessQueryRemoveAndEject @ 0x14073F768 (PnpProcessQueryRemoveAndEject.c)
 *     IopReleaseDeviceResources @ 0x14074164C (IopReleaseDeviceResources.c)
 *     PipSetDevNodeProblem @ 0x1407424D8 (PipSetDevNodeProblem.c)
 *     IopInitializeDeviceInstanceKey @ 0x140748194 (IopInitializeDeviceInstanceKey.c)
 *     PnpBuildCmResourceLists @ 0x14074898C (PnpBuildCmResourceLists.c)
 *     PnpAllocateResources @ 0x140749128 (PnpAllocateResources.c)
 *     PiQueryAndAllocateBootResources @ 0x1407496CC (PiQueryAndAllocateBootResources.c)
 *     PiQueryResourceRequirements @ 0x140749FD4 (PiQueryResourceRequirements.c)
 *     IopLegacyResourceAllocation @ 0x14074C8B4 (IopLegacyResourceAllocation.c)
 *     PnpQueryID @ 0x14075F870 (PnpQueryID.c)
 *     PiMarkDeviceTreeForReenumerationWorker @ 0x14077CF50 (PiMarkDeviceTreeForReenumerationWorker.c)
 *     IoReportDetectedDevice @ 0x1407A5B60 (IoReportDetectedDevice.c)
 *     IopAllocateBootResourcesInternal @ 0x1407B0E60 (IopAllocateBootResourcesInternal.c)
 *     PiProcessResourceRequirementsChanged @ 0x1408A5118 (PiProcessResourceRequirementsChanged.c)
 *     PnpReallocateResources @ 0x1408B5B90 (PnpReallocateResources.c)
 *     PiInitializeDevice @ 0x1408B669C (PiInitializeDevice.c)
 *     PnpQueryRebalanceWorker @ 0x1408BB098 (PnpQueryRebalanceWorker.c)
 *     PnpQueryStopDeviceNode @ 0x1408BB234 (PnpQueryStopDeviceNode.c)
 *     IopInitializePlugPlayServices @ 0x140A50C78 (IopInitializePlugPlayServices.c)
 *     IopAllocateLegacyBootResources @ 0x140A69F6C (IopAllocateLegacyBootResources.c)
 *     PnpMarkHalDeviceNode @ 0x140A742A8 (PnpMarkHalDeviceNode.c)
 * Callees:
 *     _PnpRaiseNtPlugPlayDevicePropertyChangeEvent @ 0x140734FA0 (_PnpRaiseNtPlugPlayDevicePropertyChangeEvent.c)
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
