/*
 * XREFs of PipClearDevNodeFlags @ 0x1407359D4
 * Callers:
 *     PiProcessClearDeviceProblem @ 0x14072D438 (PiProcessClearDeviceProblem.c)
 *     PnpRestartDeviceNode @ 0x14072D508 (PnpRestartDeviceNode.c)
 *     PiProcessNewDeviceNode @ 0x1407333F0 (PiProcessNewDeviceNode.c)
 *     PipEnumerateCompleted @ 0x1407342E0 (PipEnumerateCompleted.c)
 *     PipEnumerateDevice @ 0x140737BC8 (PipEnumerateDevice.c)
 *     PiProcessReenumeration @ 0x14073F3FC (PiProcessReenumeration.c)
 *     PipClearDevNodeProblem @ 0x14073F500 (PipClearDevNodeProblem.c)
 *     PnpProcessRelation @ 0x1407403AC (PnpProcessRelation.c)
 *     PnpInvalidateRelationsInList @ 0x140740F8C (PnpInvalidateRelationsInList.c)
 *     IopRemoveDevice @ 0x1407417F8 (IopRemoveDevice.c)
 *     PnpBuildCmResourceLists @ 0x14074898C (PnpBuildCmResourceLists.c)
 *     PnpAllocateResources @ 0x140749128 (PnpAllocateResources.c)
 *     PnpGetResourceRequirementsForAssignTable @ 0x14074950C (PnpGetResourceRequirementsForAssignTable.c)
 *     IopReleaseFilteredBootResources @ 0x14074C578 (IopReleaseFilteredBootResources.c)
 *     IopReleaseResources @ 0x14074C80C (IopReleaseResources.c)
 *     IopRemoveLegacyDeviceNode @ 0x14074C9E8 (IopRemoveLegacyDeviceNode.c)
 *     PnpSurpriseRemoveLockedDeviceNode @ 0x14076AA54 (PnpSurpriseRemoveLockedDeviceNode.c)
 *     PiProcessResourceRequirementsChanged @ 0x1408A5118 (PiProcessResourceRequirementsChanged.c)
 *     PnpReallocateResources @ 0x1408B5B90 (PnpReallocateResources.c)
 *     PipProcessRestartPhase1 @ 0x1408B7D8C (PipProcessRestartPhase1.c)
 *     PnpCancelStopDeviceNode @ 0x1408BAE04 (PnpCancelStopDeviceNode.c)
 * Callees:
 *     _PnpRaiseNtPlugPlayDevicePropertyChangeEvent @ 0x140734FA0 (_PnpRaiseNtPlugPlayDevicePropertyChangeEvent.c)
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
