/*
 * XREFs of VeAllocatePoolWithTagPriority @ 0x1409D75E0
 * Callers:
 *     ExAllocateHeapPool @ 0x140212080 (ExAllocateHeapPool.c)
 *     IovAllocateMdl @ 0x1409C7900 (IovAllocateMdl.c)
 *     IovAllocateWorkItem @ 0x1409C7A00 (IovAllocateWorkItem.c)
 *     VerifierIoSetCompletionRoutineEx @ 0x1409CC740 (VerifierIoSetCompletionRoutineEx.c)
 *     ViIrpAllocateLockedPacket @ 0x1409D4760 (ViIrpAllocateLockedPacket.c)
 *     VerifierExAllocatePool @ 0x1409D7900 (VerifierExAllocatePool.c)
 *     VerifierExAllocatePool2 @ 0x1409D79F0 (VerifierExAllocatePool2.c)
 *     VerifierExAllocatePool3 @ 0x1409D7B20 (VerifierExAllocatePool3.c)
 *     VerifierExAllocatePoolWithQuota @ 0x1409D7D10 (VerifierExAllocatePoolWithQuota.c)
 *     VerifierExAllocatePoolWithQuotaTag @ 0x1409D7E80 (VerifierExAllocatePoolWithQuotaTag.c)
 *     VerifierExAllocatePoolWithTag @ 0x1409D7FF0 (VerifierExAllocatePoolWithTag.c)
 *     VerifierExAllocatePoolWithTagPriority @ 0x1409D80C0 (VerifierExAllocatePoolWithTagPriority.c)
 *     ViRtlReplaceStringBuffer @ 0x1409E8D4C (ViRtlReplaceStringBuffer.c)
 * Callees:
 *     ExAllocatePoolWithTagPriority @ 0x140211F50 (ExAllocatePoolWithTagPriority.c)
 *     RtlRaiseStatus @ 0x1402FB1C0 (RtlRaiseStatus.c)
 *     RtlpInterlockedPopEntrySList @ 0x1404052C0 (RtlpInterlockedPopEntrySList.c)
 *     RtlpInterlockedPushEntrySList @ 0x140405300 (RtlpInterlockedPushEntrySList.c)
 *     MmKernelVerifierEnabled @ 0x14052E9B8 (MmKernelVerifierEnabled.c)
 *     ExIsSpecialPoolAddress @ 0x1405B8690 (ExIsSpecialPoolAddress.c)
 *     VerifierBugCheckIfAppropriate @ 0x1409D3D64 (VerifierBugCheckIfAppropriate.c)
 *     ViGrowPoolAllocation @ 0x1409D8494 (ViGrowPoolAllocation.c)
 *     ViPostPoolAllocation @ 0x1409D853C (ViPostPoolAllocation.c)
 *     VfTargetDriversGetVerifierData @ 0x1409D9E50 (VfTargetDriversGetVerifierData.c)
 *     ViTargetIncrementCounter @ 0x1409DA51C (ViTargetIncrementCounter.c)
 *     VfFaultsInjectPoolAllocationFailure @ 0x1409DF75C (VfFaultsInjectPoolAllocationFailure.c)
 *     VfFaultsIsSystemSufficientlyBooted @ 0x1409DF978 (VfFaultsIsSystemSufficientlyBooted.c)
 *     VfAllocPoolNotification @ 0x1409E2FC4 (VfAllocPoolNotification.c)
 *     VfFillAllocatedMemory @ 0x1409E3004 (VfFillAllocatedMemory.c)
 *     ExAllocatePoolSanityChecks @ 0x1409EFDE4 (ExAllocatePoolSanityChecks.c)
 */

