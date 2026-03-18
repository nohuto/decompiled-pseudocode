/*
 * XREFs of ?LockPointer@@YG?AU_LOCKASSIGNPAIR@@PAV?$SharedUserObjPointerFieldspwndParent@UtagWND@@@tagWND@@PAX@Z @ 0x2FEAE
 * Callers:
 *     _xxxCreateWindowEx@68 @ 0x2D67C (_xxxCreateWindowEx@68.c)
 *     _xxxFreeWindow@8 @ 0x70780 (_xxxFreeWindow@8.c)
 *     _xxxCreateDesktopEx@24 @ 0x7E854 (_xxxCreateDesktopEx@24.c)
 *     ?xxxSetParentWorker@@YGPAUtagWND@@PAU1@00H@Z @ 0xC70E0 (-xxxSetParentWorker@@YGPAUtagWND@@PAU1@00H@Z.c)
 * Callees:
 *     <none>
 */

int __fastcall LockPointer(int a1, int a2)
{
  int v3; // eax
  int v4; // ecx

  v3 = *(_DWORD *)(a1 - 36);
  if ( a2 )
    v4 = *(_DWORD *)(a2 + 24);
  else
    v4 = 0;
  *(_DWORD *)(v3 + 32) = v4;
  return a1;
}
