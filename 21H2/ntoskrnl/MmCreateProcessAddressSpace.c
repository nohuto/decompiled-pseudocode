/*
 * XREFs of MmCreateProcessAddressSpace @ 0x1406D04E4
 * Callers:
 *     PspAllocateProcess @ 0x1406D6638 (PspAllocateProcess.c)
 * Callees:
 *     MiChargeCommit @ 0x14021AAD0 (MiChargeCommit.c)
 *     MiReservePtes @ 0x1402265B0 (MiReservePtes.c)
 *     MiReleasePtes @ 0x140245800 (MiReleasePtes.c)
 *     MiChargeResident @ 0x14025A658 (MiChargeResident.c)
 *     MiReturnResident @ 0x140296E9C (MiReturnResident.c)
 *     PsReturnProcessQuota @ 0x140296F38 (PsReturnProcessQuota.c)
 *     MiWritePteShadow @ 0x1402B69BC (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x1402B6A1C (MiPteHasShadow.c)
 *     MiCheckWsLimits @ 0x1402BE45C (MiCheckWsLimits.c)
 *     MiSyncSystemPdes @ 0x1402E430C (MiSyncSystemPdes.c)
 *     KeMakeKernelDirectoryTableBase @ 0x1402E4380 (KeMakeKernelDirectoryTableBase.c)
 *     MiCreateNewProcessTopLevelMappings @ 0x1402E4398 (MiCreateNewProcessTopLevelMappings.c)
 *     MiInsertNewProcess @ 0x1402E45E8 (MiInsertNewProcess.c)
 *     PsChargeProcessQuota @ 0x1402E5D24 (PsChargeProcessQuota.c)
 *     PsGetDefaultWsMaximum @ 0x1402E5D5C (PsGetDefaultWsMaximum.c)
 *     RtlRandomEx @ 0x1402E5D70 (RtlRandomEx.c)
 *     MiSetProcessPartitionId @ 0x1402E5D98 (MiSetProcessPartitionId.c)
 *     MiMakePartitionActive @ 0x1402E5DA8 (MiMakePartitionActive.c)
 *     MiDeleteProcessShadow @ 0x140305768 (MiDeleteProcessShadow.c)
 *     MiReturnCommit @ 0x1403182A0 (MiReturnCommit.c)
 *     MiMakeValidPte @ 0x14032E730 (MiMakeValidPte.c)
 *     MiPteInShadowRange @ 0x140348AF0 (MiPteInShadowRange.c)
 *     MiAllocateProcessShadow @ 0x1406D073C (MiAllocateProcessShadow.c)
 *     MiAllocateTopLevelPage @ 0x1406D0824 (MiAllocateTopLevelPage.c)
 *     MiJoinSession @ 0x1406D09C0 (MiJoinSession.c)
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
  __int64 v12; // r9
  __int64 v13; // rdx
  __int64 v14; // r8
  unsigned __int64 v15; // r9
  ULONG_PTR v16; // rbp
  __int64 v17; // r8
  __int64 v18; // r8
  __int64 TopLevelPage; // rax
  __int64 v20; // rdx
  __int64 v21; // rsi
  unsigned __int64 v22; // rbx
  int v23; // r15d
  __int64 v24; // r8
  __int64 v26; // [rsp+30h] [rbp-38h] BYREF
  __int64 v27; // [rsp+78h] [rbp+10h] BYREF
  unsigned __int64 v28; // [rsp+80h] [rbp+18h] BYREF

  v28 = a3;
  v27 = 0LL;
  v7 = PspMinimumWorkingSet;
  v8 = a3;
  v9 = a6;
  v26 = PspMinimumWorkingSet;
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
    MiCheckWsLimits(v9 + 1664, (unsigned __int64 *)&v26, &v28, a4, 1);
    v8 = v28;
    v7 = v26;
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
  if ( !(unsigned int)MiChargeResident((ULONG_PTR *)v10, v7, 0LL, v12) )
  {
LABEL_25:
    PsReturnProcessQuota((struct _KPROCESS *)v9, v13, v7);
    goto LABEL_26;
  }
  v16 = MiReservePtes((__int64)&qword_140C4EF40, 1u, v14, v15);
  if ( !v16 )
  {
LABEL_24:
    MiReturnResident((__int64)v10, v7);
    goto LABEL_25;
  }
  if ( (int)MiAllocateProcessShadow(v9, a5) < 0 )
  {
LABEL_23:
    MiReleasePtes((__int64)&qword_140C4EF40, (_QWORD *)v16, 1u);
    goto LABEL_24;
  }
  if ( !(unsigned int)MiJoinSession(&v27) )
  {
    MiDeleteProcessShadow(v9, 0, v17);
    goto LABEL_23;
  }
  v18 = a5;
  *(_QWORD *)(v9 + 1608) = 4LL;
  TopLevelPage = MiAllocateTopLevelPage(v9, v16, v18);
  v20 = v27;
  v21 = TopLevelPage;
  if ( v27 )
  {
    *(_QWORD *)(v9 + 1368) = v27;
    _InterlockedOr((volatile signed __int32 *)(v9 + 1124), 0x10000u);
    v20 = v27;
  }
  MiInsertNewProcess((_QWORD *)v9, v20);
  MiCreateNewProcessTopLevelMappings(v9, (__int64)(v16 << 25) >> 16);
  v22 = MiMakeValidPte(0LL, v21, -1879048186) & 0xFFFFFFFFFFFFFEFFuLL;
  v23 = 0;
  if ( !MiPteInShadowRange(((__int64)(v16 << 25) >> 16) + 3944) )
    goto LABEL_17;
  if ( (unsigned int)MiPteHasShadow() )
  {
    v23 = 1;
    if ( !HIBYTE(word_140C4E008) )
    {
LABEL_31:
      if ( (v22 & 1) != 0 )
        v22 |= 0x8000000000000000uLL;
    }
  }
  else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
  {
    goto LABEL_31;
  }
LABEL_17:
  *(_QWORD *)(((__int64)(v16 << 25) >> 16) + 0xF68) = v22;
  if ( v23 )
    MiWritePteShadow(((__int64)(v16 << 25) >> 16) + 3944, v22, v24);
  *(_QWORD *)(v9 + 40) = KeMakeKernelDirectoryTableBase(v21 << 12);
  MiSyncSystemPdes(v9);
  MiReleasePtes((__int64)&qword_140C4EF40, (_QWORD *)v16, 1u);
  return 1;
}
