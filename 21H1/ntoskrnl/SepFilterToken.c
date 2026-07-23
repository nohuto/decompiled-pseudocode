/*
 * XREFs of SepFilterToken @ 0x1407030D4
 * Callers:
 *     NtFilterToken @ 0x1407016F0 (NtFilterToken.c)
 *     SeFilterToken @ 0x140787370 (SeFilterToken.c)
 * Callees:
 *     RtlULongAdd @ 0x14024122C (RtlULongAdd.c)
 *     RtlSidHashInitialize @ 0x140256B40 (RtlSidHashInitialize.c)
 *     KeEnterCriticalRegion @ 0x14025ED60 (KeEnterCriticalRegion.c)
 *     HalPutDmaAdapter @ 0x140261190 (HalPutDmaAdapter.c)
 *     KeLeaveCriticalRegion @ 0x140261420 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x140261460 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x140261FD0 (ExAcquireResourceSharedLite.c)
 *     ExInitializeResourceLite @ 0x14026C4C0 (ExInitializeResourceLite.c)
 *     PsGetCurrentProcess @ 0x140293500 (PsGetCurrentProcess.c)
 *     RtlWalkFrameChain @ 0x14032C980 (RtlWalkFrameChain.c)
 *     AuthzBasepDuplicateSecurityAttributes @ 0x140338570 (AuthzBasepDuplicateSecurityAttributes.c)
 *     DbgPrint @ 0x14033C6D0 (DbgPrint.c)
 *     SepDuplicateLogonSessionReference @ 0x14033FEA0 (SepDuplicateLogonSessionReference.c)
 *     memmove @ 0x140408CC0 (memmove.c)
 *     memset @ 0x140408F80 (memset.c)
 *     SeIsSystemContext @ 0x14059160C (SeIsSystemContext.c)
 *     PsReferencePrimaryToken @ 0x1405E13A0 (PsReferencePrimaryToken.c)
 *     SepSetTokenTrust @ 0x1405E1440 (SepSetTokenTrust.c)
 *     SeCaptureSubjectContext @ 0x1405EAF70 (SeCaptureSubjectContext.c)
 *     SeReleaseSubjectContext @ 0x1405EBD30 (SeReleaseSubjectContext.c)
 *     RtlCopySidAndAttributesArray @ 0x140608EE0 (RtlCopySidAndAttributesArray.c)
 *     ObCreateObject @ 0x140643F10 (ObCreateObject.c)
 *     RtlIsSandboxedToken @ 0x140649A20 (RtlIsSandboxedToken.c)
 *     SepNewTokenAsRestrictedAsProcessToken @ 0x14064BCAC (SepNewTokenAsRestrictedAsProcessToken.c)
 *     SepSetTokenPackage @ 0x140669D4C (SepSetTokenPackage.c)
 *     SepSetTokenCapabilities @ 0x140673878 (SepSetTokenCapabilities.c)
 *     SepRefDerefLuidToIndexEntryIfNecessary @ 0x1406F78E8 (SepRefDerefLuidToIndexEntryIfNecessary.c)
 *     SepSetTokenSessionById @ 0x1406F7AEC (SepSetTokenSessionById.c)
 *     RtlIsPackageSid @ 0x140703E30 (RtlIsPackageSid.c)
 *     SepRemoveDisabledGroupsAndPrivileges @ 0x140703EE8 (SepRemoveDisabledGroupsAndPrivileges.c)
 *     SepSidInSidAndAttributes @ 0x1407040E0 (SepSidInSidAndAttributes.c)
 *     SepSetLogonSessionToken @ 0x140704174 (SepSetLogonSessionToken.c)
 *     RtlIsCapabilitySid @ 0x14070D810 (RtlIsCapabilitySid.c)
 *     SepModifyTokenPolicyCounter @ 0x1409184A8 (SepModifyTokenPolicyCounter.c)
 *     SepDuplicateTokenUserAndGroups @ 0x14091E81C (SepDuplicateTokenUserAndGroups.c)
 *     SepAddTokenLogonSession @ 0x14091EE30 (SepAddTokenLogonSession.c)
 *     SepDuplicateTokenClaims @ 0x1409207A4 (SepDuplicateTokenClaims.c)
 *     SepReferenceLowBoxNumberEntry @ 0x140920D30 (SepReferenceLowBoxNumberEntry.c)
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B1030 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall SepFilterToken(
        __int64 a1,
        char a2,
        int a3,
        int a4,
        __int64 a5,
        int a6,
        __int64 a7,
        unsigned int a8,
        PSID *a9,
        ULONG ulAddend,
        PADAPTER_OBJECT *a11)
{
  _DMA_OPERATIONS *v13; // r15
  unsigned int v14; // edi
  PSID *v15; // rbx
  _DMA_OPERATIONS *PoolWithTag; // rax
  _DMA_OPERATIONS *v17; // r14
  _DMA_OPERATIONS *v18; // rcx
  struct _ERESOURCE *v20; // rdi
  int v21; // ebx
  __int64 v22; // r9
  struct _ERESOURCE *v23; // rcx
  PADAPTER_OBJECT v24; // rbx
  PADAPTER_OBJECT v25; // rdx
  PADAPTER_OBJECT v26; // rdi
  ULONG v27; // r12d
  struct _DMA_ADAPTER v28; // xmm0
  ULONG v29; // eax
  __int64 v30; // rdx
  _DWORD *v31; // r15
  unsigned int v32; // eax
  _DWORD *v33; // rcx
  _DMA_OPERATIONS **v34; // rbx
  _KPROCESS *CurrentProcess; // rax
  _DMA_OPERATIONS *v36; // rdx
  struct _KPROCESS *v37; // rax
  struct _DMA_ADAPTER *v38; // rbx
  _SID_AND_ATTRIBUTES *v39; // r14
  int v40; // eax
  unsigned int v41; // r15d
  _SID_AND_ATTRIBUTES *SidArea; // r15
  __int64 v43; // r8
  NTSTATUS v44; // eax
  unsigned int v45; // r12d
  _SID_AND_ATTRIBUTES *v46; // r14
  PSID *v47; // r13
  __int64 v48; // rdx
  NTSTATUS v49; // eax
  struct _DMA_ADAPTER *v50; // rdx
  __int64 v51; // rax
  unsigned int v52; // ecx
  size_t v53; // r14
  char *v54; // r12
  ULONG *v55; // r13
  char v56; // al
  _DWORD *v57; // rcx
  unsigned int v58; // r15d
  ULONG v59; // r9d
  unsigned __int8 *v60; // rdx
  int v61; // eax
  struct _ERESOURCE *v62; // rcx
  int v63; // r14d
  char v64; // bl
  PERESOURCE *PrimaryToken; // rbx
  _DMA_OPERATIONS **v66; // rdx
  int AllocateCommonBufferVector; // edx
  int RemainingSidAreaSize; // [rsp+38h] [rbp-D0h]
  char v69; // [rsp+58h] [rbp-B0h] BYREF
  char v70[3]; // [rsp+59h] [rbp-AFh] BYREF
  ULONG pulResult; // [rsp+5Ch] [rbp-ACh] BYREF
  __int64 v72; // [rsp+60h] [rbp-A8h]
  PADAPTER_OBJECT DmaAdapter; // [rsp+68h] [rbp-A0h] BYREF
  ULONG v74[2]; // [rsp+70h] [rbp-98h] BYREF
  PSID RemainingSidArea; // [rsp+78h] [rbp-90h] BYREF
  int v76; // [rsp+80h] [rbp-88h]
  struct _DMA_ADAPTER *v77; // [rsp+88h] [rbp-80h]
  _DMA_OPERATIONS **p_DmaOperations; // [rsp+90h] [rbp-78h]
  _DWORD *v79; // [rsp+98h] [rbp-70h]
  struct _DMA_ADAPTER *v80; // [rsp+A0h] [rbp-68h]
  _DMA_OPERATIONS **v81; // [rsp+A8h] [rbp-60h]
  struct _DMA_ADAPTER *v82; // [rsp+B0h] [rbp-58h]
  struct _DMA_ADAPTER *v83; // [rsp+B8h] [rbp-50h]
  PSID_AND_ATTRIBUTES *v84; // [rsp+C0h] [rbp-48h]
  PSID_AND_ATTRIBUTES_HASH SidAttrHash; // [rsp+C8h] [rbp-40h]
  ULONG *p_Version; // [rsp+D0h] [rbp-38h]
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+D8h] [rbp-30h] BYREF
  int v88; // [rsp+F8h] [rbp-10h]
  int v89; // [rsp+FCh] [rbp-Ch]
  __int64 v90; // [rsp+100h] [rbp-8h]
  __int64 v91; // [rsp+108h] [rbp+0h]
  int v92; // [rsp+110h] [rbp+8h]
  int v93; // [rsp+114h] [rbp+Ch]
  __int128 v94; // [rsp+118h] [rbp+10h]
  struct _SECURITY_SUBJECT_CONTEXT v95; // [rsp+128h] [rbp+20h] BYREF

  DmaAdapter = 0LL;
  memset(&SubjectContext, 0, sizeof(SubjectContext));
  v74[0] = 0;
  memset(&v95, 0, sizeof(v95));
  pulResult = 0;
  v13 = 0LL;
  v89 = 0;
  v93 = 0;
  v69 = 0;
  LOBYTE(v72) = KeGetCurrentThread()->PreviousMode;
  v70[0] = 0;
  v76 = a3 & 8;
  if ( (a3 & 8) != 0 && (*(_DWORD *)(a1 + 200) & 0x58) != 0 )
    return 3221225485LL;
  v14 = 0;
  if ( a8 )
  {
    v15 = a9;
    while ( !RtlIsPackageSid(*v15) && !RtlIsCapabilitySid(*v15) )
    {
      ++v14;
      v15 += 2;
      if ( v14 >= a8 )
        goto LABEL_8;
    }
    return 3221225485LL;
  }
LABEL_8:
  PoolWithTag = (_DMA_OPERATIONS *)ExAllocatePoolWithTag(PagedPool, 0x30uLL, 0x74416553u);
  v17 = PoolWithTag;
  if ( !PoolWithTag )
    return 3221225626LL;
  PoolWithTag->Size = 0;
  PoolWithTag->AllocateCommonBuffer = (void *(__fastcall *)(_DMA_ADAPTER *, unsigned int, _LARGE_INTEGER *, unsigned __int8))&PoolWithTag->PutDmaAdapter;
  PoolWithTag->PutDmaAdapter = (void (__fastcall *)(_DMA_ADAPTER *))&PoolWithTag->PutDmaAdapter;
  PoolWithTag->FlushAdapterBuffers = (unsigned __int8 (__fastcall *)(_DMA_ADAPTER *, _MDL *, void *, void *, unsigned int, unsigned __int8))&PoolWithTag->AllocateAdapterChannel;
  PoolWithTag->AllocateAdapterChannel = (int (__fastcall *)(_DMA_ADAPTER *, _DEVICE_OBJECT *, unsigned int, _IO_ALLOCATION_ACTION (__fastcall *)(_DEVICE_OBJECT *, _IRP *, void *, void *), void *))&PoolWithTag->AllocateAdapterChannel;
  LODWORD(PoolWithTag->FreeCommonBuffer) = 0;
  if ( SeTokenLeakTracking )
  {
    v13 = (_DMA_OPERATIONS *)ExAllocatePoolWithTag(PagedPool, 0x120uLL, 0x74416553u);
    if ( !v13 )
    {
      v18 = v17;
      goto LABEL_16;
    }
  }
  v20 = (struct _ERESOURCE *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x68uLL, 0x6C546553u);
  if ( !v20 )
  {
    ExFreePoolWithTag(v17, 0);
    if ( !SeTokenLeakTracking )
      return 3221225626LL;
    v18 = v13;
LABEL_16:
    ExFreePoolWithTag(v18, 0);
    return 3221225626LL;
  }
  v21 = RtlULongAdd(*(_DWORD *)(a1 + 132), ulAddend, &pulResult);
  if ( v21 < 0
    || (v21 = RtlULongAdd(pulResult, 4u, &pulResult), v21 < 0)
    || (v21 = RtlULongAdd(0x490u, pulResult, v74), v21 < 0) )
  {
    v23 = v20;
LABEL_101:
    ExFreePoolWithTag(v23, 0);
    ExFreePoolWithTag(v17, 0);
    if ( SeTokenLeakTracking )
      ExFreePoolWithTag(v13, 0);
    return (unsigned int)v21;
  }
  RemainingSidAreaSize = *(_DWORD *)(a1 + 136);
  v90 = v22;
  v92 = v22;
  v91 = v22;
  v88 = 48;
  v94 = 0LL;
  v21 = ObCreateObject(a2, SeTokenObjectType, 0LL, a2, v22, v74[0], RemainingSidAreaSize, v74[0], &DmaAdapter);
  v23 = v20;
  if ( v21 < 0 )
    goto LABEL_101;
  v24 = DmaAdapter;
  *(_QWORD *)&DmaAdapter[3].Version = v20;
  ExInitializeResourceLite(v20);
  v25 = DmaAdapter;
  v24[3].DmaOperations = (_DMA_OPERATIONS *)(ExpLuidIncrement + _InterlockedExchangeAdd64(&ExpLuid, ExpLuidIncrement));
  v26 = DmaAdapter;
  v27 = pulResult;
  *(_QWORD *)&v25[1].Version = ExpLuidIncrement + _InterlockedExchangeAdd64(&ExpLuid, ExpLuidIncrement);
  BYTE4(v26[12].DmaOperations) = 0;
  v26[1].DmaOperations = *(_DMA_OPERATIONS **)(a1 + 24);
  v28 = *(struct _DMA_ADAPTER *)a1;
  v77 = v26 + 8;
  *v26 = v28;
  HIDWORD(v26[8].DmaOperations) = 0;
  *(_DWORD *)&v26[8].Version = 0;
  *(_DWORD *)(&v26[8].Size + 1) = v27;
  *(_QWORD *)&v26[2].Version = *(_QWORD *)(a1 + 16);
  *(_DWORD *)&v26[12].Version = *(_DWORD *)(a1 + 192);
  *(_DWORD *)(&v26[12].Size + 1) = *(_DWORD *)(a1 + 196);
  v26[2].DmaOperations = *(_DMA_OPERATIONS **)(a1 + 40);
  *(_QWORD *)&v26[14].Version = *(_QWORD *)(a1 + 224);
  *(_QWORD *)&v26[70].Version = 0LL;
  v26[70].DmaOperations = 0LL;
  v26[68].DmaOperations = 0LL;
  v26[71].DmaOperations = v13;
  LODWORD(v26[7].DmaOperations) = 0;
  v26[72].DmaOperations = 0LL;
  p_DmaOperations = &v26[71].DmaOperations;
  if ( SeTokenLeakTracking )
  {
    v29 = RtlWalkFrameChain((PVOID *)&v26[71].DmaOperations->FlushAdapterBuffers, 0x1Eu, 0);
    if ( KeGetCurrentIrql() < 2u )
      RtlWalkFrameChain((PVOID *)&(*p_DmaOperations)->FlushAdapterBuffers + v29, 30 - v29, 1u);
  }
  KeEnterCriticalRegion();
  ExAcquireResourceSharedLite(*(PERESOURCE *)(a1 + 48), 1u);
  LODWORD(v26[8].DmaOperations) = *(_DWORD *)(a1 + 136);
  *(_DWORD *)&v26[9].Version = *(_DWORD *)(a1 + 144);
  SepSetTokenSessionById((__int64)v26, *(_DWORD *)(a1 + 120), 0, 0LL, 0LL);
  LODWORD(v26[7].DmaOperations) = *(_DWORD *)(a1 + 120);
  v31 = &v26[12].DmaOperations;
  v32 = *(_DWORD *)(a1 + 200) & 0xFFFFFBD7;
  v79 = &v26[12].DmaOperations;
  LODWORD(v26[12].DmaOperations) = v32;
  *(PADAPTER_OBJECT)((char *)v26 + 88) = *(PADAPTER_OBJECT)(a1 + 88);
  v26[6].DmaOperations = *(_DMA_OPERATIONS **)(a1 + 104);
  *(_DWORD *)&v26[7].Version = *(_DWORD *)(a1 + 112);
  *(&v26[7].Size + 1) = *(_WORD *)(a1 + 116);
  *((_BYTE *)&v26[7].Size + 4) = *(_BYTE *)(a1 + 118);
  *(_DWORD *)&v26[13].Version = *(_DWORD *)(a1 + 208);
  *(_DWORD *)(&v26[13].Size + 1) = *(_DWORD *)(a1 + 212);
  v26[4] = *(PADAPTER_OBJECT)(a1 + 64);
  *(_QWORD *)&v26[5].Version = *(_QWORD *)(a1 + 80);
  v26[48].DmaOperations = v17;
  if ( *((_BYTE *)&v26[7].Size + 4) == 2 )
  {
    LOBYTE(v30) = 1;
    SepModifyTokenPolicyCounter(&v26[5].DmaOperations, v30);
  }
  v26[67].DmaOperations = 0LL;
  v81 = &v26[67].DmaOperations;
  *(_QWORD *)&v26[68].Version = 0LL;
  v82 = v26 + 68;
  *(_QWORD *)&v26[72].Version = 0LL;
  v83 = v26 + 72;
  v26[49].DmaOperations = 0LL;
  v84 = (PSID_AND_ATTRIBUTES *)&v26[49].DmaOperations;
  *(_QWORD *)&v26[49].Version = 0LL;
  p_Version = (ULONG *)&v26[50].Version;
  *(_DWORD *)&v26[50].Version = 0;
  SidAttrHash = (PSID_AND_ATTRIBUTES_HASH)&v26[50].DmaOperations;
  memset(&v26[50].DmaOperations, 0, 0x110uLL);
  *(_QWORD *)&v26[11].Version = 0LL;
  *(_QWORD *)&v26[69].Version = 0LL;
  v26[69].DmaOperations = 0LL;
  *(_QWORD *)&v26[71].Version = 0LL;
  v80 = v26 + 11;
  v21 = SepDuplicateLogonSessionReference((__int64)v26, a1);
  if ( v21 < 0 )
    goto LABEL_28;
  SepRefDerefLuidToIndexEntryIfNecessary(a1, 0);
  *(_QWORD *)&v26[71].Version = *(_QWORD *)(a1 + 1136);
  v33 = *(_DWORD **)(a1 + 776);
  if ( *v33 )
  {
    v21 = AuthzBasepDuplicateSecurityAttributes((__int64)v33, &v26[48].DmaOperations->Size, 0);
    if ( v21 < 0 )
      goto LABEL_28;
  }
  if ( *(_QWORD *)(a1 + 1096) )
  {
    v21 = SepDuplicateTokenClaims(a1, v26);
    if ( v21 < 0 )
      goto LABEL_28;
  }
  if ( SeTokenLeakTracking )
  {
    v34 = p_DmaOperations;
    *(_QWORD *)&(*p_DmaOperations)->Size = KeGetCurrentThread()[1].CycleTime;
    (*v34)->PutDmaAdapter = *(void (__fastcall **)(_DMA_ADAPTER *))&KeGetCurrentThread()[1].CurrentRunTime;
    LODWORD((*v34)->AllocateAdapterChannel) = 15;
    LODWORD((*v34)->AllocateCommonBufferVector) = 0;
    HIDWORD((*v34)->AllocateCommonBufferVector) = 0;
    CurrentProcess = PsGetCurrentProcess();
    v36 = *v34;
    v26 = DmaAdapter;
    v36->AllocateCommonBuffer = *(void *(__fastcall **)(_DMA_ADAPTER *, unsigned int, _LARGE_INTEGER *, unsigned __int8))&CurrentProcess[1].ActiveProcessors.Count;
    LODWORD(v36->FreeCommonBuffer) = CurrentProcess[1].ActiveProcessors.Bitmap[0];
    WORD2(v36->FreeCommonBuffer) = WORD2(CurrentProcess[1].ActiveProcessors.Bitmap[0]);
    BYTE6(v36->FreeCommonBuffer) = BYTE6(CurrentProcess[1].ActiveProcessors.Bitmap[0]);
    SepAddTokenLogonSession(v26);
    v27 = pulResult;
  }
  if ( (a3 & 2) != 0 )
  {
    v37 = PsGetCurrentProcess();
    v38 = (struct _DMA_ADAPTER *)PsReferencePrimaryToken(v37);
    if ( (int)SeIsSystemContext(v38, &v69) >= 0 && v69 )
      *v31 |= 0x40u;
    HalPutDmaAdapter(v38);
  }
  v39 = (_SID_AND_ATTRIBUTES *)&v26[73];
  v40 = ((_BYTE)v26 - 112) & 7;
  if ( (((_BYTE)v26 - 112) & 7) != 0 )
  {
    v39 = (_SID_AND_ATTRIBUTES *)((char *)v39 + (unsigned int)(8 - v40));
    v27 -= 8 - v40;
    pulResult = v27;
  }
  v41 = a8;
  if ( *(_DWORD *)(a1 + 128) > a8 )
    v41 = *(_DWORD *)(a1 + 128);
  SidArea = &v39[*(_DWORD *)(a1 + 124) + v41];
  v26[9].DmaOperations = (_DMA_OPERATIONS *)v39;
  RemainingSidArea = SidArea;
  if ( SepTokenSidSharingEnabled )
  {
    v21 = SepDuplicateTokenUserAndGroups(a1, v26);
    if ( v21 < 0 )
    {
      v26[9].DmaOperations = 0LL;
LABEL_28:
      ExReleaseResourceLite(*(PERESOURCE *)(a1 + 48));
LABEL_29:
      KeLeaveCriticalRegion();
      HalPutDmaAdapter(v26);
      return (unsigned int)v21;
    }
  }
  else
  {
    HIDWORD(v26[7].DmaOperations) = *(_DWORD *)(a1 + 124);
    v44 = RtlCopySidAndAttributesArray(
            *(_DWORD *)(a1 + 124),
            *(PSID_AND_ATTRIBUTES *)(a1 + 152),
            v27,
            v39,
            SidArea,
            &RemainingSidArea,
            &pulResult);
    SidArea = (_SID_AND_ATTRIBUTES *)RemainingSidArea;
    v21 = v44;
  }
  v45 = 0;
  v46 = (_SID_AND_ATTRIBUTES *)((char *)v39 + (unsigned int)(16 * *(_DWORD *)(a1 + 124)));
  *(_QWORD *)&v26[10].Version = v46;
  if ( a8 )
  {
    v47 = a9;
    do
    {
      v48 = *(unsigned int *)(a1 + 128);
      if ( !(_DWORD)v48 || (unsigned __int8)SepSidInSidAndAttributes(*(_QWORD *)(a1 + 160), v48, v43, *v47) )
      {
        v49 = RtlCopySidAndAttributesArray(
                1u,
                (PSID_AND_ATTRIBUTES)&a9[2 * v45],
                pulResult,
                v46,
                SidArea,
                &RemainingSidArea,
                &pulResult);
        v50 = v77;
        v21 = v49;
        ++v46;
        SidArea = (_SID_AND_ATTRIBUTES *)RemainingSidArea;
        *(_DWORD *)(*(_QWORD *)&v26[10].Version + 16LL * *(unsigned int *)&v77->Version + 8) = 7;
        ++*(_DWORD *)&v50->Version;
      }
      ++v45;
      v47 += 2;
    }
    while ( v45 < a8 );
  }
  v51 = *(_QWORD *)(a1 + 184);
  v52 = 4 * *(unsigned __int8 *)(*(_QWORD *)(a1 + 168) + 1LL) + 8;
  if ( v51 )
    v52 += *(unsigned __int16 *)(v51 + 2);
  v53 = v52;
  v54 = (char *)ExAllocatePoolWithTag(PagedPool, v52, 0x64546553u);
  *(_QWORD *)&v80->Version = v54;
  if ( !v54 )
  {
    v21 = -1073741670;
    goto LABEL_28;
  }
  v55 = (ULONG *)&v77->Version;
  if ( *(_DWORD *)(a1 + 128) && !*(_DWORD *)&v77->Version )
  {
    v21 = -1073741811;
    goto LABEL_28;
  }
  v56 = 0;
  v57 = v79;
  if ( *(_DWORD *)&v77->Version )
  {
    *v79 |= 0x810u;
    v56 = 1;
  }
  else
  {
    *(_QWORD *)&v26[10].Version = 0LL;
  }
  if ( v76 )
  {
    *v57 |= 0x18u;
    v56 = 1;
  }
  if ( v56 )
    SepSetLogonSessionToken(a1);
  memmove(v54, *(const void **)(a1 + 176), v53);
  if ( *(_QWORD *)(a1 + 184) )
    v26[11].DmaOperations = (_DMA_OPERATIONS *)&v54[*(_DWORD *)(a1 + 184) - *(_DWORD *)(a1 + 176)];
  else
    v26[11].DmaOperations = 0LL;
  v58 = *(_DWORD *)(a1 + 168) - *(_DWORD *)(a1 + 176);
  v59 = *(_DWORD *)(a1 + 800);
  if ( v59 )
    v21 = SepSetTokenCapabilities((__int64)v26, *(void **)(a1 + 784), *(void **)(a1 + 792), v59);
  if ( v21 < 0 )
    goto LABEL_28;
  v60 = *(unsigned __int8 **)(a1 + 784);
  if ( v60 )
    v21 = SepSetTokenPackage((__int64)v26, v60);
  if ( v21 < 0 )
    goto LABEL_28;
  if ( *(_QWORD *)(a1 + 1080) )
  {
    SepReferenceLowBoxNumberEntry();
    *v81 = *(_DMA_OPERATIONS **)(a1 + 1080);
  }
  if ( *(_QWORD *)(a1 + 1088) )
  {
    SepReferenceLowBoxNumberEntry();
    *(_QWORD *)&v82->Version = *(_QWORD *)(a1 + 1088);
  }
  if ( *(_QWORD *)(a1 + 1152) )
  {
    SepReferenceLowBoxNumberEntry();
    *(_QWORD *)&v83->Version = *(_QWORD *)(a1 + 1152);
  }
  v61 = SepSetTokenTrust((__int64)v26, *(void **)(a1 + 1104));
  v62 = *(struct _ERESOURCE **)(a1 + 48);
  v63 = v61;
  if ( v61 < 0 )
  {
    ExReleaseResourceLite(v62);
    v21 = v63;
    goto LABEL_29;
  }
  ExReleaseResourceLite(v62);
  KeLeaveCriticalRegion();
  v26[10].DmaOperations = (_DMA_OPERATIONS *)&v54[v58];
  SepRemoveDisabledGroupsAndPrivileges((_DWORD)v26, a3, a4, a5, a6, a7);
  RtlSidHashInitialize(
    (PSID_AND_ATTRIBUTES)v26[9].DmaOperations,
    HIDWORD(v26[7].DmaOperations),
    (PSID_AND_ATTRIBUTES_HASH)&v26[14].DmaOperations);
  RtlSidHashInitialize(*(PSID_AND_ATTRIBUTES *)&v26[10].Version, *v55, (PSID_AND_ATTRIBUTES_HASH)&v26[31].DmaOperations);
  SeCaptureSubjectContext(&SubjectContext);
  v64 = v72;
  v95.PrimaryToken = SubjectContext.PrimaryToken;
  if ( RtlIsSandboxedToken(&SubjectContext, v72)
    && RtlIsSandboxedToken(&v95, v64)
    && ((PrimaryToken = (PERESOURCE *)SubjectContext.PrimaryToken,
         KeEnterCriticalRegion(),
         ExAcquireResourceSharedLite(PrimaryToken[6], 1u),
         v63 = SepNewTokenAsRestrictedAsProcessToken(v26, PrimaryToken, v70),
         ExReleaseResourceLite(PrimaryToken[6]),
         KeLeaveCriticalRegion(),
         v63 < 0)
     || !v70[0]) )
  {
    HalPutDmaAdapter(v26);
    SeReleaseSubjectContext(&SubjectContext);
  }
  else
  {
    SeReleaseSubjectContext(&SubjectContext);
    if ( *v84 )
      RtlSidHashInitialize(*v84, *p_Version, SidAttrHash);
    if ( SeTokenLeakTracking
      && SepTokenLeakMethodWatch == 15
      && PsGetCurrentProcess()[1].Header.WaitListHead.Flink == (struct _LIST_ENTRY *)SepTokenLeakProcessCid )
    {
      v66 = p_DmaOperations;
      v26 = DmaAdapter;
      LODWORD((*p_DmaOperations)->AllocateCommonBufferVector) = _InterlockedIncrement(&SepTokenLeakMethodCount);
      AllocateCommonBufferVector = (int)(*v66)->AllocateCommonBufferVector;
      if ( AllocateCommonBufferVector >= SepTokenLeakBreakCount )
      {
        DbgPrint("\nToken number 0x%x = 0x%p\n", AllocateCommonBufferVector, v26);
        __debugbreak();
      }
    }
    *a11 = v26;
  }
  return (unsigned int)v63;
}
