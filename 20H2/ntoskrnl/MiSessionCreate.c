/*
 * XREFs of MiSessionCreate @ 0x14078242C
 * Callers:
 *     MmInitializeProcessAddressSpace @ 0x1406EEAB4 (MmInitializeProcessAddressSpace.c)
 *     MiMapProcessExecutable @ 0x1406EF590 (MiMapProcessExecutable.c)
 * Callees:
 *     MiPteInShadowRange @ 0x14021EA50 (MiPteInShadowRange.c)
 *     MiAllocatePool @ 0x14022D320 (MiAllocatePool.c)
 *     MiGetPteAddress @ 0x140230160 (MiGetPteAddress.c)
 *     MiReturnCommit @ 0x140230300 (MiReturnCommit.c)
 *     MiCreateSystemWsles @ 0x140231820 (MiCreateSystemWsles.c)
 *     MiChargeCommit @ 0x14027C2B0 (MiChargeCommit.c)
 *     MiGetProcessPartition @ 0x14027C520 (MiGetProcessPartition.c)
 *     MiMakeDemandZeroPte @ 0x1402AD380 (MiMakeDemandZeroPte.c)
 *     MiWritePteShadow @ 0x140313F2C (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140313F8C (MiPteHasShadow.c)
 *     ExInitializeSessionHeapManager @ 0x14039D984 (ExInitializeSessionHeapManager.c)
 *     MiMakeZeroedPageTables @ 0x14039E200 (MiMakeZeroedPageTables.c)
 *     MiDereferenceSession @ 0x1406D65C8 (MiDereferenceSession.c)
 *     MiSessionObjectCreate @ 0x1407826A4 (MiSessionObjectCreate.c)
 *     MiInitializeSystemSpaceMap @ 0x140782970 (MiInitializeSystemSpaceMap.c)
 *     MiInitializeSystemWorkingSetList @ 0x1407829DC (MiInitializeSystemWorkingSetList.c)
 *     MiInitializeDynamicBitmap @ 0x140782AFC (MiInitializeDynamicBitmap.c)
 *     MiSessionCreateInternal @ 0x140782E30 (MiSessionCreateInternal.c)
 *     MiInitializeSessionGlobals @ 0x1407836C0 (MiInitializeSessionGlobals.c)
 *     ExFreePoolWithTag @ 0x1409B70B0 (ExFreePoolWithTag.c)
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
  __int64 v15; // r8
  int v16; // ecx
  int v17; // edx
  unsigned __int64 v18; // rax
  PVOID Pool; // rax
  int v20; // ebx
  bool v21; // zf

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
    || !(unsigned int)MiInitializeDynamicBitmap(v3 + 880, qword_140C4DC30, 0x200000LL, 0LL) )
  {
    goto LABEL_24;
  }
  *(_QWORD *)(v3 + 840) = qword_140C4CC10;
  *(_QWORD *)(v3 + 832) = 0x10000LL;
  PteAddress = (_QWORD *)MiGetPteAddress(qword_140C4CC10);
  v7 = MiGetPteAddress(v5 + 0x1FFF);
  v8 = qword_140C4CC18;
  v9 = v7;
  if ( !qword_140C4CC18 )
  {
    v8 = ((v7 - (__int64)PteAddress) >> 3) + 1;
    qword_140C4CC18 = v8;
  }
  if ( !(unsigned int)MiChargeCommit(ProcessPartition, v8, 0) )
    goto LABEL_24;
  if ( !(unsigned int)MiMakeZeroedPageTables((__int64)PteAddress, v9, 1u, 11) )
  {
    MiReturnCommit(ProcessPartition, qword_140C4CC18);
    goto LABEL_24;
  }
  v10 = qword_140C4CC18 + *(_QWORD *)(v3 + 48);
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
      if ( HIBYTE(word_140C4DE88) )
        goto LABEL_11;
      v21 = (DemandZeroPte & 1) == 0;
    }
    else
    {
      if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) == 0 )
        goto LABEL_11;
      v21 = (DemandZeroPte & 1) == 0;
    }
    if ( !v21 )
      v13 = DemandZeroPte | 0x8000000000000000uLL;
LABEL_11:
    *PteAddress = v13;
    if ( v14 )
      MiWritePteShadow((__int64)PteAddress, v13, v15);
    ++PteAddress;
  }
  while ( (unsigned __int64)PteAddress <= v9 );
  v11 = *(_DWORD *)(v3 + 4);
  v4 = v3 + 256;
LABEL_15:
  *(_DWORD *)(v3 + 4) = v11 | 0x10;
  MiInitializeSystemWorkingSetList(ProcessPartition, v4, 1LL);
  v16 = qword_140C4CC20;
  *(_QWORD *)(v3 + 56) = qword_140C4CC20;
  v17 = qword_140C4CC20 - 1;
  *(_QWORD *)(v3 + 64) = qword_140C4CC20 + 0x1FFFFFFFFFLL;
  result = ExInitializeSessionHeapManager(v16, v17);
  if ( (int)result >= 0 )
  {
    *(_DWORD *)(v3 + 4) |= 0x80u;
    v18 = KeGetCurrentThread()->ApcState.Process[1].AffinityPadding[5];
    *(_QWORD *)(v18 + 168) = 0LL;
    *(_QWORD *)(v18 + 176) = 0x2000000LL;
    *(_DWORD *)(v18 + 4) |= 4u;
    Pool = MiAllocatePool(260, 1uLL, 0x6C6F6F50u);
    if ( Pool )
      ExFreePoolWithTag(Pool, 0);
    *(_DWORD *)(v3 + 4) |= 1u;
    if ( (unsigned int)MiInitializeSystemSpaceMap(v3 + 192) )
    {
      v20 = MiSessionObjectCreate();
      if ( v20 < 0 )
        MiDereferenceSession();
      return (unsigned int)v20;
    }
LABEL_24:
    MiDereferenceSession();
    return 3221225626LL;
  }
  return result;
}
