/*
 * XREFs of PipClearDevNodeFlags @ 0x14076FBEC
 * Callers:
 *     PiProcessClearDeviceProblem @ 0x140660388 (PiProcessClearDeviceProblem.c)
 *     PnpRestartDeviceNode @ 0x14066044C (PnpRestartDeviceNode.c)
 *     PnpAllocateResources @ 0x140747FB4 (PnpAllocateResources.c)
 *     PnpGetResourceRequirementsForAssignTable @ 0x1407483B4 (PnpGetResourceRequirementsForAssignTable.c)
 *     PipEnumerateDevice @ 0x14074B420 (PipEnumerateDevice.c)
 *     PiProcessReenumeration @ 0x140764BE0 (PiProcessReenumeration.c)
 *     PipClearDevNodeProblem @ 0x140764FE4 (PipClearDevNodeProblem.c)
 *     IopRemoveDevice @ 0x140766C3C (IopRemoveDevice.c)
 *     PnpProcessRelation @ 0x140767AEC (PnpProcessRelation.c)
 *     PiProcessNewDeviceNode @ 0x14076E9B8 (PiProcessNewDeviceNode.c)
 *     PipEnumerateCompleted @ 0x14076F8AC (PipEnumerateCompleted.c)
 *     PnpInvalidateRelationsInList @ 0x14080E8D0 (PnpInvalidateRelationsInList.c)
 *     PnpSurpriseRemoveLockedDeviceNode @ 0x14081059C (PnpSurpriseRemoveLockedDeviceNode.c)
 *     IopRemoveLegacyDeviceNode @ 0x14081F69C (IopRemoveLegacyDeviceNode.c)
 *     IopReleaseResources @ 0x14081F6E0 (IopReleaseResources.c)
 *     PnpBuildCmResourceLists @ 0x14081FCD8 (PnpBuildCmResourceLists.c)
 *     IopReleaseFilteredBootResources @ 0x140831280 (IopReleaseFilteredBootResources.c)
 *     PiProcessResourceRequirementsChanged @ 0x140947934 (PiProcessResourceRequirementsChanged.c)
 *     PnpReallocateResources @ 0x140958D9C (PnpReallocateResources.c)
 *     PnpCancelStopDeviceNode @ 0x140959B60 (PnpCancelStopDeviceNode.c)
 *     PipProcessRestartPhase1 @ 0x14095B2D4 (PipProcessRestartPhase1.c)
 * Callees:
 *     _PnpRaiseNtPlugPlayDevicePropertyChangeEvent @ 0x140772044 (_PnpRaiseNtPlugPlayDevicePropertyChangeEvent.c)
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
      PnpRaiseNtPlugPlayDevicePropertyChangeEvent(a1, v5, 11LL);
      v6 = *(unsigned int *)(a1 + 396);
      result = v2 ^ *(_DWORD *)(a1 + 396);
      if ( (((unsigned __int16)v2 ^ *(_WORD *)(a1 + 396)) & 0x4000) != 0 )
      {
        result = PnpRaiseNtPlugPlayDevicePropertyChangeEvent(v6, *(_QWORD *)(a1 + 48), 28LL);
        LODWORD(v6) = *(_DWORD *)(a1 + 396);
      }
      v8 = v2 ^ (unsigned int)v6;
      if ( (v8 & 0x2000) != 0 )
        return PnpRaiseNtPlugPlayDevicePropertyChangeEvent(v8, *(_QWORD *)(a1 + 48), 27LL);
    }
  }
  return result;
}
