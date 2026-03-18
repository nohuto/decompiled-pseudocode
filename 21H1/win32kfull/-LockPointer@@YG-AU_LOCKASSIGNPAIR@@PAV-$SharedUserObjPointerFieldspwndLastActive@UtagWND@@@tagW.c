/*
 * XREFs of ?LockPointer@@YG?AU_LOCKASSIGNPAIR@@PAV?$SharedUserObjPointerFieldspwndLastActive@UtagWND@@@tagWND@@PAX@Z @ 0x1A038
 * Callers:
 *     _anonymous_namespace_::xxxLocalActivateWindow @ 0x197E0 (_anonymous_namespace_--xxxLocalActivateWindow.c)
 *     _xxxCreateWindowEx@68 @ 0x2D67C (_xxxCreateWindowEx@68.c)
 *     _xxxFreeWindow@8 @ 0x70780 (_xxxFreeWindow@8.c)
 *     _xxxDestroyWindow@4 @ 0x7239A (_xxxDestroyWindow@4.c)
 * Callees:
 *     <none>
 */

int __fastcall LockPointer(int a1, int a2)
{
  int v3; // eax
  int v4; // ecx

  v3 = *(_DWORD *)(a1 - 88);
  if ( a2 )
    v4 = *(_DWORD *)(a2 + 24);
  else
    v4 = 0;
  *(_DWORD *)(v3 + 112) = v4;
  return a1;
}
