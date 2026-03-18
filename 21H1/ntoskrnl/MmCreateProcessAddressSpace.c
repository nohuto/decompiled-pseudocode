/*
 * XREFs of MmCreateProcessAddressSpace @ 0x1406F0E98
 * Callers:
 *     PspAllocateProcess @ 0x1406F3CB0 (PspAllocateProcess.c)
 * Callees:
 *     MiChargeCommit @ 0x14021A460 (MiChargeCommit.c)
 *     MiReleasePtes @ 0x140247F40 (MiReleasePtes.c)
 *     MiReservePtes @ 0x1402743A0 (MiReservePtes.c)
 *     MiReturnCommit @ 0x14027D3E0 (MiReturnCommit.c)
 *     MiMakeValidPte @ 0x14028D330 (MiMakeValidPte.c)
 *     MiPteInShadowRange @ 0x140291700 (MiPteInShadowRange.c)
 *     MiDeleteProcessShadow @ 0x1402AD198 (MiDeleteProcessShadow.c)
 *     MiReturnResident @ 0x1402D4EFC (MiReturnResident.c)
 *     PsReturnProcessQuota @ 0x1402D4F98 (PsReturnProcessQuota.c)
 *     MiWritePteShadow @ 0x1402F2F20 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x1402F2F80 (MiPteHasShadow.c)
 *     MiCheckWsLimits @ 0x14030EA04 (MiCheckWsLimits.c)
 *     MiMakePartitionActive @ 0x140328410 (MiMakePartitionActive.c)
 *     MiSetProcessPartitionId @ 0x140328494 (MiSetProcessPartitionId.c)
 *     RtlRandomEx @ 0x1403284B0 (RtlRandomEx.c)
 *     PsGetDefaultWsMaximum @ 0x1403284D8 (PsGetDefaultWsMaximum.c)
 *     PsChargeProcessQuota @ 0x1403284E8 (PsChargeProcessQuota.c)
 *     MiSyncSystemPdes @ 0x140328520 (MiSyncSystemPdes.c)
 *     KeMakeKernelDirectoryTableBase @ 0x140328594 (KeMakeKernelDirectoryTableBase.c)
 *     MiCreateNewProcessTopLevelMappings @ 0x1403285AC (MiCreateNewProcessTopLevelMappings.c)
 *     MiInsertNewProcess @ 0x1403287FC (MiInsertNewProcess.c)
 *     MiChargeResident @ 0x1403550AC (MiChargeResident.c)
 *     MiJoinSession @ 0x1406F0E40 (MiJoinSession.c)
 *     MiAllocateTopLevelPage @ 0x1406F10F0 (MiAllocateTopLevelPage.c)
 *     MiAllocateProcessShadow @ 0x1406F128C (MiAllocateProcessShadow.c)
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
  volatile signed __int32 *v16; // rdx
  __int64 v17; // rsi
  __int64 v18; // r9
  unsigned __int64 v19; // rbx
  int v20; // r15d
  __int64 v22; // [rsp+30h] [rbp-38h] BYREF
  volatile signed __int32 *v23; // [rsp+78h] [rbp+10h] BYREF
  unsigned __int64 v24; // [rsp+80h] [rbp+18h] BYREF

  v24 = a3;
  v23 = 0LL;
  v7 = PspMinimumWorkingSet;
  v8 = a3;
  v9 = a6;
  v22 = PspMinimumWorkingSet;
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
    MiCheckWsLimits(v9 + 1664, (unsigned __int64 *)&v22, &v24, a4, 1);
    v8 = v24;
    v7 = v22;
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
  v13 = MiReservePtes((__int64)&qword_140C4EE80, 1LL);
  if ( !v13 )
  {
LABEL_24:
    MiReturnResident((__int64)v10, v7);
    goto LABEL_25;
  }
  if ( (int)MiAllocateProcessShadow(v9, a5) < 0 )
  {
LABEL_23:
    MiReleasePtes((__int64)&qword_140C4EE80, (_QWORD *)v13, 1u);
    goto LABEL_24;
  }
  if ( !(unsigned int)MiJoinSession(&v23) )
  {
    MiDeleteProcessShadow(v9, 0);
    goto LABEL_23;
  }
  v14 = a5;
  *(_QWORD *)(v9 + 1608) = 4LL;
  TopLevelPage = MiAllocateTopLevelPage(v9, v13, v14);
  v16 = v23;
  v17 = TopLevelPage;
  if ( v23 )
  {
    *(_QWORD *)(v9 + 1368) = v23;
    _InterlockedOr((volatile signed __int32 *)(v9 + 1124), 0x10000u);
    v16 = v23;
  }
  MiInsertNewProcess((_QWORD *)v9, (__int64)v16);
  MiCreateNewProcessTopLevelMappings(v9, (__int64)(v13 << 25) >> 16);
  v19 = MiMakeValidPte(0LL, v17, 2415919110LL, v18) & 0xFFFFFFFFFFFFFEFFuLL;
  v20 = 0;
  if ( !MiPteInShadowRange(((__int64)(v13 << 25) >> 16) + 3944) )
    goto LABEL_17;
  if ( (unsigned int)MiPteHasShadow() )
  {
    v20 = 1;
    if ( !HIBYTE(word_140C4DF48) )
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
    MiWritePteShadow(((__int64)(v13 << 25) >> 16) + 3944, v19);
  *(_QWORD *)(v9 + 40) = KeMakeKernelDirectoryTableBase(v17 << 12);
  MiSyncSystemPdes(v9);
  MiReleasePtes((__int64)&qword_140C4EE80, (_QWORD *)v13, 1u);
  return 1;
}
