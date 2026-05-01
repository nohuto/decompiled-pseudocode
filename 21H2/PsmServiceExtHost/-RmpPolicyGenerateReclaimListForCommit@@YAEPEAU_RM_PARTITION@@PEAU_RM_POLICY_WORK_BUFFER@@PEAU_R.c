/*
 * XREFs of ?RmpPolicyGenerateReclaimListForCommit@@YAEPEAU_RM_PARTITION@@PEAU_RM_POLICY_WORK_BUFFER@@PEAU_RM_ACTIVITY_HOST@@_KW4Enum@Priority@ExecutionModel@@W4_RM_REVOKE_POLICY@@@Z @ 0x180072034
 * Callers:
 *     ?EvaluateResourceRequest@ResourceSet@ExecutionModel@@QEAAJ_KW4Enum@PendType@2@PEAU_RM_RESOURCE_USAGE_LIMITS@@PEAU_RM_SYSTEM_MEMORY_METRICS@@PEAU_RM_INTERNAL_RESOURCE_REVOKE_CONTEXT@@PEA_N5@Z @ 0x180014E10 (-EvaluateResourceRequest@ResourceSet@ExecutionModel@@QEAAJ_KW4Enum@PendType@2@PEAU_RM_RESOURCE_U.c)
 *     ?RmpActivityHostEnsureCommitHeadroom@@YAXPEAU_RM_ACTIVITY_HOST@@_K1@Z @ 0x180021B94 (-RmpActivityHostEnsureCommitHeadroom@@YAXPEAU_RM_ACTIVITY_HOST@@_K1@Z.c)
 *     ?RmpMemoryMonitorGenerateHostListAndRevoke@@YAKPEAU_RM_PARTITION@@W4_RM_ACTIVITY_HOST_METRIC@@_KW4_RM_REVOKE_POLICY@@W4_RM_REVOKE_REASON_INTERNAL@@PEAU_RM_ACTIVITY_HOST_REMEDIATION_GROUP@@@Z @ 0x18007661C (-RmpMemoryMonitorGenerateHostListAndRevoke@@YAKPEAU_RM_PARTITION@@W4_RM_ACTIVITY_HOST_METRIC@@_K.c)
 * Callees:
 *     ?RmpActivityHostIsRevocable@@YAKPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180012C50 (-RmpActivityHostIsRevocable@@YAKPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?RmpEmPriorityCompare@@YAJW4Enum@Priority@ExecutionModel@@0@Z @ 0x180064B2C (-RmpEmPriorityCompare@@YAJW4Enum@Priority@ExecutionModel@@0@Z.c)
 *     ?RmpPolicyGetHostCommitForReclaim@@YA_KW4_RM_RECLAIM_POLICY@@PEBU_RM_ACTIVITY_HOST_METRICS@@@Z @ 0x180072374 (-RmpPolicyGetHostCommitForReclaim@@YA_KW4_RM_RECLAIM_POLICY@@PEBU_RM_ACTIVITY_HOST_METRICS@@@Z.c)
 *     ?RmpPolicyReclaimContextInitialize@@YAXPEAU_RM_PARTITION@@PEAU_RM_POLICY_WORK_BUFFER@@_KW4_RM_REVOKE_POLICY@@PEAU_RM_POLICY_RECLAIM_CONTEXT@@@Z @ 0x1800724C0 (-RmpPolicyReclaimContextInitialize@@YAXPEAU_RM_PARTITION@@PEAU_RM_POLICY_WORK_BUFFER@@_KW4_RM_RE.c)
 */

