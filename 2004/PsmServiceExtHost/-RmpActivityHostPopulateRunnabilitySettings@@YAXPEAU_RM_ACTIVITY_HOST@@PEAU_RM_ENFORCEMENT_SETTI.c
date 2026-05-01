/*
 * XREFs of ?RmpActivityHostPopulateRunnabilitySettings@@YAXPEAU_RM_ACTIVITY_HOST@@PEAU_RM_ENFORCEMENT_SETTINGS@@@Z @ 0x180007B1C
 * Callers:
 *     ?RmpActivityHostComputeAndApplyEnforcementSettings@@YAJPEAU_RM_ACTIVITY_HOST@@@Z @ 0x1800078A4 (-RmpActivityHostComputeAndApplyEnforcementSettings@@YAJPEAU_RM_ACTIVITY_HOST@@@Z.c)
 * Callees:
 *     ?RmpActivityHostEnumerateResourceSetGetNext@@YAPEAVResourceSet@ExecutionModel@@PEAU_RM_ACTIVITY_HOST_RESOURCE_SET_ENUMERATION_CONTEXT@@@Z @ 0x180007C08 (-RmpActivityHostEnumerateResourceSetGetNext@@YAPEAVResourceSet@ExecutionModel@@PEAU_RM_ACTIVITY_.c)
 *     ?RmpActivityHostEnumerateResourceSetGetFirst@@YAPEAVResourceSet@ExecutionModel@@PEAU_RM_ACTIVITY_HOST@@KW4_RM_RESOURCE_SET_CATEGORY@@@Z @ 0x180007C7C (-RmpActivityHostEnumerateResourceSetGetFirst@@YAPEAVResourceSet@ExecutionModel@@PEAU_RM_ACTIVITY.c)
 *     ?RmpImportanceToRequiredExecutionSpeed@@YA?AW4_RM_EXECUTION_SPEED@@T_RM_ACTIVITY_IMPORTANCE@@@Z @ 0x180017768 (-RmpImportanceToRequiredExecutionSpeed@@YA-AW4_RM_EXECUTION_SPEED@@T_RM_ACTIVITY_IMPORTANCE@@@Z.c)
 */

void __fastcall RmpActivityHostPopulateRunnabilitySettings(
        struct _RM_ACTIVITY_HOST *a1,
        struct _RM_ENFORCEMENT_SETTINGS *a2)
{
  char v3; // di
  __int64 First; // rax
  bool v6; // zf
  int v7; // ebx
  struct ExecutionModel::ResourceSet *Next; // rax
  char v9; // r14
  int v10; // eax
  __int16 v11; // ax
  char v12; // al
  int v13; // eax
  int v14; // ecx
  _QWORD v15[3]; // [rsp+20h] [rbp-18h] BYREF

  v15[1] = 2LL;
  v3 = 0;
  First = RmpActivityHostEnumerateResourceSetGetFirst(a1, 2LL, 0LL);
  v6 = *((_DWORD *)a1 + 156) == 2;
  v15[0] = First;
  v7 = !v6;
  Next = RmpActivityHostEnumerateResourceSetGetNext((struct _RM_ACTIVITY_HOST_RESOURCE_SET_ENUMERATION_CONTEXT *)v15);
  v9 = *((_BYTE *)a2 + 28);
  while ( Next )
  {
    v13 = *((_DWORD *)Next + 345);
    v14 = v7;
    v7 = v13 & 3;
    if ( v7 <= v14 )
      v7 = v14;
    v9 |= (v13 & 8) != 0;
    *((_BYTE *)a2 + 28) = v9;
    Next = RmpActivityHostEnumerateResourceSetGetNext((struct _RM_ACTIVITY_HOST_RESOURCE_SET_ENUMERATION_CONTEXT *)v15);
  }
  v10 = RmpImportanceToRequiredExecutionSpeed(*((unsigned int *)a1 + 366));
  if ( v7 <= v10 )
    v7 = v10;
  v11 = (unsigned __int16)*((_DWORD *)a1 + 366) >> 7;
  *((_DWORD *)a2 + 6) = v7;
  v12 = v9 ^ (v9 ^ (2 * v11)) & 2;
  *((_BYTE *)a2 + 28) = v12;
  if ( (*((_WORD *)a1 + 732) & 0x400) != 0
    && (*((_BYTE *)a1 + 1240) & 2) == 0
    && *(_BYTE *)(*((_QWORD *)a1 + 6) + 208LL) )
  {
    v3 = 4;
  }
  *((_BYTE *)a2 + 28) = v3 | v12 & 0xFB;
}
