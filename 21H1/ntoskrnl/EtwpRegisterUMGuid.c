/*
 * XREFs of EtwpRegisterUMGuid @ 0x1405F6270
 * Callers:
 *     NtTraceControl @ 0x1405F56E0 (NtTraceControl.c)
 * Callees:
 *     SeAccessCheck @ 0x140207F80 (SeAccessCheck.c)
 *     KeLeaveCriticalRegionThread @ 0x1402486B0 (KeLeaveCriticalRegionThread.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402609E0 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x140260EE0 (ExReleasePushLockEx.c)
 *     HalPutDmaAdapter @ 0x140261190 (HalPutDmaAdapter.c)
 *     EtwEventEnabled @ 0x14026B690 (EtwEventEnabled.c)
 *     SeCaptureSubjectContext @ 0x1405EAF70 (SeCaptureSubjectContext.c)
 *     SeReleaseSubjectContext @ 0x1405EBD30 (SeReleaseSubjectContext.c)
 *     EtwpUpdateEnableMask @ 0x1405F26BC (EtwpUpdateEnableMask.c)
 *     EtwpComputeRegEntryEnableInfo @ 0x1405F2D00 (EtwpComputeRegEntryEnableInfo.c)
 *     EtwpApplyScopeFilters @ 0x1405F4D08 (EtwpApplyScopeFilters.c)
 *     EtwpTrackProviderRegistration @ 0x1405F4E80 (EtwpTrackProviderRegistration.c)
 *     EtwpAddUmRegEntry @ 0x1405F4F98 (EtwpAddUmRegEntry.c)
 *     EtwpFindGuidEntryByGuid @ 0x1405F6130 (EtwpFindGuidEntryByGuid.c)
 *     EtwpGetSchematizedFilterSize @ 0x1405F6638 (EtwpGetSchematizedFilterSize.c)
 *     EtwpUnreferenceGuidEntry @ 0x1405F7508 (EtwpUnreferenceGuidEntry.c)
 *     EtwpAddGuidEntry @ 0x14067F4C8 (EtwpAddGuidEntry.c)
 *     EtwpEventWriteTemplateSessAndProv @ 0x140935500 (EtwpEventWriteTemplateSessAndProv.c)
 *     EtwpCopySchematizedFilters @ 0x14093C270 (EtwpCopySchematizedFilters.c)
 */