bool __fastcall RmpPolicyGenerateReclaimListForCommit(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned __int64 a4,
        int a5,
        unsigned int a6)
{
  unsigned int v6; // r14d
  unsigned __int64 v7; // rbx
  int v11; // eax
  int v12; // r13d
  unsigned int v13; // r12d
  unsigned int v14; // r15d
  unsigned __int64 v15; // rsi
  __int64 v16; // r14
  int v17; // r8d
  __int64 v18; // r9
  __int64 v19; // r8
  __int64 HostCommitForReclaim; // rax
  int v21; // r10d
  __int64 v22; // r8
  __int64 v23; // r9
  unsigned __int64 v24; // rax
  int v26; // [rsp+30h] [rbp-58h]
  unsigned int v27; // [rsp+34h] [rbp-54h]
  _BYTE Context[8]; // [rsp+38h] [rbp-50h] BYREF
  int v29; // [rsp+40h] [rbp-48h]
  unsigned int v30; // [rsp+44h] [rbp-44h]
  unsigned int v31; // [rsp+48h] [rbp-40h]
  unsigned int v32; // [rsp+98h] [rbp+10h]
  int v34; // [rsp+A8h] [rbp+20h]

  v6 = 0;
  v7 = 0LL;
  v32 = 0;
  if ( !*(_DWORD *)(a2 + 36) )
    goto LABEL_32;
  RmpPolicyReclaimContextInitialize(a1, a2, a4, a6, Context);
  qsort_s(
    *(void **)a2,
    *(unsigned int *)(a2 + 36),
    0x40uLL,
    (_CoreCrtSecureSearchSortCompareFunction)RmpPolicyCompareActivityHostsByPriorityAndCommitQSortThunk,
    Context);
  v27 = v30;
  v34 = v29;
  if ( v30 )
  {
    if ( v30 == 1 )
    {
      v11 = a5;
      v12 = 1;
      goto LABEL_9;
    }
    if ( v30 != 2 )
      goto LABEL_32;
    v11 = a5;
  }
  else
  {
    v11 = *(_DWORD *)(*(_QWORD *)(a1 + 24) + 520LL);
  }
  v12 = 0;
LABEL_9:
  v13 = *(_DWORD *)(a1 + 196);
  v14 = 0;
  v26 = v11;
  if ( *(_DWORD *)(a2 + 36) )
  {
    while ( 1 )
    {
      if ( a4 <= v7 )
      {
LABEL_31:
        v6 = v32;
        goto LABEL_32;
      }
      v15 = *(_QWORD *)a2 + ((unsigned __int64)v14 << 6);
      v16 = *(_QWORD *)(v15 + 48);
      if ( v16 != a3 )
        break;
LABEL_28:
      if ( ++v14 >= *(_DWORD *)(a2 + 36) )
        goto LABEL_31;
      v11 = v26;
    }
    if ( (int)RmpEmPriorityCompare(*(_DWORD *)(v15 + 56), v11) >= 0 )
      goto LABEL_31;
    if ( v17 == 1 )
    {
      if ( (*(_BYTE *)(v16 + 1162) & 0x10) == 0 )
        goto LABEL_31;
    }
    else if ( (unsigned int)(v17 - 2) > 1 )
    {
      goto LABEL_18;
    }
    if ( !(unsigned int)RmpActivityHostIsRevocable((struct _RM_ACTIVITY_HOST *)v16) )
      goto LABEL_28;
LABEL_18:
    RmpActivityHostIsRevocable((struct _RM_ACTIVITY_HOST *)v16);
    v18 = *(_QWORD *)(a2 + 8);
    v19 = 3LL * v32++;
    *(_QWORD *)(v18 + 8 * v19 + 8) = v16;
    if ( v27 == 2 )
    {
      if ( v34 == 1 )
        goto LABEL_23;
      if ( v7 + *(_QWORD *)(v15 + 40) >= a4 )
      {
        *(_DWORD *)(v18 + 8 * v19 + 16) = 1;
        v24 = a4 - v7;
        v7 = a4;
        *(_QWORD *)(v18 + 8 * v19) = v24;
        goto LABEL_31;
      }
    }
    if ( v27 == 1 )
      *(_DWORD *)(v18 + 8 * v19 + 20) |= 1u;
LABEL_23:
    *(_DWORD *)(v18 + 8 * v19 + 16) = v12;
    HostCommitForReclaim = RmpPolicyGetHostCommitForReclaim(v30, v15);
    v7 += HostCommitForReclaim;
    *(_QWORD *)(v23 + 8 * v22) = HostCommitForReclaim;
    if ( !v12 && *(char *)(v16 + 1162) < 0 )
      --v13;
    if ( !v21 && v13 <= v31 )
      goto LABEL_31;
    goto LABEL_28;
  }
LABEL_32:
  *(_DWORD *)(a2 + 40) = v6;
  return v7 >= a4;
}
