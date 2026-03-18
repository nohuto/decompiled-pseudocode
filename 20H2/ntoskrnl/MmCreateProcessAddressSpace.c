/*
 * XREFs of MmCreateProcessAddressSpace @ 0x1406ED8E8
 * Callers:
 *     PspAllocateProcess @ 0x140695CA4 (PspAllocateProcess.c)
 * Callees:
 *     MiPteInShadowRange @ 0x14021EA50 (MiPteInShadowRange.c)
 *     MiReturnCommit @ 0x140230300 (MiReturnCommit.c)
 *     MiDeleteProcessShadow @ 0x140236418 (MiDeleteProcessShadow.c)
 *     MiReturnResident @ 0x14026307C (MiReturnResident.c)
 *     PsReturnProcessQuota @ 0x140263118 (PsReturnProcessQuota.c)
 *     MiChargeCommit @ 0x14027C2B0 (MiChargeCommit.c)
 *     MiReservePtes @ 0x140285DC0 (MiReservePtes.c)
 *     MiReleasePtes @ 0x140294430 (MiReleasePtes.c)
 *     MiMakeValidPte @ 0x1402B1B40 (MiMakeValidPte.c)
 *     MiWritePteShadow @ 0x140313F2C (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140313F8C (MiPteHasShadow.c)
 *     MiCheckWsLimits @ 0x14031CEA4 (MiCheckWsLimits.c)
 *     MiSyncSystemPdes @ 0x1403351EC (MiSyncSystemPdes.c)
 *     KeMakeKernelDirectoryTableBase @ 0x140335260 (KeMakeKernelDirectoryTableBase.c)
 *     MiCreateNewProcessTopLevelMappings @ 0x140335278 (MiCreateNewProcessTopLevelMappings.c)
 *     MiInsertNewProcess @ 0x1403354C8 (MiInsertNewProcess.c)
 *     PsChargeProcessQuota @ 0x140336C04 (PsChargeProcessQuota.c)
 *     PsGetDefaultWsMaximum @ 0x140336C3C (PsGetDefaultWsMaximum.c)
 *     RtlRandomEx @ 0x140336C50 (RtlRandomEx.c)
 *     MiSetProcessPartitionId @ 0x140336C78 (MiSetProcessPartitionId.c)
 *     MiMakePartitionActive @ 0x140336C88 (MiMakePartitionActive.c)
 *     MiChargeResident @ 0x140344234 (MiChargeResident.c)
 *     MiAllocateProcessShadow @ 0x1406EDB40 (MiAllocateProcessShadow.c)
 *     MiAllocateTopLevelPage @ 0x1406EDC28 (MiAllocateTopLevelPage.c)
 *     MiJoinSession @ 0x1406EDDC4 (MiJoinSession.c)
 */

char __fastcall MmCreateProcessAddressSpace(
        __int64 a1,
        __int64 a2,
        unsigned __int64 a3,
        char a4,
        unsigned int a5,
        __int64 a6)
{
  unsigned __int64 v7; // rsi
  unsigned __int64 v8; // rbp
  __int64 v9; // rdi
  __int16 *v10; // rbx
  __int64 v11; // rdx
  __int64 v12; // rdx
  ULONG_PTR v13; // rbp
  __int64 v14; // r8
  __int64 TopLevelPage; // rax
  __int64 v16; // rdx
  __int64 v17; // rsi
  __int64 v18; // r9
  unsigned __int64 v19; // rbx
  int v20; // r15d
  __int64 v21; // r8
  __int64 v23; // [rsp+30h] [rbp-38h] BYREF
  __int64 v24; // [rsp+78h] [rbp+10h] BYREF
  unsigned __int64 v25; // [rsp+80h] [rbp+18h] BYREF

  v25 = a3;
  v24 = 0LL;
  v7 = PspMinimumWorkingSet;
  v8 = a3;
  v9 = a6;
  v23 = PspMinimumWorkingSet;
  if ( a1 )
    v10 = **(__int16 ***)(a6 + 2520);
  else
    v10 = (__int16 *)&MiSystemPartition;
  if ( !(unsigned int)MiMakePartitionActive((unsigned __int64)v10) )
    return 0;
  MiSetProcessPartitionId(v9, *v10);
  if ( !(unsigned int)MiChargeCommit((unsigned __int64)v10, 4uLL, 0) )
    return 0;
  *(_DWORD *)(v9 + 1664) = (unsigned __int16)RtlRandomEx(&Seed);
  *(_QWORD *)(v9 + 2368) = v9 + 2360;
  *(_QWORD *)(v9 + 2360) = v9 + 2360;
  *(_QWORD *)(v9 + 2352) = 0LL;
  if ( v8 != PsGetDefaultWsMaximum() )
  {
    MiCheckWsLimits(v9 + 1664, (unsigned __int64 *)&v23, &v25, a4, 1);
    v8 = v25;
    v7 = v23;
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
    PsReturnProcessQuota(v9, v12, v7);
    goto LABEL_26;
  }
  v13 = MiReservePtes((__int64)&qword_140C4EDC0, 1u);
  if ( !v13 )
  {
LABEL_24:
    MiReturnResident((__int64)v10, v7);
    goto LABEL_25;
  }
  if ( (int)MiAllocateProcessShadow(v9, a5) < 0 )
  {
LABEL_23:
    MiReleasePtes((__int64)&qword_140C4EDC0, (_QWORD *)v13, 1u);
    goto LABEL_24;
  }
  if ( !(unsigned int)MiJoinSession(&v24) )
  {
    MiDeleteProcessShadow(v9, 0LL);
    goto LABEL_23;
  }
  v14 = a5;
  *(_QWORD *)(v9 + 1608) = 4LL;
  TopLevelPage = MiAllocateTopLevelPage(v9, v13, v14);
  v16 = v24;
  v17 = TopLevelPage;
  if ( v24 )
  {
    *(_QWORD *)(v9 + 1368) = v24;
    _InterlockedOr((volatile signed __int32 *)(v9 + 1124), 0x10000u);
    v16 = v24;
  }
  MiInsertNewProcess((_QWORD *)v9, v16);
  MiCreateNewProcessTopLevelMappings(v9, (__int64)(v13 << 25) >> 16);
  v19 = MiMakeValidPte(0LL, v17, 2415919110LL, v18) & 0xFFFFFFFFFFFFFEFFuLL;
  v20 = 0;
  if ( !MiPteInShadowRange(((__int64)(v13 << 25) >> 16) + 3944) )
    goto LABEL_17;
  if ( (unsigned int)MiPteHasShadow() )
  {
    v20 = 1;
    if ( !HIBYTE(word_140C4DE88) )
    {
LABEL_31:
      if ( (v19 & 1) != 0 )
        v19 |= 0x8000000000000000uLL;
    }
  }
  else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
  {
    goto LABEL_31;
  }
LABEL_17:
  *(_QWORD *)(((__int64)(v13 << 25) >> 16) + 0xF68) = v19;
  if ( v20 )
    MiWritePteShadow(((__int64)(v13 << 25) >> 16) + 3944, v19, v21);
  *(_QWORD *)(v9 + 40) = KeMakeKernelDirectoryTableBase(v17 << 12);
  MiSyncSystemPdes(v9);
  MiReleasePtes((__int64)&qword_140C4EDC0, (_QWORD *)v13, 1u);
  return 1;
}
