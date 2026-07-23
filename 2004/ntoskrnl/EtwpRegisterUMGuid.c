/*
 * XREFs of EtwpRegisterUMGuid @ 0x14066E310
 * Callers:
 *     NtTraceControl @ 0x14068D910 (NtTraceControl.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x140207AC0 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x140207FC0 (ExReleasePushLockEx.c)
 *     HalPutDmaAdapter @ 0x140208270 (HalPutDmaAdapter.c)
 *     KeLeaveCriticalRegionThread @ 0x14020B010 (KeLeaveCriticalRegionThread.c)
 *     EtwEventEnabled @ 0x140212640 (EtwEventEnabled.c)
 *     SeAccessCheck @ 0x14029AA90 (SeAccessCheck.c)
 *     EtwpAddGuidEntry @ 0x1406369BC (EtwpAddGuidEntry.c)
 *     EtwpComputeRegEntryEnableInfo @ 0x14066B0C8 (EtwpComputeRegEntryEnableInfo.c)
 *     EtwpApplyScopeFilters @ 0x14066DD84 (EtwpApplyScopeFilters.c)
 *     EtwpTrackProviderRegistration @ 0x14066DEF0 (EtwpTrackProviderRegistration.c)
 *     EtwpAddUmRegEntry @ 0x14066E008 (EtwpAddUmRegEntry.c)
 *     EtwpFindGuidEntryByGuid @ 0x14066E1D0 (EtwpFindGuidEntryByGuid.c)
 *     EtwpGetSchematizedFilterSize @ 0x14066E6D8 (EtwpGetSchematizedFilterSize.c)
 *     EtwpUnreferenceGuidEntry @ 0x14066F5A8 (EtwpUnreferenceGuidEntry.c)
 *     SeCaptureSubjectContext @ 0x1406944B0 (SeCaptureSubjectContext.c)
 *     SeReleaseSubjectContext @ 0x140695270 (SeReleaseSubjectContext.c)
 *     EtwpUpdateEnableMask @ 0x1406C6D30 (EtwpUpdateEnableMask.c)
 *     EtwpEventWriteTemplateSessAndProv @ 0x1409367A0 (EtwpEventWriteTemplateSessAndProv.c)
 *     EtwpCopySchematizedFilters @ 0x14093D4EC (EtwpCopySchematizedFilters.c)
 */

