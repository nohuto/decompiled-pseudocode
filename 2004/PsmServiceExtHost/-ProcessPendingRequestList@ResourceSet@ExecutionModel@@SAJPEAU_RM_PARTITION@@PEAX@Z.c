/*
 * XREFs of ?ProcessPendingRequestList@ResourceSet@ExecutionModel@@SAJPEAU_RM_PARTITION@@PEAX@Z @ 0x180015C10
 * Callers:
 *     <none>
 * Callees:
 *     ?RmpActivityHostResourceSetsChanged@@YAXPEAU_RM_ACTIVITY_HOST@@K@Z @ 0x18000FCB8 (-RmpActivityHostResourceSetsChanged@@YAXPEAU_RM_ACTIVITY_HOST@@K@Z.c)
 *     _tlgKeywordOn @ 0x180010200 (_tlgKeywordOn.c)
 *     ?RmpResourceCheckDestroyPartitionForAcquire@@YAKPEAU_RM_RESOURCE_SET@@@Z @ 0x180014C2C (-RmpResourceCheckDestroyPartitionForAcquire@@YAKPEAU_RM_RESOURCE_SET@@@Z.c)
 *     ?EvaluateResourceRequest@ResourceSet@ExecutionModel@@QEAAJ_KW4Enum@PendType@2@PEAU_RM_RESOURCE_USAGE_LIMITS@@PEAU_RM_SYSTEM_MEMORY_METRICS@@PEAU_RM_INTERNAL_RESOURCE_REVOKE_CONTEXT@@PEA_N5@Z @ 0x180014C90 (-EvaluateResourceRequest@ResourceSet@ExecutionModel@@QEAAJ_KW4Enum@PendType@2@PEAU_RM_RESOURCE_U.c)
 *     ?CompleteAcquire@ResourceSet@ExecutionModel@@QEAAXK@Z @ 0x1800150D0 (-CompleteAcquire@ResourceSet@ExecutionModel@@QEAAXK@Z.c)
 *     ?RmpActivityHostQueryCommitDebt@@YAJPEAU_RM_ACTIVITY_HOST@@PEA_K@Z @ 0x180021D8C (-RmpActivityHostQueryCommitDebt@@YAJPEAU_RM_ACTIVITY_HOST@@PEA_K@Z.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x18002DFD8 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     ?RmpPolicyPrepareToCheckMetrics@@YAXPEAU_RM_PARTITION@@PEAU_RM_POLICY@@PEAU_RM_RESOURCE_USAGE_LIMITS@@PEAU_RM_SYSTEM_MEMORY_METRICS@@@Z @ 0x180034B1C (-RmpPolicyPrepareToCheckMetrics@@YAXPEAU_RM_PARTITION@@PEAU_RM_POLICY@@PEAU_RM_RESOURCE_USAGE_LI.c)
 *     ?RmpActivityHostCheckQueueWork@@YAKPEAU_RM_ACTIVITY_HOST@@@Z @ 0x1800352C0 (-RmpActivityHostCheckQueueWork@@YAKPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     __security_check_cookie @ 0x180044E00 (__security_check_cookie.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800460A8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180046540 (_guard_dispatch_icall_nop.c)
 *     ?RmpResourceSetIsCommitSaveEligible@@YAEPEBU_ResourceSetInfo@ExecutionModel@@@Z @ 0x180063D68 (-RmpResourceSetIsCommitSaveEligible@@YAEPEBU_ResourceSetInfo@ExecutionModel@@@Z.c)
 *     ?RmpPolicyInitializeRevokeContext@@YAXPEAU_RM_PARTITION@@PEAV?$list@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@V?$allocator@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@@utl@@@utl@@PEAVResourceSet@ExecutionModel@@PEAU_RM_INTERNAL_RESOURCE_REVOKE_CONTEXT@@@Z @ 0x1800719C8 (-RmpPolicyInitializeRevokeContext@@YAXPEAU_RM_PARTITION@@PEAV-$list@V-$CComPtr@VBaseResourceSet@.c)
 *     ?RmpPolicyRevokeResourceSetsForAcquire@@YAXPEAU_RM_INTERNAL_RESOURCE_REVOKE_CONTEXT@@@Z @ 0x180071D9C (-RmpPolicyRevokeResourceSetsForAcquire@@YAXPEAU_RM_INTERNAL_RESOURCE_REVOKE_CONTEXT@@@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U1@U1@U1@U?$_tlgWrapperByVal@$00@@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3333AEBU?$_tlgWrapperByVal@$00@@3@Z @ 0x1800720A0 (--$Write@U-$_tlgWrapperByVal@$07@@U1@U1@U1@U1@U-$_tlgWrapperByVal@$00@@U1@@-$_tlgWriteTemplate@$.c)
 *     ?CheckUpdatePendStats@ResourceSet@ExecutionModel@@AEAAXKK@Z @ 0x1800725E0 (-CheckUpdatePendStats@ResourceSet@ExecutionModel@@AEAAXKK@Z.c)
 */

