/*
 * XREFs of PipClearDevNodeFlags @ 0x14072C104
 * Callers:
 *     PiProcessClearDeviceProblem @ 0x14071D768 (PiProcessClearDeviceProblem.c)
 *     PnpRestartDeviceNode @ 0x14071D838 (PnpRestartDeviceNode.c)
 *     PiProcessNewDeviceNode @ 0x140729B20 (PiProcessNewDeviceNode.c)
 *     PipEnumerateCompleted @ 0x14072AA10 (PipEnumerateCompleted.c)
 *     PipEnumerateDevice @ 0x14072C4B8 (PipEnumerateDevice.c)
 *     PiProcessReenumeration @ 0x140731D54 (PiProcessReenumeration.c)
 *     PnpProcessRelation @ 0x140731FE4 (PnpProcessRelation.c)
 *     PnpInvalidateRelationsInList @ 0x1407338CC (PnpInvalidateRelationsInList.c)
 *     IopRemoveDevice @ 0x140734134 (IopRemoveDevice.c)
 *     PipClearDevNodeProblem @ 0x140736A08 (PipClearDevNodeProblem.c)
 *     PnpSurpriseRemoveLockedDeviceNode @ 0x140736D5C (PnpSurpriseRemoveLockedDeviceNode.c)
 *     PnpBuildCmResourceLists @ 0x140737EFC (PnpBuildCmResourceLists.c)
 *     PnpAllocateResources @ 0x140738698 (PnpAllocateResources.c)
 *     PnpGetResourceRequirementsForAssignTable @ 0x140738A7C (PnpGetResourceRequirementsForAssignTable.c)
 *     IopReleaseFilteredBootResources @ 0x14073BAE8 (IopReleaseFilteredBootResources.c)
 *     IopReleaseResources @ 0x14073BD7C (IopReleaseResources.c)
 *     IopRemoveLegacyDeviceNode @ 0x14073BF58 (IopRemoveLegacyDeviceNode.c)
 *     PiProcessResourceRequirementsChanged @ 0x14089E2C8 (PiProcessResourceRequirementsChanged.c)
 *     PnpReallocateResources @ 0x1408AED40 (PnpReallocateResources.c)
 *     PipProcessRestartPhase1 @ 0x1408B0E4C (PipProcessRestartPhase1.c)
 *     PnpCancelStopDeviceNode @ 0x1408B3EC4 (PnpCancelStopDeviceNode.c)
 * Callees:
 *     _PnpRaiseNtPlugPlayDevicePropertyChangeEvent @ 0x14072B6D0 (_PnpRaiseNtPlugPlayDevicePropertyChangeEvent.c)
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
