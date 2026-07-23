/*
 * XREFs of EtwpNotifyGuid @ 0x1406B8AE4
 * Callers:
 *     EtwpSendSessionNotification @ 0x1406B87C8 (EtwpSendSessionNotification.c)
 *     NtTraceControl @ 0x1406DA6C0 (NtTraceControl.c)
 * Callees:
 *     HalPutDmaAdapter @ 0x14023FBE0 (HalPutDmaAdapter.c)
 *     PsGetProcessId @ 0x140269640 (PsGetProcessId.c)
 *     PsGetCurrentThreadProcessId @ 0x14029E930 (PsGetCurrentThreadProcessId.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1403556E0 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x140355BE0 (ExReleasePushLockEx.c)
 *     KeLeaveCriticalRegion @ 0x140356100 (KeLeaveCriticalRegion.c)
 *     KeEnterCriticalRegion @ 0x14035BF60 (KeEnterCriticalRegion.c)
 *     memset @ 0x140414300 (memset.c)
 *     EtwpCreateUmReplyObject @ 0x1405FB2BC (EtwpCreateUmReplyObject.c)
 *     EtwpAccessCheck @ 0x140638968 (EtwpAccessCheck.c)
 *     EtwpAllocDataBlock @ 0x1406B8A40 (EtwpAllocDataBlock.c)
 *     EtwpFreeFilterInfo @ 0x1406B9F2C (EtwpFreeFilterInfo.c)
 *     EtwpSendDataBlock @ 0x1406BB334 (EtwpSendDataBlock.c)
 *     EtwpUnreferenceDataBlock @ 0x1406BBC64 (EtwpUnreferenceDataBlock.c)
 *     EtwpApplyTransientFilters @ 0x1406BCE64 (EtwpApplyTransientFilters.c)
 *     EtwpFindGuidEntryByGuid @ 0x1406DB110 (EtwpFindGuidEntryByGuid.c)
 *     EtwpUnreferenceGuidEntry @ 0x1406ECBA8 (EtwpUnreferenceGuidEntry.c)
 *     EtwpDemuxPrivateTraceHandle @ 0x14093F1EC (EtwpDemuxPrivateTraceHandle.c)
 *     EtwpValidateTraceControlFilterDescriptors @ 0x140940EBC (EtwpValidateTraceControlFilterDescriptors.c)
 *     EtwpCheckCurrentUserGuidAccess @ 0x140941690 (EtwpCheckCurrentUserGuidAccess.c)
 *     EtwpCheckCurrentUserProcessAccess @ 0x1409416A8 (EtwpCheckCurrentUserProcessAccess.c)
 */

