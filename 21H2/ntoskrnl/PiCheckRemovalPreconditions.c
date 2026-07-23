/*
 * XREFs of PiCheckRemovalPreconditions @ 0x140736A68
 * Callers:
 *     PnpProcessQueryRemoveAndEject @ 0x140736AD4 (PnpProcessQueryRemoveAndEject.c)
 * Callees:
 *     PiGetTargetDeviceNode @ 0x14073710C (PiGetTargetDeviceNode.c)
 *     PnpFinalizeVetoedRemove @ 0x1408ABE70 (PnpFinalizeVetoedRemove.c)
 */

__int64 __fastcall PiCheckRemovalPreconditions(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 TargetDeviceNode; // rax
  __int64 v4; // rcx
  __int64 v5; // r9
  int v6; // r11d
  __int64 v7; // r10
  __int64 result; // rax
  __int64 v9; // r8
  __int64 v10; // rdx

  TargetDeviceNode = PiGetTargetDeviceNode(a2, a2, a3, a2);
  v7 = TargetDeviceNode;
  if ( (v6 & 0xFFFFFFFB) == 0 && (*(_DWORD *)(TargetDeviceNode + 396) & 0x1000) != 0 )
  {
    v9 = TargetDeviceNode + 40;
    v10 = 1LL;
LABEL_14:
    PnpFinalizeVetoedRemove(v4, v10, v9);
    return 2147483688LL;
  }
  result = 0LL;
  if ( !v6 && *(_DWORD *)(v5 + 16) == 22 && *(_DWORD *)(v7 + 600) )
  {
    v9 = v7 + 40;
    v10 = 10LL;
    goto LABEL_14;
  }
  if ( *(_DWORD *)(v7 + 300) == 786 && !v6 && *(_DWORD *)(v5 + 16) == 54 )
  {
    v9 = 0LL;
    v10 = 13LL;
    goto LABEL_14;
  }
  return result;
}