PVOID __fastcall VeAllocatePoolWithTagPriority(
        POOL_TYPE PoolType,
        ULONG_PTR BugCheckParameter3,
        ULONG Tag,
        EX_POOL_PRIORITY Priority,
        __int64 a5)
{
  _SLIST_HEADER *VerifierData; // r14
  int v10; // r15d
  int v11; // eax
  __int64 v12; // r12
  int v14; // r13d
  __int64 v15; // rcx
  PSLIST_ENTRY v16; // rsi
  __int64 v17; // rdx
  ULONG_PTR PoolWithTagPriority; // rbp
  __int64 v19; // r8
  __int64 v20; // rcx
  unsigned int v21; // r14d
  ULONG_PTR v22; // rax
  ULONG_PTR v23; // [rsp+30h] [rbp-38h]
  ULONG_PTR v24; // [rsp+38h] [rbp-30h]
  ULONG Taga; // [rsp+80h] [rbp+18h] BYREF

  Taga = Tag;
  VerifierData = 0LL;
  v10 = 0;
  v11 = MmKernelVerifierEnabled();
  v12 = a5;
  if ( v11 )
  {
    if ( (PoolType & 0x80u) == 0 )
    {
      PoolType |= 0x80u;
    }
    else
    {
      v10 = 1;
      VerifierData = (_SLIST_HEADER *)VfTargetDriversGetVerifierData(a5);
      if ( !VerifierData )
        return ExAllocatePoolWithTagPriority(PoolType, BugCheckParameter3, Tag, Priority);
    }
  }
  ExAllocatePoolSanityChecks((unsigned int)PoolType, BugCheckParameter3, &Taga, v12);
  v14 = 0;
  if ( !BugCheckParameter3 && (unsigned int)VfVerifyMode <= 1 )
  {
    BugCheckParameter3 = 1LL;
    v14 = 1;
  }
  v23 = BugCheckParameter3;
  v24 = BugCheckParameter3;
  _InterlockedIncrement(&dword_140C2A6F0);
  if ( (PoolType & 2) != 0 )
  {
    if ( (MmVerifierData & 8) != 0 && (unsigned int)VfFaultsIsSystemSufficientlyBooted() )
      VerifierBugCheckIfAppropriate(0xC2u, 0x9AuLL, (int)PoolType & 0xFFFFFFFFFFFFFF7FuLL, BugCheckParameter3, Taga);
  }
  else if ( (MmVerifierData & 4) != 0 )
  {
    if ( !v10 )
    {
      v10 = 1;
      VerifierData = (_SLIST_HEADER *)VfTargetDriversGetVerifierData(v12);
    }
    if ( VerifierData )
    {
      v15 = Taga;
      LODWORD(v15) = Taga & 0x7FFFFFFF;
      if ( (unsigned int)VfFaultsInjectPoolAllocationFailure(v15) )
      {
        VfAllocPoolNotification(0LL, BugCheckParameter3);
LABEL_40:
        if ( (PoolType & 0x10) != 0 )
          RtlRaiseStatus(-1073741670);
        return 0LL;
      }
    }
  }
  if ( ((VfRuleClasses & 1) != 0 || (VfDifSetting & 1) != 0) && (Priority & 9) == 0 )
  {
    if ( MmSpecialPoolCatchOverruns == 1 )
      Priority |= 8u;
    else
      Priority |= 9u;
  }
  v16 = 0LL;
  if ( (MmVerifierData & 8) != 0 && (PoolType & 0x20) == 0 )
  {
    if ( !v10 )
      VerifierData = (_SLIST_HEADER *)VfTargetDriversGetVerifierData(v12);
    if ( VerifierData && BugCheckParameter3 + 8 >= BugCheckParameter3 )
    {
      v16 = RtlpInterlockedPopEntrySList(VerifierData + 5);
      if ( v16 || (v16 = (PSLIST_ENTRY)ViGrowPoolAllocation(VerifierData)) != 0LL )
      {
        BugCheckParameter3 += 8LL;
        PoolType |= 0x40u;
      }
    }
    else
    {
      ++dword_140C2A718;
    }
  }
  PoolWithTagPriority = (ULONG_PTR)ExAllocatePoolWithTagPriority(PoolType, BugCheckParameter3, Taga, Priority);
  if ( !PoolWithTagPriority )
  {
    ++dword_140C2A708;
    if ( (MmVerifierData & 0x1000) != 0 )
      ViTargetIncrementCounter(v12, 168LL);
    VfAllocPoolNotification(0LL, BugCheckParameter3);
    if ( v16 )
      RtlpInterlockedPushEntrySList(VerifierData + 5, v16);
    goto LABEL_40;
  }
  if ( v14 )
  {
    v20 = 3LL * (((unsigned __int8)_InterlockedExchangeAdd(&ViBugcheckWorkaroundLogIndex, 1u) + 1) & 0xF);
    *((_DWORD *)&ViBugcheckWorkaroundLog + 2 * v20) = 1;
    *((_QWORD *)&ViBugcheckWorkaroundLog + v20 + 1) = v12;
    *((_QWORD *)&ViBugcheckWorkaroundLog + v20 + 2) = PoolWithTagPriority;
  }
  v21 = 0;
  _InterlockedIncrement(&dword_140C2A6F4);
  if ( (unsigned int)ExIsSpecialPoolAddress(PoolWithTagPriority, v17, v19) == 1 )
  {
    v21 = 1;
LABEL_48:
    _InterlockedIncrement(&dword_140C2A6F8);
    goto LABEL_49;
  }
  if ( BugCheckParameter3 > 0xFE0 )
    goto LABEL_48;
LABEL_49:
  if ( v16 )
  {
    *((_QWORD *)&v16->Next + 1) = v12;
    v16->Next = (_SLIST_ENTRY *)(PoolWithTagPriority | v21);
    v22 = v23;
    if ( !v21 )
      v22 = BugCheckParameter3;
    v16[1].Next = (_SLIST_ENTRY *)v22;
    *((_QWORD *)&v16[1].Next + 1) = Taga;
    PoolWithTagPriority = ViPostPoolAllocation(v16, (unsigned int)PoolType);
  }
  VfAllocPoolNotification(PoolWithTagPriority, v24);
  if ( v16 && !v21 && (PoolType & 0x400) == 0 )
    VfFillAllocatedMemory((void *)PoolWithTagPriority);
  return (PVOID)PoolWithTagPriority;
}
