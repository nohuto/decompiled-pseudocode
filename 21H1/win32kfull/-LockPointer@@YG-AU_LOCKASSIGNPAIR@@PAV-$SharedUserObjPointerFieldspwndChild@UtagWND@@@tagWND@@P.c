/*
 * XREFs of ?LockPointer@@YG?AU_LOCKASSIGNPAIR@@PAV?$SharedUserObjPointerFieldspwndChild@UtagWND@@@tagWND@@PAX@Z @ 0xA3C6E
 * Callers:
 *     _LinkWindow@12 @ 0x34D24 (_LinkWindow@12.c)
 *     _UnlinkWindow@8 @ 0x72E1E (_UnlinkWindow@8.c)
 * Callees:
 *     <none>
 */

int __fastcall LockPointer(int a1, int a2)
{
  int v3; // eax
  int v4; // ecx

  v3 = *(_DWORD *)(a1 - 40);
  if ( a2 )
    v4 = *(_DWORD *)(a2 + 24);
  else
    v4 = 0;
  *(_DWORD *)(v3 + 36) = v4;
  return a1;
}
