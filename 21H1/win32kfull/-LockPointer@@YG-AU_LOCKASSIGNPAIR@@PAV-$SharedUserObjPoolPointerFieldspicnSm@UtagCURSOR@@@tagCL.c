/*
 * XREFs of ?LockPointer@@YG?AU_LOCKASSIGNPAIR@@PAV?$SharedUserObjPoolPointerFieldspicnSm@UtagCURSOR@@@tagCLS@@PAX@Z @ 0x474F0
 * Callers:
 *     _xxxCreateClassSmIcon@4 @ 0x137DE (_xxxCreateClassSmIcon@4.c)
 *     _InternalRegisterClassEx@16 @ 0x46B9C (_InternalRegisterClassEx@16.c)
 *     _ReferenceClass@8 @ 0x9D9BA (_ReferenceClass@8.c)
 *     _xxxSetClassIcon@16 @ 0x19C737 (_xxxSetClassIcon@16.c)
 * Callees:
 *     <none>
 */

int __fastcall LockPointer(int a1, int *a2)
{
  int v3; // eax
  int v4; // ecx

  v3 = *(_DWORD *)(a1 - 60);
  if ( a2 )
    v4 = *a2;
  else
    v4 = 0;
  *(_DWORD *)(v3 + 36) = v4;
  return a1;
}
