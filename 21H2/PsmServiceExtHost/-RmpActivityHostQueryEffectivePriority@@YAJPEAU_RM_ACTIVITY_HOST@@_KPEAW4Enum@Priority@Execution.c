/*
 * XREFs of ?RmpActivityHostQueryEffectivePriority@@YAJPEAU_RM_ACTIVITY_HOST@@_KPEAW4Enum@Priority@ExecutionModel@@@Z @ 0x18006BEC0
 * Callers:
 *     ?RmpActivityHostPopulateMetrics@@YAXPEAU_RM_POLICY_WORK_BUFFER@@GW4Enum@Priority@ExecutionModel@@@Z @ 0x18006BC10 (-RmpActivityHostPopulateMetrics@@YAXPEAU_RM_POLICY_WORK_BUFFER@@GW4Enum@Priority@ExecutionModel@.c)
 *     ?RmpActivityHostRevokeResourceSets@@YAXPEAU_RM_ACTIVITY_HOST@@W4_RM_REVOKE_POLICY@@W4_RM_REVOKE_REASON_INTERNAL@@PEAVResourceSet@ExecutionModel@@@Z @ 0x18006C084 (-RmpActivityHostRevokeResourceSets@@YAXPEAU_RM_ACTIVITY_HOST@@W4_RM_REVOKE_POLICY@@W4_RM_REVOKE_.c)
 * Callees:
 *     ?RmpActivityHostEnumerateResourceSetGetNext@@YAPEAVResourceSet@ExecutionModel@@PEAU_RM_ACTIVITY_HOST_RESOURCE_SET_ENUMERATION_CONTEXT@@@Z @ 0x180007C84 (-RmpActivityHostEnumerateResourceSetGetNext@@YAPEAVResourceSet@ExecutionModel@@PEAU_RM_ACTIVITY_.c)
 *     ?RmpActivityHostEnumerateResourceSetGetFirst@@YAPEAVResourceSet@ExecutionModel@@PEAU_RM_ACTIVITY_HOST@@KW4_RM_RESOURCE_SET_CATEGORY@@@Z @ 0x180007CF8 (-RmpActivityHostEnumerateResourceSetGetFirst@@YAPEAVResourceSet@ExecutionModel@@PEAU_RM_ACTIVITY.c)
 *     ?RmpEmPriorityCompare@@YAJW4Enum@Priority@ExecutionModel@@0@Z @ 0x180064B2C (-RmpEmPriorityCompare@@YAJW4Enum@Priority@ExecutionModel@@0@Z.c)
 */

__int64 __fastcall RmpActivityHostQueryEffectivePriority(
        struct _RM_ACTIVITY_HOST *a1,
        unsigned __int64 a2,
        enum ExecutionModel::Priority::Enum *a3)
{
  int v5; // ebx
  unsigned int v6; // edi
  unsigned __int64 v8; // rcx
  int v9; // eax
  struct ExecutionModel::ResourceSet *Next; // rax
  struct ExecutionModel::ResourceSet *v11; // rdx
  _QWORD v13[3]; // [rsp+20h] [rbp-18h] BYREF

  v13[1] = 2LL;
  v5 = 101;
  v6 = 0;
  v13[0] = RmpActivityHostEnumerateResourceSetGetFirst((__int64)a1, 2, 0);
  while ( 1 )
  {
    Next = RmpActivityHostEnumerateResourceSetGetNext((struct _RM_ACTIVITY_HOST_RESOURCE_SET_ENUMERATION_CONTEXT *)v13);
    v11 = Next;
    if ( !Next )
      break;
    v8 = *(_QWORD *)(*((_QWORD *)Next + 165) + 1344LL);
    if ( a2 > v8 )
      v9 = *((_DWORD *)Next + 323);
    else
      v9 = *((_DWORD *)Next + 322);
    if ( v5 >= v9 )
    {
      if ( a2 > v8 )
        v5 = *((_DWORD *)v11 + 323);
      else
        v5 = *((_DWORD *)v11 + 322);
    }
  }
  if ( (*((_BYTE *)a1 + 836) & 1) != 0 )
  {
    if ( v5 >= 80 )
      v5 = 80;
  }
  else if ( (int)RmpEmPriorityCompare(v5, 100) < 0 )
  {
    return (unsigned int)-1073740759;
  }
  *(_DWORD *)a3 = v5;
  return v6;
}
