/*
 * XREFs of ?HampHostQueryHostGenerationForProcess@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@PEAXPEA_K@Z @ 0x1800281EC
 * Callers:
 *     ?HampHostFindByProcessHandle@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAXPEAPEAU_RM_HAM_ACTIVITY_HOST@@PEA_K@Z @ 0x1800282BC (-HampHostFindByProcessHandle@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAXPEAPEAU_RM_HAM_ACTIVITY_HOST@@P.c)
 * Callees:
 *     ?HampHostAcquireLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x180009240 (-HampHostAcquireLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?HampHostReleaseLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x180009FB0 (-HampHostReleaseLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?HampHostStartProcessPresenceChange@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180026E74 (-HampHostStartProcessPresenceChange@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180047B60 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall HampHostQueryHostGenerationForProcess(
        struct _RM_HAM_ACTIVITY_HOST *a1,
        void *a2,
        unsigned __int64 *a3)
{
  char v6; // al
  unsigned int v7; // ebx

  HampHostAcquireLockExclusiveEx(a1, 0);
  HampHostStartProcessPresenceChange(a1);
  HampHostReleaseLockExclusiveEx(a1);
  v6 = (*(__int64 (__fastcall **)(char *, _QWORD, char *, _QWORD, _QWORD, void *))(*(_QWORD *)(*((_QWORD *)a1 - 2) + 40LL)
                                                                                 + 80LL))(
         (char *)a1 + 488,
         *((unsigned int *)a1 + 139),
         (char *)a1 + 24,
         *((unsigned int *)a1 + 140),
         *((_QWORD *)a1 - 4),
         a2);
  v7 = 0;
  if ( v6 )
    *a3 = *((_QWORD *)a1 + 100);
  else
    v7 = -1073741394;
  HampHostAcquireLockExclusiveEx(a1, 0);
  *((_QWORD *)a1 + 81) &= ~0x1000000000000uLL;
  RtlWakeAllConditionVariable((char *)a1 + 680);
  HampHostReleaseLockExclusiveEx(a1);
  return v7;
}
