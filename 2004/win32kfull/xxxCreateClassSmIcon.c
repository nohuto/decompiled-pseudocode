/*
 * XREFs of xxxCreateClassSmIcon @ 0x1C0030AF4
 * Callers:
 *     xxxCreateWindowEx @ 0x1C00A8C10 (xxxCreateWindowEx.c)
 *     xxxSetClassIcon @ 0x1C023EB38 (xxxSetClassIcon.c)
 *     xxxRecreateSmallIcons @ 0x1C02441FC (xxxRecreateSmallIcons.c)
 * Callees:
 *     ?LockPointer@@YA?AU_LOCKASSIGNPAIR@@PEAV?$SharedUserObjPoolPointerFieldspicnSm@UtagCURSOR@@@tagCLS@@PEAX@Z @ 0x1C0030BE4 (-LockPointer@@YA-AU_LOCKASSIGNPAIR@@PEAV-$SharedUserObjPoolPointerFieldspicnSm@UtagCURSOR@@@tagC.c)
 *     xxxClientCopyImage @ 0x1C0030E98 (xxxClientCopyImage.c)
 *     GetDpiDependentMetric @ 0x1C00A002C (GetDpiDependentMetric.c)
 *     GetDpiForSystem @ 0x1C00A4C48 (GetDpiForSystem.c)
 */

__int64 *__fastcall xxxCreateClassSmIcon(__int64 **a1)
{
  __int64 **v1; // rdi
  BOOL v2; // esi
  __int64 v3; // rdx
  __int64 v4; // rbp
  unsigned int DpiForSystem; // eax
  __int64 v6; // r8
  int DpiDependentMetric; // ebx
  __int64 v8; // rdx
  __int64 v9; // rcx
  unsigned int v10; // eax
  __int64 v11; // r8
  int v12; // eax
  __int64 v13; // rax
  __int64 *result; // rax
  __int128 v15; // [rsp+30h] [rbp-28h] BYREF
  _BYTE v16[24]; // [rsp+40h] [rbp-18h] BYREF

  v1 = a1;
  v2 = *(_WORD *)(*(_QWORD *)(**a1 + 80) + 74LL) != 3;
  v3 = **a1;
  if ( *(_QWORD *)(v3 + 80) )
  {
    a1 = (__int64 **)**a1;
    v4 = *a1[10];
  }
  else
  {
    LODWORD(v4) = 0;
  }
  DpiForSystem = GetDpiForSystem(a1, v3);
  DpiDependentMetric = GetDpiDependentMetric(21LL, DpiForSystem, v6);
  v10 = GetDpiForSystem(v9, v8);
  v12 = GetDpiDependentMetric(20LL, v10, v11);
  v13 = xxxClientCopyImage(v4, v2 + 1, v12, DpiDependentMetric, 0x4000);
  v15 = *(_OWORD *)LockPointer(v16, **v1 + 112, v13);
  HMAssignmentLock(&v15);
  result = *v1;
  if ( *(_QWORD *)(**v1 + 112) )
  {
    result = *(__int64 **)(**v1 + 8);
    *((_WORD *)result + 3) |= 0x20u;
  }
  return result;
}
