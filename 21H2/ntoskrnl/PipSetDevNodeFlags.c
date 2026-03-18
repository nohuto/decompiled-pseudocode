/*
 * XREFs of PipSetDevNodeFlags @ 0x14076FB70
 * Callers:
 *     PipCallDriverAddDeviceQueryRoutine @ 0x14067B998 (PipCallDriverAddDeviceQueryRoutine.c)
 *     IopInitializeDeviceInstanceKey @ 0x1406CF970 (IopInitializeDeviceInstanceKey.c)
 *     PnpAllocateResources @ 0x140747FB4 (PnpAllocateResources.c)
 *     PiQueryAndAllocateBootResources @ 0x14074856C (PiQueryAndAllocateBootResources.c)
 *     PnpProcessAssignResources @ 0x140749294 (PnpProcessAssignResources.c)
 *     PiQueryResourceRequirements @ 0x140749A80 (PiQueryResourceRequirements.c)
 *     PnpQueryID @ 0x14074C8DC (PnpQueryID.c)
 *     PiMarkDeviceTreeForReenumeration @ 0x140764C94 (PiMarkDeviceTreeForReenumeration.c)
 *     PipSetDevNodeProblem @ 0x140765114 (PipSetDevNodeProblem.c)
 *     PnpProcessQueryRemoveAndEject @ 0x1407655BC (PnpProcessQueryRemoveAndEject.c)
 *     IopReleaseDeviceResources @ 0x140766A5C (IopReleaseDeviceResources.c)
 *     PipProcessStartPhase3 @ 0x14076BE08 (PipProcessStartPhase3.c)
 *     PiProcessNewDeviceNode @ 0x14076E9B8 (PiProcessNewDeviceNode.c)
 *     PipEnumerateCompleted @ 0x14076F8AC (PipEnumerateCompleted.c)
 *     PipProcessEnumeratedChildDevice @ 0x14076FAB0 (PipProcessEnumeratedChildDevice.c)
 *     PipCallDriverAddDevice @ 0x1407743C8 (PipCallDriverAddDevice.c)
 *     PiMarkDeviceTreeForReenumerationWorker @ 0x140810960 (PiMarkDeviceTreeForReenumerationWorker.c)
 *     IoReportDetectedDevice @ 0x14081EB20 (IoReportDetectedDevice.c)
 *     IopLegacyResourceAllocation @ 0x14081F570 (IopLegacyResourceAllocation.c)
 *     PnpBuildCmResourceLists @ 0x14081FCD8 (PnpBuildCmResourceLists.c)
 *     IopAllocateBootResourcesInternal @ 0x140820308 (IopAllocateBootResourcesInternal.c)
 *     PiProcessResourceRequirementsChanged @ 0x140947934 (PiProcessResourceRequirementsChanged.c)
 *     PiProcessSetDeviceProblem @ 0x140947A8C (PiProcessSetDeviceProblem.c)
 *     PnpReallocateResources @ 0x140958D9C (PnpReallocateResources.c)
 *     PiInitializeDevice @ 0x14095975C (PiInitializeDevice.c)
 *     PnpQueryRebalanceWorker @ 0x140959DF4 (PnpQueryRebalanceWorker.c)
 *     PnpQueryStopDeviceNode @ 0x140959F9C (PnpQueryStopDeviceNode.c)
 *     IopAllocateLegacyBootResources @ 0x140AF7328 (IopAllocateLegacyBootResources.c)
 *     IopInitializePlugPlayServices @ 0x140B0046C (IopInitializePlugPlayServices.c)
 *     PnpMarkHalDeviceNode @ 0x140B2D6B4 (PnpMarkHalDeviceNode.c)
 * Callees:
 *     _PnpRaiseNtPlugPlayDevicePropertyChangeEvent @ 0x140772044 (_PnpRaiseNtPlugPlayDevicePropertyChangeEvent.c)
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
