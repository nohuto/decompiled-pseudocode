/*
 * XREFs of ?ApplyExternalResourcePriorities@ResourceManager@ExecutionModel@@QEAAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180007DF0
 * Callers:
 *     ?ApplyResourceSet_Modern@ResourceManager@ExecutionModel@@QEAAJPEAVResourceSet@2@@Z @ 0x18000789C (-ApplyResourceSet_Modern@ResourceManager@ExecutionModel@@QEAAJPEAVResourceSet@2@@Z.c)
 *     ?SetExternalResourcePriorities@ResourceSet@ExecutionModel@@QEAAJKQEAU_ResourceInfo@2@@Z @ 0x18007341C (-SetExternalResourcePriorities@ResourceSet@ExecutionModel@@QEAAJKQEAU_ResourceInfo@2@@Z.c)
 * Callees:
 *     ?RmpPsmAppFamilyIdFromPsmAppInstanceId@@YAJPEAU_RM_PSM_HOST_INFO@@PEAU_RM_PSM_APP_FAMILY_ID@@@Z @ 0x180009DFC (-RmpPsmAppFamilyIdFromPsmAppInstanceId@@YAJPEAU_RM_PSM_HOST_INFO@@PEAU_RM_PSM_APP_FAMILY_ID@@@Z.c)
 *     ?RmpPsmAppFamilyTableFind@@YAPEAU_RM_PSM_APP_FAMILY@@PEAU_RM_SERVICE_GLOBALS@@PEAU_RM_PSM_APP_FAMILY_ID@@@Z @ 0x18000CD80 (-RmpPsmAppFamilyTableFind@@YAPEAU_RM_PSM_APP_FAMILY@@PEAU_RM_SERVICE_GLOBALS@@PEAU_RM_PSM_APP_FA.c)
 *     ?RmpActivityHostIsPple@@YAEPEAU_RM_ACTIVITY_HOST@@@Z @ 0x1800103AC (-RmpActivityHostIsPple@@YAEPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?HostApplyExternalResourcePriorities@ResourceManager@ExecutionModel@@QEAAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180012CC4 (-HostApplyExternalResourcePriorities@ResourceManager@ExecutionModel@@QEAAXPEAU_RM_ACTIVITY_HOST@.c)
 *     ?RmpActivityHostHasPpleResourceSet@@YAEPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18003BFEC (-RmpActivityHostHasPpleResourceSet@@YAEPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     __security_check_cookie @ 0x1800448B0 (__security_check_cookie.c)
 */

void __fastcall ExecutionModel::ResourceManager::ApplyExternalResourcePriorities(
        ExecutionModel::ResourceManager *this,
        struct _RM_ACTIVITY_HOST *a2)
{
  struct _RM_SERVICE_GLOBALS *v4; // rbp
  struct _RM_PSM_APP_FAMILY *v5; // rdi
  struct _RM_PSM_APP_FAMILY *v6; // rax
  struct _RM_ACTIVITY_HOST *v7; // rbx
  _BYTE v8[544]; // [rsp+20h] [rbp-248h] BYREF

  ExecutionModel::ResourceManager::HostApplyExternalResourcePriorities(this, a2);
  if ( *((_DWORD *)a2 + 156) == 2 && !RmpActivityHostIsPple(a2) )
  {
    v4 = (struct _RM_SERVICE_GLOBALS *)*((_QWORD *)a2 + 6);
    v5 = 0LL;
    if ( RmpPsmAppFamilyIdFromPsmAppInstanceId(
           (struct _RM_ACTIVITY_HOST *)((char *)a2 + 88),
           (struct _RM_PSM_APP_FAMILY_ID *)v8) >= 0 )
    {
      v6 = RmpPsmAppFamilyTableFind(v4, (struct _RM_PSM_APP_FAMILY_ID *)v8);
      if ( v6 )
        v5 = v6;
    }
    v7 = (struct _RM_ACTIVITY_HOST *)*((_QWORD *)v5 + 71);
    if ( v7 )
    {
      if ( RmpActivityHostHasPpleResourceSet(*((struct _RM_ACTIVITY_HOST **)v5 + 71)) )
        ExecutionModel::ResourceManager::HostApplyExternalResourcePriorities(this, v7);
    }
  }
}
