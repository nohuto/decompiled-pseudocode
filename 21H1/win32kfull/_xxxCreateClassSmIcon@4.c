/*
 * XREFs of _xxxCreateClassSmIcon@4 @ 0x137DE
 * Callers:
 *     _xxxCreateWindowEx@68 @ 0x2D67C (_xxxCreateWindowEx@68.c)
 *     _xxxSetClassIcon@16 @ 0x19C737 (_xxxSetClassIcon@16.c)
 *     _xxxRecreateSmallIcons@4 @ 0x1A12BF (_xxxRecreateSmallIcons@4.c)
 * Callees:
 *     _xxxClientCopyImage@20 @ 0x16E68 (_xxxClientCopyImage@20.c)
 *     _GetDpiForSystem@0 @ 0x3D2A0 (_GetDpiForSystem@0.c)
 *     ?LockPointer@@YG?AU_LOCKASSIGNPAIR@@PAV?$SharedUserObjPoolPointerFieldspicnSm@UtagCURSOR@@@tagCLS@@PAX@Z @ 0x474F0 (-LockPointer@@YG-AU_LOCKASSIGNPAIR@@PAV-$SharedUserObjPoolPointerFieldspicnSm@UtagCURSOR@@@tagCL.c)
 *     _GetDpiDependentMetric@8 @ 0x6E48A (_GetDpiDependentMetric@8.c)
 */

int __thiscall xxxCreateClassSmIcon(int **this)
{
  int DpiForSystem; // eax
  int v3; // eax
  int v4; // eax
  int v5; // eax
  int v6; // ecx
  int result; // eax
  int DpiDependentMetric; // [esp-8h] [ebp-18h]
  __int64 v9; // [esp-8h] [ebp-18h]

  DpiForSystem = GetDpiForSystem();
  DpiDependentMetric = GetDpiDependentMetric(21, DpiForSystem);
  v3 = GetDpiForSystem();
  v4 = GetDpiDependentMetric(20, v3);
  v5 = xxxClientCopyImage(v4, DpiDependentMetric, 0x4000);
  v9 = LockPointer(**this + 64, v5);
  HMAssignmentLock(v6, HIDWORD(v9));
  result = **this;
  if ( *(_DWORD *)(result + 64) )
  {
    result = *(_DWORD *)(**this + 4);
    *(_WORD *)(result + 6) |= 0x20u;
  }
  return result;
}
