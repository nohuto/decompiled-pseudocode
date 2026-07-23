/*
 * XREFs of KeStartAllProcessors @ 0x140A45D28
 * Callers:
 *     Phase1InitializationDiscard @ 0x140A37B24 (Phase1InitializationDiscard.c)
 * Callees:
 *     MmDeleteKernelStack @ 0x140239560 (MmDeleteKernelStack.c)
 *     KeQueryActiveProcessorCountEx @ 0x1402DE560 (KeQueryActiveProcessorCountEx.c)
 *     MmCreateKernelStack @ 0x1402F8A30 (MmCreateKernelStack.c)
 *     HalQueryMaximumProcessorCount @ 0x140379380 (HalQueryMaximumProcessorCount.c)
 *     HalStartNextProcessor @ 0x14039E710 (HalStartNextProcessor.c)
 *     HalEnumerateProcessors @ 0x1403B0ED0 (HalEnumerateProcessors.c)
 *     HvlStartBootLogicalProcessors @ 0x1403B0F84 (HvlStartBootLogicalProcessors.c)
 *     KiQueryProcessorNode @ 0x1403B1CAC (KiQueryProcessorNode.c)
 *     __security_check_cookie @ 0x1403CCE60 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x1403F70D0 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x1403FFC70 (_guard_dispatch_icall.c)
 *     memmove @ 0x140409FC0 (memmove.c)
 *     memset @ 0x14040A280 (memset.c)
 *     KiRemoveProcessorFromGroupDatabase @ 0x1405105AC (KiRemoveProcessorFromGroupDatabase.c)
 *     MmDeleteProcessor @ 0x140528B00 (MmDeleteProcessor.c)
 *     ExDeletePoolTagTable @ 0x1405AE0EC (ExDeletePoolTagTable.c)
 *     MmAllocateIndependentPagesEx @ 0x14074F63C (MmAllocateIndependentPagesEx.c)
 *     MmFreeIndependentPages @ 0x1407515D0 (MmFreeIndependentPages.c)
 *     MmAllocateIsrStack @ 0x140787708 (MmAllocateIsrStack.c)
 *     KeInitializeTimerTable @ 0x140787904 (KeInitializeTimerTable.c)
 *     HvlInitializeProcessor @ 0x140787B00 (HvlInitializeProcessor.c)
 *     KxInitializeProcessorState @ 0x140787B50 (KxInitializeProcessorState.c)
 *     ExCreatePoolTagTable @ 0x140788380 (ExCreatePoolTagTable.c)
 *     HvlDeleteProcessor @ 0x14088B5D0 (HvlDeleteProcessor.c)
 *     KiResetBootProcessorApicMask @ 0x1408B7554 (KiResetBootProcessorApicMask.c)
 *     MmFreeIsrStack @ 0x1408CDC58 (MmFreeIsrStack.c)
 *     KiComputeProcessorDataSize @ 0x14099B7D0 (KiComputeProcessorDataSize.c)
 *     KiInitializePrcbContext @ 0x14099BA9C (KiInitializePrcbContext.c)
 *     KiUpdateProcessorCount @ 0x14099BBB0 (KiUpdateProcessorCount.c)
 *     KiConfigureProcessorBlock @ 0x14099BC50 (KiConfigureProcessorBlock.c)
 *     MmInitializeProcessor @ 0x14099BD3C (MmInitializeProcessor.c)
 *     KiUnshadowProcessorAllocation @ 0x1409ACDDC (KiUnshadowProcessorAllocation.c)
 *     ExAllocatePoolWithTag @ 0x1409B1160 (ExAllocatePoolWithTag.c)
 *     KiAllocateCpuSetData @ 0x140A3CB58 (KiAllocateCpuSetData.c)
 *     KiConfigureAllSchedulingInformation @ 0x140A47224 (KiConfigureAllSchedulingInformation.c)
 */