__int64 __fastcall EtwpRegisterUMGuid(__int64 a1, __int64 a2, unsigned int a3, char a4, _DWORD *a5)
{
  int v6; // r15d
  bool v9; // zf
  __int64 v10; // rax
  _QWORD *GuidEntryByGuid; // rsi
  void *v13; // rdi
  int v14; // r14d
  struct _KTHREAD *v15; // rax
  __int64 v16; // rdx
  _DWORD *v17; // rdi
  int SchematizedFilterSize; // eax
  unsigned int v19; // ecx
  PADAPTER_OBJECT v20; // rdi
  char Size; // dl
  __int64 v22; // rcx
  char v23; // al
  unsigned __int8 v24; // r15
  __int64 v25; // rax
  _DWORD *v26; // r12
  int v27; // eax
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // rdx
  __int64 v31; // r8
  __int64 v32; // r9
  __int64 v33; // rax
  int v35; // edx
  struct _KTHREAD *CurrentThread; // rax
  char v37; // dl
  __int64 v38; // rdx
  __int64 v39; // r8
  __int64 v40; // r9
  _BYTE v41[4]; // [rsp+50h] [rbp-11h] BYREF
  NTSTATUS AccessStatus; // [rsp+54h] [rbp-Dh] BYREF
  ACCESS_MASK GrantedAccess; // [rsp+58h] [rbp-9h] BYREF
  int v44; // [rsp+5Ch] [rbp-5h]
  PADAPTER_OBJECT DmaAdapter; // [rsp+60h] [rbp-1h] BYREF
  __int64 v46; // [rsp+68h] [rbp+7h] BYREF
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+70h] [rbp+Fh] BYREF
  __int64 v48; // [rsp+C8h] [rbp+67h] BYREF

  v6 = *(_DWORD *)(a2 + 16);
  v44 = *(_DWORD *)(a2 + 20);
  v10 = *(_QWORD *)a2 - *(_QWORD *)&SecurityProviderGuid.Data1;
  v9 = *(_QWORD *)a2 == *(_QWORD *)&SecurityProviderGuid.Data1;
  v46 = 0LL;
  DmaAdapter = 0LL;
  LOBYTE(v48) = 0;
  if ( v9 )
    v10 = *(_QWORD *)(a2 + 8) - *(_QWORD *)SecurityProviderGuid.Data4;
  if ( !v10 )
    return 3221225506LL;
  GuidEntryByGuid = EtwpFindGuidEntryByGuid(a1, (_DWORD *)a2, (unsigned int)(v6 - 2) > 1);
  if ( GuidEntryByGuid || (GuidEntryByGuid = (_QWORD *)EtwpAddGuidEntry(a1, a2, (unsigned int)(v6 - 2) > 1)) != 0LL )
  {
    v13 = (void *)GuidEntryByGuid[9];
    AccessStatus = 0;
    GrantedAccess = 0;
    memset(&SubjectContext, 0, sizeof(SubjectContext));
    SeCaptureSubjectContext(&SubjectContext);
    SeAccessCheck(
      v13,
      &SubjectContext,
      0,
      0x800u,
      0,
      0LL,
      (PGENERIC_MAPPING)&EtwpGenericMapping,
      1,
      &GrantedAccess,
      &AccessStatus);
    SeReleaseSubjectContext(&SubjectContext);
    v14 = AccessStatus;
    if ( AccessStatus >= 0 )
    {
      if ( GuidEntryByGuid[50] )
      {
        CurrentThread = KeGetCurrentThread();
        --CurrentThread->KernelApcDisable;
        ExAcquirePushLockExclusiveEx(GuidEntryByGuid[50] + 408LL, 0LL);
        *(_QWORD *)(GuidEntryByGuid[50] + 416LL) = KeGetCurrentThread();
      }
      v15 = KeGetCurrentThread();
      --v15->KernelApcDisable;
      ExAcquirePushLockExclusiveEx((ULONG_PTR)(GuidEntryByGuid + 51), 0LL);
      LOBYTE(v16) = -1;
      v17 = a5;
      GuidEntryByGuid[52] = KeGetCurrentThread();
      *v17 = 160;
      SchematizedFilterSize = EtwpGetSchematizedFilterSize(GuidEntryByGuid, v16);
      v19 = 160;
      if ( SchematizedFilterSize )
      {
        v19 = SchematizedFilterSize + 176;
        *v17 = SchematizedFilterSize + 176;
      }
      if ( v19 > a3 )
      {
        v14 = -1073741789;
      }
      else
      {
        v14 = EtwpAddUmRegEntry((ULONG_PTR)GuidEntryByGuid, v6, v44, *(_QWORD *)(a2 + 32), &DmaAdapter, (__int64)&v46);
        if ( v14 >= 0 )
        {
          if ( a4 )
            _InterlockedOr16((volatile signed __int16 *)&DmaAdapter[6].Size, 0x100u);
          v20 = DmaAdapter;
          *(_QWORD *)(a2 + 24) = v46;
          if ( *((_DWORD *)GuidEntryByGuid + 24) )
            EtwpUpdateEnableMask((__int64)GuidEntryByGuid, (v20[6].Size & 8) != 0, 0, 1, (_BYTE *)&v20[6].Size + 2);
          Size = v20[6].Size;
          v41[0] = *((_BYTE *)&v20[6].Size + 2);
          EtwpApplyScopeFilters((__int64)v20, (Size & 8) != 0, 0, 0, v41);
          v22 = GuidEntryByGuid[50];
          if ( v22 )
          {
            if ( *(_DWORD *)(v22 + 96) )
              EtwpUpdateEnableMask(v22, (v20[6].Size & 8) != 0, 1, 1, (_BYTE *)&v20[6].Size + 4);
            v37 = v20[6].Size;
            LOBYTE(v48) = *((_BYTE *)&v20[6].Size + 4);
            EtwpApplyScopeFilters((__int64)v20, (v37 & 8) != 0, 0, 1, &v48);
          }
          if ( (v20[6].Size & 8) != 0 )
          {
            *((_BYTE *)&v20[6].Size + 2) = v41[0];
            v23 = v48;
            *((_BYTE *)&v20[6].Size + 4) = v48;
          }
          else
          {
            *((_BYTE *)&v20[6].Size + 2) &= v41[0];
            *((_BYTE *)&v20[6].Size + 4) &= v48;
            v23 = *((_BYTE *)&v20[6].Size + 4);
          }
          v24 = *((_BYTE *)&v20[6].Size + 2);
          if ( v24 || v23 )
          {
            EtwpComputeRegEntryEnableInfo((__int64)v20, a2 + 112);
            v35 = *((_BYTE *)GuidEntryByGuid + 91) & 1;
            BYTE3(v48) = 0;
            *(_DWORD *)(a2 + 152) = v35;
            LOWORD(v48) = *((_WORD *)GuidEntryByGuid + 44);
            BYTE2(v48) = *((_BYTE *)GuidEntryByGuid + 90);
            HIDWORD(v48) = *((_DWORD *)GuidEntryByGuid + 20);
            v25 = v48;
          }
          else
          {
            v25 = 0LL;
            *(_OWORD *)(a2 + 112) = 0LL;
            *(_OWORD *)(a2 + 128) = 0LL;
            *(_DWORD *)(a2 + 152) = 0;
          }
          v26 = a5;
          *(_QWORD *)(a2 + 144) = v25;
          *v26 = 160;
          v27 = EtwpGetSchematizedFilterSize(GuidEntryByGuid, v24);
          if ( v27 )
          {
            *v26 = v27 + 176;
            *(_DWORD *)(a2 + 168) = v27;
            *(_DWORD *)(a2 + 172) = 0x80000000;
            *(_QWORD *)(a2 + 160) = 136LL;
            EtwpCopySchematizedFilters((void *)(a2 + 176));
            v27 = 1;
          }
          *(_DWORD *)(a2 + 156) = v27;
          *(_DWORD *)(a2 + 44) = *v26;
          EtwpTrackProviderRegistration((__int64)v20);
          if ( EtwEventEnabled(EtwpEventTracingProvRegHandle, &ETW_EVENT_PROVIDER_REGISTER) )
            EtwpEventWriteTemplateSessAndProv(v28, &ETW_EVENT_PROVIDER_REGISTER, v29, 1LL, 0LL, a2);
        }
      }
      GuidEntryByGuid[52] = 0LL;
      ExReleasePushLockEx((ULONG_PTR)(GuidEntryByGuid + 51), 0LL);
      KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v30, v31, v32);
      v33 = GuidEntryByGuid[50];
      if ( v33 )
      {
        *(_QWORD *)(v33 + 416) = 0LL;
        ExReleasePushLockEx(GuidEntryByGuid[50] + 408LL, 0LL);
        KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v38, v39, v40);
      }
      if ( DmaAdapter )
        HalPutDmaAdapter(DmaAdapter);
    }
    EtwpUnreferenceGuidEntry((ULONG_PTR)GuidEntryByGuid);
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return (unsigned int)v14;
}
