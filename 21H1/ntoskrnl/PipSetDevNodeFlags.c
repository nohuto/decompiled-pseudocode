/*
 * XREFs of PipSetDevNodeFlags @ 0x14072ACAC
 * Callers:
 *     PiProcessSetDeviceProblem @ 0x14071D584 (PiProcessSetDeviceProblem.c)
 *     PnpProcessAssignResources @ 0x140725C1C (PnpProcessAssignResources.c)
 *     PipCallDriverAddDevice @ 0x140727018 (PipCallDriverAddDevice.c)
 *     PipCallDriverAddDeviceQueryRoutine @ 0x140727BA8 (PipCallDriverAddDeviceQueryRoutine.c)
 *     PiProcessNewDeviceNode @ 0x140729B20 (PiProcessNewDeviceNode.c)
 *     PipEnumerateCompleted @ 0x14072AA10 (PipEnumerateCompleted.c)
 *     PipProcessEnumeratedChildDevice @ 0x14072ABEC (PipProcessEnumeratedChildDevice.c)
 *     PnpQueryID @ 0x14072C7E0 (PnpQueryID.c)
 *     PipProcessStartPhase3 @ 0x14073045C (PipProcessStartPhase3.c)
 *     PiMarkDeviceTreeForReenumeration @ 0x140731E08 (PiMarkDeviceTreeForReenumeration.c)
 *     PnpProcessQueryRemoveAndEject @ 0x14073279C (PnpProcessQueryRemoveAndEject.c)
 *     IopReleaseDeviceResources @ 0x140733F88 (IopReleaseDeviceResources.c)
 *     PipSetDevNodeProblem @ 0x140734AA4 (PipSetDevNodeProblem.c)
 *     IopInitializeDeviceInstanceKey @ 0x140737704 (IopInitializeDeviceInstanceKey.c)
 *     PnpBuildCmResourceLists @ 0x140737EFC (PnpBuildCmResourceLists.c)
 *     PnpAllocateResources @ 0x140738698 (PnpAllocateResources.c)
 *     PiQueryAndAllocateBootResources @ 0x140738C3C (PiQueryAndAllocateBootResources.c)
 *     PiQueryResourceRequirements @ 0x140739544 (PiQueryResourceRequirements.c)
 *     IopLegacyResourceAllocation @ 0x14073BE24 (IopLegacyResourceAllocation.c)
 *     PiMarkDeviceTreeForReenumerationWorker @ 0x14076BD80 (PiMarkDeviceTreeForReenumerationWorker.c)
 *     IoReportDetectedDevice @ 0x140796A80 (IoReportDetectedDevice.c)
 *     IopAllocateBootResourcesInternal @ 0x14079DB50 (IopAllocateBootResourcesInternal.c)
 *     PiProcessResourceRequirementsChanged @ 0x14089E2C8 (PiProcessResourceRequirementsChanged.c)
 *     PnpReallocateResources @ 0x1408AED40 (PnpReallocateResources.c)
 *     PiInitializeDevice @ 0x1408AF84C (PiInitializeDevice.c)
 *     PnpQueryRebalanceWorker @ 0x1408B4158 (PnpQueryRebalanceWorker.c)
 *     PnpQueryStopDeviceNode @ 0x1408B42F4 (PnpQueryStopDeviceNode.c)
 *     IopInitializePlugPlayServices @ 0x140A4AB7C (IopInitializePlugPlayServices.c)
 *     IopAllocateLegacyBootResources @ 0x140A5FAAC (IopAllocateLegacyBootResources.c)
 *     PnpMarkHalDeviceNode @ 0x140A6D4E0 (PnpMarkHalDeviceNode.c)
 * Callees:
 *     _PnpRaiseNtPlugPlayDevicePropertyChangeEvent @ 0x14072B6D0 (_PnpRaiseNtPlugPlayDevicePropertyChangeEvent.c)
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