ULONG KeStartAllProcessors()
{
  KPCR *Pcr; // rax
  void *Base; // rbx
  PVOID PoolWithTag; // rax
  unsigned int v3; // edi
  KPCR *v4; // rbx
  struct _KPRCB *CurrentPrcb; // rsi
  unsigned int v6; // r13d
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rcx
  unsigned int MaximumProcessorCount; // eax
  unsigned int v13; // edx
  unsigned int v14; // r12d
  unsigned int v15; // ebx
  unsigned int v16; // esi
  unsigned int v17; // r14d
  unsigned __int64 v18; // rcx
  __int64 v19; // r15
  __int64 v20; // rsi
  __int64 v21; // rsi
  _OWORD *v22; // r15
  __int64 v23; // rdx
  __int64 v24; // r8
  unsigned __int64 v25; // r9
  int started; // eax
  unsigned __int64 v27; // rax
  unsigned __int64 v28; // r9
  __int64 v29; // r8
  __int64 v30; // rdx
  __int64 v31; // rcx
  int v32; // eax
  ULONG result; // eax
  SIZE_T v34; // rdx
  __int64 v35; // rcx
  _OWORD *v36; // rax
  __int128 v37; // xmm1
  unsigned int i; // edi
  _OWORD *v39; // rbx
  PVOID v40; // rax
  __int64 v41; // rsi
  __int64 v42; // rax
  __int128 v43; // xmm1
  unsigned int v44; // ecx
  size_t BugCheckParameter4; // [rsp+28h] [rbp-F0h]
  unsigned __int16 v46[2]; // [rsp+98h] [rbp-80h] BYREF
  unsigned int v47[3]; // [rsp+9Ch] [rbp-7Ch] BYREF
  int v48; // [rsp+A8h] [rbp-70h] BYREF
  int v49; // [rsp+ACh] [rbp-6Ch] BYREF
  size_t Size; // [rsp+B0h] [rbp-68h]
  __int64 v51; // [rsp+B8h] [rbp-60h] BYREF
  __int64 v52; // [rsp+C0h] [rbp-58h] BYREF
  __int64 v53; // [rsp+C8h] [rbp-50h] BYREF
  __int64 v54; // [rsp+D0h] [rbp-48h] BYREF
  __int64 v55; // [rsp+D8h] [rbp-40h] BYREF
  __int64 v56; // [rsp+E0h] [rbp-38h] BYREF
  __int64 IndependentPages; // [rsp+E8h] [rbp-30h]
  __int64 v58; // [rsp+F0h] [rbp-28h]
  __int64 KernelStack; // [rsp+F8h] [rbp-20h]
  __int64 v60; // [rsp+100h] [rbp-18h]
  _QWORD v61[2]; // [rsp+108h] [rbp-10h] BYREF
  ULONG_PTR BugCheckParameter1[184]; // [rsp+118h] [rbp+0h] BYREF

  v52 = 0LL;
  v56 = 0LL;
  v55 = 0LL;
  v54 = 0LL;
  v53 = 0LL;
  v46[0] = 0;
  v47[0] = 0;
  memset(BugCheckParameter1, 0, sizeof(BugCheckParameter1));
  Pcr = KeGetPcr();
  v49 = 0;
  v48 = 0;
  Base = Pcr->Prcb.ProcessorState.SpecialRegisters.Idtr.Base;
  LODWORD(KiBootProcessorIdtSize) = Pcr->Prcb.ProcessorState.SpecialRegisters.Idtr.Limit + 1;
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, (unsigned int)KiBootProcessorIdtSize, 0x2020654Bu);
  KiBootProcessorIdt = PoolWithTag;
  if ( !PoolWithTag )
    goto LABEL_108;
  memmove(PoolWithTag, Base, (unsigned int)KiBootProcessorIdtSize);
  if ( (unsigned int)KeRegisteredProcessors > 0x500 )
    KeRegisteredProcessors = 1280;
  KiBarrierWait = 1;
  if ( !HalpInterruptHyperThreading )
    KiResetBootProcessorApicMask();
  v3 = HalEnumerateProcessors(KeRegisteredProcessors);
  if ( KeNumprocSpecified && KeNumprocSpecified < v3 )
    v3 = KeNumprocSpecified;
  if ( KeBootprocSpecified && KeBootprocSpecified < v3 )
    v3 = KeBootprocSpecified;
  v4 = KeGetPcr();
  CurrentPrcb = KeGetCurrentPrcb();
  v6 = 0;
  if ( (int)KiInitializePrcbContext((__int64)CurrentPrcb, 0LL) < 0 )
    goto LABEL_108;
  if ( !MmAllocateIsrStack(&CurrentPrcb->IsrStack, 0) )
    goto LABEL_108;
  v51 = (__int64)KeGetPcr()->Prcb.ExceptionStack + 80;
  if ( !MmAllocateIsrStack(&v51, 0) )
    goto LABEL_108;
  v7 = *(_QWORD *)((char *)v4->NtTib.StackBase + 36);
  *(_QWORD *)&v47[1] = v7;
  if ( KiKvaShadow )
    *(_QWORD *)&v47[1] = *(_QWORD *)(v7 + 8) + 32LL;
  if ( !MmAllocateIsrStack(&v47[1], 0) )
    goto LABEL_108;
  v8 = *(_QWORD *)((char *)v4->NtTib.StackBase + 44);
  *(_QWORD *)&v47[1] = v8;
  if ( KiKvaShadow )
    *(_QWORD *)&v47[1] = *(_QWORD *)(v8 + 8) + 32LL;
  if ( !MmAllocateIsrStack(&v47[1], 0) )
    goto LABEL_108;
  v9 = *(_QWORD *)((char *)v4->NtTib.StackBase + 52);
  *(_QWORD *)&v47[1] = v9;
  if ( KiKvaShadow )
    *(_QWORD *)&v47[1] = *(_QWORD *)(v9 + 8) + 32LL;
  if ( !MmAllocateIsrStack(&v47[1], 0) )
    goto LABEL_108;
  v10 = *(_QWORD *)((char *)v4->NtTib.StackBase + 60);
  *(_QWORD *)&v47[1] = v10;
  if ( KiKvaShadow )
    *(_QWORD *)&v47[1] = *(_QWORD *)(v10 + 8) + 32LL;
  if ( !MmAllocateIsrStack(&v47[1], 0) )
    goto LABEL_108;
  MaximumProcessorCount = HalQueryMaximumProcessorCount(v11);
  v13 = MaximumProcessorCount;
  if ( MaximumProcessorCount > 0x500 )
    v13 = 1280;
  v14 = MaximumProcessorCount;
  v15 = KeRegisteredProcessors * CurrentPrcb->CoresPerPhysicalProcessor * CurrentPrcb->LogicalProcessorsPerCore;
  if ( v13 <= v15 )
    v15 = v13;
  if ( KeNumprocSpecified && KeNumprocSpecified < v15 )
    v15 = KeNumprocSpecified;
  if ( !KeDynamicPartitioningSupported && v15 > v3 )
    v15 = v3;
  if ( !(unsigned int)KiAllocateCpuSetData(v15) )
    goto LABEL_108;
  v16 = KiComputeProcessorDataSize(v15, &v49, &v48);
  v61[0] = (unsigned int)v49;
  v61[1] = (unsigned int)v48;
  LODWORD(Size) = v16;
  if ( (int)HvlStartBootLogicalProcessors(v48) < 0 )
    goto LABEL_108;
  v17 = 0;
  do
  {
    v18 = 0xFFFFLL;
    if ( (unsigned int)KeNumberProcessors_0 >= v3 )
      break;
    v47[0] = -1;
    v46[0] = -1;
    if ( !(unsigned int)KiQueryProcessorNode(++v6, v47, v46) )
    {
      ++v17;
      IndependentPages = MmAllocateIndependentPagesEx(v16, v46[0], (__int64)v61, 2uLL);
      if ( !IndependentPages )
        goto LABEL_108;
      if ( !ExCreatePoolTagTable(v17, v46[0]) )
        goto LABEL_108;
      KernelStack = MmCreateKernelStack(0, v46[0], 0LL);
      v19 = KernelStack;
      if ( !KernelStack )
        goto LABEL_108;
      v60 = MmCreateKernelStack(0, v46[0], 0LL);
      v20 = v60;
      if ( !v60 )
        goto LABEL_108;
      v52 = 0LL;
      if ( !MmAllocateIsrStack(&v52, v46[0]) )
        goto LABEL_108;
      v51 = 0LL;
      if ( !MmAllocateIsrStack(&v51, v46[0]) )
        goto LABEL_108;
      v56 = 0LL;
      if ( !MmAllocateIsrStack(&v56, v46[0]) )
        goto LABEL_108;
      v55 = 0LL;
      if ( !MmAllocateIsrStack(&v55, v46[0]) )
        goto LABEL_108;
      v54 = 0LL;
      if ( !MmAllocateIsrStack(&v54, v46[0]) )
        goto LABEL_108;
      v53 = 0LL;
      if ( !MmAllocateIsrStack(&v53, v46[0]) )
        goto LABEL_108;
      v58 = KeNodeBlock[v46[0]];
      LODWORD(BugCheckParameter4) = Size;
      v21 = KxInitializeProcessorState(
              BugCheckParameter1,
              (_QWORD *)KeLoaderBlock_0,
              IndependentPages,
              0,
              BugCheckParameter4,
              v46[0],
              v17,
              v15,
              v49,
              v48,
              v19,
              v20,
              v52,
              v51,
              v53,
              v55,
              v54,
              v56);
      if ( !v21 )
        goto LABEL_108;
      v22 = (_OWORD *)KeNodeBlock[v46[0]];
      if ( (unsigned int)HvlInitializeProcessor((_SLIST_HEADER *)v21)
        || !(unsigned int)MmInitializeProcessor(v21, v23, v24, v25)
        || (int)KiInitializePrcbContext(v21, v46[0]) < 0
        || (int)KeInitializeTimerTable(v21) < 0 )
      {
        goto LABEL_108;
      }
      started = HalStartNextProcessor((__int64)BugCheckParameter1, v17, v47[0]);
      if ( started == 3 )
        KeBugCheckEx(0x1DFu, (ULONG_PTR)BugCheckParameter1, 3uLL, v17, v47[0]);
      if ( started != 4 )
      {
        KiRemoveProcessorFromGroupDatabase(v21);
        v34 = v58;
        v35 = 3LL;
        v36 = (_OWORD *)v58;
        do
        {
          *v36 = *v22;
          v36[1] = v22[1];
          v36[2] = v22[2];
          v36[3] = v22[3];
          v36[4] = v22[4];
          v36[5] = v22[5];
          v36[6] = v22[6];
          v36 += 8;
          v37 = v22[7];
          v22 += 8;
          *(v36 - 1) = v37;
          --v35;
        }
        while ( v35 );
        KeNodeBlock[v46[0]] = v34;
        HvlDeleteProcessor((struct _KPRCB *)v21, v34, (MEMORY_CACHING_TYPE)128);
        MmDeleteProcessor(v21);
        ExDeletePoolTagTable(v17);
        KiUnshadowProcessorAllocation(v21, (__int64)BugCheckParameter1);
        MmFreeIndependentPages(IndependentPages, (unsigned int)Size);
        MmDeleteKernelStack(KernelStack, 0);
        MmDeleteKernelStack(v60, 0);
        if ( v52 )
          MmFreeIsrStack(v52);
        if ( v51 )
          MmFreeIsrStack(v51);
        if ( v53 )
          MmFreeIsrStack(v53);
        if ( v54 )
          MmFreeIsrStack(v54);
        if ( v55 )
          MmFreeIsrStack(v55);
        if ( v56 )
          MmFreeIsrStack(v56);
        break;
      }
      while ( *(_QWORD *)(KeLoaderBlock_0 + 136) )
        _mm_pause();
      KiConfigureProcessorBlock(v21);
      KiUpdateProcessorCount(v17, *(unsigned __int8 *)(v21 + 208));
      v16 = Size;
    }
  }
  while ( v6 < 0x4FF );
  if ( (unsigned __int16)KeNumberNodes <= 1u )
  {
    v27 = *(_QWORD *)(KeNodeBlock[0] + 136) - ((*(_QWORD *)(KeNodeBlock[0] + 136) >> 1) & 0x5555555555555555LL);
    v18 = (0x101010101010101LL
         * (((v27 & 0x3333333333333333LL)
           + ((v27 >> 2) & 0x3333333333333333LL)
           + (((v27 & 0x3333333333333333LL) + ((v27 >> 2) & 0x3333333333333333LL)) >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >> 56;
    if ( (_DWORD)v18 == (_DWORD)KeNumberProcessors_0 )
    {
      v28 = 0x140000000uLL;
      goto LABEL_60;
    }
LABEL_108:
    KeBugCheckEx(0x32u, 0LL, 0LL, 0x14uLL, 0LL);
  }
  v28 = 0x140000000uLL;
  for ( i = 0; i < (unsigned __int16)KeNumberNodes; ++i )
  {
    v39 = (_OWORD *)((char *)&KiNodeInit + 384 * i);
    if ( (_OWORD *)KeNodeBlock[i] == v39 )
    {
      v40 = ExAllocatePoolWithTag(NonPagedPoolNx, 0x1C0uLL, 0x2020654Bu);
      v41 = (__int64)v40;
      if ( !v40 )
        goto LABEL_108;
      memset(v40, 0, 0x1C0uLL);
      v42 = 3LL;
      v18 = v41;
      do
      {
        *(_OWORD *)v18 = *v39;
        *(_OWORD *)(v18 + 16) = v39[1];
        *(_OWORD *)(v18 + 32) = v39[2];
        *(_OWORD *)(v18 + 48) = v39[3];
        *(_OWORD *)(v18 + 64) = v39[4];
        *(_OWORD *)(v18 + 80) = v39[5];
        *(_OWORD *)(v18 + 96) = v39[6];
        v18 += 128LL;
        v43 = v39[7];
        v39 += 8;
        *(_OWORD *)(v18 - 16) = v43;
        --v42;
      }
      while ( v42 );
      v28 = 0x140000000uLL;
      KeNodeBlock[i] = v41;
    }
  }
LABEL_60:
  v29 = (unsigned __int16)KeNumberNodes;
  v30 = 64LL;
  if ( (unsigned __int16)KeNumberNodes < 0x40u )
    memset(
      (void *)(0x140000000LL + 8LL * (unsigned __int16)KeNumberNodes + 13775744),
      0,
      8LL * (64 - (unsigned int)(unsigned __int16)KeNumberNodes));
  KiConfigureAllSchedulingInformation(v18, v30, v29, v28);
  LOBYTE(v31) = 1;
  ((void (__fastcall *)(__int64, _QWORD))off_140C006B0[0])(v31, 0LL);
  if ( !KeMaximumProcessors )
  {
    if ( !KeDynamicPartitioningSupported || v14 <= (unsigned int)KeNumberProcessors_0 )
    {
      v32 = KeNumberProcessors_0;
LABEL_65:
      KeMaximumProcessors = v32;
      goto LABEL_66;
    }
    v44 = KeRegisteredProcessors
        * *(unsigned __int8 *)(KiProcessorBlock[0] + 142)
        * *(unsigned __int8 *)(KiProcessorBlock[0] + 143);
    KeMaximumProcessors = v44;
    if ( v44 > KiMaximumGroupSize * (unsigned int)(unsigned __int16)KiMaximumGroups )
    {
      KeMaximumProcessors = KiMaximumGroupSize * (unsigned __int16)KiMaximumGroups;
      v44 = KiMaximumGroupSize * (unsigned __int16)KiMaximumGroups;
    }
    if ( v44 > v14 )
    {
      KeMaximumProcessors = v14;
      v44 = v14;
    }
    v32 = 1280;
    if ( v44 > 0x500 )
      goto LABEL_65;
  }
LABEL_66:
  if ( !KeDynamicPartitioningSupported )
    KiMaximumGroups = KiActiveGroups;
  KiBootProcessorsStarted = 1;
  result = KeQueryActiveProcessorCountEx(0xFFFFu);
  KiBootProcessorCount = result;
  KiBarrierWait = 0;
  return result;
}
