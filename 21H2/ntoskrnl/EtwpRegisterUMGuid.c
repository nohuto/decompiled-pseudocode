/*
 * XREFs of EtwpRegisterUMGuid @ 0x1406DB250
 * Callers:
 *     NtTraceControl @ 0x1406DA6C0 (NtTraceControl.c)
 * Callees:
 *     HalPutDmaAdapter @ 0x14023FBE0 (HalPutDmaAdapter.c)
 *     SeAccessCheck @ 0x1402AB090 (SeAccessCheck.c)
 *     KeLeaveCriticalRegionThread @ 0x1402AB8C0 (KeLeaveCriticalRegionThread.c)
 *     EtwEventEnabled @ 0x1402C0830 (EtwEventEnabled.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1403556E0 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x140355BE0 (ExReleasePushLockEx.c)
 *     EtwpTrackProviderRegistration @ 0x140637C90 (EtwpTrackProviderRegistration.c)
 *     EtwpUpdateEnableMask @ 0x140637DA8 (EtwpUpdateEnableMask.c)
 *     EtwpComputeRegEntryEnableInfo @ 0x140638DDC (EtwpComputeRegEntryEnableInfo.c)
 *     EtwpApplyScopeFilters @ 0x140638F28 (EtwpApplyScopeFilters.c)
 *     SeCaptureSubjectContext @ 0x14064A950 (SeCaptureSubjectContext.c)
 *     SeReleaseSubjectContext @ 0x14064B710 (SeReleaseSubjectContext.c)
 *     EtwpAddGuidEntry @ 0x1406BAE90 (EtwpAddGuidEntry.c)
 *     EtwpAddUmRegEntry @ 0x1406DA4F0 (EtwpAddUmRegEntry.c)
 *     EtwpFindGuidEntryByGuid @ 0x1406DB110 (EtwpFindGuidEntryByGuid.c)
 *     EtwpGetSchematizedFilterSize @ 0x1406DB618 (EtwpGetSchematizedFilterSize.c)
 *     EtwpUnreferenceGuidEntry @ 0x1406ECBA8 (EtwpUnreferenceGuidEntry.c)
 *     EtwpEventWriteTemplateSessAndProv @ 0x140939F70 (EtwpEventWriteTemplateSessAndProv.c)
 *     EtwpCopySchematizedFilters @ 0x140940C54 (EtwpCopySchematizedFilters.c)
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
  PADAPTER_OBJECT v21; // rdi
  char Size; // dl
  __int64 v23; // rcx
  char v24; // al
  unsigned __int8 v25; // r15
  __int64 v26; // rax
  _DWORD *v27; // r12
  int v28; // eax
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // rdx
  __int64 v32; // r8
  __int64 v33; // r9
  __int64 v34; // rax
  int v36; // edx
  struct _KTHREAD *CurrentThread; // rax
  char v38; // dl
  __int64 v39; // rdx
  __int64 v40; // r8
  __int64 v41; // r9
  _BYTE v42[4]; // [rsp+50h] [rbp-11h] BYREF
  NTSTATUS AccessStatus; // [rsp+54h] [rbp-Dh] BYREF
  ACCESS_MASK GrantedAccess; // [rsp+58h] [rbp-9h] BYREF
  int v45; // [rsp+5Ch] [rbp-5h]
  PADAPTER_OBJECT DmaAdapter; // [rsp+60h] [rbp-1h] BYREF
  __int64 v47; // [rsp+68h] [rbp+7h] BYREF
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+70h] [rbp+Fh] BYREF
  __int64 v49; // [rsp+C8h] [rbp+67h] BYREF

  v6 = *(_DWORD *)(a2 + 16);
  v45 = *(_DWORD *)(a2 + 20);
  v10 = *(_QWORD *)a2 - *(_QWORD *)&SecurityProviderGuid.Data1;
  v9 = *(_QWORD *)a2 == *(_QWORD *)&SecurityProviderGuid.Data1;
  v47 = 0LL;
  DmaAdapter = 0LL;
  LOBYTE(v49) = 0;
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
        v15 = EtwpAddUmRegEntry((ULONG_PTR)GuidEntryByGuid, v6, v45, *(_QWORD *)(a2 + 32), &DmaAdapter, (__int64)&v47);
        if ( v15 >= 0 )
        {
          if ( a4 )
            _InterlockedOr16((volatile signed __int16 *)&DmaAdapter[6].Size, 0x100u);
          v21 = DmaAdapter;
          *(_QWORD *)(a2 + 24) = v47;
          if ( *((_DWORD *)GuidEntryByGuid + 24) )
            EtwpUpdateEnableMask((__int64)GuidEntryByGuid, (v21[6].Size & 8) != 0, 0, 1, (_BYTE *)&v21[6].Size + 2);
          Size = v21[6].Size;
          v42[0] = *((_BYTE *)&v21[6].Size + 2);
          EtwpApplyScopeFilters((__int64)v21, (Size & 8) != 0, 0, 0, v42);
          v23 = GuidEntryByGuid[50];
          if ( v23 )
          {
            if ( *(_DWORD *)(v23 + 96) )
              EtwpUpdateEnableMask(v23, (v21[6].Size & 8) != 0, 1, 1, (_BYTE *)&v21[6].Size + 4);
            v38 = v21[6].Size;
            LOBYTE(v49) = *((_BYTE *)&v21[6].Size + 4);
            EtwpApplyScopeFilters((__int64)v21, (v38 & 8) != 0, 0, 1, &v49);
          }
          if ( (v21[6].Size & 8) != 0 )
          {
            *((_BYTE *)&v21[6].Size + 2) = v42[0];
            v24 = v49;
            *((_BYTE *)&v21[6].Size + 4) = v49;
          }
          else
          {
            *((_BYTE *)&v21[6].Size + 2) &= v42[0];
            *((_BYTE *)&v21[6].Size + 4) &= v49;
            v24 = *((_BYTE *)&v21[6].Size + 4);
          }
          v25 = *((_BYTE *)&v21[6].Size + 2);
          if ( v25 || v24 )
          {
            EtwpComputeRegEntryEnableInfo((__int64)v21, a2 + 112);
            v36 = *((_BYTE *)GuidEntryByGuid + 91) & 1;
            BYTE3(v49) = 0;
            *(_DWORD *)(a2 + 152) = v36;
            LOWORD(v49) = *((_WORD *)GuidEntryByGuid + 44);
            BYTE2(v49) = *((_BYTE *)GuidEntryByGuid + 90);
            HIDWORD(v49) = *((_DWORD *)GuidEntryByGuid + 20);
            v26 = v49;
          }
          else
          {
            v26 = 0LL;
            *(_OWORD *)(a2 + 112) = 0LL;
            *(_OWORD *)(a2 + 128) = 0LL;
            *(_DWORD *)(a2 + 152) = 0;
          }
          v27 = a5;
          *(_QWORD *)(a2 + 144) = v26;
          *v27 = 160;
          v28 = EtwpGetSchematizedFilterSize(GuidEntryByGuid, v25);
          if ( v28 )
          {
            *v27 = v28 + 176;
            *(_DWORD *)(a2 + 168) = v28;
            *(_DWORD *)(a2 + 172) = 0x80000000;
            *(_QWORD *)(a2 + 160) = 136LL;
            EtwpCopySchematizedFilters((void *)(a2 + 176));
            v28 = 1;
          }
          *(_DWORD *)(a2 + 156) = v28;
          *(_DWORD *)(a2 + 44) = *v27;
          EtwpTrackProviderRegistration((__int64)v21);
          if ( EtwEventEnabled(EtwpEventTracingProvRegHandle, &ETW_EVENT_PROVIDER_REGISTER) )
            EtwpEventWriteTemplateSessAndProv(v29, &ETW_EVENT_PROVIDER_REGISTER, v30, 1LL, 0LL, a2);
        }
      }
      GuidEntryByGuid[52] = 0LL;
      ExReleasePushLockEx((ULONG_PTR)(GuidEntryByGuid + 51), 0LL);
      KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v31, v32, v33);
      v34 = GuidEntryByGuid[50];
      if ( v34 )
      {
        *(_QWORD *)(v34 + 416) = 0LL;
        ExReleasePushLockEx(GuidEntryByGuid[50] + 408LL, 0LL);
        KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v39, v40, v41);
      }
      if ( DmaAdapter )
        HalPutDmaAdapter(DmaAdapter);
    }
    EtwpUnreferenceGuidEntry(GuidEntryByGuid);
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return (unsigned int)v15;
}
