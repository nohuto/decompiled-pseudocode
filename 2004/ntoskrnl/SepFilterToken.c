/*
 * XREFs of SepFilterToken @ 0x140632E90
 * Callers:
 *     NtFilterToken @ 0x1406322B0 (NtFilterToken.c)
 *     SeFilterToken @ 0x140781950 (SeFilterToken.c)
 * Callees:
 *     KeEnterCriticalRegion @ 0x140205E40 (KeEnterCriticalRegion.c)
 *     HalPutDmaAdapter @ 0x140208270 (HalPutDmaAdapter.c)
 *     KeLeaveCriticalRegion @ 0x140208500 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x140208540 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x1402090B0 (ExAcquireResourceSharedLite.c)
 *     ExInitializeResourceLite @ 0x140213470 (ExInitializeResourceLite.c)
 *     PsGetCurrentProcess @ 0x14023A4B0 (PsGetCurrentProcess.c)
 *     AuthzBasepDuplicateSecurityAttributes @ 0x140268870 (AuthzBasepDuplicateSecurityAttributes.c)
 *     SepDuplicateLogonSessionReference @ 0x14026F614 (SepDuplicateLogonSessionReference.c)
 *     RtlULongAdd @ 0x14027DC40 (RtlULongAdd.c)
 *     RtlSidHashInitialize @ 0x1402933C0 (RtlSidHashInitialize.c)
 *     RtlWalkFrameChain @ 0x1402E7840 (RtlWalkFrameChain.c)
 *     DbgPrint @ 0x140361340 (DbgPrint.c)
 *     memmove @ 0x140409FC0 (memmove.c)
 *     memset @ 0x14040A280 (memset.c)
 *     SeIsSystemContext @ 0x140591CFC (SeIsSystemContext.c)
 *     ObCreateObject @ 0x14060ECE0 (ObCreateObject.c)
 *     SepSetTokenSessionById @ 0x140613DDC (SepSetTokenSessionById.c)
 *     SepRefDerefLuidToIndexEntryIfNecessary @ 0x1406144FC (SepRefDerefLuidToIndexEntryIfNecessary.c)
 *     SepSetTokenPackage @ 0x14062462C (SepSetTokenPackage.c)
 *     SepNewTokenAsRestrictedAsProcessToken @ 0x140626B50 (SepNewTokenAsRestrictedAsProcessToken.c)
 *     RtlIsSandboxedToken @ 0x14062BE70 (RtlIsSandboxedToken.c)
 *     SepSetTokenCapabilities @ 0x140630388 (SepSetTokenCapabilities.c)
 *     SepRemoveDisabledGroupsAndPrivileges @ 0x14063266C (SepRemoveDisabledGroupsAndPrivileges.c)
 *     SepSidInSidAndAttributes @ 0x140632864 (SepSidInSidAndAttributes.c)
 *     RtlIsPackageSid @ 0x140633BF0 (RtlIsPackageSid.c)
 *     PsReferencePrimaryToken @ 0x1406676A0 (PsReferencePrimaryToken.c)
 *     SepSetTokenTrust @ 0x140667740 (SepSetTokenTrust.c)
 *     RtlCopySidAndAttributesArray @ 0x140680FC0 (RtlCopySidAndAttributesArray.c)
 *     SeCaptureSubjectContext @ 0x1406944B0 (SeCaptureSubjectContext.c)
 *     SeReleaseSubjectContext @ 0x140695270 (SeReleaseSubjectContext.c)
 *     RtlIsCapabilitySid @ 0x1406BB5D0 (RtlIsCapabilitySid.c)
 *     SepSetLogonSessionToken @ 0x14071097C (SepSetLogonSessionToken.c)
 *     SepModifyTokenPolicyCounter @ 0x140919758 (SepModifyTokenPolicyCounter.c)
 *     SepDuplicateTokenUserAndGroups @ 0x14091FACC (SepDuplicateTokenUserAndGroups.c)
 *     SepAddTokenLogonSession @ 0x1409200E0 (SepAddTokenLogonSession.c)
 *     SepDuplicateTokenClaims @ 0x140921A54 (SepDuplicateTokenClaims.c)
 *     SepReferenceLowBoxNumberEntry @ 0x140921FE0 (SepReferenceLowBoxNumberEntry.c)
 *     ExFreePoolWithTag @ 0x1409B1140 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B1160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall SepFilterToken(
        __int64 a1,
        char a2,
        char a3,
        unsigned int a4,
        __int64 a5,
        unsigned int a6,
        _DWORD *a7,
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
  int Object; // ebx
  __int64 v22; // r9
  int v23; // ecx
  struct _ERESOURCE *v24; // rcx
  PADAPTER_OBJECT v25; // rbx
  PADAPTER_OBJECT v26; // rdx
  PADAPTER_OBJECT v27; // rdi
  ULONG v28; // r12d
  struct _DMA_ADAPTER v29; // xmm0
  ULONG v30; // eax
  __int64 v31; // rdx
  _DWORD *v32; // r15
  unsigned int v33; // eax
  _DWORD *v34; // rcx
  _DMA_OPERATIONS **v35; // rbx
  _KPROCESS *CurrentProcess; // rax
  _DMA_OPERATIONS *v37; // rdx
  struct _KPROCESS *v38; // rax
  struct _DMA_ADAPTER *v39; // rbx
  _SID_AND_ATTRIBUTES *v40; // r14
  int v41; // eax
  unsigned int v42; // r15d
  _SID_AND_ATTRIBUTES *SidArea; // r15
  __int64 v44; // r8
  NTSTATUS v45; // eax
  unsigned int v46; // r12d
  _SID_AND_ATTRIBUTES *v47; // r14
  char **v48; // r13
  unsigned int v49; // edx
  NTSTATUS v50; // eax
  struct _DMA_ADAPTER *v51; // rdx
  __int64 v52; // rax
  unsigned int v53; // ecx
  size_t v54; // r14
  char *v55; // r12
  ULONG *v56; // r13
  char v57; // al
  _DWORD *v58; // rcx
  unsigned int v59; // r15d
  ULONG v60; // r9d
  unsigned __int8 *v61; // rdx
  int v62; // eax
  struct _ERESOURCE *v63; // rcx
  int v64; // r14d
  char v65; // bl
  PERESOURCE *PrimaryToken; // rbx
  _DMA_OPERATIONS **v67; // rdx
  int AllocateCommonBufferVector; // edx
  char v69; // [rsp+58h] [rbp-B0h] BYREF
  char v70[3]; // [rsp+59h] [rbp-AFh] BYREF
  ULONG pulResult; // [rsp+5Ch] [rbp-ACh] BYREF
  __int64 v72; // [rsp+60h] [rbp-A8h]
  PADAPTER_OBJECT DmaAdapter; // [rsp+68h] [rbp-A0h]
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
  Object = RtlULongAdd(*(_DWORD *)(a1 + 132), ulAddend, &pulResult);
  if ( Object < 0
    || (Object = RtlULongAdd(pulResult, 4u, &pulResult), Object < 0)
    || (Object = RtlULongAdd(0x490u, pulResult, v74), Object < 0) )
  {
    v24 = v20;
LABEL_101:
    ExFreePoolWithTag(v24, 0);
    ExFreePoolWithTag(v17, 0);
    if ( SeTokenLeakTracking )
      ExFreePoolWithTag(v13, 0);
    return (unsigned int)Object;
  }
  v23 = *(_DWORD *)(a1 + 136);
  LOBYTE(v23) = a2;
  v90 = v22;
  v92 = v22;
  v91 = v22;
  LOBYTE(v22) = a2;
  v88 = 48;
  v94 = 0LL;
  Object = ObCreateObject(v23, (int)SeTokenObjectType, 0, v22);
  v24 = v20;
  if ( Object < 0 )
    goto LABEL_101;
  v25 = DmaAdapter;
  *(_QWORD *)&DmaAdapter[3].Version = v20;
  ExInitializeResourceLite(v20);
  v26 = DmaAdapter;
  v25[3].DmaOperations = (_DMA_OPERATIONS *)(ExpLuidIncrement + _InterlockedExchangeAdd64(&ExpLuid, ExpLuidIncrement));
  v27 = DmaAdapter;
  v28 = pulResult;
  *(_QWORD *)&v26[1].Version = ExpLuidIncrement + _InterlockedExchangeAdd64(&ExpLuid, ExpLuidIncrement);
  BYTE4(v27[12].DmaOperations) = 0;
  v27[1].DmaOperations = *(_DMA_OPERATIONS **)(a1 + 24);
  v29 = *(struct _DMA_ADAPTER *)a1;
  v77 = v27 + 8;
  *v27 = v29;
  HIDWORD(v27[8].DmaOperations) = 0;
  *(_DWORD *)&v27[8].Version = 0;
  *(_DWORD *)(&v27[8].Size + 1) = v28;
  *(_QWORD *)&v27[2].Version = *(_QWORD *)(a1 + 16);
  *(_DWORD *)&v27[12].Version = *(_DWORD *)(a1 + 192);
  *(_DWORD *)(&v27[12].Size + 1) = *(_DWORD *)(a1 + 196);
  v27[2].DmaOperations = *(_DMA_OPERATIONS **)(a1 + 40);
  *(_QWORD *)&v27[14].Version = *(_QWORD *)(a1 + 224);
  *(_QWORD *)&v27[70].Version = 0LL;
  v27[70].DmaOperations = 0LL;
  v27[68].DmaOperations = 0LL;
  v27[71].DmaOperations = v13;
  LODWORD(v27[7].DmaOperations) = 0;
  v27[72].DmaOperations = 0LL;
  p_DmaOperations = &v27[71].DmaOperations;
  if ( SeTokenLeakTracking )
  {
    v30 = RtlWalkFrameChain((PVOID *)&v27[71].DmaOperations->FlushAdapterBuffers, 0x1Eu, 0);
    if ( KeGetCurrentIrql() < 2u )
      RtlWalkFrameChain((PVOID *)&(*p_DmaOperations)->FlushAdapterBuffers + v30, 30 - v30, 1u);
  }
  KeEnterCriticalRegion();
  ExAcquireResourceSharedLite(*(PERESOURCE *)(a1 + 48), 1u);
  LODWORD(v27[8].DmaOperations) = *(_DWORD *)(a1 + 136);
  *(_DWORD *)&v27[9].Version = *(_DWORD *)(a1 + 144);
  SepSetTokenSessionById((__int64)v27, *(unsigned int *)(a1 + 120), 0, 0LL, 0LL);
  LODWORD(v27[7].DmaOperations) = *(_DWORD *)(a1 + 120);
  v32 = &v27[12].DmaOperations;
  v33 = *(_DWORD *)(a1 + 200) & 0xFFFFFBD7;
  v79 = &v27[12].DmaOperations;
  LODWORD(v27[12].DmaOperations) = v33;
  *(PADAPTER_OBJECT)((char *)v27 + 88) = *(PADAPTER_OBJECT)(a1 + 88);
  v27[6].DmaOperations = *(_DMA_OPERATIONS **)(a1 + 104);
  *(_DWORD *)&v27[7].Version = *(_DWORD *)(a1 + 112);
  *(&v27[7].Size + 1) = *(_WORD *)(a1 + 116);
  *((_BYTE *)&v27[7].Size + 4) = *(_BYTE *)(a1 + 118);
  *(_DWORD *)&v27[13].Version = *(_DWORD *)(a1 + 208);
  *(_DWORD *)(&v27[13].Size + 1) = *(_DWORD *)(a1 + 212);
  v27[4] = *(PADAPTER_OBJECT)(a1 + 64);
  *(_QWORD *)&v27[5].Version = *(_QWORD *)(a1 + 80);
  v27[48].DmaOperations = v17;
  if ( *((_BYTE *)&v27[7].Size + 4) == 2 )
  {
    LOBYTE(v31) = 1;
    SepModifyTokenPolicyCounter(&v27[5].DmaOperations, v31);
  }
  v27[67].DmaOperations = 0LL;
  v81 = &v27[67].DmaOperations;
  *(_QWORD *)&v27[68].Version = 0LL;
  v82 = v27 + 68;
  *(_QWORD *)&v27[72].Version = 0LL;
  v83 = v27 + 72;
  v27[49].DmaOperations = 0LL;
  v84 = (PSID_AND_ATTRIBUTES *)&v27[49].DmaOperations;
  *(_QWORD *)&v27[49].Version = 0LL;
  p_Version = (ULONG *)&v27[50].Version;
  *(_DWORD *)&v27[50].Version = 0;
  SidAttrHash = (PSID_AND_ATTRIBUTES_HASH)&v27[50].DmaOperations;
  memset(&v27[50].DmaOperations, 0, 0x110uLL);
  *(_QWORD *)&v27[11].Version = 0LL;
  *(_QWORD *)&v27[69].Version = 0LL;
  v27[69].DmaOperations = 0LL;
  *(_QWORD *)&v27[71].Version = 0LL;
  v80 = v27 + 11;
  Object = SepDuplicateLogonSessionReference((__int64)v27, a1);
  if ( Object < 0 )
    goto LABEL_28;
  SepRefDerefLuidToIndexEntryIfNecessary(a1, 0);
  *(_QWORD *)&v27[71].Version = *(_QWORD *)(a1 + 1136);
  v34 = *(_DWORD **)(a1 + 776);
  if ( *v34 )
  {
    Object = AuthzBasepDuplicateSecurityAttributes((__int64)v34, &v27[48].DmaOperations->Size, 0);
    if ( Object < 0 )
      goto LABEL_28;
  }
  if ( *(_QWORD *)(a1 + 1096) )
  {
    Object = SepDuplicateTokenClaims(a1, v27);
    if ( Object < 0 )
      goto LABEL_28;
  }
  if ( SeTokenLeakTracking )
  {
    v35 = p_DmaOperations;
    *(_QWORD *)&(*p_DmaOperations)->Size = KeGetCurrentThread()[1].CycleTime;
    (*v35)->PutDmaAdapter = *(void (__fastcall **)(_DMA_ADAPTER *))&KeGetCurrentThread()[1].CurrentRunTime;
    LODWORD((*v35)->AllocateAdapterChannel) = 15;
    LODWORD((*v35)->AllocateCommonBufferVector) = 0;
    HIDWORD((*v35)->AllocateCommonBufferVector) = 0;
    CurrentProcess = PsGetCurrentProcess();
    v37 = *v35;
    v27 = DmaAdapter;
    v37->AllocateCommonBuffer = *(void *(__fastcall **)(_DMA_ADAPTER *, unsigned int, _LARGE_INTEGER *, unsigned __int8))&CurrentProcess[1].ActiveProcessors.Count;
    LODWORD(v37->FreeCommonBuffer) = CurrentProcess[1].ActiveProcessors.Bitmap[0];
    WORD2(v37->FreeCommonBuffer) = WORD2(CurrentProcess[1].ActiveProcessors.Bitmap[0]);
    BYTE6(v37->FreeCommonBuffer) = BYTE6(CurrentProcess[1].ActiveProcessors.Bitmap[0]);
    SepAddTokenLogonSession(v27);
    v28 = pulResult;
  }
  if ( (a3 & 2) != 0 )
  {
    v38 = PsGetCurrentProcess();
    v39 = (struct _DMA_ADAPTER *)PsReferencePrimaryToken(v38);
    if ( (int)SeIsSystemContext(v39, &v69) >= 0 && v69 )
      *v32 |= 0x40u;
    HalPutDmaAdapter(v39);
  }
  v40 = (_SID_AND_ATTRIBUTES *)&v27[73];
  v41 = ((_BYTE)v27 - 112) & 7;
  if ( (((_BYTE)v27 - 112) & 7) != 0 )
  {
    v40 = (_SID_AND_ATTRIBUTES *)((char *)v40 + (unsigned int)(8 - v41));
    v28 -= 8 - v41;
    pulResult = v28;
  }
  v42 = a8;
  if ( *(_DWORD *)(a1 + 128) > a8 )
    v42 = *(_DWORD *)(a1 + 128);
  SidArea = &v40[*(_DWORD *)(a1 + 124) + v42];
  v27[9].DmaOperations = (_DMA_OPERATIONS *)v40;
  RemainingSidArea = SidArea;
  if ( SepTokenSidSharingEnabled )
  {
    Object = SepDuplicateTokenUserAndGroups(a1, v27);
    if ( Object < 0 )
    {
      v27[9].DmaOperations = 0LL;
LABEL_28:
      ExReleaseResourceLite(*(PERESOURCE *)(a1 + 48));
LABEL_29:
      KeLeaveCriticalRegion();
      HalPutDmaAdapter(v27);
      return (unsigned int)Object;
    }
  }
  else
  {
    HIDWORD(v27[7].DmaOperations) = *(_DWORD *)(a1 + 124);
    v45 = RtlCopySidAndAttributesArray(
            *(_DWORD *)(a1 + 124),
            *(PSID_AND_ATTRIBUTES *)(a1 + 152),
            v28,
            v40,
            SidArea,
            &RemainingSidArea,
            &pulResult);
    SidArea = (_SID_AND_ATTRIBUTES *)RemainingSidArea;
    Object = v45;
  }
  v46 = 0;
  v47 = (_SID_AND_ATTRIBUTES *)((char *)v40 + (unsigned int)(16 * *(_DWORD *)(a1 + 124)));
  *(_QWORD *)&v27[10].Version = v47;
  if ( a8 )
  {
    v48 = (char **)a9;
    do
    {
      v49 = *(_DWORD *)(a1 + 128);
      if ( !v49 || SepSidInSidAndAttributes(*(unsigned __int8 ***)(a1 + 160), v49, v44, *v48) )
      {
        v50 = RtlCopySidAndAttributesArray(
                1u,
                (PSID_AND_ATTRIBUTES)&a9[2 * v46],
                pulResult,
                v47,
                SidArea,
                &RemainingSidArea,
                &pulResult);
        v51 = v77;
        Object = v50;
        ++v47;
        SidArea = (_SID_AND_ATTRIBUTES *)RemainingSidArea;
        *(_DWORD *)(*(_QWORD *)&v27[10].Version + 16LL * *(unsigned int *)&v77->Version + 8) = 7;
        ++*(_DWORD *)&v51->Version;
      }
      ++v46;
      v48 += 2;
    }
    while ( v46 < a8 );
  }
  v52 = *(_QWORD *)(a1 + 184);
  v53 = 4 * *(unsigned __int8 *)(*(_QWORD *)(a1 + 168) + 1LL) + 8;
  if ( v52 )
    v53 += *(unsigned __int16 *)(v52 + 2);
  v54 = v53;
  v55 = (char *)ExAllocatePoolWithTag(PagedPool, v53, 0x64546553u);
  *(_QWORD *)&v80->Version = v55;
  if ( !v55 )
  {
    Object = -1073741670;
    goto LABEL_28;
  }
  v56 = (ULONG *)&v77->Version;
  if ( *(_DWORD *)(a1 + 128) && !*(_DWORD *)&v77->Version )
  {
    Object = -1073741811;
    goto LABEL_28;
  }
  v57 = 0;
  v58 = v79;
  if ( *(_DWORD *)&v77->Version )
  {
    *v79 |= 0x810u;
    v57 = 1;
  }
  else
  {
    *(_QWORD *)&v27[10].Version = 0LL;
  }
  if ( v76 )
  {
    *v58 |= 0x18u;
    v57 = 1;
  }
  if ( v57 )
    SepSetLogonSessionToken(a1);
  memmove(v55, *(const void **)(a1 + 176), v54);
  if ( *(_QWORD *)(a1 + 184) )
    v27[11].DmaOperations = (_DMA_OPERATIONS *)&v55[*(_DWORD *)(a1 + 184) - *(_DWORD *)(a1 + 176)];
  else
    v27[11].DmaOperations = 0LL;
  v59 = *(_DWORD *)(a1 + 168) - *(_DWORD *)(a1 + 176);
  v60 = *(_DWORD *)(a1 + 800);
  if ( v60 )
    Object = SepSetTokenCapabilities((__int64)v27, *(void **)(a1 + 784), *(void **)(a1 + 792), v60);
  if ( Object < 0 )
    goto LABEL_28;
  v61 = *(unsigned __int8 **)(a1 + 784);
  if ( v61 )
    Object = SepSetTokenPackage((__int64)v27, v61);
  if ( Object < 0 )
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
  v62 = SepSetTokenTrust(v27, *(_QWORD *)(a1 + 1104));
  v63 = *(struct _ERESOURCE **)(a1 + 48);
  v64 = v62;
  if ( v62 < 0 )
  {
    ExReleaseResourceLite(v63);
    Object = v64;
    goto LABEL_29;
  }
  ExReleaseResourceLite(v63);
  KeLeaveCriticalRegion();
  v27[10].DmaOperations = (_DMA_OPERATIONS *)&v55[v59];
  SepRemoveDisabledGroupsAndPrivileges((__int64)v27, a3, a4, a5, a6, a7);
  RtlSidHashInitialize(
    (PSID_AND_ATTRIBUTES)v27[9].DmaOperations,
    HIDWORD(v27[7].DmaOperations),
    (PSID_AND_ATTRIBUTES_HASH)&v27[14].DmaOperations);
  RtlSidHashInitialize(*(PSID_AND_ATTRIBUTES *)&v27[10].Version, *v56, (PSID_AND_ATTRIBUTES_HASH)&v27[31].DmaOperations);
  SeCaptureSubjectContext(&SubjectContext);
  v65 = v72;
  v95.PrimaryToken = SubjectContext.PrimaryToken;
  if ( RtlIsSandboxedToken(&SubjectContext, v72)
    && RtlIsSandboxedToken(&v95, v65)
    && ((PrimaryToken = (PERESOURCE *)SubjectContext.PrimaryToken,
         KeEnterCriticalRegion(),
         ExAcquireResourceSharedLite(PrimaryToken[6], 1u),
         v64 = SepNewTokenAsRestrictedAsProcessToken(v27, PrimaryToken, v70),
         ExReleaseResourceLite(PrimaryToken[6]),
         KeLeaveCriticalRegion(),
         v64 < 0)
     || !v70[0]) )
  {
    HalPutDmaAdapter(v27);
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
      v67 = p_DmaOperations;
      v27 = DmaAdapter;
      LODWORD((*p_DmaOperations)->AllocateCommonBufferVector) = _InterlockedIncrement(&SepTokenLeakMethodCount);
      AllocateCommonBufferVector = (int)(*v67)->AllocateCommonBufferVector;
      if ( AllocateCommonBufferVector >= SepTokenLeakBreakCount )
      {
        DbgPrint("\nToken number 0x%x = 0x%p\n", AllocateCommonBufferVector, v27);
        __debugbreak();
      }
    }
    *a11 = v27;
  }
  return (unsigned int)v64;
}
