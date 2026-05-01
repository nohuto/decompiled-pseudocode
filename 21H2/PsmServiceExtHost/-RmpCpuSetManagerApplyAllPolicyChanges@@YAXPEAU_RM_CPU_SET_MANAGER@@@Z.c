/*
 * XREFs of ?RmpCpuSetManagerApplyAllPolicyChanges@@YAXPEAU_RM_CPU_SET_MANAGER@@@Z @ 0x1800408E4
 * Callers:
 *     ?RmpCpuSetManagerResetValidMask@@YAJPEAU_RM_CPU_SET_MANAGER@@@Z @ 0x180040694 (-RmpCpuSetManagerResetValidMask@@YAJPEAU_RM_CPU_SET_MANAGER@@@Z.c)
 *     ?RmpCleanupAllModules@@YAXPEAU_RM_SERVICE_GLOBALS@@@Z @ 0x180064434 (-RmpCleanupAllModules@@YAXPEAU_RM_SERVICE_GLOBALS@@@Z.c)
 *     ?RmpCpuSetManagerAcquireCpuSets@@YAJPEAU_RM_CPU_SET_CLIENT_CONTEXT@@PEAU_RM_CPU_SET_REQUEST_INFORMATION@@KPEAPEAU_RM_CPU_SET_ALLOCATION@@@Z @ 0x18006C4A0 (-RmpCpuSetManagerAcquireCpuSets@@YAJPEAU_RM_CPU_SET_CLIENT_CONTEXT@@PEAU_RM_CPU_SET_REQUEST_INFO.c)
 *     ?RmpCpuSetManagerReleaseAllocation@@YAXPEAU_RM_CPU_SET_ALLOCATION@@@Z @ 0x18006DED4 (-RmpCpuSetManagerReleaseAllocation@@YAXPEAU_RM_CPU_SET_ALLOCATION@@@Z.c)
 *     ?RmpCpuSetManagerReleaseClientContext@@YAXPEAU_RM_CPU_SET_CLIENT_CONTEXT@@@Z @ 0x18006DF78 (-RmpCpuSetManagerReleaseClientContext@@YAXPEAU_RM_CPU_SET_CLIENT_CONTEXT@@@Z.c)
 *     ?RmpCpuSetManagerReleaseProcessRegistrationEx@@YAXPEAU_RM_CPU_SET_MANAGER@@PEAU_RM_CPU_SET_PROCESS_REGISTRATION@@K@Z @ 0x18006E030 (-RmpCpuSetManagerReleaseProcessRegistrationEx@@YAXPEAU_RM_CPU_SET_MANAGER@@PEAU_RM_CPU_SET_PROCE.c)
 *     ?RmpCpuSetManagerSweepInvalidAllocations@@YAXPEAU_RM_CPU_SET_MANAGER@@@Z @ 0x18006E220 (-RmpCpuSetManagerSweepInvalidAllocations@@YAXPEAU_RM_CPU_SET_MANAGER@@@Z.c)
 * Callees:
 *     _tlgKeywordOn @ 0x180010380 (_tlgKeywordOn.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x18002E148 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     ?RmpCpuSetManagerApplyWorkloadAllowedMasks@@YAXPEAU_RM_CPU_SET_MANAGER@@@Z @ 0x180040970 (-RmpCpuSetManagerApplyWorkloadAllowedMasks@@YAXPEAU_RM_CPU_SET_MANAGER@@@Z.c)
 *     ?RmpCpuSetManagerApplySystemAllowedMask@@YAJPEAU_RM_CPU_SET_MANAGER@@@Z @ 0x180040B94 (-RmpCpuSetManagerApplySystemAllowedMask@@YAJPEAU_RM_CPU_SET_MANAGER@@@Z.c)
 *     __security_check_cookie @ 0x1800448B0 (__security_check_cookie.c)
 *     ?RmpCpuSetManagerApplyProcessPolicy@@YAXPEAU_RM_CPU_SET_MANAGER@@PEAU_RM_CPU_SET_PROCESS@@@Z @ 0x18006C758 (-RmpCpuSetManagerApplyProcessPolicy@@YAXPEAU_RM_CPU_SET_MANAGER@@PEAU_RM_CPU_SET_PROCESS@@@Z.c)
 */

void __fastcall RmpCpuSetManagerApplyAllPolicyChanges(struct _RM_CPU_SET_MANAGER *a1)
{
  _QWORD *i; // rdi
  int v3; // eax
  __int64 v4; // rcx
  int v5; // r9d
  int v6; // [rsp+30h] [rbp-48h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v7; // [rsp+38h] [rbp-40h] BYREF
  int *v8; // [rsp+58h] [rbp-20h]
  int v9; // [rsp+60h] [rbp-18h]
  int v10; // [rsp+64h] [rbp-14h]

  if ( (*((_BYTE *)a1 + 932) & 1) != 0
    && (int)RmpCpuSetManagerApplySystemAllowedMask(a1) < 0
    && (unsigned int)dword_1800B31E0 > 4
    && tlgKeywordOn((__int64)&dword_1800B31E0, 1LL) )
  {
    v10 = 0;
    v8 = &v6;
    v6 = v5;
    v9 = 4;
    tlgWriteTransfer_EventWriteTransfer(v4, (unsigned __int8 *)dword_18009C55C, 0LL, 0LL, 3u, &v7);
  }
  for ( i = (_QWORD *)((char *)a1 + 888);
        (_QWORD *)*i != i;
        RmpCpuSetManagerApplyProcessPolicy(a1, (struct _RM_CPU_SET_PROCESS *)(*i - 40LL)) )
  {
    ;
  }
  v3 = *((_DWORD *)a1 + 233);
  if ( (v3 & 1) != 0 )
  {
    RmpCpuSetManagerApplyWorkloadAllowedMasks(a1);
    v3 = *((_DWORD *)a1 + 233);
  }
  *((_DWORD *)a1 + 233) = v3 & 0xFFFFFFFE;
}
