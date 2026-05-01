/*
 * XREFs of ?RmpActivityHostRevokeResourceSets@@YAXPEAU_RM_ACTIVITY_HOST@@W4_RM_REVOKE_POLICY@@W4_RM_REVOKE_REASON_INTERNAL@@PEAVResourceSet@ExecutionModel@@@Z @ 0x18006B6B4
 * Callers:
 *     ?RmpPartitionRevokeAllSets@@YAXPEAU_RM_PARTITION@@PEAVResourceSet@ExecutionModel@@@Z @ 0x1800706FC (-RmpPartitionRevokeAllSets@@YAXPEAU_RM_PARTITION@@PEAVResourceSet@ExecutionModel@@@Z.c)
 *     ?RmpPolicyReclaimHostList@@YAXPEAU_RM_POLICY_WORK_BUFFER@@W4_RM_REVOKE_POLICY@@W4_RM_REVOKE_REASON_INTERNAL@@PEAVResourceSet@ExecutionModel@@PEAU_RM_ACTIVITY_HOST_REMEDIATION_GROUP@@@Z @ 0x180071C14 (-RmpPolicyReclaimHostList@@YAXPEAU_RM_POLICY_WORK_BUFFER@@W4_RM_REVOKE_POLICY@@W4_RM_REVOKE_REAS.c)
 *     ?RmpMemoryMonitorEmptyPolicyActOnHosts@@YAXPEAU_RM_MEMORY_MONITOR_DATA@@PEAU_RM_ACTIVITY_HOST_METRICS@@K_KKPEAU_RM_ACTIVITY_HOST_REMEDIATION_GROUP@@PEAE4@Z @ 0x1800752F4 (-RmpMemoryMonitorEmptyPolicyActOnHosts@@YAXPEAU_RM_MEMORY_MONITOR_DATA@@PEAU_RM_ACTIVITY_HOST_ME.c)
 * Callees:
 *     ?HampHostQueueTerminateEx@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_REASON@@PEAU_HAM_CLIENT_CONTEXT@@W4_HAM_ROUTINE_DEP_WORK_POLICY@@K@Z @ 0x180005204 (-HampHostQueueTerminateEx@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE.c)
 *     ?HampHostAcquireLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x180009020 (-HampHostAcquireLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?HampHostReleaseLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x180009D90 (-HampHostReleaseLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     _tlgKeywordOn @ 0x180010200 (_tlgKeywordOn.c)
 *     ?RmpActivityHostQueryCommit@@YAJPEAU_RM_ACTIVITY_HOST@@PEA_K11@Z @ 0x180021B98 (-RmpActivityHostQueryCommit@@YAJPEAU_RM_ACTIVITY_HOST@@PEA_K11@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$00@@U?$_tlgWrapperByVal@$03@@U1@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$00@@AEBU?$_tlgWrapperByVal@$03@@35@Z @ 0x18006A8A8 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$00@@U-$_tlgWrapperByVal@$03@@U1@U3@@-$_tl.c)
 *     ?RmpActivityHostQueryEffectivePriority@@YAJPEAU_RM_ACTIVITY_HOST@@_KPEAW4Enum@Priority@ExecutionModel@@@Z @ 0x18006B4F0 (-RmpActivityHostQueryEffectivePriority@@YAJPEAU_RM_ACTIVITY_HOST@@_KPEAW4Enum@Priority@Execution.c)
 *     ?RmpPolicyTryGetRevokeAction@@YAKPEAVResourceSet@ExecutionModel@@W4_RM_REVOKE_POLICY@@PEAW4_RM_REVOKE_ACTION@@@Z @ 0x180071EC8 (-RmpPolicyTryGetRevokeAction@@YAKPEAVResourceSet@ExecutionModel@@W4_RM_REVOKE_POLICY@@PEAW4_RM_R.c)
 *     ?Revoke@ResourceSet@ExecutionModel@@QEAAXW4_RM_REVOKE_ACTION@@W4_RM_REVOKE_REASON_INTERNAL@@_KPEAV12@@Z @ 0x180072790 (-Revoke@ResourceSet@ExecutionModel@@QEAAXW4_RM_REVOKE_ACTION@@W4_RM_REVOKE_REASON_INTERNAL@@_KPE.c)
 */

