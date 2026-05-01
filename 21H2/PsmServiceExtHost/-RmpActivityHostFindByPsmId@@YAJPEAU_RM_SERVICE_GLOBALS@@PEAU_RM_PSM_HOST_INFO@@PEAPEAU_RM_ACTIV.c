/*
 * XREFs of ?RmpActivityHostFindByPsmId@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAU_RM_PSM_HOST_INFO@@PEAPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18002DD0C
 * Callers:
 *     ?RmAcquireResources@ResourceManager@ExecutionModel@@QEAAJKPEAU_ResourceInfo@2@W4Enum@Priority@2@K_KPEAXKW44PendType@2@_NPEA_NPEAPEAUResourceHandle__@2@@Z @ 0x1800018D0 (-RmAcquireResources@ResourceManager@ExecutionModel@@QEAAJKPEAU_ResourceInfo@2@W4Enum@Priority@2@.c)
 *     ?RmAccessCheckWithLockHeld@ResourceManager@ExecutionModel@@QEAAJW4Enum@ResourceType@2@KE@Z @ 0x180004464 (-RmAccessCheckWithLockHeld@ResourceManager@ExecutionModel@@QEAAJW4Enum@ResourceType@2@KE@Z.c)
 *     ?AddCommitMemoryWnfStates@ResourceManager@ExecutionModel@@QEAAJKPEAT_RM_SID@@PEAT_LARGE_INTEGER@@1@Z @ 0x18002C9A4 (-AddCommitMemoryWnfStates@ResourceManager@ExecutionModel@@QEAAJKPEAT_RM_SID@@PEAT_LARGE_INTEGER@.c)
 * Callees:
 *     ??R?$hash@U_RM_PSM_HOST_INFO@@@utl@@QEBA_KAEBU_RM_PSM_HOST_INFO@@@Z @ 0x18000BE70 (--R-$hash@U_RM_PSM_HOST_INFO@@@utl@@QEBA_KAEBU_RM_PSM_HOST_INFO@@@Z.c)
 *     ??R?$equal_to@U_RM_PSM_HOST_INFO@@@utl@@QEBA_NAEBU_RM_PSM_HOST_INFO@@0@Z @ 0x18002DE80 (--R-$equal_to@U_RM_PSM_HOST_INFO@@@utl@@QEBA_NAEBU_RM_PSM_HOST_INFO@@0@Z.c)
 */

__int64 __fastcall RmpActivityHostFindByPsmId(
        struct _RM_SERVICE_GLOBALS *a1,
        struct _RM_PSM_HOST_INFO *a2,
        struct _RM_ACTIVITY_HOST **a3)
{
  __int64 v6; // rbx
  unsigned __int64 v7; // r13
  unsigned int v8; // esi
  __int64 v9; // rcx
  __int64 v10; // r10
  int v11; // r9d
  __int64 v12; // rdi

  v6 = 0LL;
  v7 = utl::hash<_RM_PSM_HOST_INFO>::operator()((__int64)a1, (unsigned __int64)a2);
  v8 = -1073741275;
  RtlAcquireSRWLockShared((char *)a1 + 32);
  while ( 1 )
  {
    v9 = *((_DWORD *)a1 + 633) & 0x1F;
    v10 = v7 & (-1LL << (*((_BYTE *)a1 + 2532) & 0x1F));
    if ( v6 )
      goto LABEL_5;
    v11 = *((_DWORD *)a1 + 633) >> 5;
    if ( !v11 )
      break;
    v9 = (37
        * (BYTE6(v10)
         + 37
         * (BYTE5(v10)
          + 37
          * (BYTE4(v10)
           + 37 * (BYTE3(v10) + 37 * (BYTE2(v10) + 37 * (BYTE1(v10) + 37 * ((unsigned __int8)v10 + 11623883)))))))
        + HIBYTE(v10)) & (unsigned int)(v11 - 1);
    v6 = *((_QWORD *)a1 + 317) + 8 * v9;
LABEL_5:
    while ( 1 )
    {
      v6 = *(_QWORD *)v6;
      if ( (v6 & 1) != 0 )
        break;
      if ( v10 == ((-1LL << (*((_BYTE *)a1 + 2532) & 0x1F)) & *(_QWORD *)(v6 + 8)) )
        goto LABEL_7;
    }
    v6 = 0LL;
LABEL_7:
    if ( !v6 )
      break;
    v12 = v6 - 1392;
    if ( (unsigned __int8)utl::equal_to<_RM_PSM_HOST_INFO>::operator()(v9, a2, v6 - 1392 + 88) )
    {
      v8 = 0;
      if ( _InterlockedIncrement64((volatile signed __int64 *)(v12 + 16)) <= 1 )
        __fastfail(0xEu);
      *a3 = (struct _RM_ACTIVITY_HOST *)v12;
      break;
    }
  }
  RtlReleaseSRWLockShared((char *)a1 + 32);
  return v8;
}
