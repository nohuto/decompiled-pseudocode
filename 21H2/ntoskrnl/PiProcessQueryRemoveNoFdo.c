/*
 * XREFs of PiProcessQueryRemoveNoFdo @ 0x1406602DC
 * Callers:
 *     PnpProcessQueryRemoveAndEject @ 0x1407655BC (PnpProcessQueryRemoveAndEject.c)
 * Callees:
 *     PnpRestartDeviceNode @ 0x14066044C (PnpRestartDeviceNode.c)
 *     PipIsProblemReadonly @ 0x140660534 (PipIsProblemReadonly.c)
 *     PipClearDevNodeProblem @ 0x140764FE4 (PipClearDevNodeProblem.c)
 *     PipSetDevNodeProblem @ 0x140765114 (PipSetDevNodeProblem.c)
 *     PiGetTargetDeviceNode @ 0x140765B84 (PiGetTargetDeviceNode.c)
 */

__int64 __fastcall PiProcessQueryRemoveNoFdo(__int64 a1)
{
  _DWORD *TargetDeviceNode; // rbx
  unsigned int v3; // edi
  int v4; // ecx
  int v5; // r9d
  __int64 v6; // rcx
  int v7; // eax

  TargetDeviceNode = (_DWORD *)PiGetTargetDeviceNode();
  v3 = 0;
  v4 = TargetDeviceNode[75];
  if ( ((v4 - 771) & 0xFFFFFFEE) == 0 && v4 != 787 )
  {
    v5 = TargetDeviceNode[99];
    if ( (v5 & 0x6000) != 0
      && !(unsigned int)PipIsProblemReadonly(TargetDeviceNode, (unsigned int)TargetDeviceNode[101]) )
    {
      PipClearDevNodeProblem(v6);
      v5 = TargetDeviceNode[99];
    }
    v7 = *(_DWORD *)(a1 + 144);
    if ( (v5 & 0x6000) != 0 )
    {
      if ( (v7 & 2) == 0 )
        return (unsigned int)-1073741811;
    }
    else if ( (v7 & 2) != 0 )
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
