/*
 * XREFs of ?RmpPolicyReclaimHostList@@YAXPEAU_RM_POLICY_WORK_BUFFER@@W4_RM_REVOKE_POLICY@@W4_RM_REVOKE_REASON_INTERNAL@@PEAVResourceSet@ExecutionModel@@PEAU_RM_ACTIVITY_HOST_REMEDIATION_GROUP@@@Z @ 0x180071C14
 * Callers:
 *     ?RmpActivityHostEnsureCommitHeadroom@@YAXPEAU_RM_ACTIVITY_HOST@@_K1@Z @ 0x180021A54 (-RmpActivityHostEnsureCommitHeadroom@@YAXPEAU_RM_ACTIVITY_HOST@@_K1@Z.c)
 *     ?RmpPolicyRevokeResourceSetsForAcquire@@YAXPEAU_RM_INTERNAL_RESOURCE_REVOKE_CONTEXT@@@Z @ 0x180071D9C (-RmpPolicyRevokeResourceSetsForAcquire@@YAXPEAU_RM_INTERNAL_RESOURCE_REVOKE_CONTEXT@@@Z.c)
 *     ?RmpMemoryMonitorGenerateHostListAndRevoke@@YAKPEAU_RM_PARTITION@@W4_RM_ACTIVITY_HOST_METRIC@@_KW4_RM_REVOKE_POLICY@@W4_RM_REVOKE_REASON_INTERNAL@@PEAU_RM_ACTIVITY_HOST_REMEDIATION_GROUP@@@Z @ 0x180075C4C (-RmpMemoryMonitorGenerateHostListAndRevoke@@YAKPEAU_RM_PARTITION@@W4_RM_ACTIVITY_HOST_METRIC@@_K.c)
 * Callees:
 *     __security_check_cookie @ 0x180044E00 (__security_check_cookie.c)
 *     ?RmpActivityHostAddToRemediationGroup@@YAXPEAU_RM_ACTIVITY_HOST@@PEAU_RM_ACTIVITY_HOST_REMEDIATION_GROUP@@@Z @ 0x18006ABC8 (-RmpActivityHostAddToRemediationGroup@@YAXPEAU_RM_ACTIVITY_HOST@@PEAU_RM_ACTIVITY_HOST_REMEDIATI.c)
 *     ?RmpActivityHostDecommitOfferedMemory@@YAJPEAU_RM_ACTIVITY_HOST@@PEAU_RM_OFFERED_DECOMMIT_INFO@@@Z @ 0x18006AE28 (-RmpActivityHostDecommitOfferedMemory@@YAJPEAU_RM_ACTIVITY_HOST@@PEAU_RM_OFFERED_DECOMMIT_INFO@@.c)
 *     ?RmpActivityHostRevokeResourceSets@@YAXPEAU_RM_ACTIVITY_HOST@@W4_RM_REVOKE_POLICY@@W4_RM_REVOKE_REASON_INTERNAL@@PEAVResourceSet@ExecutionModel@@@Z @ 0x18006B6B4 (-RmpActivityHostRevokeResourceSets@@YAXPEAU_RM_ACTIVITY_HOST@@W4_RM_REVOKE_POLICY@@W4_RM_REVOKE_.c)
 */

void __fastcall RmpPolicyReclaimHostList(
        __int64 a1,
        int a2,
        unsigned int a3,
        __int64 a4,
        struct _RM_ACTIVITY_HOST_REMEDIATION_GROUP *a5)
{
  __int64 i; // rbx
  __int64 v10; // rcx
  __int64 v11; // r10
  __int64 v12; // rax
  int v13; // r8d
  __int64 v14; // [rsp+20h] [rbp-58h] BYREF
  __int128 v15; // [rsp+28h] [rbp-50h]

  for ( i = 0LL; (unsigned int)i < *(_DWORD *)(a1 + 40); i = (unsigned int)(i + 1) )
  {
    v10 = *(_QWORD *)(a1 + 8);
    v11 = *(_QWORD *)(v10 + 24 * i + 8);
    if ( *(_DWORD *)(v10 + 24 * i + 16) == 1 )
    {
      v12 = *(_QWORD *)(v10 + 24 * i);
      v13 = *(_DWORD *)(v10 + 24 * i + 20) & 1;
      v15 = 0LL;
      if ( v13 )
        v12 = -1LL;
      v14 = v12;
      DWORD2(v15) = _mm_cvtsi128_si32(_mm_srli_si128((__m128i)0LL, 8)) & 0xFFFFFFF8 | (4 * v13) | (*(_DWORD *)(v11 + 1244) >> 4) & 1;
      RmpActivityHostDecommitOfferedMemory((struct _RM_ACTIVITY_HOST *)v11, (struct _RM_OFFERED_DECOMMIT_INFO *)&v14);
    }
    else
    {
      if ( a5 )
        RmpActivityHostAddToRemediationGroup(*(struct _RM_ACTIVITY_HOST **)(v10 + 24 * i + 8), a5);
      RmpActivityHostRevokeResourceSets(v11, a2, a3, a4);
    }
  }
}
