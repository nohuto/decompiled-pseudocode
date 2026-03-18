/*
 * XREFs of ?LockPointer@@YG?AU_LOCKASSIGNPAIR@@PAV?$SharedUserObjPointerFieldspwndOwner@UtagWND@@@tagWND@@PAX@Z @ 0x1C990
 * Callers:
 *     _zzzImeSetFutureOwner@8 @ 0x18ECA (_zzzImeSetFutureOwner@8.c)
 *     _zzzImeSetOwnerWindow@8 @ 0x1C3FA (_zzzImeSetOwnerWindow@8.c)
 *     _xxxCreateWindowEx@68 @ 0x2D67C (_xxxCreateWindowEx@68.c)
 *     _xxxSetWindowData@16 @ 0x3F3F0 (_xxxSetWindowData@16.c)
 * Callees:
 *     <none>
 */

int __fastcall LockPointer(int a1, int a2)
{
  int v3; // eax
  int v4; // ecx

  v3 = *(_DWORD *)(a1 - 44);
  if ( a2 )
    v4 = *(_DWORD *)(a2 + 24);
  else
    v4 = 0;
  *(_DWORD *)(v3 + 40) = v4;
  return a1;
}
