/*
 * XREFs of MiSessionCreate @ 0x1407863CC
 * Callers:
 *     MmInitializeProcessAddressSpace @ 0x1406BFB24 (MmInitializeProcessAddressSpace.c)
 *     MiMapProcessExecutable @ 0x1406C0600 (MiMapProcessExecutable.c)
 * Callees:
 *     MiWritePteShadow @ 0x140234B9C (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140234BFC (MiPteHasShadow.c)
 *     MiCreateSystemWsles @ 0x14023F040 (MiCreateSystemWsles.c)
 *     MiAllocatePool @ 0x14027C2E0 (MiAllocatePool.c)
 *     MiChargeCommit @ 0x1402BF3D0 (MiChargeCommit.c)
 *     MiGetProcessPartition @ 0x1402BF640 (MiGetProcessPartition.c)
 *     MiGetPteAddress @ 0x140322E50 (MiGetPteAddress.c)
 *     MiReturnCommit @ 0x140322FF0 (MiReturnCommit.c)
 *     MiMakeDemandZeroPte @ 0x140334CC0 (MiMakeDemandZeroPte.c)
 *     MiPteInShadowRange @ 0x140353840 (MiPteInShadowRange.c)
 *     ExInitializeSessionHeapManager @ 0x14039D714 (ExInitializeSessionHeapManager.c)
 *     MiMakeZeroedPageTables @ 0x14039DF90 (MiMakeZeroedPageTables.c)
 *     MiDereferenceSession @ 0x140613A78 (MiDereferenceSession.c)
 *     MiSessionObjectCreate @ 0x140786644 (MiSessionObjectCreate.c)
 *     MiInitializeSystemSpaceMap @ 0x140786910 (MiInitializeSystemSpaceMap.c)
 *     MiInitializeSystemWorkingSetList @ 0x14078697C (MiInitializeSystemWorkingSetList.c)
 *     MiInitializeDynamicBitmap @ 0x140786A9C (MiInitializeDynamicBitmap.c)
 *     MiSessionCreateInternal @ 0x140786DD0 (MiSessionCreateInternal.c)
 *     MiInitializeSessionGlobals @ 0x140787660 (MiInitializeSessionGlobals.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 */

__int64 MiSessionCreate()
{
  __int64 result; // rax
  _KPROCESS *Process; // rsi
  __int64 ProcessPartition; // rbp
  unsigned __int64 v3; // rsi
  unsigned __int64 v4; // r13
  __int64 v5; // rdx
  _QWORD *PteAddress; // r14
  __int64 v7; // rax
  unsigned __int64 v8; // rdx
  unsigned __int64 v9; // r15
  __int64 v10; // rax
  int v11; // edx
  __int64 DemandZeroPte; // rdi
  unsigned __int64 v13; // rbx
  int v14; // r12d
  int v15; // ecx
  int v16; // edx
  unsigned __int64 v17; // rax
  PVOID Pool; // rax
  int v19; // ebx
  bool v20; // zf

  result = MiInitializeSessionGlobals();
  if ( (int)result < 0 )
    return result;
  Process = KeGetCurrentThread()->ApcState.Process;
  ProcessPartition = MiGetProcessPartition((__int64)Process);
  result = MiSessionCreateInternal(ProcessPartition);
  if ( (int)result < 0 )
    return result;
  v3 = Process[1].AffinityPadding[5];
  v4 = v3 + 256;
  if ( !(unsigned int)MiCreateSystemWsles()
    || !(unsigned int)MiInitializeDynamicBitmap(v3 + 880, qword_140C4DDF0, 0x200000LL, 0LL) )
  {
    goto LABEL_24;
  }
  *(_QWORD *)(v3 + 840) = qword_140C4CDD0;
  *(_QWORD *)(v3 + 832) = 0x10000LL;
  PteAddress = (_QWORD *)MiGetPteAddress(qword_140C4CDD0);
  v7 = MiGetPteAddress(v5 + 0x1FFF);
  v8 = qword_140C4CDD8;
  v9 = v7;
  if ( !qword_140C4CDD8 )
  {
    v8 = ((v7 - (__int64)PteAddress) >> 3) + 1;
    qword_140C4CDD8 = v8;
  }
  if ( !(unsigned int)MiChargeCommit(ProcessPartition, v8, 0) )
    goto LABEL_24;
  if ( !(unsigned int)MiMakeZeroedPageTables((__int64)PteAddress, v9, 1u, 11) )
  {
    MiReturnCommit(ProcessPartition, qword_140C4CDD8);
    goto LABEL_24;
  }
  v10 = qword_140C4CDD8 + *(_QWORD *)(v3 + 48);
  *(_DWORD *)(v3 + 4) |= 8u;
  *(_QWORD *)(v3 + 48) = v10;
  DemandZeroPte = MiMakeDemandZeroPte(4);
  if ( (unsigned __int64)PteAddress > v9 )
    goto LABEL_15;
  do
  {
    v13 = DemandZeroPte;
    v14 = 0;
    if ( !MiPteInShadowRange((unsigned __int64)PteAddress) )
      goto LABEL_11;
    if ( (unsigned int)MiPteHasShadow() )
    {
      v14 = 1;
      if ( HIBYTE(word_140C4E048) )
        goto LABEL_11;
      v20 = (DemandZeroPte & 1) == 0;
    }
    else
    {
      if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) == 0 )
        goto LABEL_11;
      v20 = (DemandZeroPte & 1) == 0;
    }
    if ( !v20 )
      v13 = DemandZeroPte | 0x8000000000000000uLL;
LABEL_11:
    *PteAddress = v13;
    if ( v14 )
      MiWritePteShadow((__int64)PteAddress, v13);
    ++PteAddress;
  }
  while ( (unsigned __int64)PteAddress <= v9 );
  v11 = *(_DWORD *)(v3 + 4);
  v4 = v3 + 256;
LABEL_15:
  *(_DWORD *)(v3 + 4) = v11 | 0x10;
  MiInitializeSystemWorkingSetList(ProcessPartition, v4, 1LL);
  v15 = qword_140C4CDE0;
  *(_QWORD *)(v3 + 56) = qword_140C4CDE0;
  v16 = qword_140C4CDE0 - 1;
  *(_QWORD *)(v3 + 64) = qword_140C4CDE0 + 0x1FFFFFFFFFLL;
  result = ExInitializeSessionHeapManager(v15, v16);
  if ( (int)result >= 0 )
  {
    *(_DWORD *)(v3 + 4) |= 0x80u;
    v17 = KeGetCurrentThread()->ApcState.Process[1].AffinityPadding[5];
    *(_QWORD *)(v17 + 168) = 0LL;
    *(_QWORD *)(v17 + 176) = 0x2000000LL;
    *(_DWORD *)(v17 + 4) |= 4u;
    Pool = MiAllocatePool(260, 1uLL, 0x6C6F6F50u);
    if ( Pool )
      ExFreePoolWithTag(Pool, 0);
    *(_DWORD *)(v3 + 4) |= 1u;
    if ( (unsigned int)MiInitializeSystemSpaceMap(v3 + 192) )
    {
      v19 = MiSessionObjectCreate();
      if ( v19 < 0 )
        MiDereferenceSession();
      return (unsigned int)v19;
    }
LABEL_24:
    MiDereferenceSession();
    return 3221225626LL;
  }
  return result;
}
