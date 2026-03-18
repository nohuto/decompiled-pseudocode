/*
 * XREFs of MmCreateProcessAddressSpace @ 0x1406ABD7C
 * Callers:
 *     PspAllocateProcess @ 0x140610840 (PspAllocateProcess.c)
 * Callees:
 *     MiReservePtes @ 0x14021B350 (MiReservePtes.c)
 *     MiReturnCommit @ 0x140224390 (MiReturnCommit.c)
 *     MiMakeValidPte @ 0x1402342E0 (MiMakeValidPte.c)
 *     MiPteInShadowRange @ 0x1402386B0 (MiPteInShadowRange.c)
 *     MiDeleteProcessShadow @ 0x140254168 (MiDeleteProcessShadow.c)
 *     MiReturnResident @ 0x14026B55C (MiReturnResident.c)
 *     PsReturnProcessQuota @ 0x14026B5F8 (PsReturnProcessQuota.c)
 *     MiReleasePtes @ 0x140284720 (MiReleasePtes.c)
 *     MiChargeCommit @ 0x1402ACF70 (MiChargeCommit.c)
 *     MiMakePartitionActive @ 0x1402E20B8 (MiMakePartitionActive.c)
 *     MiSetProcessPartitionId @ 0x1402E213C (MiSetProcessPartitionId.c)
 *     RtlRandomEx @ 0x1402E2150 (RtlRandomEx.c)
 *     PsGetDefaultWsMaximum @ 0x1402E2178 (PsGetDefaultWsMaximum.c)
 *     PsChargeProcessQuota @ 0x1402E2188 (PsChargeProcessQuota.c)
 *     MiSyncSystemPdes @ 0x1402E21C0 (MiSyncSystemPdes.c)
 *     KeMakeKernelDirectoryTableBase @ 0x1402E2234 (KeMakeKernelDirectoryTableBase.c)
 *     MiCreateNewProcessTopLevelMappings @ 0x1402E224C (MiCreateNewProcessTopLevelMappings.c)
 *     MiInsertNewProcess @ 0x1402E249C (MiInsertNewProcess.c)
 *     MiChargeResident @ 0x1402F90CC (MiChargeResident.c)
 *     MiWritePteShadow @ 0x14032ECC0 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x14032ED20 (MiPteHasShadow.c)
 *     MiCheckWsLimits @ 0x14034BEE4 (MiCheckWsLimits.c)
 *     MiJoinSession @ 0x1406ABD24 (MiJoinSession.c)
 *     MiAllocateTopLevelPage @ 0x1406ABFD4 (MiAllocateTopLevelPage.c)
 *     MiAllocateProcessShadow @ 0x1406AC170 (MiAllocateProcessShadow.c)
 */

