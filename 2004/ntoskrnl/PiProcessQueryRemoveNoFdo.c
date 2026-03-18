/*
 * XREFs of PiProcessQueryRemoveNoFdo @ 0x14071F344
 * Callers:
 *     PnpProcessQueryRemoveAndEject @ 0x1407303C4 (PnpProcessQueryRemoveAndEject.c)
 * Callees:
 *     PnpRestartDeviceNode @ 0x14071F4B8 (PnpRestartDeviceNode.c)
 *     PipIsProblemReadonly @ 0x14071F5B4 (PipIsProblemReadonly.c)
 *     PipClearDevNodeProblem @ 0x14073015C (PipClearDevNodeProblem.c)
 *     PiGetTargetDeviceNode @ 0x1407309FC (PiGetTargetDeviceNode.c)
 *     PipSetDevNodeProblem @ 0x140733048 (PipSetDevNodeProblem.c)
 */

__int64 __fastcall PiProcessQueryRemoveNoFdo(__int64 a1)
{
  _DWORD *TargetDeviceNode; // rdi
  unsigned int v3; // ebx
  int v4; // r9d
  __int64 v5; // rcx
  int v6; // eax

  TargetDeviceNode = (_DWORD *)PiGetTargetDeviceNode();
  v3 = 0;
  if ( ((TargetDeviceNode[75] - 770) & 0xFFFFFFEF) == 0 )
  {
    v4 = TargetDeviceNode[99];
    if ( (v4 & 0x6000) != 0
      && !(unsigned int)PipIsProblemReadonly(TargetDeviceNode, (unsigned int)TargetDeviceNode[101]) )
    {
      PipClearDevNodeProblem(v5);
      v4 = TargetDeviceNode[99];
    }
    v6 = *(_DWORD *)(a1 + 144) & 2;
    if ( (v4 & 0x6000) != 0 )
    {
      if ( !v6 )
        return (unsigned int)-1073741811;
    }
    else if ( v6 )
    {
      PipSetDevNodeProblem(TargetDeviceNode, *(unsigned int *)(a1 + 16), 0LL);
    }
    else
    {
      PnpRestartDeviceNode(TargetDeviceNode);
    }
  }
  return v3;
}
