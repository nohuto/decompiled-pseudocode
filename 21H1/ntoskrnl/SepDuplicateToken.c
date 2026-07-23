/*
 * XREFs of SepDuplicateToken @ 0x1406014E0
 * Callers:
 *     SepGetAnonymousToken @ 0x1402DE61C (SepGetAnonymousToken.c)
 *     SepLinkLogonSessions @ 0x1403403B8 (SepLinkLogonSessions.c)
 *     NtOpenThreadTokenEx @ 0x1405E05A0 (NtOpenThreadTokenEx.c)
 *     NtQueryInformationToken @ 0x140606BA0 (NtQueryInformationToken.c)
 *     NtDuplicateToken @ 0x1406496B0 (NtDuplicateToken.c)
 *     NtImpersonateAnonymousToken @ 0x1406778C0 (NtImpersonateAnonymousToken.c)
 *     SeCopyClientToken @ 0x1406C24B8 (SeCopyClientToken.c)
 *     SeSubProcessToken @ 0x1406F7240 (SeSubProcessToken.c)
 *     SepSetLogonSessionToken @ 0x140704174 (SepSetLogonSessionToken.c)
 *     NtCreateLowBoxToken @ 0x14070D200 (NtCreateLowBoxToken.c)
 *     SeDuplicateTokenAndAddOriginClaim @ 0x14091E0AC (SeDuplicateTokenAndAddOriginClaim.c)
 *     SeGetLinkedToken @ 0x14091E190 (SeGetLinkedToken.c)
 *     SeGetLogonSessionToken @ 0x14091E2B0 (SeGetLogonSessionToken.c)
 * Callees:
 *     RtlULongAdd @ 0x14024122C (RtlULongAdd.c)
 *     RtlSidHashInitialize @ 0x140256B40 (RtlSidHashInitialize.c)
 *     MmGetSessionObjectById @ 0x14025B084 (MmGetSessionObjectById.c)
 *     HalPutDmaAdapter @ 0x140261190 (HalPutDmaAdapter.c)
 *     KeLeaveCriticalRegion @ 0x140261420 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x140261460 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x140261FD0 (ExAcquireResourceSharedLite.c)
 *     ExInitializeResourceLite @ 0x14026C4C0 (ExInitializeResourceLite.c)
 *     SepReferenceLuidToIndexEntry @ 0x1402FFD60 (SepReferenceLuidToIndexEntry.c)
 *     RtlWalkFrameChain @ 0x14032C980 (RtlWalkFrameChain.c)
 *     AuthzBasepDuplicateSecurityAttributes @ 0x140338570 (AuthzBasepDuplicateSecurityAttributes.c)
 *     DbgPrint @ 0x14033C6D0 (DbgPrint.c)
 *     memmove @ 0x140408CC0 (memmove.c)
 *     memset @ 0x140408F80 (memset.c)
 *     ObCreateObjectEx @ 0x140601F10 (ObCreateObjectEx.c)
 *     SepSetTokenPackage @ 0x140669D4C (SepSetTokenPackage.c)
 *     SepDuplicateSid @ 0x14066B098 (SepDuplicateSid.c)
 *     SepSetTokenCapabilities @ 0x140673878 (SepSetTokenCapabilities.c)
 *     SepReferenceLogonSession @ 0x1406740A8 (SepReferenceLogonSession.c)
 *     SepMakeTokenEffectiveOnly @ 0x1406C5528 (SepMakeTokenEffectiveOnly.c)
 *     SepModifyTokenPolicyCounter @ 0x1409184A8 (SepModifyTokenPolicyCounter.c)
 *     SepDuplicateTokenUserAndGroups @ 0x14091E81C (SepDuplicateTokenUserAndGroups.c)
 *     SepAddTokenLogonSession @ 0x14091EE30 (SepAddTokenLogonSession.c)
 *     SepDuplicateTokenClaims @ 0x1409207A4 (SepDuplicateTokenClaims.c)
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B1030 (ExAllocatePoolWithTag.c)
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
  unsigned int v21; // ebp
  int v22; // ebp
  __int64 v23; // rax
  _DWORD *v24; // rcx
  _QWORD *v25; // rcx
  int i; // eax
  __int64 v27; // rax
  _QWORD *v28; // rax
  int j; // ecx
  __int64 v30; // rax
  unsigned int v31; // ecx
  size_t v32; // r12
  char *v33; // r14
  __int64 v34; // rax
  char *v35; // r14
  __int64 v36; // r9
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // rcx
  __int64 v40; // rdx
  void *v41; // rcx
  __int64 v42; // rdx
  _KPROCESS *Process; // rcx
  int v44; // edx
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
  MEMORY[0xC8] = *(_DWORD *)(a1 + 200) & 0xFFFFFBDF;
  v21 = *(_DWORD *)(a1 + 120);
  if ( MEMORY[0x78] != v21 )
  {
    MEMORY[0x78] = *(_DWORD *)(a1 + 120);
    if ( !SeTokenDoesNotTrackSessionObject )
    {
      if ( MEMORY[0x488] )
        HalPutDmaAdapter(MEMORY[0x488]);
      MEMORY[0x488] = MmGetSessionObjectById(v21);
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
  MEMORY[0x440] = 0LL;
  MEMORY[0x480] = 0LL;
  MEMORY[0x318] = 0LL;
  MEMORY[0x310] = 0LL;
  MEMORY[0x320] = 0;
  memset((void *)0x328, 0, 0x110uLL);
  MEMORY[0xB0] = 0LL;
  MEMORY[0x450] = 0LL;
  MEMORY[0x458] = 0LL;
  MEMORY[0x470] = 0LL;
  if ( MEMORY[0x76] == 2 )
    SepModifyTokenPolicyCounter(88LL, 1LL);
  if ( (*(_DWORD *)(a1 + 200) & 0x20) != 0 )
  {
    v22 = SepReferenceLogonSession(a1 + 24, 216LL);
    if ( v22 < 0 )
    {
      MEMORY[0xC8] |= 0x20u;
      MEMORY[0xD8] = 0LL;
LABEL_41:
      ExReleaseResourceLite(*(PERESOURCE *)(a1 + 48));
      KeLeaveCriticalRegion();
LABEL_42:
      HalPutDmaAdapter(0LL);
      return (unsigned int)v22;
    }
  }
  else
  {
    MEMORY[0xD8] = *(_QWORD *)(a1 + 216);
    if ( _InterlockedIncrement64((volatile signed __int64 *)(MEMORY[0xD8] + 24LL)) <= 1 )
      __fastfail(0xEu);
    v22 = 0;
  }
  v23 = *(_QWORD *)(a1 + 1136);
  if ( v23 )
  {
    SepReferenceLuidToIndexEntry(*(_QWORD *)(a1 + 1136));
    v23 = *(_QWORD *)(a1 + 1136);
  }
  MEMORY[0x470] = v23;
  v24 = *(_DWORD **)(a1 + 776);
  if ( *v24 )
  {
    v22 = AuthzBasepDuplicateSecurityAttributes((__int64)v24, MEMORY[0x308], a7);
    if ( v22 < 0 )
      goto LABEL_41;
  }
  memmove((void *)0x490, (const void *)(a1 + 1168), *(unsigned int *)(a1 + 132));
  if ( SepTokenSidSharingEnabled )
  {
    MEMORY[0x98] = *(_QWORD *)(a1 + 152) - a1;
    v22 = SepDuplicateTokenUserAndGroups(a1, 0LL);
    if ( v22 < 0 )
    {
      MEMORY[0x98] = 0LL;
      goto LABEL_41;
    }
  }
  else
  {
    MEMORY[0x7C] = *(_DWORD *)(a1 + 124);
    v25 = (_QWORD *)(*(_QWORD *)(a1 + 152) - a1);
    MEMORY[0x98] = v25;
    for ( i = MEMORY[0x7C]; i; --i )
    {
      *v25 -= a1;
      v25 += 2;
    }
  }
  v27 = *(_QWORD *)(a1 + 160);
  MEMORY[0xA0] = v27;
  if ( v27 )
  {
    v28 = (_QWORD *)(v27 - a1);
    MEMORY[0xA0] = v28;
    for ( j = MEMORY[0x80]; j; --j )
    {
      *v28 -= a1;
      v28 += 2;
    }
  }
  v30 = *(_QWORD *)(a1 + 184);
  v31 = 4 * *(unsigned __int8 *)(*(_QWORD *)(a1 + 168) + 1LL) + 8;
  if ( v30 )
    v31 += *(unsigned __int16 *)(v30 + 2);
  v32 = v31;
  v33 = (char *)ExAllocatePoolWithTag(PagedPool, v31, 0x64546553u);
  MEMORY[0xB0] = v33;
  if ( !v33 )
  {
    ExReleaseResourceLite(*(PERESOURCE *)(a1 + 48));
    KeLeaveCriticalRegion();
    HalPutDmaAdapter(0LL);
    return 3221225626LL;
  }
  memmove(v33, *(const void **)(a1 + 176), v32);
  v34 = *(_QWORD *)(a1 + 184);
  v35 = &v33[-*(_QWORD *)(a1 + 176)];
  MEMORY[0xB8] = v34;
  if ( v34 )
    MEMORY[0xB8] = &v35[v34];
  MEMORY[0xA8] = &v35[*(_QWORD *)(a1 + 168)];
  v36 = *(unsigned int *)(a1 + 800);
  if ( (_DWORD)v36 )
    v22 = SepSetTokenCapabilities(0LL, *(_QWORD *)(a1 + 784), *(_QWORD *)(a1 + 792), v36);
  if ( v22 < 0 )
    goto LABEL_41;
  v37 = *(_QWORD *)(a1 + 784);
  if ( v37 )
    v22 = SepSetTokenPackage(0LL, v37);
  if ( v22 < 0 )
    goto LABEL_41;
  v38 = *(_QWORD *)(a1 + 1080);
  if ( v38 )
  {
    if ( _InterlockedIncrement64((volatile signed __int64 *)(v38 + 24)) <= 1 )
      __fastfail(0xEu);
    MEMORY[0x438] = *(_QWORD *)(a1 + 1080);
  }
  v39 = *(_QWORD *)(a1 + 1088);
  if ( v39 )
  {
    if ( _InterlockedIncrement64((volatile signed __int64 *)(v39 + 24)) <= 1 )
      __fastfail(0xEu);
    MEMORY[0x440] = *(_QWORD *)(a1 + 1088);
  }
  v40 = *(_QWORD *)(a1 + 1152);
  if ( v40 )
  {
    if ( _InterlockedIncrement64((volatile signed __int64 *)(v40 + 24)) <= 1 )
      __fastfail(0xEu);
    MEMORY[0x480] = *(_QWORD *)(a1 + 1152);
  }
  if ( *(_QWORD *)(a1 + 1096) )
  {
    v22 = SepDuplicateTokenClaims(a1, 0LL);
    if ( v22 < 0 )
      goto LABEL_41;
  }
  v41 = *(void **)(a1 + 1104);
  v22 = 0;
  if ( !v41 || (v22 = SepDuplicateSid(v41), v22 >= 0) )
  {
    if ( MEMORY[0x450] )
    {
      ExFreePoolWithTag(MEMORY[0x450], 0);
      MEMORY[0x450] = 0LL;
    }
    MEMORY[0x450] = 0LL;
  }
  ExReleaseResourceLite(*(PERESOURCE *)(a1 + 48));
  KeLeaveCriticalRegion();
  if ( v22 < 0 )
    goto LABEL_42;
  if ( SeTokenLeakTracking )
  {
    *MEMORY[0x478] = KeGetCurrentThread()[1].CycleTime;
    *(_QWORD *)(MEMORY[0x478] + 8LL) = *(_QWORD *)&KeGetCurrentThread()[1].CurrentRunTime;
    *(_DWORD *)(MEMORY[0x478] + 32LL) = 13;
    *(_DWORD *)(MEMORY[0x478] + 280LL) = 0;
    *(_DWORD *)(MEMORY[0x478] + 284LL) = 0;
    v42 = MEMORY[0x478];
    Process = KeGetCurrentThread()->ApcState.Process;
    *(_QWORD *)(MEMORY[0x478] + 16LL) = *(_QWORD *)&Process[1].ActiveProcessors.Count;
    *(_DWORD *)(v42 + 24) = Process[1].ActiveProcessors.Bitmap[0];
    *(_WORD *)(v42 + 28) = WORD2(Process[1].ActiveProcessors.Bitmap[0]);
    *(_BYTE *)(v42 + 30) = BYTE6(Process[1].ActiveProcessors.Bitmap[0]);
    SepAddTokenLogonSession(0LL);
  }
  if ( a3 )
    SepMakeTokenEffectiveOnly(0LL);
  RtlSidHashInitialize(MEMORY[0x98], MEMORY[0x7C], (PSID_AND_ATTRIBUTES_HASH)0xE8);
  RtlSidHashInitialize(MEMORY[0xA0], MEMORY[0x80], (PSID_AND_ATTRIBUTES_HASH)0x1F8);
  if ( MEMORY[0x318] )
    RtlSidHashInitialize(MEMORY[0x318], MEMORY[0x320], (PSID_AND_ATTRIBUTES_HASH)0x328);
  if ( SeTokenLeakTracking )
  {
    if ( SepTokenLeakMethodWatch == 13
      && KeGetCurrentThread()->ApcState.Process[1].Header.WaitListHead.Flink == (struct _LIST_ENTRY *)SepTokenLeakProcessCid )
    {
      *(_DWORD *)(MEMORY[0x478] + 280LL) = _InterlockedIncrement(&SepTokenLeakMethodCount);
      v44 = *(_DWORD *)(MEMORY[0x478] + 280LL);
      if ( v44 >= SepTokenLeakBreakCount )
      {
        DbgPrint("\nToken number 0x%x = 0x%p\n", v44, 0LL);
        __debugbreak();
      }
    }
  }
  *a8 = 0LL;
  return (unsigned int)v22;
}