__int64 __fastcall EtwpRegisterUMGuid(__int64 a1, __int64 a2, unsigned int a3, char a4, _DWORD *a5)
{
  int v6; // r15d
  bool v9; // zf
  __int64 v10; // rax
  BOOL v12; // edi
  _QWORD *GuidEntryByGuid; // rsi
  void *v14; // rdi
  int v15; // r14d
  struct _KTHREAD *v16; // rax
  __int64 v17; // rdx
  _DWORD *v18; // rdi
  int SchematizedFilterSize; // eax
  unsigned int v20; // ecx
  int v21; // r9d
  PADAPTER_OBJECT v22; // rdi
  char Size; // dl
  int v24; // r9d
  __int64 v25; // rcx
  char v26; // al
  unsigned __int8 v27; // r15
  __int64 v28; // rax
  _DWORD *v29; // r12
  int v30; // eax
  __int64 v31; // rcx
  __int64 v32; // r8
  __int64 v33; // rax
  int v35; // edx
  struct _KTHREAD *CurrentThread; // rax
  char v37; // dl
  _BYTE v38[4]; // [rsp+50h] [rbp-11h] BYREF
  NTSTATUS AccessStatus; // [rsp+54h] [rbp-Dh] BYREF
  ACCESS_MASK GrantedAccess; // [rsp+58h] [rbp-9h] BYREF
  int v41; // [rsp+5Ch] [rbp-5h]
  PADAPTER_OBJECT DmaAdapter; // [rsp+60h] [rbp-1h] BYREF
  __int64 v43; // [rsp+68h] [rbp+7h] BYREF
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+70h] [rbp+Fh] BYREF
  __int64 v45; // [rsp+C8h] [rbp+67h] BYREF

  v6 = *(_DWORD *)(a2 + 16);
  v41 = *(_DWORD *)(a2 + 20);
  v10 = *(_QWORD *)a2 - *(_QWORD *)&SecurityProviderGuid.Data1;
  v9 = *(_QWORD *)a2 == *(_QWORD *)&SecurityProviderGuid.Data1;
  v43 = 0LL;
  DmaAdapter = 0LL;
  LOBYTE(v45) = 0;
  if ( v9 )
    v10 = *(_QWORD *)(a2 + 8) - *(_QWORD *)SecurityProviderGuid.Data4;
  if ( !v10 )
    return 3221225506LL;
  v12 = (unsigned int)(v6 - 2) > 1;
  GuidEntryByGuid = EtwpFindGuidEntryByGuid(a1, (_DWORD *)a2, v12);
  if ( GuidEntryByGuid || (GuidEntryByGuid = EtwpAddGuidEntry(a1, (_DWORD *)a2, v12)) != 0LL )
  {
    v14 = (void *)GuidEntryByGuid[9];
    AccessStatus = 0;
    GrantedAccess = 0;
    memset(&SubjectContext, 0, sizeof(SubjectContext));
    SeCaptureSubjectContext(&SubjectContext);
    SeAccessCheck(
      v14,
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
    v15 = AccessStatus;
    if ( AccessStatus >= 0 )
    {
      if ( GuidEntryByGuid[50] )
      {
        CurrentThread = KeGetCurrentThread();
        --CurrentThread->KernelApcDisable;
        ExAcquirePushLockExclusiveEx(GuidEntryByGuid[50] + 408LL, 0LL);
        *(_QWORD *)(GuidEntryByGuid[50] + 416LL) = KeGetCurrentThread();
      }
      v16 = KeGetCurrentThread();
      --v16->KernelApcDisable;
      ExAcquirePushLockExclusiveEx((ULONG_PTR)(GuidEntryByGuid + 51), 0LL);
      LOBYTE(v17) = -1;
      v18 = a5;
      GuidEntryByGuid[52] = KeGetCurrentThread();
      *v18 = 160;
      SchematizedFilterSize = EtwpGetSchematizedFilterSize(GuidEntryByGuid, v17);
      v20 = 160;
      if ( SchematizedFilterSize )
      {
        v20 = SchematizedFilterSize + 176;
        *v18 = SchematizedFilterSize + 176;
      }
      if ( v20 > a3 )
      {
        v15 = -1073741789;
      }
      else
      {
        v15 = EtwpAddUmRegEntry((ULONG_PTR)GuidEntryByGuid, v6, v41, *(_QWORD *)(a2 + 32), &DmaAdapter, (__int64)&v43);
        if ( v15 >= 0 )
        {
          if ( a4 )
            _InterlockedOr16((volatile signed __int16 *)&DmaAdapter[6].Size, 0x100u);
          v22 = DmaAdapter;
          *(_QWORD *)(a2 + 24) = v43;
          if ( *((_DWORD *)GuidEntryByGuid + 24) )
          {
            LOBYTE(v21) = 1;
            EtwpUpdateEnableMask((_DWORD)GuidEntryByGuid, (v22[6].Size & 8) != 0, 0, v21, (__int64)(&v22[6].Size + 1));
          }
          Size = v22[6].Size;
          v38[0] = *((_BYTE *)&v22[6].Size + 2);
          EtwpApplyScopeFilters((__int64)v22, (Size & 8) != 0, 0, 0, v38);
          v25 = GuidEntryByGuid[50];
          if ( v25 )
          {
            if ( *(_DWORD *)(v25 + 96) )
            {
              LOBYTE(v24) = 1;
              EtwpUpdateEnableMask(v25, (v22[6].Size & 8) != 0, 1, v24, (__int64)(&v22[6].Size + 2));
            }
            v37 = v22[6].Size;
            LOBYTE(v45) = *((_BYTE *)&v22[6].Size + 4);
            EtwpApplyScopeFilters((__int64)v22, (v37 & 8) != 0, 0, 1, &v45);
          }
          if ( (v22[6].Size & 8) != 0 )
          {
            *((_BYTE *)&v22[6].Size + 2) = v38[0];
            v26 = v45;
            *((_BYTE *)&v22[6].Size + 4) = v45;
          }
          else
          {
            *((_BYTE *)&v22[6].Size + 2) &= v38[0];
            *((_BYTE *)&v22[6].Size + 4) &= v45;
            v26 = *((_BYTE *)&v22[6].Size + 4);
          }
          v27 = *((_BYTE *)&v22[6].Size + 2);
          if ( v27 || v26 )
          {
            EtwpComputeRegEntryEnableInfo((__int64)v22, a2 + 112);
            v35 = *((_BYTE *)GuidEntryByGuid + 91) & 1;
            BYTE3(v45) = 0;
            *(_DWORD *)(a2 + 152) = v35;
            LOWORD(v45) = *((_WORD *)GuidEntryByGuid + 44);
            BYTE2(v45) = *((_BYTE *)GuidEntryByGuid + 90);
            HIDWORD(v45) = *((_DWORD *)GuidEntryByGuid + 20);
            v28 = v45;
          }
          else
          {
            v28 = 0LL;
            *(_OWORD *)(a2 + 112) = 0LL;
            *(_OWORD *)(a2 + 128) = 0LL;
            *(_DWORD *)(a2 + 152) = 0;
          }
          v29 = a5;
          *(_QWORD *)(a2 + 144) = v28;
          *v29 = 160;
          v30 = EtwpGetSchematizedFilterSize(GuidEntryByGuid, v27);
          if ( v30 )
          {
            *v29 = v30 + 176;
            *(_DWORD *)(a2 + 168) = v30;
            *(_DWORD *)(a2 + 172) = 0x80000000;
            *(_QWORD *)(a2 + 160) = 136LL;
            EtwpCopySchematizedFilters((void *)(a2 + 176));
            v30 = 1;
          }
          *(_DWORD *)(a2 + 156) = v30;
          *(_DWORD *)(a2 + 44) = *v29;
          EtwpTrackProviderRegistration((__int64)v22);
          if ( EtwEventEnabled(EtwpEventTracingProvRegHandle, &ETW_EVENT_PROVIDER_REGISTER) )
            EtwpEventWriteTemplateSessAndProv(v31, &ETW_EVENT_PROVIDER_REGISTER, v32, 1LL, 0LL, a2);
        }
      }
      GuidEntryByGuid[52] = 0LL;
      ExReleasePushLockEx((ULONG_PTR)(GuidEntryByGuid + 51), 0LL);
      KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
      v33 = GuidEntryByGuid[50];
      if ( v33 )
      {
        *(_QWORD *)(v33 + 416) = 0LL;
        ExReleasePushLockEx(GuidEntryByGuid[50] + 408LL, 0LL);
        KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
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
  return (unsigned int)v15;
}