void __fastcall RmpActivityHostRevokeResourceSets(__int64 a1, int a2, unsigned int a3, __int64 a4)
{
  unsigned int v8; // ebx
  unsigned int v9; // esi
  unsigned __int64 v10; // r15
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rcx
  __int64 v15; // rbx
  __int64 v16; // rax
  bool v17; // zf
  __int64 v18; // r8
  __int64 v19; // rax
  __int64 v20; // rdx
  int v21; // [rsp+50h] [rbp-20h] BYREF
  unsigned int v22; // [rsp+54h] [rbp-1Ch] BYREF
  unsigned __int64 v23; // [rsp+58h] [rbp-18h] BYREF
  __int64 v24; // [rsp+60h] [rbp-10h] BYREF
  unsigned __int64 v25; // [rsp+A0h] [rbp+30h] BYREF

  v25 = 0LL;
  RmpActivityHostQueryCommit((struct _RM_ACTIVITY_HOST *)a1, 0LL, 0LL, &v25);
  v8 = dword_1800B31E0;
  v9 = 1;
  v10 = v25;
  if ( dword_1800B31E0 )
  {
    RmpActivityHostQueryEffectivePriority(
      (struct _RM_ACTIVITY_HOST *)a1,
      v25,
      (enum ExecutionModel::Priority::Enum *)&v25);
    if ( v8 > 4 )
    {
      if ( tlgKeywordOn((__int64)&dword_1800B31E0, 1LL) )
      {
        v24 = *(_QWORD *)(a1 + 32);
        v21 = v13;
        v23 = v10;
        v22 = a3;
        LOBYTE(v25) = a2;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<1>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>>(
          v11,
          byte_18009C27E,
          v12,
          v13,
          (__int64)&v24,
          (__int64)&v25,
          (__int64)&v22,
          (__int64)&v23,
          (__int64)&v21);
      }
    }
  }
  if ( (*(_BYTE *)(a1 + 836) & 1) != 0 )
  {
    if ( a2 <= 0 || a2 > 2 && (v9 = 3, a2 != 3) )
      v9 = 4;
    HampHostAcquireLockExclusiveEx((struct _RM_HAM_ACTIVITY_HOST *)(a1 + 64), 0);
    HampHostQueueTerminateEx((struct _RM_HAM_ACTIVITY_HOST *)(a1 + 64), v9, (unsigned __int8)a3 | 0x700, 0LL, 3, 0);
    HampHostReleaseLockExclusiveEx((struct _RM_HAM_ACTIVITY_HOST *)(a1 + 64));
  }
  else
  {
    v14 = *(_QWORD *)(a1 + 1136);
    v15 = 0LL;
    v16 = v14 - 1296;
    v17 = v14 == a1 + 1136;
    while ( 1 )
    {
      if ( !v17 )
        v15 = v16;
      if ( !v15 )
        break;
      if ( (unsigned int)RmpPolicyTryGetRevokeAction(v15, (unsigned int)a2, &v25)
        && (a2 != 2 || !(_DWORD)v25 || (*(_BYTE *)(a1 + 1162) & 0x10) == 0) )
      {
        ExecutionModel::ResourceSet::Revoke(v15, (unsigned int)v25, a3, v10, a4);
      }
      v18 = *(_QWORD *)(v15 + 1296);
      v19 = *(_QWORD *)(v15 + 1320);
      v20 = 3LL * *(int *)(v15 + 1328) + 139;
      v15 = 0LL;
      v17 = v18 == v19 + 8 * v20;
      v16 = v18 - 1296;
    }
  }
}
