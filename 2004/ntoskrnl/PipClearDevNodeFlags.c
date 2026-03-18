/*
 * XREFs of PipClearDevNodeFlags @ 0x140726F44
 * Callers:
 *     PiProcessClearDeviceProblem @ 0x14071F3E8 (PiProcessClearDeviceProblem.c)
 *     PnpRestartDeviceNode @ 0x14071F4B8 (PnpRestartDeviceNode.c)
 *     PiProcessNewDeviceNode @ 0x140724960 (PiProcessNewDeviceNode.c)
 *     PipEnumerateCompleted @ 0x140725850 (PipEnumerateCompleted.c)
 *     PipEnumerateDevice @ 0x140729138 (PipEnumerateDevice.c)
 *     PipClearDevNodeProblem @ 0x14073015C (PipClearDevNodeProblem.c)
 *     PnpProcessRelation @ 0x140731008 (PnpProcessRelation.c)
 *     PnpInvalidateRelationsInList @ 0x140731BE8 (PnpInvalidateRelationsInList.c)
 *     IopRemoveDevice @ 0x140732450 (IopRemoveDevice.c)
 *     PiProcessReenumeration @ 0x140737E00 (PiProcessReenumeration.c)
 *     PnpBuildCmResourceLists @ 0x140739A7C (PnpBuildCmResourceLists.c)
 *     PnpAllocateResources @ 0x14073A218 (PnpAllocateResources.c)
 *     PnpGetResourceRequirementsForAssignTable @ 0x14073A5FC (PnpGetResourceRequirementsForAssignTable.c)
 *     IopReleaseFilteredBootResources @ 0x14073D668 (IopReleaseFilteredBootResources.c)
 *     IopReleaseResources @ 0x14073D8FC (IopReleaseResources.c)
 *     IopRemoveLegacyDeviceNode @ 0x14073DAD8 (IopRemoveLegacyDeviceNode.c)
 *     PnpSurpriseRemoveLockedDeviceNode @ 0x14075C2E4 (PnpSurpriseRemoveLockedDeviceNode.c)
 *     PiProcessResourceRequirementsChanged @ 0x14089F5E8 (PiProcessResourceRequirementsChanged.c)
 *     PnpReallocateResources @ 0x1408B0060 (PnpReallocateResources.c)
 *     PipProcessRestartPhase1 @ 0x1408B216C (PipProcessRestartPhase1.c)
 *     PnpCancelStopDeviceNode @ 0x1408B51E4 (PnpCancelStopDeviceNode.c)
 * Callees:
 *     _PnpRaiseNtPlugPlayDevicePropertyChangeEvent @ 0x140726510 (_PnpRaiseNtPlugPlayDevicePropertyChangeEvent.c)
 */

__int64 __fastcall PipClearDevNodeFlags(__int64 a1, int a2)
{
  unsigned int v2; // edi
  int v3; // edx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 result; // rax
  __int64 v8; // rcx

  v2 = *(_DWORD *)(a1 + 396);
  v3 = v2 & ~a2;
  *(_DWORD *)(a1 + 396) = v3;
  if ( ((v2 ^ v3) & 0x307000) != 0 )
  {
    v5 = *(_QWORD *)(a1 + 48);
    if ( v5 )
    {
      PnpRaiseNtPlugPlayDevicePropertyChangeEvent(a1, v5, 11);
      v6 = *(unsigned int *)(a1 + 396);
      result = v2 ^ *(_DWORD *)(a1 + 396);
      if ( (((unsigned __int16)v2 ^ *(_WORD *)(a1 + 396)) & 0x4000) != 0 )
      {
        result = PnpRaiseNtPlugPlayDevicePropertyChangeEvent(v6, *(_QWORD *)(a1 + 48), 28);
        LODWORD(v6) = *(_DWORD *)(a1 + 396);
      }
      v8 = v2 ^ (unsigned int)v6;
      if ( (v8 & 0x2000) != 0 )
        return PnpRaiseNtPlugPlayDevicePropertyChangeEvent(v8, *(_QWORD *)(a1 + 48), 27);
    }
  }
  return result;
}