__int64 __fastcall EtwpNotifyGuid(__int64 a1, __int64 a2, char a3)
{
  unsigned int v3; // esi
  __int64 v7; // r8
  int v9; // ebx
  unsigned __int64 v10; // rcx
  unsigned int v11; // eax
  ACCESS_MASK v12; // ebx
  int v13; // eax
  __int64 GuidEntryByGuid; // rax
  __int64 v15; // rsi
  _QWORD *v16; // r14
  _QWORD *v17; // r13
  int v18; // r15d
  _QWORD *i; // rbx
  __int16 v20; // ax
  __int64 v21; // rsi
  unsigned int ProcessId; // eax
  int v23; // eax
  __int64 v24; // rax
  bool v25; // zf
  int v26; // [rsp+20h] [rbp-69h]
  bool v27; // [rsp+24h] [rbp-65h]
  __int64 v28; // [rsp+28h] [rbp-61h] BYREF
  __int64 v29; // [rsp+30h] [rbp-59h] BYREF
  PADAPTER_OBJECT DmaAdapter; // [rsp+38h] [rbp-51h] BYREF
  unsigned __int64 v31; // [rsp+40h] [rbp-49h]
  __int64 v32; // [rsp+48h] [rbp-41h] BYREF
  _QWORD v33[18]; // [rsp+50h] [rbp-39h] BYREF
  __int16 v34; // [rsp+F8h] [rbp+6Fh] BYREF
  int v35; // [rsp+108h] [rbp+7Fh]

  v3 = 0;
  v32 = 0LL;
  DmaAdapter = 0LL;
  v29 = 0LL;
  v28 = 0LL;
  v35 = 0;
  v27 = 0;
  v31 = 0LL;
  memset(v33, 0, 0x58uLL);
  v7 = *(unsigned int *)(a2 + 4);
  if ( (unsigned int)v7 > 0x10000 )
    return 3221225990LL;
  if ( *(_DWORD *)a2 == 11 )
  {
    if ( (unsigned int)v7 < 0x78 || (v10 = (*(_DWORD *)(a2 + 72) + 7) & 0xFFFFFFF8, v10 >= v7 - 76) )
    {
      v9 = -2147483643;
      goto LABEL_60;
    }
    v11 = *(_DWORD *)(v10 + a2 + 72);
    if ( v11 )
    {
      v31 = v10 + a2 + 76;
      if ( (unsigned int)EtwpValidateTraceControlFilterDescriptors(v11, v31, (unsigned int)(v7 - (v10 + 76)), v33) )
      {
        v9 = -1073741811;
        goto LABEL_60;
      }
    }
    *(_DWORD *)a2 = 4;
  }
  *(_DWORD *)(a2 + 36) = PsGetCurrentThreadProcessId();
  if ( *(_DWORD *)a2 == 4 )
  {
    if ( *(_DWORD *)(a2 + 4) < 0xF8u )
    {
      v9 = -1073741789;
      goto LABEL_60;
    }
    v12 = 128;
    v27 = (int)EtwpCheckCurrentUserGuidAccess(&PrivateLoggerSecurityGuid, 128LL) < 0;
    *(GUID *)(a2 + 40) = PrivateLoggerNotificationGuid;
  }
  else
  {
    v12 = 4;
    v3 = 1;
  }
  v13 = *(_DWORD *)(a2 + 32);
  *(_DWORD *)(a2 + 20) = 0;
  v26 = v13;
  GuidEntryByGuid = EtwpFindGuidEntryByGuid(a1, a2 + 40, v3);
  v15 = 0LL;
  v16 = (_QWORD *)GuidEntryByGuid;
  if ( !GuidEntryByGuid )
  {
    v9 = -1073741163;
    goto LABEL_60;
  }
  if ( a3 )
  {
    if ( *(_DWORD *)a2 != 4 )
    {
      v9 = EtwpAccessCheck(*(PSECURITY_DESCRIPTOR *)(GuidEntryByGuid + 72), v12, 0LL);
      if ( v9 < 0 )
        goto LABEL_59;
    }
  }
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx((ULONG_PTR)(v16 + 51), 0LL);
  v17 = v16 + 7;
  v16[52] = KeGetCurrentThread();
  if ( (_QWORD *)*v17 == v17 )
  {
    v9 = -1073741162;
    goto LABEL_53;
  }
  if ( *(_BYTE *)(a2 + 12) )
  {
    v9 = EtwpCreateUmReplyObject((ULONG_PTR)v16, (__int64)&v32, &DmaAdapter);
    if ( v9 < 0 )
      goto LABEL_53;
    *(_QWORD *)(a2 + 24) = DmaAdapter;
  }
  v18 = EtwpAllocDataBlock(*(unsigned int *)(a2 + 4), (void *)a2, &v29);
  if ( v18 < 0 )
  {
LABEL_27:
    v9 = -1073741801;
    goto LABEL_53;
  }
  for ( i = (_QWORD *)*v17; i != v17; i = (_QWORD *)*i )
  {
    v20 = *((_WORD *)i + 49);
    v21 = v29;
    if ( (v20 & 2) == 0
      || (v20 & 0x40) != 0
      || v31 && !(unsigned __int8)EtwpApplyTransientFilters(i, v31, v33[10], v33)
      || v26 && (unsigned int)PsGetProcessId((PEPROCESS)i[10]) != v26
      || v27 && (v18 = EtwpCheckCurrentUserProcessAccess(i[10]), v18 < 0) )
    {
      v15 = 0LL;
    }
    else
    {
      if ( *(_DWORD *)a2 == 4 )
      {
        v34 = 0;
        if ( *(_DWORD *)(a2 + 76) != 1 )
        {
          ProcessId = (unsigned int)PsGetProcessId((PEPROCESS)i[10]);
          v15 = 0LL;
          v18 = EtwpDemuxPrivateTraceHandle(ProcessId, *(_WORD *)(a2 + 80) & 0x7FFF, &v34);
          if ( v18 < 0 )
            continue;
          v15 = v28;
          if ( v28 )
          {
            EtwpUnreferenceDataBlock(v28);
            v15 = 0LL;
            v28 = 0LL;
          }
          v18 = EtwpAllocDataBlock(*(unsigned int *)(a2 + 4), (void *)a2, &v28);
          if ( v18 < 0 )
            goto LABEL_27;
          v21 = v28;
          *(_WORD *)(v28 + 80) = v34;
        }
      }
      v23 = EtwpSendDataBlock(i, v21);
      v15 = 0LL;
      if ( v23 < 0 )
        v18 = v23;
      else
        ++v35;
    }
  }
  v9 = 0;
  v24 = v32;
  v25 = v35 == 0;
  *(_DWORD *)(a2 + 20) = v35;
  if ( v25 )
    v9 = v18;
  *(_QWORD *)(a2 + 24) = v24;
LABEL_53:
  v16[52] = v15;
  ExReleasePushLockEx((ULONG_PTR)(v16 + 51), 0LL);
  KeLeaveCriticalRegion();
  if ( v29 )
    EtwpUnreferenceDataBlock(v29);
  if ( v28 )
    EtwpUnreferenceDataBlock(v28);
  if ( DmaAdapter )
    HalPutDmaAdapter(DmaAdapter);
LABEL_59:
  EtwpUnreferenceGuidEntry(v16);
LABEL_60:
  EtwpFreeFilterInfo(v33);
  return (unsigned int)v9;
}
