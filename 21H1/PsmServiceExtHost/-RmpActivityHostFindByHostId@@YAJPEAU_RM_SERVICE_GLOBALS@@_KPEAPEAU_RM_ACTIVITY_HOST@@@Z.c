/*
 * XREFs of ?RmpActivityHostFindByHostId@@YAJPEAU_RM_SERVICE_GLOBALS@@_KPEAPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18000EBF8
 * Callers:
 *     ?RmHamFindOrCreateActivityHost@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAU_RM_PSM_HOST_INFO@@PEAU_HAM_APPLICATION@@PEAU_RM_PARTITION@@KPEAPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180008B5C (-RmHamFindOrCreateActivityHost@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAU_RM_PSM_HOST_INFO@@PEAU_HAM_APPL.c)
 *     ?HostStateNotification@ResourceManager@ExecutionModel@@UEAAXPEBGPEAT_RM_SID@@KQEAKQEA_KKW4_PSM_INTERNAL_HOST_STATE@@@Z @ 0x18002C290 (-HostStateNotification@ResourceManager@ExecutionModel@@UEAAXPEBGPEAT_RM_SID@@KQEAKQEA_KKW4_PSM_I.c)
 *     ?RmSrvHostNotificationSubscribe@@YAJPEAU_RM_ACTIVATOR@@_KPEA_K@Z @ 0x1800338FC (-RmSrvHostNotificationSubscribe@@YAJPEAU_RM_ACTIVATOR@@_KPEA_K@Z.c)
 *     ?RmpActivityHostQueryByTokenPsmInfo@@YAJPEAU_RM_SERVICE_GLOBALS@@KPEAPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18006B47C (-RmpActivityHostQueryByTokenPsmInfo@@YAJPEAU_RM_SERVICE_GLOBALS@@KPEAPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?RmpCoreApiQueryHostMemoryLimitValues@@YAJPEAU_RM_SERVICE_GLOBALS@@_KPEA_KPEAW4_RM_ACTIVITY_HOST_CALLBACK_TYPE@@@Z @ 0x180073D58 (-RmpCoreApiQueryHostMemoryLimitValues@@YAJPEAU_RM_SERVICE_GLOBALS@@_KPEA_KPEAW4_RM_ACTIVITY_HOST.c)
 * Callees:
 *     ?RmpObjectTableFindObjectByHandleWithLock@@YAJPEAU_RM_OBJECT_TABLE@@PEA_KPEAPEAU_RM_OBJECT_HEADER@@@Z @ 0x18000ECE0 (-RmpObjectTableFindObjectByHandleWithLock@@YAJPEAU_RM_OBJECT_TABLE@@PEA_KPEAPEAU_RM_OBJECT_HEADE.c)
 */

__int64 __fastcall RmpActivityHostFindByHostId(
        struct _RM_SERVICE_GLOBALS *a1,
        unsigned __int64 a2,
        struct _RM_ACTIVITY_HOST **a3)
{
  struct _RM_OBJECT_TABLE *v3; // rbx
  char *v5; // rdi
  int ObjectByHandleWithLock; // ebx
  struct _RM_OBJECT_HEADER *v8; // [rsp+30h] [rbp+8h] BYREF
  unsigned __int64 v9; // [rsp+38h] [rbp+10h] BYREF

  v9 = a2;
  v3 = (struct _RM_SERVICE_GLOBALS *)((char *)a1 + 16);
  v5 = (char *)a1 + 32;
  RtlAcquireSRWLockShared((char *)a1 + 32);
  ObjectByHandleWithLock = RmpObjectTableFindObjectByHandleWithLock(v3, &v9, &v8);
  RtlReleaseSRWLockShared(v5);
  if ( ObjectByHandleWithLock >= 0 )
  {
    ObjectByHandleWithLock = 0;
    *a3 = v8;
  }
  return (unsigned int)ObjectByHandleWithLock;
}
