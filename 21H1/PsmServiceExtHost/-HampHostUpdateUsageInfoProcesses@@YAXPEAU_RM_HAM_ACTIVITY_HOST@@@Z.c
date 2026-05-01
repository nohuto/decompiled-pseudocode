/*
 * XREFs of ?HampHostUpdateUsageInfoProcesses@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180025CE8
 * Callers:
 *     ?HampHostRegisterProcess@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@PEAX1PEAU_PSM_APP_IDENTITY@@_KKPEA_K@Z @ 0x180026A5C (-HampHostRegisterProcess@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@PEAX1PEAU_PSM_APP_IDENTITY@@_KKPEA_K@Z.c)
 *     ?HampHostNotifyZeroProcess@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_REASON@@KPEAK@Z @ 0x180029908 (-HampHostNotifyZeroProcess@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINAT.c)
 * Callees:
 *     ?HampHostAcquireLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x180009020 (-HampHostAcquireLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?HampHostReleaseLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x180009D90 (-HampHostReleaseLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?RmpActivityHostCheckQueueDelete@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180009E2C (-RmpActivityHostCheckQueueDelete@@YAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?RmpReleaseGlobalLock@@YAXXZ @ 0x18000F120 (-RmpReleaseGlobalLock@@YAXXZ.c)
 *     ?RmpAcquireGlobalLock@@YAXXZ @ 0x18001E110 (-RmpAcquireGlobalLock@@YAXXZ.c)
 *     ?RmHamHostReference@@YAPEAU_RM_HAM_ACTIVITY_HOST@@PEAU1@@Z @ 0x180025DA0 (-RmHamHostReference@@YAPEAU_RM_HAM_ACTIVITY_HOST@@PEAU1@@Z.c)
 *     CempGetSystemTime @ 0x180025DCC (CempGetSystemTime.c)
 */

void __fastcall HampHostUpdateUsageInfoProcesses(struct _RM_HAM_ACTIVITY_HOST *a1)
{
  __int64 v2; // rdi
  __int64 v3; // rdi
  __int64 v4; // rdx
  __int64 v6; // [rsp+30h] [rbp+8h] BYREF

  CempGetSystemTime(&v6);
  RmpAcquireGlobalLock();
  RmHamHostReference(a1);
  RmpReleaseGlobalLock();
  HampHostAcquireLockExclusiveEx(a1, 0);
  v2 = *((_QWORD *)a1 + 81);
  if ( (v2 & 0x2000000000000LL) != 0 )
    *((_QWORD *)a1 + 127) = v6;
  else
    *((_QWORD *)a1 + 126) = v6;
  v3 = v2 | 0x2000000000000000LL;
  *((_QWORD *)a1 + 81) = v3 | 0x1000000000000000LL;
  HampHostReleaseLockExclusiveEx(a1);
  if ( (v3 & 0x1000000000000000LL) != 0 )
  {
    RmpAcquireGlobalLock();
    if ( (*((_QWORD *)a1 + 74))-- == 1LL )
      RmpActivityHostCheckQueueDelete((struct _RM_HAM_ACTIVITY_HOST *)((char *)a1 - 64), v4);
    RmpReleaseGlobalLock();
  }
  HampPkgPushUpdate(*(struct _HAM_PACKAGE **)(*((_QWORD *)a1 + 97) + 88LL));
}
