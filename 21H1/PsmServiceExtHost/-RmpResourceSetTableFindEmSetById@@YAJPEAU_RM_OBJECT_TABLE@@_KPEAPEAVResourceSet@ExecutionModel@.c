/*
 * XREFs of ?RmpResourceSetTableFindEmSetById@@YAJPEAU_RM_OBJECT_TABLE@@_KPEAPEAVResourceSet@ExecutionModel@@@Z @ 0x1800074C4
 * Callers:
 *     ?RmSrvResourceSetApply@@YAJPEAU_RM_SERVICE_GLOBALS@@_K@Z @ 0x180007564 (-RmSrvResourceSetApply@@YAJPEAU_RM_SERVICE_GLOBALS@@_K@Z.c)
 *     ?RmSrvResourceSetExternalResourcePriorities@@YAJPEAU_RM_SERVICE_GLOBALS@@_KKPEAU_ResourceInfo@ExecutionModel@@@Z @ 0x180069BA4 (-RmSrvResourceSetExternalResourcePriorities@@YAJPEAU_RM_SERVICE_GLOBALS@@_KKPEAU_ResourceInfo@Ex.c)
 * Callees:
 *     ?RmpResourceSetTableFindById@@YAJPEAU_RM_OBJECT_TABLE@@_KPEAPEAU_RM_RESOURCE_SET@@@Z @ 0x18000752C (-RmpResourceSetTableFindById@@YAJPEAU_RM_OBJECT_TABLE@@_KPEAPEAU_RM_RESOURCE_SET@@@Z.c)
 *     ?RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z @ 0x180026310 (-RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180046540 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall RmpResourceSetTableFindEmSetById(
        struct _RM_OBJECT_TABLE *a1,
        unsigned __int64 a2,
        struct ExecutionModel::ResourceSet **a3)
{
  int v4; // eax
  PVOID v5; // rbx
  unsigned int v6; // edi
  struct ExecutionModel::ResourceSet *v7; // rcx
  PVOID P; // [rsp+48h] [rbp+20h] BYREF

  P = 0LL;
  v4 = RmpResourceSetTableFindById(a1, a2, (struct _RM_RESOURCE_SET **)&P);
  v5 = P;
  v6 = v4;
  if ( v4 >= 0 )
  {
    v7 = (struct ExecutionModel::ResourceSet *)*((_QWORD *)P + 6);
    *a3 = v7;
    (*(void (__fastcall **)(struct ExecutionModel::ResourceSet *))(*(_QWORD *)v7 + 8LL))(v7);
    v6 = 0;
  }
  if ( v5 )
    RmpObjectRelease(v5);
  return v6;
}
