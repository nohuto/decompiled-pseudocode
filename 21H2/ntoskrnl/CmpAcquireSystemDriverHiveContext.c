/*
 * XREFs of CmpAcquireSystemDriverHiveContext @ 0x140A61258
 * Callers:
 *     CmGetSystemDriverList @ 0x140A60174 (CmGetSystemDriverList.c)
 * Callees:
 *     CmpPerformKeyBodyDeletionCheck @ 0x1406E3E60 (CmpPerformKeyBodyDeletionCheck.c)
 *     CmpFindControlSet @ 0x1407ACD40 (CmpFindControlSet.c)
 */

__int64 __fastcall CmpAcquireSystemDriverHiveContext(__int64 a1)
{
  int v2; // ebx
  __int64 v3; // r8
  ULONG_PTR v4; // rcx
  int ControlSet; // eax
  char v7; // [rsp+30h] [rbp+8h] BYREF

  v7 = 0;
  v2 = CmpPerformKeyBodyDeletionCheck(*(_QWORD *)(a1 + 40), 0LL);
  if ( v2 >= 0 )
  {
    v3 = *(_QWORD *)(a1 + 40);
    v4 = *(_QWORD *)(*(_QWORD *)(v3 + 8) + 32LL);
    *(_QWORD *)(a1 + 48) = v4;
    ControlSet = CmpFindControlSet(v4, *(unsigned int *)(*(_QWORD *)(v3 + 8) + 40LL), (__int64)&CmpCurrentString, &v7);
    *(_DWORD *)(a1 + 56) = ControlSet;
    if ( ControlSet == -1 )
      return (unsigned int)-1073741275;
  }
  return (unsigned int)v2;
}
