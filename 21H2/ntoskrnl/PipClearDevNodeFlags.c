/*
 * XREFs of PipClearDevNodeFlags @ 0x140746C34
 * Callers:
 *     PiProcessClearDeviceProblem @ 0x140731928 (PiProcessClearDeviceProblem.c)
 *     PnpRestartDeviceNode @ 0x1407319F8 (PnpRestartDeviceNode.c)
 *     PnpSurpriseRemoveLockedDeviceNode @ 0x140736358 (PnpSurpriseRemoveLockedDeviceNode.c)
 *     PnpProcessRelation @ 0x14073766C (PnpProcessRelation.c)
 *     PnpInvalidateRelationsInList @ 0x14073824C (PnpInvalidateRelationsInList.c)
 *     IopRemoveDevice @ 0x140738AB4 (IopRemoveDevice.c)
 *     PipClearDevNodeProblem @ 0x140739914 (PipClearDevNodeProblem.c)
 *     PiProcessNewDeviceNode @ 0x140744650 (PiProcessNewDeviceNode.c)
 *     PipEnumerateCompleted @ 0x140745540 (PipEnumerateCompleted.c)
 *     PipEnumerateDevice @ 0x140746FE8 (PipEnumerateDevice.c)
 *     PnpBuildCmResourceLists @ 0x14074F70C (PnpBuildCmResourceLists.c)
 *     PnpAllocateResources @ 0x14074FEA8 (PnpAllocateResources.c)
 *     PnpGetResourceRequirementsForAssignTable @ 0x14075028C (PnpGetResourceRequirementsForAssignTable.c)
 *     IopReleaseFilteredBootResources @ 0x1407532F8 (IopReleaseFilteredBootResources.c)
 *     IopReleaseResources @ 0x14075358C (IopReleaseResources.c)
 *     IopRemoveLegacyDeviceNode @ 0x140753768 (IopRemoveLegacyDeviceNode.c)
 *     PiProcessReenumeration @ 0x14076DA10 (PiProcessReenumeration.c)
 *     PiProcessResourceRequirementsChanged @ 0x1408A2848 (PiProcessResourceRequirementsChanged.c)
 *     PnpReallocateResources @ 0x1408B32C0 (PnpReallocateResources.c)
 *     PipProcessRestartPhase1 @ 0x1408B53CC (PipProcessRestartPhase1.c)
 *     PnpCancelStopDeviceNode @ 0x1408B8444 (PnpCancelStopDeviceNode.c)
 * Callees:
 *     _PnpRaiseNtPlugPlayDevicePropertyChangeEvent @ 0x140746200 (_PnpRaiseNtPlugPlayDevicePropertyChangeEvent.c)
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
