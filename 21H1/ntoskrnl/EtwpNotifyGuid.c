/*
 * XREFs of EtwpNotifyGuid @ 0x14067D410
 * Callers:
 *     NtTraceControl @ 0x1405F56E0 (NtTraceControl.c)
 *     EtwpSendSessionNotification @ 0x14067D228 (EtwpSendSessionNotification.c)
 * Callees:
 *     PsGetCurrentThreadProcessId @ 0x14025ECF0 (PsGetCurrentThreadProcessId.c)
 *     KeEnterCriticalRegion @ 0x14025ED60 (KeEnterCriticalRegion.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402609E0 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x140260EE0 (ExReleasePushLockEx.c)
 *     HalPutDmaAdapter @ 0x140261190 (HalPutDmaAdapter.c)
 *     KeLeaveCriticalRegion @ 0x140261420 (KeLeaveCriticalRegion.c)
 *     PsGetProcessId @ 0x1402D44D0 (PsGetProcessId.c)
 *     memset @ 0x140408F80 (memset.c)
 *     EtwpAccessCheck @ 0x1405F4798 (EtwpAccessCheck.c)
 *     EtwpFindGuidEntryByGuid @ 0x1405F6130 (EtwpFindGuidEntryByGuid.c)
 *     EtwpUnreferenceGuidEntry @ 0x1405F7508 (EtwpUnreferenceGuidEntry.c)
 *     EtwpAllocDataBlock @ 0x14067D36C (EtwpAllocDataBlock.c)
 *     EtwpFreeFilterInfo @ 0x14067EA9C (EtwpFreeFilterInfo.c)
 *     EtwpSendDataBlock @ 0x14067F880 (EtwpSendDataBlock.c)
 *     EtwpUnreferenceDataBlock @ 0x1406801B0 (EtwpUnreferenceDataBlock.c)
 *     EtwpCreateUmReplyObject @ 0x1406EC0EC (EtwpCreateUmReplyObject.c)
 *     EtwpApplyTransientFilters @ 0x1406ED240 (EtwpApplyTransientFilters.c)
 *     EtwpDemuxPrivateTraceHandle @ 0x14093A77C (EtwpDemuxPrivateTraceHandle.c)
 *     EtwpValidateTraceControlFilterDescriptors @ 0x14093C4E0 (EtwpValidateTraceControlFilterDescriptors.c)
 *     EtwpCheckCurrentUserGuidAccess @ 0x14093CCB4 (EtwpCheckCurrentUserGuidAccess.c)
 *     EtwpCheckCurrentUserProcessAccess @ 0x14093CCCC (EtwpCheckCurrentUserProcessAccess.c)
 */

__int64 __fastcall EtwpNotifyGuid(__int64 a1, __int64 a2, char a3)
{
  int v3; // esi
  __int64 v7; // r8
  int UmReplyObject; // ebx
  unsigned __int64 v10; // rcx
  unsigned int v11; // eax
  ACCESS_MASK v12; // ebx
  int v13; // eax
  __int64 *GuidEntryByGuid; // rax
  __int64 v15; // rsi
  __int64 *v16; // r14
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
  PADAPTER_OBJECT DmaAdapter; // [rsp+38h] [rbp-51h]
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
      UmReplyObject = -2147483643;
      goto LABEL_60;
    }
    v11 = *(_DWORD *)(v10 + a2 + 72);
    if ( v11 )
    {
      v31 = v10 + a2 + 76;
      if ( (unsigned int)EtwpValidateTraceControlFilterDescriptors(v11, v31, (unsigned int)(v7 - (v10 + 76)), v33) )
      {
        UmReplyObject = -1073741811;
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
      UmReplyObject = -1073741789;
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
  GuidEntryByGuid = EtwpFindGuidEntryByGuid(a1, (_DWORD *)(a2 + 40), v3);
  v15 = 0LL;
  v16 = GuidEntryByGuid;
  if ( !GuidEntryByGuid )
  {
    UmReplyObject = -1073741163;
    goto LABEL_60;
  }
  if ( a3 )
  {
    if ( *(_DWORD *)a2 != 4 )
    {
      UmReplyObject = EtwpAccessCheck((PSECURITY_DESCRIPTOR)GuidEntryByGuid[9], v12, 0LL);
      if ( UmReplyObject < 0 )
        goto LABEL_59;
    }
  }
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx((ULONG_PTR)(v16 + 51), 0LL);
  v17 = v16 + 7;
  v16[52] = (__int64)KeGetCurrentThread();
  if ( (_QWORD *)*v17 == v17 )
  {
    UmReplyObject = -1073741162;
    goto LABEL_53;
  }
  if ( *(_BYTE *)(a2 + 12) )
  {
    UmReplyObject = EtwpCreateUmReplyObject((ULONG_PTR)v16, (__int64)&v32);
    if ( UmReplyObject < 0 )
      goto LABEL_53;
    *(_QWORD *)(a2 + 24) = DmaAdapter;
  }
  v18 = EtwpAllocDataBlock(*(unsigned int *)(a2 + 4), (void *)a2, &v29);
  if ( v18 < 0 )
  {
LABEL_27:
    UmReplyObject = -1073741801;
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
  UmReplyObject = 0;
  v24 = v32;
  v25 = v35 == 0;
  *(_DWORD *)(a2 + 20) = v35;
  if ( v25 )
    UmReplyObject = v18;
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
  return (unsigned int)UmReplyObject;
}