char __fastcall MmCreateProcessAddressSpace(
        __int64 a1,
        __int64 a2,
        unsigned __int64 a3,
        char a4,
        unsigned int a5,
        __int64 a6)
{
  __int64 v7; // rsi
  unsigned __int64 v8; // rbp
  __int64 v9; // rdi
  __int16 *v10; // rbx
  __int64 v11; // rdx
  __int64 v12; // rdx
  __int64 v13; // r8
  unsigned __int64 v14; // r9
  ULONG_PTR v15; // rbp
  __int64 v16; // r8
  __int64 TopLevelPage; // rax
  volatile signed __int32 *v18; // rdx
  __int64 v19; // rsi
  __int64 v20; // r9
  unsigned __int64 v21; // rbx
  int v22; // r15d
  __int64 v23; // r8
  __int64 v25; // [rsp+30h] [rbp-38h] BYREF
  volatile signed __int32 *v26; // [rsp+78h] [rbp+10h] BYREF
  unsigned __int64 v27; // [rsp+80h] [rbp+18h] BYREF

  v27 = a3;
  v26 = 0LL;
  v7 = PspMinimumWorkingSet;
  v8 = a3;
  v9 = a6;
  v25 = PspMinimumWorkingSet;
  if ( a1 )
    v10 = **(__int16 ***)(a6 + 2520);
  else
    v10 = (__int16 *)&MiSystemPartition;
  if ( !(unsigned int)MiMakePartitionActive((__int64)v10) )
    return 0;
  MiSetProcessPartitionId(v9, *v10);
  if ( !(unsigned int)MiChargeCommit((__int64)v10, 4uLL, 0) )
    return 0;
  *(_DWORD *)(v9 + 1664) = (unsigned __int16)RtlRandomEx(&Seed);
  *(_QWORD *)(v9 + 2368) = v9 + 2360;
  *(_QWORD *)(v9 + 2360) = v9 + 2360;
  *(_QWORD *)(v9 + 2352) = 0LL;
  if ( v8 != PsGetDefaultWsMaximum() )
  {
    MiCheckWsLimits(v9 + 1664, (unsigned __int64 *)&v25, &v27, a4, 1);
    v8 = v27;
    v7 = v25;
  }
  *(_QWORD *)(v9 + 1776) = v7;
  *(_QWORD *)(v9 + 1816) = v8;
  if ( (a4 & 1) != 0 )
    *(_BYTE *)(v9 + 1848) |= 0x40u;
  if ( (int)PsChargeProcessQuota((struct _KPROCESS *)v9, v11, v7) < 0 )
  {
LABEL_26:
    MiReturnCommit((__int64)v10, 4LL);
    return 0;
  }
  if ( !(unsigned int)MiChargeResident((ULONG_PTR *)v10, v7, 0LL) )
  {
LABEL_25:
    PsReturnProcessQuota((struct _KPROCESS *)v9, v12, v7);
    goto LABEL_26;
  }
  v15 = MiReservePtes((__int64)&qword_140C4ED40, 1u, v13, v14);
  if ( !v15 )
  {
LABEL_24:
    MiReturnResident((__int64)v10, v7);
    goto LABEL_25;
  }
  if ( (int)MiAllocateProcessShadow(v9, a5) < 0 )
  {
LABEL_23:
    MiReleasePtes((__int64)&qword_140C4ED40, (_QWORD *)v15, 1u);
    goto LABEL_24;
  }
  if ( !(unsigned int)MiJoinSession(&v26) )
  {
    MiDeleteProcessShadow(v9, 0LL);
    goto LABEL_23;
  }
  v16 = a5;
  *(_QWORD *)(v9 + 1608) = 4LL;
  TopLevelPage = MiAllocateTopLevelPage(v9, v15, v16);
  v18 = v26;
  v19 = TopLevelPage;
  if ( v26 )
  {
    *(_QWORD *)(v9 + 1368) = v26;
    _InterlockedOr((volatile signed __int32 *)(v9 + 1124), 0x10000u);
    v18 = v26;
  }
  MiInsertNewProcess((_QWORD *)v9, (__int64)v18);
  MiCreateNewProcessTopLevelMappings(v9, (__int64)(v15 << 25) >> 16);
  v21 = MiMakeValidPte(0LL, v19, 2415919110LL, v20) & 0xFFFFFFFFFFFFFEFFuLL;
  v22 = 0;
  if ( !MiPteInShadowRange(((__int64)(v15 << 25) >> 16) + 3944) )
    goto LABEL_17;
  if ( (unsigned int)MiPteHasShadow() )
  {
    v22 = 1;
    if ( !HIBYTE(word_140C4DE08) )
    {
LABEL_31:
      if ( (v21 & 1) != 0 )
        v21 |= 0x8000000000000000uLL;
    }
  }
  else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
  {
    goto LABEL_31;
  }
LABEL_17:
  *(_QWORD *)(((__int64)(v15 << 25) >> 16) + 0xF68) = v21;
  if ( v22 )
    MiWritePteShadow(((__int64)(v15 << 25) >> 16) + 3944, v21, v23);
  *(_QWORD *)(v9 + 40) = KeMakeKernelDirectoryTableBase(v19 << 12);
  MiSyncSystemPdes(v9);
  MiReleasePtes((__int64)&qword_140C4ED40, (_QWORD *)v15, 1u);
  return 1;
}
