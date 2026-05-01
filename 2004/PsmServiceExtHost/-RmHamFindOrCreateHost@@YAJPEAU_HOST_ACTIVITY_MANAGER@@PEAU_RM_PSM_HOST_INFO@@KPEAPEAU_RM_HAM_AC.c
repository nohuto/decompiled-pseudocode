/*
 * XREFs of ?RmHamFindOrCreateHost@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAU_RM_PSM_HOST_INFO@@KPEAPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x1800228F0
 * Callers:
 *     ?HampHostFindOrCreate@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAU_RM_PSM_HOST_INFO@@KPEAPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18002288C (-HampHostFindOrCreate@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAU_RM_PSM_HOST_INFO@@KPEAPEAU_RM_HAM_ACT.c)
 * Callees:
 *     ?RmHamFindOrCreateActivityHost@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAU_RM_PSM_HOST_INFO@@PEAU_HAM_APPLICATION@@PEAU_RM_PARTITION@@KPEAPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180008B5C (-RmHamFindOrCreateActivityHost@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAU_RM_PSM_HOST_INFO@@PEAU_HAM_APPL.c)
 *     ?RmpReleaseGlobalLock@@YAXXZ @ 0x18000F120 (-RmpReleaseGlobalLock@@YAXXZ.c)
 *     ?RmpAcquireGlobalLock@@YAXXZ @ 0x18001E110 (-RmpAcquireGlobalLock@@YAXXZ.c)
 *     ?RmHamFindHostWithFullInfo@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAU_RM_PSM_HOST_INFO@@PEAPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180022A6C (-RmHamFindHostWithFullInfo@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAU_RM_PSM_HOST_INFO@@PEAPEAU_RM_HAM.c)
 *     ?RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z @ 0x180026310 (-RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z.c)
 *     ?RmpPartitionRelease@@YAXPEAU_RM_PARTITION@@@Z @ 0x1800263B0 (-RmpPartitionRelease@@YAXPEAU_RM_PARTITION@@@Z.c)
 *     ?HampAppFindOrCreate@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAU_HAM_APPLICATION_INFO@@PEAPEAU_HAM_APPLICATION@@@Z @ 0x1800263F4 (-HampAppFindOrCreate@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAU_HAM_APPLICATION_INFO@@PEAPEAU_HAM_APPL.c)
 *     ?HampAppInfoInitialize@@YAXPEBGPEAEKKPEAU_HAM_APPLICATION_INFO@@@Z @ 0x1800268E4 (-HampAppInfoInitialize@@YAXPEBGPEAEKKPEAU_HAM_APPLICATION_INFO@@@Z.c)
 *     CemRcObjectDereference @ 0x180027240 (CemRcObjectDereference.c)
 *     ?RmpHamQueryActivityHostPartition@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAU_RM_PSM_HOST_INFO@@PEAPEAU_RM_PARTITION@@@Z @ 0x180034E8C (-RmpHamQueryActivityHostPartition@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAU_RM_PSM_HOST_INFO@@PEAPEAU_RM.c)
 *     __security_check_cookie @ 0x180044E00 (__security_check_cookie.c)
 *     ?HampAppQueueTerminate@@YAXPEAU_HAM_APPLICATION@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_REASON@@@Z @ 0x18007F67C (-HampAppQueueTerminate@@YAXPEAU_HAM_APPLICATION@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_REASON@.c)
 */

__int64 __fastcall RmHamFindOrCreateHost(
        struct _HOST_ACTIVITY_MANAGER *a1,
        struct _RM_PSM_HOST_INFO *a2,
        unsigned int a3,
        struct _RM_HAM_ACTIVITY_HOST **a4)
{
  struct _HAM_APPLICATION *v4; // rdi
  int HostWithFullInfo; // ebx
  ULONG v10; // eax
  __int64 v11; // rdx
  PVOID v12; // rsi
  struct _RM_PARTITION *v13; // [rsp+30h] [rbp-D0h] BYREF
  unsigned int v14; // [rsp+38h] [rbp-C8h]
  struct _HAM_APPLICATION *v15; // [rsp+40h] [rbp-C0h] BYREF
  PVOID P; // [rsp+48h] [rbp-B8h] BYREF
  _BYTE v17[544]; // [rsp+50h] [rbp-B0h] BYREF

  P = 0LL;
  v4 = 0LL;
  v13 = 0LL;
  v14 = a3;
  v15 = 0LL;
  HostWithFullInfo = RmHamFindHostWithFullInfo(a1, a2, a4);
  if ( HostWithFullInfo == -1073741275 )
  {
    HostWithFullInfo = RmpHamQueryActivityHostPartition((struct _HOST_ACTIVITY_MANAGER *)((char *)a1 - 1768), a2, &v13);
    if ( HostWithFullInfo >= 0 )
    {
      v10 = RtlLengthSid((char *)a2 + 464);
      HampAppInfoInitialize(
        (const unsigned __int16 *)a2,
        (unsigned __int8 *)a2 + 464,
        v10,
        *((_DWORD *)a2 + 133),
        (struct _HAM_APPLICATION_INFO *)v17);
      HostWithFullInfo = HampAppFindOrCreate(a1, (struct _HAM_APPLICATION_INFO *)v17, &v15);
      if ( HostWithFullInfo < 0 )
      {
        v4 = v15;
      }
      else
      {
        RmpAcquireGlobalLock();
        v4 = v15;
        HostWithFullInfo = RmHamFindOrCreateActivityHost(
                             (struct _HOST_ACTIVITY_MANAGER *)((char *)a1 - 1768),
                             a2,
                             v15,
                             v13,
                             v14,
                             (struct _RM_ACTIVITY_HOST **)&P);
        RmpReleaseGlobalLock();
        v12 = P;
        if ( HostWithFullInfo < 0 )
        {
          if ( HostWithFullInfo == -1058275322 )
            HampAppQueueTerminate(v4, v11, 4864LL);
        }
        else
        {
          HostWithFullInfo = 0;
          *a4 = (struct _RM_HAM_ACTIVITY_HOST *)((char *)P + 64);
        }
        if ( v12 )
          RmpObjectRelease(v12);
      }
    }
    if ( v13 )
      RmpPartitionRelease(v13);
    if ( v4 )
      CemRcObjectDereference(v4);
  }
  return (unsigned int)HostWithFullInfo;
}
