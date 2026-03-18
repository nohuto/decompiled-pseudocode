/*
 * XREFs of MmCreateProcessAddressSpace @ 0x1407F17B4
 * Callers:
 *     PspAllocateProcess @ 0x14070BD10 (PspAllocateProcess.c)
 * Callees:
 *     MiReturnResident @ 0x140216E18 (MiReturnResident.c)
 *     PsReturnProcessQuota @ 0x140216EB4 (PsReturnProcessQuota.c)
 *     MiWritePteShadow @ 0x1402294F0 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140229550 (MiPteHasShadow.c)
 *     MiDeleteProcessShadow @ 0x14027D408 (MiDeleteProcessShadow.c)
 *     MiChargeResident @ 0x1402821F4 (MiChargeResident.c)
 *     MiReturnCommit @ 0x14028CE10 (MiReturnCommit.c)
 *     MiReleasePtes @ 0x1402BB6D0 (MiReleasePtes.c)
 *     MiMakeValidPte @ 0x1402CBD10 (MiMakeValidPte.c)
 *     MiReservePtes @ 0x1403095B0 (MiReservePtes.c)
 *     MiPteInShadowRange @ 0x140317A80 (MiPteInShadowRange.c)
 *     MiChargeCommit @ 0x14032A4B0 (MiChargeCommit.c)
 *     MiSyncSystemPdes @ 0x14036C3B4 (MiSyncSystemPdes.c)
 *     KeMakeKernelDirectoryTableBase @ 0x14036C428 (KeMakeKernelDirectoryTableBase.c)
 *     MiCreateNewProcessTopLevelMappings @ 0x14036C440 (MiCreateNewProcessTopLevelMappings.c)
 *     MiInsertNewProcess @ 0x14036C730 (MiInsertNewProcess.c)
 *     PsChargeProcessQuota @ 0x14036C8EC (PsChargeProcessQuota.c)
 *     PsGetDefaultWsMaximum @ 0x14036C924 (PsGetDefaultWsMaximum.c)
 *     RtlRandomEx @ 0x14036C940 (RtlRandomEx.c)
 *     MiSetProcessPartitionId @ 0x14036C968 (MiSetProcessPartitionId.c)
 *     MiMakePartitionActive @ 0x14036C978 (MiMakePartitionActive.c)
 *     MiCheckWsLimits @ 0x14036D8C8 (MiCheckWsLimits.c)
 *     MiAllocateProcessShadow @ 0x1407F1A10 (MiAllocateProcessShadow.c)
 *     MiAllocateTopLevelPage @ 0x1407F1AF8 (MiAllocateTopLevelPage.c)
 *     MiJoinSession @ 0x1407F1C84 (MiJoinSession.c)
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
  ULONG_PTR v13; // rbp
  __int64 v14; // r8
  __int64 TopLevelPage; // rax
  __int64 v16; // rdx
  __int64 v17; // rsi
  unsigned __int64 v18; // rbx
  int v19; // r15d
  __int64 v21; // [rsp+30h] [rbp-38h] BYREF
  __int64 v22; // [rsp+78h] [rbp+10h] BYREF
  unsigned __int64 v23; // [rsp+80h] [rbp+18h] BYREF

  v23 = a3;
  v22 = 0LL;
  v7 = PspMinimumWorkingSet;
  v8 = a3;
  v9 = a6;
  v21 = PspMinimumWorkingSet;
  if ( a1 )
    v10 = **(__int16 ***)(a6 + 2520);
  else
    v10 = (__int16 *)&MiSystemPartition;
  if ( !(unsigned int)MiMakePartitionActive((__int64)v10) )
    return 0;
  MiSetProcessPartitionId(v9, *v10);
  *(_DWORD *)(v9 + 2876) = 1;
  if ( !(unsigned int)MiChargeCommit((__int64)v10, 4uLL, 0) )
    return 0;
  *(_DWORD *)(v9 + 1664) = (unsigned __int16)RtlRandomEx(&Seed);
  *(_QWORD *)(v9 + 2352) = 0LL;
  *(_QWORD *)(v9 + 2368) = v9 + 2360;
  *(_QWORD *)(v9 + 2360) = v9 + 2360;
  if ( v8 != PsGetDefaultWsMaximum() )
  {
    MiCheckWsLimits(v9 + 1664, &v21, &v23, a4, 1);
    v8 = v23;
    v7 = v21;
  }
  *(_QWORD *)(v9 + 1776) = v7;
  *(_QWORD *)(v9 + 1784) = v8;
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
  v13 = MiReservePtes((__int64)&qword_140C534C0, 1u);
  if ( !v13 )
  {
LABEL_24:
    MiReturnResident((__int64)v10, v7);
    goto LABEL_25;
  }
  if ( (int)MiAllocateProcessShadow(v9, a5) < 0 )
  {
LABEL_23:
    MiReleasePtes((__int64)&qword_140C534C0, (_QWORD *)v13, 1u);
    goto LABEL_24;
  }
  if ( !(unsigned int)MiJoinSession(&v22) )
  {
    MiDeleteProcessShadow(v9, 0);
    goto LABEL_23;
  }
  v14 = a5;
  *(_QWORD *)(v9 + 1608) = 4LL;
  TopLevelPage = MiAllocateTopLevelPage(v9, v13, v14);
  v16 = v22;
  v17 = TopLevelPage;
  if ( v22 )
  {
    *(_QWORD *)(v9 + 1368) = v22;
    _InterlockedOr((volatile signed __int32 *)(v9 + 1124), 0x10000u);
    v16 = v22;
  }
  MiInsertNewProcess((_QWORD *)v9, v16);
  MiCreateNewProcessTopLevelMappings(v9, (__int64)(v13 << 25) >> 16);
  v18 = MiMakeValidPte(0LL, v17, -1879048186) & 0xFFFFFFFFFFFFFEFFuLL;
  v19 = 0;
  if ( !MiPteInShadowRange(((__int64)(v13 << 25) >> 16) + 3944) )
    goto LABEL_17;
  if ( (unsigned int)MiPteHasShadow() )
  {
    v19 = 1;
    if ( !HIBYTE(word_140C51864) )
    {
LABEL_31:
      if ( (v18 & 1) != 0 )
        v18 |= 0x8000000000000000uLL;
    }
  }
  else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
  {
    goto LABEL_31;
  }
LABEL_17:
  *(_QWORD *)(((__int64)(v13 << 25) >> 16) + 0xF68) = v18;
  if ( v19 )
    MiWritePteShadow(((__int64)(v13 << 25) >> 16) + 3944, v18);
  *(_QWORD *)(v9 + 40) = KeMakeKernelDirectoryTableBase(v17 << 12);
  MiSyncSystemPdes(v9);
  MiReleasePtes((__int64)&qword_140C534C0, (_QWORD *)v13, 1u);
  return 1;
}
