/*
 * XREFs of xxxCreateClassSmIcon @ 0x1C010449C
 * Callers:
 *     xxxCreateWindowEx @ 0x1C00B5990 (xxxCreateWindowEx.c)
 *     xxxSetClassIcon @ 0x1C023D898 (xxxSetClassIcon.c)
 *     xxxRecreateSmallIcons @ 0x1C0242F5C (xxxRecreateSmallIcons.c)
 * Callees:
 *     GetDpiDependentMetric @ 0x1C005BD0C (GetDpiDependentMetric.c)
 *     GetDpiForSystem @ 0x1C005DE40 (GetDpiForSystem.c)
 *     xxxClientCopyImage @ 0x1C0073878 (xxxClientCopyImage.c)
 *     ?LockPointer@@YA?AU_LOCKASSIGNPAIR@@PEAV?$SharedUserObjPoolPointerFieldspicnSm@UtagCURSOR@@@tagCLS@@PEAX@Z @ 0x1C010458C (-LockPointer@@YA-AU_LOCKASSIGNPAIR@@PEAV-$SharedUserObjPoolPointerFieldspicnSm@UtagCURSOR@@@tagC.c)
 */

_QWORD *__fastcall xxxCreateClassSmIcon(_QWORD **a1)
{
  _QWORD **v1; // rdi
  BOOL v2; // esi
  __int64 v3; // rbp
  unsigned int DpiForSystem; // eax
  int DpiDependentMetric; // ebx
  __int64 v6; // rcx
  unsigned int v7; // eax
  int v8; // eax
  __int64 v9; // rax
  _QWORD *result; // rax
  __int128 v11; // [rsp+30h] [rbp-28h] BYREF
  _BYTE v12[24]; // [rsp+40h] [rbp-18h] BYREF

  v1 = a1;
  v2 = *(_WORD *)(*(_QWORD *)(**a1 + 80LL) + 74LL) != 3;
  if ( *(_QWORD *)(**a1 + 80LL) )
  {
    a1 = (_QWORD **)**a1;
    v3 = *a1[10];
  }
  else
  {
    v3 = 0LL;
  }
  DpiForSystem = GetDpiForSystem((__int64)a1);
  DpiDependentMetric = GetDpiDependentMetric(21LL, DpiForSystem);
  v7 = GetDpiForSystem(v6);
  v8 = GetDpiDependentMetric(20LL, v7);
  v9 = xxxClientCopyImage(v3, v2 + 1, v8, DpiDependentMetric, 0x4000);
  v11 = *(_OWORD *)LockPointer(v12, **v1 + 112LL, v9);
  HMAssignmentLock(&v11);
  result = *v1;
  if ( *(_QWORD *)(**v1 + 112LL) )
  {
    result = *(_QWORD **)(**v1 + 8LL);
    *((_WORD *)result + 3) |= 0x20u;
  }
  return result;
}
