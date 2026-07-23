/*
 * XREFs of SepDuplicateToken @ 0x1406795C0
 * Callers:
 *     SepGetAnonymousToken @ 0x14026F294 (SepGetAnonymousToken.c)
 *     SepLinkLogonSessions @ 0x140360104 (SepLinkLogonSessions.c)
 *     SeSubProcessToken @ 0x140613E54 (SeSubProcessToken.c)
 *     NtDuplicateToken @ 0x14062BB00 (NtDuplicateToken.c)
 *     NtImpersonateAnonymousToken @ 0x140630BF0 (NtImpersonateAnonymousToken.c)
 *     NtOpenThreadTokenEx @ 0x1406668A0 (NtOpenThreadTokenEx.c)
 *     NtQueryInformationToken @ 0x14067EC80 (NtQueryInformationToken.c)
 *     NtCreateLowBoxToken @ 0x1406BAFC0 (NtCreateLowBoxToken.c)
 *     SeCopyClientToken @ 0x1406E2A38 (SeCopyClientToken.c)
 *     SepSetLogonSessionToken @ 0x14071097C (SepSetLogonSessionToken.c)
 *     SeDuplicateTokenAndAddOriginClaim @ 0x14091F35C (SeDuplicateTokenAndAddOriginClaim.c)
 *     SeGetLinkedToken @ 0x14091F440 (SeGetLinkedToken.c)
 *     SeGetLogonSessionToken @ 0x14091F560 (SeGetLogonSessionToken.c)
 * Callees:
 *     HalPutDmaAdapter @ 0x140208270 (HalPutDmaAdapter.c)
 *     KeLeaveCriticalRegion @ 0x140208500 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x140208540 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x1402090B0 (ExAcquireResourceSharedLite.c)
 *     ExInitializeResourceLite @ 0x140213470 (ExInitializeResourceLite.c)
 *     AuthzBasepDuplicateSecurityAttributes @ 0x140268870 (AuthzBasepDuplicateSecurityAttributes.c)
 *     RtlULongAdd @ 0x14027DC40 (RtlULongAdd.c)
 *     RtlSidHashInitialize @ 0x1402933C0 (RtlSidHashInitialize.c)
 *     MmGetSessionObjectById @ 0x140297904 (MmGetSessionObjectById.c)
 *     RtlWalkFrameChain @ 0x1402E7840 (RtlWalkFrameChain.c)
 *     SepReferenceLuidToIndexEntry @ 0x14033C660 (SepReferenceLuidToIndexEntry.c)
 *     DbgPrint @ 0x140361340 (DbgPrint.c)
 *     memmove @ 0x140409FC0 (memmove.c)
 *     memset @ 0x14040A280 (memset.c)
 *     SepSetTokenPackage @ 0x14062462C (SepSetTokenPackage.c)
 *     SepDuplicateSid @ 0x140625978 (SepDuplicateSid.c)
 *     SepReferenceLogonSession @ 0x14062F868 (SepReferenceLogonSession.c)
 *     SepSetTokenCapabilities @ 0x140630388 (SepSetTokenCapabilities.c)
 *     ObCreateObjectEx @ 0x140679FF0 (ObCreateObjectEx.c)
 *     SepMakeTokenEffectiveOnly @ 0x1406E4F38 (SepMakeTokenEffectiveOnly.c)
 *     SepModifyTokenPolicyCounter @ 0x140919758 (SepModifyTokenPolicyCounter.c)
 *     SepDuplicateTokenUserAndGroups @ 0x14091FACC (SepDuplicateTokenUserAndGroups.c)
 *     SepAddTokenLogonSession @ 0x1409200E0 (SepAddTokenLogonSession.c)
 *     SepDuplicateTokenClaims @ 0x140921A54 (SepDuplicateTokenClaims.c)
 *     ExFreePoolWithTag @ 0x1409B1140 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B1160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall SepDuplicateToken(
        __int64 a1,
        int a2,
        char a3,
        int a4,
        unsigned int a5,
        unsigned __int8 a6,
        char a7,
        _QWORD *a8)
{
  unsigned int v8; // r12d
  PVOID *v11; // rdi
  _DWORD *PoolWithTag; // rax
  _DWORD *v14; // r14
  _QWORD *v15; // rax
  PVOID *v16; // rcx
  struct _ERESOURCE *v17; // rbp
  int Object; // esi
  ULONG v19; // eax
  struct _KTHREAD *CurrentThread; // rax
  __int64 v21; // rdx
  unsigned int v22; // eax
  unsigned int v23; // ebp
  int v24; // ebp
  __int64 v25; // rax
  _DWORD *v26; // rcx
  _QWORD *v27; // rcx
  int i; // eax
  __int64 v29; // rax
  _QWORD *v30; // rax
  ULONG j; // ecx
  __int64 v32; // rax
  unsigned int v33; // ecx
  size_t v34; // r12
  char *v35; // r14
  __int64 v36; // rax
  char *v37; // r14
  ULONG v38; // r9d
  unsigned __int8 *v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // rcx
  __int64 v42; // rdx
  unsigned __int8 *v43; // rcx
  __int64 v44; // r14
  _QWORD *v45; // r12
  __int64 v46; // rdx
  _KPROCESS *Process; // rcx
  int v48; // edx
  __int64 v49; // [rsp+60h] [rbp-88h] BYREF
  __int64 v50; // [rsp+68h] [rbp-80h]
  __int64 v51; // [rsp+70h] [rbp-78h]
  __int64 v52; // [rsp+78h] [rbp-70h]
  __int64 v53; // [rsp+80h] [rbp-68h]
  __int64 v54; // [rsp+88h] [rbp-60h]
  __int64 v55; // [rsp+90h] [rbp-58h]
  __int64 v56; // [rsp+98h] [rbp-50h]
  PSID_AND_ATTRIBUTES_HASH SidAttrHash; // [rsp+A0h] [rbp-48h]
  __int64 v58; // [rsp+A8h] [rbp-40h]
  ULONG pulResult; // [rsp+108h] [rbp+20h] BYREF

  v8 = a5;
  pulResult = 0;
  v11 = 0LL;
  if ( a4 == 2 && a5 > 3 )
    return 3221225637LL;
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x30uLL, 0x74416553u);
  v14 = PoolWithTag;
  if ( !PoolWithTag )
    return 3221225626LL;
  *PoolWithTag = 0;
  v15 = PoolWithTag + 2;
  v14[6] = 0;
  v15[1] = v15;
  *v15 = v15;
  *((_QWORD *)v14 + 5) = v14 + 8;
  *((_QWORD *)v14 + 4) = v14 + 8;
  if ( SeTokenLeakTracking )
  {
    v11 = (PVOID *)ExAllocatePoolWithTag(PagedPool, 0x120uLL, 0x74416553u);
    if ( !v11 )
    {
      v16 = (PVOID *)v14;
      goto LABEL_8;
    }
  }
  v17 = (struct _ERESOURCE *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x68uLL, 0x6C546553u);
  if ( !v17 )
  {
    ExFreePoolWithTag(v14, 0);
    if ( !SeTokenLeakTracking )
      return 3221225626LL;
    v16 = v11;
LABEL_8:
    ExFreePoolWithTag(v16, 0);
    return 3221225626LL;
  }
  Object = RtlULongAdd(0x490u, *(_DWORD *)(a1 + 132), &pulResult);
  if ( Object < 0 || (Object = ObCreateObjectEx(a6, (_DWORD)SeTokenObjectType, a2, a6), Object < 0) )
  {
    ExFreePoolWithTag(v14, 0);
    ExFreePoolWithTag(v17, 0);
    if ( SeTokenLeakTracking )
      ExFreePoolWithTag(v11, 0);
    return (unsigned int)Object;
  }
  MEMORY[0x10] = ExpLuidIncrement + _InterlockedExchangeAdd64(&ExpLuid, ExpLuidIncrement);
  MEMORY[0xCC] = 0;
  MEMORY[0xC0] = a4;
  MEMORY[0xC4] = v8;
  MEMORY[0x30] = v17;
  ExInitializeResourceLite(v17);
  MEMORY[0x18] = *(_QWORD *)(a1 + 24);
  MEMORY[0] = *(_OWORD *)a1;
  MEMORY[0x8C] = 0;
  MEMORY[0x20] = *(_QWORD *)(a1 + 32);
  MEMORY[0x28] = *(_QWORD *)(a1 + 40);
  MEMORY[0xE0] = *(_QWORD *)(a1 + 224);
  MEMORY[0x460] = 0LL;
  MEMORY[0x468] = 0LL;
  MEMORY[0x448] = 0LL;
  MEMORY[0x478] = v11;
  MEMORY[0x78] = 0;
  MEMORY[0x488] = 0LL;
  if ( SeTokenLeakTracking )
  {
    v19 = RtlWalkFrameChain(v11 + 5, 0x1Eu, 0);
    if ( KeGetCurrentIrql() < 2u )
      RtlWalkFrameChain((PVOID *)(MEMORY[0x478] + 40LL + 8LL * v19), 30 - v19, 1u);
  }
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceSharedLite(*(PERESOURCE *)(a1 + 48), 1u);
  MEMORY[0x38] = *(_QWORD *)(a1 + 56);
  MEMORY[0x88] = *(_DWORD *)(a1 + 136);
  MEMORY[0x90] = *(_DWORD *)(a1 + 144);
  MEMORY[0x80] = *(_DWORD *)(a1 + 128);
  MEMORY[0x84] = *(_DWORD *)(a1 + 132);
  v22 = *(_DWORD *)(a1 + 200) & 0xFFFFFBDF;
  v50 = 128LL;
  MEMORY[0xC8] = v22;
  v23 = *(_DWORD *)(a1 + 120);
  if ( MEMORY[0x78] != v23 )
  {
    MEMORY[0x78] = *(_DWORD *)(a1 + 120);
    if ( !SeTokenDoesNotTrackSessionObject )
    {
      if ( MEMORY[0x488] )
        HalPutDmaAdapter(MEMORY[0x488]);
      MEMORY[0x488] = MmGetSessionObjectById(v23, v21);
    }
  }
  MEMORY[0x78] = *(_DWORD *)(a1 + 120);
  MEMORY[0x58] = *(_OWORD *)(a1 + 88);
  MEMORY[0x68] = *(_QWORD *)(a1 + 104);
  MEMORY[0x70] = *(_DWORD *)(a1 + 112);
  MEMORY[0x74] = *(_WORD *)(a1 + 116);
  MEMORY[0x76] = *(_BYTE *)(a1 + 118);
  MEMORY[0xD0] = *(_DWORD *)(a1 + 208);
  MEMORY[0xD4] = *(_DWORD *)(a1 + 212);
  MEMORY[0x40] = *(_OWORD *)(a1 + 64);
  MEMORY[0x50] = *(_QWORD *)(a1 + 80);
  MEMORY[0x308] = v14;
  MEMORY[0x438] = 0LL;
  v52 = 1080LL;
  MEMORY[0x440] = 0LL;
  v53 = 1088LL;
  MEMORY[0x480] = 0LL;
  v54 = 1152LL;
  MEMORY[0x318] = 0LL;
  v56 = 792LL;
  MEMORY[0x310] = 0LL;
  v58 = 800LL;
  MEMORY[0x320] = 0;
  SidAttrHash = (PSID_AND_ATTRIBUTES_HASH)808;
  memset((void *)0x328, 0, 0x110uLL);
  MEMORY[0xB0] = 0LL;
  v51 = 176LL;
  MEMORY[0x450] = 0LL;
  MEMORY[0x458] = 0LL;
  MEMORY[0x470] = 0LL;
  v55 = 1104LL;
  if ( MEMORY[0x76] == 2 )
    SepModifyTokenPolicyCounter(88LL, 1LL);
  if ( (*(_DWORD *)(a1 + 200) & 0x20) != 0 )
  {
    v24 = SepReferenceLogonSession(a1 + 24, 216LL);
    if ( v24 < 0 )
    {
      MEMORY[0xC8] |= 0x20u;
      MEMORY[0xD8] = 0LL;
LABEL_41:
      ExReleaseResourceLite(*(PERESOURCE *)(a1 + 48));
      KeLeaveCriticalRegion();
LABEL_42:
      HalPutDmaAdapter(0LL);
      return (unsigned int)v24;
    }
  }
  else
  {
    MEMORY[0xD8] = *(_QWORD *)(a1 + 216);
    if ( _InterlockedIncrement64((volatile signed __int64 *)(MEMORY[0xD8] + 24LL)) <= 1 )
      __fastfail(0xEu);
    v24 = 0;
  }
  v25 = *(_QWORD *)(a1 + 1136);
  if ( v25 )
  {
    SepReferenceLuidToIndexEntry(*(_QWORD *)(a1 + 1136));
    v25 = *(_QWORD *)(a1 + 1136);
  }
  MEMORY[0x470] = v25;
  v26 = *(_DWORD **)(a1 + 776);
  if ( *v26 )
  {
    v24 = AuthzBasepDuplicateSecurityAttributes((__int64)v26, MEMORY[0x308], a7);
    if ( v24 < 0 )
      goto LABEL_41;
  }
  memmove((void *)0x490, (const void *)(a1 + 1168), *(unsigned int *)(a1 + 132));
  if ( SepTokenSidSharingEnabled )
  {
    MEMORY[0x98] = *(_QWORD *)(a1 + 152) - a1;
    v24 = SepDuplicateTokenUserAndGroups(a1, 0LL);
    if ( v24 < 0 )
    {
      MEMORY[0x98] = 0LL;
      goto LABEL_41;
    }
  }
  else
  {
    MEMORY[0x7C] = *(_DWORD *)(a1 + 124);
    v27 = (_QWORD *)(*(_QWORD *)(a1 + 152) - a1);
    MEMORY[0x98] = v27;
    for ( i = MEMORY[0x7C]; i; --i )
    {
      *v27 -= a1;
      v27 += 2;
    }
  }
  v29 = *(_QWORD *)(a1 + 160);
  MEMORY[0xA0] = v29;
  if ( v29 )
  {
    v30 = (_QWORD *)(v29 - a1);
    MEMORY[0xA0] = v30;
    for ( j = *(_DWORD *)v50; j; --j )
    {
      *v30 -= a1;
      v30 += 2;
    }
  }
  v32 = *(_QWORD *)(a1 + 184);
  v33 = 4 * *(unsigned __int8 *)(*(_QWORD *)(a1 + 168) + 1LL) + 8;
  if ( v32 )
    v33 += *(unsigned __int16 *)(v32 + 2);
  v34 = v33;
  v35 = (char *)ExAllocatePoolWithTag(PagedPool, v33, 0x64546553u);
  *(_QWORD *)v51 = v35;
  if ( !v35 )
  {
    ExReleaseResourceLite(*(PERESOURCE *)(a1 + 48));
    KeLeaveCriticalRegion();
    HalPutDmaAdapter(0LL);
    return 3221225626LL;
  }
  memmove(v35, *(const void **)(a1 + 176), v34);
  v36 = *(_QWORD *)(a1 + 184);
  v37 = &v35[-*(_QWORD *)(a1 + 176)];
  MEMORY[0xB8] = v36;
  if ( v36 )
    MEMORY[0xB8] = &v37[v36];
  MEMORY[0xA8] = &v37[*(_QWORD *)(a1 + 168)];
  v38 = *(_DWORD *)(a1 + 800);
  if ( v38 )
    v24 = SepSetTokenCapabilities(0LL, *(void **)(a1 + 784), *(void **)(a1 + 792), v38);
  if ( v24 < 0 )
    goto LABEL_41;
  v39 = *(unsigned __int8 **)(a1 + 784);
  if ( v39 )
    v24 = SepSetTokenPackage(0LL, v39);
  if ( v24 < 0 )
    goto LABEL_41;
  v40 = *(_QWORD *)(a1 + 1080);
  if ( v40 )
  {
    if ( _InterlockedIncrement64((volatile signed __int64 *)(v40 + 24)) <= 1 )
      __fastfail(0xEu);
    *(_QWORD *)v52 = *(_QWORD *)(a1 + 1080);
  }
  v41 = *(_QWORD *)(a1 + 1088);
  if ( v41 )
  {
    if ( _InterlockedIncrement64((volatile signed __int64 *)(v41 + 24)) <= 1 )
      __fastfail(0xEu);
    *(_QWORD *)v53 = *(_QWORD *)(a1 + 1088);
  }
  v42 = *(_QWORD *)(a1 + 1152);
  if ( v42 )
  {
    if ( _InterlockedIncrement64((volatile signed __int64 *)(v42 + 24)) <= 1 )
      __fastfail(0xEu);
    *(_QWORD *)v54 = *(_QWORD *)(a1 + 1152);
  }
  if ( *(_QWORD *)(a1 + 1096) )
  {
    v24 = SepDuplicateTokenClaims(a1, 0LL);
    if ( v24 < 0 )
      goto LABEL_41;
  }
  v43 = *(unsigned __int8 **)(a1 + 1104);
  v44 = 0LL;
  v24 = 0;
  v49 = 0LL;
  if ( v43 )
  {
    v24 = SepDuplicateSid(v43, &v49);
    if ( v24 < 0 )
      goto LABEL_80;
    v44 = v49;
  }
  v45 = (_QWORD *)v55;
  if ( *(_QWORD *)v55 )
  {
    ExFreePoolWithTag(*(PVOID *)v55, 0);
    *v45 = 0LL;
  }
  *v45 = v44;
LABEL_80:
  ExReleaseResourceLite(*(PERESOURCE *)(a1 + 48));
  KeLeaveCriticalRegion();
  if ( v24 < 0 )
    goto LABEL_42;
  if ( SeTokenLeakTracking )
  {
    *MEMORY[0x478] = KeGetCurrentThread()[1].CycleTime;
    *(_QWORD *)(MEMORY[0x478] + 8LL) = *(_QWORD *)&KeGetCurrentThread()[1].CurrentRunTime;
    *(_DWORD *)(MEMORY[0x478] + 32LL) = 13;
    *(_DWORD *)(MEMORY[0x478] + 280LL) = 0;
    *(_DWORD *)(MEMORY[0x478] + 284LL) = 0;
    v46 = MEMORY[0x478];
    Process = KeGetCurrentThread()->ApcState.Process;
    *(_QWORD *)(MEMORY[0x478] + 16LL) = *(_QWORD *)&Process[1].ActiveProcessors.Count;
    *(_DWORD *)(v46 + 24) = Process[1].ActiveProcessors.Bitmap[0];
    *(_WORD *)(v46 + 28) = WORD2(Process[1].ActiveProcessors.Bitmap[0]);
    *(_BYTE *)(v46 + 30) = BYTE6(Process[1].ActiveProcessors.Bitmap[0]);
    SepAddTokenLogonSession(0LL);
  }
  if ( a3 )
    SepMakeTokenEffectiveOnly(0LL);
  RtlSidHashInitialize(MEMORY[0x98], MEMORY[0x7C], (PSID_AND_ATTRIBUTES_HASH)0xE8);
  RtlSidHashInitialize(MEMORY[0xA0], *(_DWORD *)v50, (PSID_AND_ATTRIBUTES_HASH)0x1F8);
  if ( *(_QWORD *)v56 )
    RtlSidHashInitialize(*(PSID_AND_ATTRIBUTES *)v56, *(_DWORD *)v58, SidAttrHash);
  if ( SeTokenLeakTracking )
  {
    if ( SepTokenLeakMethodWatch == 13
      && KeGetCurrentThread()->ApcState.Process[1].Header.WaitListHead.Flink == (struct _LIST_ENTRY *)SepTokenLeakProcessCid )
    {
      *(_DWORD *)(MEMORY[0x478] + 280LL) = _InterlockedIncrement(&SepTokenLeakMethodCount);
      v48 = *(_DWORD *)(MEMORY[0x478] + 280LL);
      if ( v48 >= SepTokenLeakBreakCount )
      {
        DbgPrint("\nToken number 0x%x = 0x%p\n", v48, 0LL);
        __debugbreak();
      }
    }
  }
  *a8 = 0LL;
  return (unsigned int)v24;
}
