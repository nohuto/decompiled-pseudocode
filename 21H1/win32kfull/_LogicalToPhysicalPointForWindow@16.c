/*
 * XREFs of _LogicalToPhysicalPointForWindow@16 @ 0x15148D
 * Callers:
 *     ?CloneWindowPosAndArrangementAsync@@YG_NPAUtagWND@@PBU1@1W4CloneWindowPosOptions@@@Z @ 0x13F438 (-CloneWindowPosAndArrangementAsync@@YG_NPAUtagWND@@PBU1@1W4CloneWindowPosOptions@@@Z.c)
 * Callees:
 *     _TransformVector@20 @ 0x17BC83 (_TransformVector@20.c)
 */

int __fastcall LogicalToPhysicalPointForWindow(int a1, _DWORD *a2, int a3, int a4)
{
  int v4; // ecx
  int result; // eax

  v4 = *(_DWORD *)(a1 + 120);
  *a2 = a3;
  result = a4;
  a2[1] = a4;
  if ( v4 )
    return TransformVector(a2 + 1, 0, 0);
  return result;
}