__int64 __fastcall ExecutionModel::ResourceSet::ProcessPendingRequestList(struct _RM_PARTITION *a1, void *a2)
{
  __int64 *v2; // rbx
  _QWORD *v3; // rdi
  __int64 v6; // rbx
  __int64 v7; // r13
  __int64 v8; // rbx
  __int64 v9; // rsi
  __int64 v10; // rdx
  unsigned int v11; // r8d
  int v12; // r15d
  int v13; // r8d
  int v14; // r9d
  __int64 v15; // rcx
  int v16; // eax
  __int64 *v17; // rcx
  __int64 v18; // rax
  __int64 v19; // rcx
  __int16 v20; // [rsp+68h] [rbp-A0h] BYREF
  char v21; // [rsp+6Ah] [rbp-9Eh] BYREF
  unsigned __int64 v22; // [rsp+70h] [rbp-98h] BYREF
  _QWORD Block[3]; // [rsp+78h] [rbp-90h] BYREF
  __int64 v24; // [rsp+90h] [rbp-78h] BYREF
  __int64 v25; // [rsp+98h] [rbp-70h] BYREF
  __int64 v26; // [rsp+A0h] [rbp-68h] BYREF
  __int64 v27; // [rsp+A8h] [rbp-60h] BYREF
  unsigned __int64 v28; // [rsp+B0h] [rbp-58h] BYREF
  __int64 v29; // [rsp+B8h] [rbp-50h] BYREF
  _BYTE v30[128]; // [rsp+C8h] [rbp-40h] BYREF
  _QWORD v31[10]; // [rsp+148h] [rbp+40h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v32; // [rsp+198h] [rbp+90h] BYREF

  v2 = Block;
  v3 = (_QWORD *)((char *)a1 + 200);
  Block[0] = Block;
  Block[1] = Block;
  Block[2] = 0LL;
  if ( (_QWORD *)*v3 != v3 )
  {
    if ( (unsigned int)dword_1800B31E0 > 5 && tlgKeywordOn((__int64)&dword_1800B31E0, 1LL) )
      tlgWriteTransfer_EventWriteTransfer((int)&dword_1800B31E0, (int)&dword_18009D29B, 0, 0, 2u, &v32);
    v6 = *((_QWORD *)a1 + 3);
    RmpPolicyPrepareToCheckMetrics(
      a1,
      (struct _RM_POLICY *)(v6 + 400),
      (struct _RM_RESOURCE_USAGE_LIMITS *)v30,
      (struct _RM_SYSTEM_MEMORY_METRICS *)v31);
    v7 = *(_QWORD *)(*(_QWORD *)(v6 + 2720) + 32LL);
    while ( (_QWORD *)*v3 != v3 )
    {
      v8 = *(_QWORD *)(*v3 - 32LL);
      v9 = *(_QWORD *)(v8 + 1320);
      v22 = 0LL;
      if ( !RmpResourceSetIsCommitSaveEligible((const struct ExecutionModel::_ResourceSetInfo *)(v8 + 1336)) )
        RmpActivityHostQueryCommitDebt((struct _RM_ACTIVITY_HOST *)v9, &v22);
      v12 = RmpResourceCheckDestroyPartitionForAcquire(*(struct _RM_RESOURCE_SET **)(v8 + 1312), v10, v11);
      if ( (unsigned int)dword_1800B31E0 > 5 && tlgKeywordOn((__int64)&dword_1800B31E0, 1LL) )
      {
        v15 = *(_QWORD *)(v8 + 1752);
        v25 = *(_QWORD *)(v7 + 128);
        v26 = *(_QWORD *)(v8 + 128);
        v27 = v31[3];
        v28 = v22;
        v29 = *(_QWORD *)(v8 + 104);
        v24 = v15;
        v21 = v12;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<1>,_tlgWrapperByVal<8>>(
          v15,
          (unsigned int)&unk_18009D69C,
          v13,
          v14,
          (__int64)&v29,
          (__int64)&v28,
          (__int64)&v27,
          (__int64)&v26,
          (__int64)&v25,
          (__int64)&v21,
          (__int64)&v24);
      }
      RmpPolicyInitializeRevokeContext(*(_QWORD *)(*(_QWORD *)(v8 + 1312) + 64LL), Block, v8, &v32);
      if ( (int)ExecutionModel::ResourceSet::EvaluateResourceRequest(
                  v8,
                  v22,
                  1,
                  (__int64)v30,
                  v31,
                  &v32,
                  &v20,
                  (char *)&v20 + 1) < 0 )
        break;
      ExecutionModel::ResourceSet::CheckUpdatePendStats((ExecutionModel::ResourceSet *)v8, v20 == 0, v12 == 0);
      if ( v20 || v12 )
      {
        RmpPolicyRevokeResourceSetsForAcquire((struct _RM_INTERNAL_RESOURCE_REVOKE_CONTEXT *)&v32);
        break;
      }
      v16 = *(_DWORD *)(v8 + 1332);
      if ( (v16 & 4) == 0 )
      {
        *(_DWORD *)(v8 + 1332) = v16 | 4;
        RmpActivityHostResourceSetsChanged((struct _RM_ACTIVITY_HOST *)v9, 1u);
      }
      if ( (*(_BYTE *)(v9 + 836) & 1) == 0 && RmpActivityHostCheckQueueWork((struct _RM_ACTIVITY_HOST *)v9) )
        break;
      ExecutionModel::ResourceSet::CompleteAcquire((ExecutionModel::ResourceSet *)v8, 1);
    }
    v2 = (__int64 *)Block[0];
  }
  if ( (unsigned int)dword_1800B31E0 <= 5 || (byte_1800B31F0 & 1) == 0 || (qword_1800B31F8 & 1) != qword_1800B31F8 )
    goto LABEL_4;
  tlgWriteTransfer_EventWriteTransfer((int)&dword_1800B31E0, (int)&dword_18009D137, 0, 0, 2u, &v32);
  while ( 1 )
  {
    v2 = (__int64 *)Block[0];
LABEL_4:
    if ( v2 == Block )
      break;
    v17 = (__int64 *)v2[1];
    v18 = *v2;
    *v17 = *v2;
    *(_QWORD *)(v18 + 8) = v17;
    v19 = v2[2];
    if ( v19 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
    operator delete(v2);
  }
  return 0LL;
}
