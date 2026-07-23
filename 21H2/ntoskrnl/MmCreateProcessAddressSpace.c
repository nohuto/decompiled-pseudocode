/*
 * XREFs of MmCreateProcessAddressSpace @ 0x1406A77C4
 * Callers:
 *     PspAllocateProcess @ 0x1406AD918 (PspAllocateProcess.c)
 * Callees:
 *     MiWritePteShadow @ 0x140234B9C (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140234BFC (MiPteHasShadow.c)
 *     MiCheckWsLimits @ 0x14023CA9C (MiCheckWsLimits.c)
 *     MiReturnResident @ 0x140273F7C (MiReturnResident.c)
 *     PsReturnProcessQuota @ 0x140274018 (PsReturnProcessQuota.c)
 *     MiChargeResident @ 0x14027BBC8 (MiChargeResident.c)
 *     MiSyncSystemPdes @ 0x14029565C (MiSyncSystemPdes.c)
 *     KeMakeKernelDirectoryTableBase @ 0x1402956D0 (KeMakeKernelDirectoryTableBase.c)
 *     MiCreateNewProcessTopLevelMappings @ 0x1402956E8 (MiCreateNewProcessTopLevelMappings.c)
 *     MiInsertNewProcess @ 0x140295938 (MiInsertNewProcess.c)
 *     PsChargeProcessQuota @ 0x140297074 (PsChargeProcessQuota.c)
 *     PsGetDefaultWsMaximum @ 0x1402970AC (PsGetDefaultWsMaximum.c)
 *     RtlRandomEx @ 0x1402970C0 (RtlRandomEx.c)
 *     MiSetProcessPartitionId @ 0x1402970E8 (MiSetProcessPartitionId.c)
 *     MiMakePartitionActive @ 0x1402970F8 (MiMakePartitionActive.c)
 *     MiChargeCommit @ 0x1402BF3D0 (MiChargeCommit.c)
 *     MiReservePtes @ 0x1402CAEB0 (MiReservePtes.c)
 *     MiReleasePtes @ 0x1402EA050 (MiReleasePtes.c)
 *     MiDeleteProcessShadow @ 0x1403104B8 (MiDeleteProcessShadow.c)
 *     MiReturnCommit @ 0x140322FF0 (MiReturnCommit.c)
 *     MiMakeValidPte @ 0x140339480 (MiMakeValidPte.c)
 *     MiPteInShadowRange @ 0x140353840 (MiPteInShadowRange.c)
 *     MiAllocateProcessShadow @ 0x1406A7A1C (MiAllocateProcessShadow.c)
 *     MiAllocateTopLevelPage @ 0x1406A7B04 (MiAllocateTopLevelPage.c)
 *     MiJoinSession @ 0x1406A7CA0 (MiJoinSession.c)
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
  __int64 v17; // r9
  __int64 v18; // r8
  __int64 TopLevelPage; // rax
  __int64 v20; // rdx
  __int64 v21; // rsi
  unsigned __int64 v22; // rbx
  int v23; // r15d
  __int64 v25; // [rsp+30h] [rbp-38h] BYREF
  __int64 v26; // [rsp+78h] [rbp+10h] BYREF
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
  v15 = MiReservePtes((__int64)&qword_140C4EF80, 1u, v13, v14);
  if ( !v15 )
  {
LABEL_24:
    MiReturnResident((__int64)v10, v7);
    goto LABEL_25;
  }
  if ( (int)MiAllocateProcessShadow(v9, a5) < 0 )
  {
LABEL_23:
    MiReleasePtes((__int64)&qword_140C4EF80, (_QWORD *)v15, 1u);
    goto LABEL_24;
  }
  if ( !(unsigned int)MiJoinSession(&v26) )
  {
    MiDeleteProcessShadow(v9, 0, v16, v17);
    goto LABEL_23;
  }
  v18 = a5;
  *(_QWORD *)(v9 + 1608) = 4LL;
  TopLevelPage = MiAllocateTopLevelPage(v9, v15, v18);
  v20 = v26;
  v21 = TopLevelPage;
  if ( v26 )
  {
    *(_QWORD *)(v9 + 1368) = v26;
    _InterlockedOr((volatile signed __int32 *)(v9 + 1124), 0x10000u);
    v20 = v26;
  }
  MiInsertNewProcess((_QWORD *)v9, v20);
  MiCreateNewProcessTopLevelMappings(v9, (__int64)(v15 << 25) >> 16);
  v22 = MiMakeValidPte(0LL, v21, -1879048186) & 0xFFFFFFFFFFFFFEFFuLL;
  v23 = 0;
  if ( !MiPteInShadowRange(((__int64)(v15 << 25) >> 16) + 3944) )
    goto LABEL_17;
  if ( (unsigned int)MiPteHasShadow() )
  {
    v23 = 1;
    if ( !HIBYTE(word_140C4E048) )
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
  *(_QWORD *)(((__int64)(v15 << 25) >> 16) + 0xF68) = v22;
  if ( v23 )
    MiWritePteShadow(((__int64)(v15 << 25) >> 16) + 3944, v22);
  *(_QWORD *)(v9 + 40) = KeMakeKernelDirectoryTableBase(v21 << 12);
  MiSyncSystemPdes(v9);
  MiReleasePtes((__int64)&qword_140C4EF80, (_QWORD *)v15, 1u);
  return 1;
}
