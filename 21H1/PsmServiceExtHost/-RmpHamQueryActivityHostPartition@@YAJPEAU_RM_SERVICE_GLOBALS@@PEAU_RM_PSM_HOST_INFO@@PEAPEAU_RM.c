/*
 * XREFs of ?RmpHamQueryActivityHostPartition@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAU_RM_PSM_HOST_INFO@@PEAPEAU_RM_PARTITION@@@Z @ 0x180034E8C
 * Callers:
 *     ?RmHamFindOrCreateHost@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAU_RM_PSM_HOST_INFO@@KPEAPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x1800228F0 (-RmHamFindOrCreateHost@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAU_RM_PSM_HOST_INFO@@KPEAPEAU_RM_HAM_AC.c)
 * Callees:
 *     ?RmpPartitionTableFindOrCreatePartition@@YAJPEAU_RM_PARTITION_TABLE@@PEAXPEAPEAU_RM_PARTITION@@@Z @ 0x180012D38 (-RmpPartitionTableFindOrCreatePartition@@YAJPEAU_RM_PARTITION_TABLE@@PEAXPEAPEAU_RM_PARTITION@@@.c)
 *     ?RmpPartitionRelease@@YAXPEAU_RM_PARTITION@@@Z @ 0x1800263B0 (-RmpPartitionRelease@@YAXPEAU_RM_PARTITION@@@Z.c)
 *     ?RmpSystemQueryPackagePartitions@@YAJPEBG_KPEAPEAX2PEAK@Z @ 0x180034F58 (-RmpSystemQueryPackagePartitions@@YAJPEBG_KPEAPEAX2PEAK@Z.c)
 */

__int64 __fastcall RmpHamQueryActivityHostPartition(
        struct _RM_SERVICE_GLOBALS *a1,
        struct _RM_PSM_HOST_INFO *a2,
        struct _RM_PARTITION **a3)
{
  unsigned __int64 v5; // rdx
  HANDLE *v7; // rbx
  int v8; // edi
  HANDLE Handle; // [rsp+30h] [rbp-10h] BYREF
  HANDLE v11; // [rsp+38h] [rbp-8h] BYREF
  unsigned int v12; // [rsp+68h] [rbp+28h] BYREF
  struct _RM_PARTITION *v13; // [rsp+78h] [rbp+38h] BYREF

  Handle = 0LL;
  v11 = 0LL;
  v5 = *((_QWORD *)a2 + 68);
  v7 = 0LL;
  v13 = 0LL;
  v8 = RmpSystemQueryPackagePartitions((const unsigned __int16 *)a2, v5, &Handle, &v11, &v12);
  if ( v8 >= 0 )
  {
    v8 = RmpPartitionTableFindOrCreatePartition((struct _RM_SERVICE_GLOBALS *)((char *)a1 + 312), Handle, &v13);
    if ( v8 < 0 )
    {
      v7 = (HANDLE *)v13;
    }
    else
    {
      v8 = 0;
      *a3 = v13;
    }
  }
  if ( (((unsigned __int64)Handle + 2) & 0xFFFFFFFFFFFFFFFDuLL) != 0 )
    NtClose(Handle);
  if ( (((unsigned __int64)v11 + 2) & 0xFFFFFFFFFFFFFFFDuLL) != 0 )
    NtClose(v11);
  if ( v7 )
    RmpPartitionRelease(v7);
  return (unsigned int)v8;
}
