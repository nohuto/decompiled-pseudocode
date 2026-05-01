/*
 * XREFs of ?HampHostRegisterProcess@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@PEAX1PEAU_PSM_APP_IDENTITY@@_KKPEA_K@Z @ 0x180026A5C
 * Callers:
 *     ?HamSrvRegisterProcess@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAX1PEAU_PSM_APP_IDENTITY@@_KK@Z @ 0x18000DB8C (-HamSrvRegisterProcess@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAX1PEAU_PSM_APP_IDENTITY@@_KK@Z.c)
 * Callees:
 *     ?HampHostQueueTerminateEx@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_REASON@@PEAU_HAM_CLIENT_CONTEXT@@W4_HAM_ROUTINE_DEP_WORK_POLICY@@K@Z @ 0x180005204 (-HampHostQueueTerminateEx@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE.c)
 *     CempLockSleepConditionVariableExclusive @ 0x180005898 (CempLockSleepConditionVariableExclusive.c)
 *     ?HampHostAcquireLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x180009020 (-HampHostAcquireLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?HampHostReleaseLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x180009D90 (-HampHostReleaseLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?RmpActivityHostCheckQueueDelete@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180009E2C (-RmpActivityHostCheckQueueDelete@@YAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?RmpReleaseGlobalLock@@YAXXZ @ 0x18000F120 (-RmpReleaseGlobalLock@@YAXXZ.c)
 *     ?HampDepGroupRunStateChangeWorker@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x180017CF0 (-HampDepGroupRunStateChangeWorker@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 *     ?HampHostCheckQueueStateWorker@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x18001CA10 (-HampHostCheckQueueStateWorker@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?RmpAcquireGlobalLock@@YAXXZ @ 0x18001E110 (-RmpAcquireGlobalLock@@YAXXZ.c)
 *     ?HampAppReleaseLockExclusive@@YAXPEAU_HAM_APPLICATION@@@Z @ 0x180022F90 (-HampAppReleaseLockExclusive@@YAXPEAU_HAM_APPLICATION@@@Z.c)
 *     ?HampHostUpdateUsageInfoProcesses@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180025CE8 (-HampHostUpdateUsageInfoProcesses@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?RmHamHostReference@@YAPEAU_RM_HAM_ACTIVITY_HOST@@PEAU1@@Z @ 0x180025DA0 (-RmHamHostReference@@YAPEAU_RM_HAM_ACTIVITY_HOST@@PEAU1@@Z.c)
 *     ?HampHostCanRegisterProcess@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x180026CB4 (-HampHostCanRegisterProcess@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?HampHostStartProcessPresenceChange@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180026D04 (-HampHostStartProcessPresenceChange@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampAppAcquireLockExclusive@@YAXPEAU_HAM_APPLICATION@@@Z @ 0x18002752C (-HampAppAcquireLockExclusive@@YAXPEAU_HAM_APPLICATION@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180046540 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall HampHostRegisterProcess(
        struct _RM_HAM_ACTIVITY_HOST *a1,
        void *a2,
        void *a3,
        struct _PSM_APP_IDENTITY *a4,
        unsigned __int64 a5,
        unsigned int a6,
        unsigned __int64 *a7)
{
  int v11; // r14d
  unsigned int v12; // ebp
  unsigned int v13; // edx
  int v14; // esi
  __int64 v15; // rbx
  int v16; // ebx
  unsigned int v17; // ebp
  __int64 v18; // rbx
  unsigned __int64 v20; // rsi
  unsigned int i; // edx
  __int64 v22; // rdx
  __int64 v24; // [rsp+40h] [rbp-38h] BYREF
  unsigned __int64 v25; // [rsp+80h] [rbp+8h] BYREF

  v11 = 0;
  HampHostAcquireLockExclusiveEx(a1, 0);
  if ( (*((_QWORD *)a1 + 81) & 0x400000000000000LL) != 0 )
  {
    RtlQueryUnbiasedInterruptTime(&v25);
    v20 = v25 / 0x2710;
    for ( i = 0; i <= 0xEA60; i = v25 / 0x2710 - v20 )
    {
      if ( *((struct _RM_HAM_ACTIVITY_HOST **)a1 + 75) == (struct _RM_HAM_ACTIVITY_HOST *)((char *)a1 + 600) )
        break;
      if ( (*((_QWORD *)a1 + 81) & 0x2000000000LL) != 0 )
        break;
      v24 = -10000LL * (60000 - i);
      CempLockSleepConditionVariableExclusive((__int64)a1, (__int64)a1 + 16, (__int64)&v24);
      RtlQueryUnbiasedInterruptTime(&v25);
    }
  }
  HampHostStartProcessPresenceChange(a1);
  v12 = a6;
  v13 = a6;
  *a7 = *((_QWORD *)a1 + 100);
  if ( HampHostCanRegisterProcess(a1, v13) )
  {
    if ( *((_DWORD *)a1 + 208) == -1
      || *((_QWORD *)a1 + 103)
      || (v14 = TpAllocTimer((char *)a1 + 824, HampHostCacheTimeoutCallback, a1, 0LL), v14 >= 0) )
    {
      v15 = *((_QWORD *)a1 + 81) >> 49;
      HampHostReleaseLockExclusiveEx(a1);
      v16 = v15 & 1;
      if ( !v16 )
      {
        RmpAcquireGlobalLock();
        RmHamHostReference(a1);
        RmpReleaseGlobalLock();
        HampHostUpdateUsageInfoProcesses(a1);
      }
      v17 = v12 & 0xFFFFFFFE;
      v14 = (*(__int64 (__fastcall **)(void *, void *, struct _PSM_APP_IDENTITY *, unsigned __int64, unsigned int, char, _QWORD))(*(_QWORD *)(*((_QWORD *)a1 - 2) + 40LL) + 160LL))(
              a2,
              a3,
              a4,
              a5,
              v17,
              1,
              0LL);
      if ( v14 < 0 )
      {
        if ( !v16 )
        {
          RmpAcquireGlobalLock();
          if ( (*((_QWORD *)a1 + 74))-- == 1LL )
            RmpActivityHostCheckQueueDelete((struct _RM_HAM_ACTIVITY_HOST *)((char *)a1 - 64), v22);
          RmpReleaseGlobalLock();
        }
        HampHostAcquireLockExclusiveEx(a1, 0);
      }
      else
      {
        HampHostAcquireLockExclusiveEx(a1, 0);
        if ( *((_DWORD *)a1 + 140) == 2 )
        {
          v18 = *((_QWORD *)a1 + 97);
          HampAppAcquireLockExclusive((struct _HAM_APPLICATION *)v18);
          *(_WORD *)(v18 + 608) = 6912;
          HampAppReleaseLockExclusive((struct _HAM_APPLICATION *)v18);
        }
        if ( !HampHostCanRegisterProcess(a1, v17) )
          v11 = HampHostQueueTerminateEx(a1, 3u, 2304, 0LL, 1, 0);
        *((_QWORD *)a1 + 81) |= 0x100000000000000uLL;
        HampHostCheckQueueStateWorker(a1, 0);
        *((_QWORD *)a1 + 81) |= 0x2000000000000uLL;
        v14 = 0;
      }
    }
  }
  else
  {
    v14 = -1058275325;
  }
  *((_QWORD *)a1 + 81) &= ~0x1000000000000uLL;
  RtlWakeAllConditionVariable((char *)a1 + 680);
  HampHostReleaseLockExclusiveEx(a1);
  if ( v11 )
    HampDepGroupRunStateChangeWorker(*((struct _HAM_DEPENDENCY_GROUP **)a1 + 86));
  return (unsigned int)v14;
}
