/*
 * XREFs of KeStartAllProcessors @ 0x140A404CC
 * Callers:
 *     Phase1InitializationDiscard @ 0x140A382A8 (Phase1InitializationDiscard.c)
 * Callees:
 *     MmDeleteKernelStack @ 0x1402925B0 (MmDeleteKernelStack.c)
 *     KeQueryActiveProcessorCountEx @ 0x140328380 (KeQueryActiveProcessorCountEx.c)
 *     MmCreateKernelStack @ 0x140354A10 (MmCreateKernelStack.c)
 *     HalQueryMaximumProcessorCount @ 0x1403785C0 (HalQueryMaximumProcessorCount.c)
 *     HalStartNextProcessor @ 0x14039DF80 (HalStartNextProcessor.c)
 *     HalEnumerateProcessors @ 0x1403AB250 (HalEnumerateProcessors.c)
 *     HvlStartBootLogicalProcessors @ 0x1403AB304 (HvlStartBootLogicalProcessors.c)
 *     KiQueryProcessorNode @ 0x1403AC02C (KiQueryProcessorNode.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x1403F5E40 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x1403FE9E0 (_guard_dispatch_icall.c)
 *     memmove @ 0x140408CC0 (memmove.c)
 *     memset @ 0x140408F80 (memset.c)
 *     KiRemoveProcessorFromGroupDatabase @ 0x14050FF5C (KiRemoveProcessorFromGroupDatabase.c)
 *     MmDeleteProcessor @ 0x1405284B0 (MmDeleteProcessor.c)
 *     ExDeletePoolTagTable @ 0x1405AD9CC (ExDeletePoolTagTable.c)
 *     MmAllocateIndependentPagesEx @ 0x14074B21C (MmAllocateIndependentPagesEx.c)
 *     MmFreeIndependentPages @ 0x14074CF40 (MmFreeIndependentPages.c)
 *     MmAllocateIsrStack @ 0x140781D84 (MmAllocateIsrStack.c)
 *     KeInitializeTimerTable @ 0x140781F80 (KeInitializeTimerTable.c)
 *     HvlInitializeProcessor @ 0x14078217C (HvlInitializeProcessor.c)
 *     KxInitializeProcessorState @ 0x1407821CC (KxInitializeProcessorState.c)
 *     ExCreatePoolTagTable @ 0x1407829FC (ExCreatePoolTagTable.c)
 *     HvlDeleteProcessor @ 0x14088A2B0 (HvlDeleteProcessor.c)
 *     KiResetBootProcessorApicMask @ 0x1408B6234 (KiResetBootProcessorApicMask.c)
 *     MmFreeIsrStack @ 0x1408CC908 (MmFreeIsrStack.c)
 *     KiComputeProcessorDataSize @ 0x14099A034 (KiComputeProcessorDataSize.c)
 *     KiInitializePrcbContext @ 0x14099A300 (KiInitializePrcbContext.c)
 *     KiUpdateProcessorCount @ 0x14099A414 (KiUpdateProcessorCount.c)
 *     KiConfigureProcessorBlock @ 0x14099A4B4 (KiConfigureProcessorBlock.c)
 *     MmInitializeProcessor @ 0x14099A5A0 (MmInitializeProcessor.c)
 *     KiUnshadowProcessorAllocation @ 0x1409ABF7C (KiUnshadowProcessorAllocation.c)
 *     ExAllocatePoolWithTag @ 0x1409B1030 (ExAllocatePoolWithTag.c)
 *     KiAllocateCpuSetData @ 0x140A3CF00 (KiAllocateCpuSetData.c)
 *     KiConfigureAllSchedulingInformation @ 0x140A419C8 (KiConfigureAllSchedulingInformation.c)
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
  int started; // eax
  unsigned __int64 v24; // rax
  unsigned __int64 v25; // r9
  __int64 v26; // r8
  __int64 v27; // rdx
  __int64 v28; // rcx
  int v29; // eax
  ULONG result; // eax
  SIZE_T v31; // rdx
  __int64 v32; // rcx
  _OWORD *v33; // rax
  __int128 v34; // xmm1
  unsigned int i; // edi
  _OWORD *v36; // rbx
  PVOID v37; // rax
  __int64 v38; // rsi
  __int64 v39; // rax
  __int128 v40; // xmm1
  unsigned int v41; // ecx
  size_t BugCheckParameter4; // [rsp+28h] [rbp-F0h]
  unsigned __int16 v43[2]; // [rsp+98h] [rbp-80h] BYREF
  unsigned int v44[3]; // [rsp+9Ch] [rbp-7Ch] BYREF
  int v45; // [rsp+A8h] [rbp-70h] BYREF
  int v46; // [rsp+ACh] [rbp-6Ch] BYREF
  size_t Size; // [rsp+B0h] [rbp-68h]
  __int64 v48; // [rsp+B8h] [rbp-60h] BYREF
  __int64 v49; // [rsp+C0h] [rbp-58h] BYREF
  __int64 v50; // [rsp+C8h] [rbp-50h] BYREF
  __int64 v51; // [rsp+D0h] [rbp-48h] BYREF
  __int64 v52; // [rsp+D8h] [rbp-40h] BYREF
  __int64 v53; // [rsp+E0h] [rbp-38h] BYREF
  __int64 IndependentPages; // [rsp+E8h] [rbp-30h]
  __int64 v55; // [rsp+F0h] [rbp-28h]
  __int64 KernelStack; // [rsp+F8h] [rbp-20h]
  __int64 v57; // [rsp+100h] [rbp-18h]
  _QWORD v58[2]; // [rsp+108h] [rbp-10h] BYREF
  ULONG_PTR BugCheckParameter1[184]; // [rsp+118h] [rbp+0h] BYREF

  v49 = 0LL;
  v53 = 0LL;
  v52 = 0LL;
  v51 = 0LL;
  v50 = 0LL;
  v43[0] = 0;
  v44[0] = 0;
  memset(BugCheckParameter1, 0, sizeof(BugCheckParameter1));
  Pcr = KeGetPcr();
  v46 = 0;
  v45 = 0;
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
  v48 = (__int64)KeGetPcr()->Prcb.ExceptionStack + 80;
  if ( !MmAllocateIsrStack(&v48, 0) )
    goto LABEL_108;
  v7 = *(_QWORD *)((char *)v4->NtTib.StackBase + 36);
  *(_QWORD *)&v44[1] = v7;
  if ( KiKvaShadow )
    *(_QWORD *)&v44[1] = *(_QWORD *)(v7 + 8) + 32LL;
  if ( !MmAllocateIsrStack(&v44[1], 0) )
    goto LABEL_108;
  v8 = *(_QWORD *)((char *)v4->NtTib.StackBase + 44);
  *(_QWORD *)&v44[1] = v8;
  if ( KiKvaShadow )
    *(_QWORD *)&v44[1] = *(_QWORD *)(v8 + 8) + 32LL;
  if ( !MmAllocateIsrStack(&v44[1], 0) )
    goto LABEL_108;
  v9 = *(_QWORD *)((char *)v4->NtTib.StackBase + 52);
  *(_QWORD *)&v44[1] = v9;
  if ( KiKvaShadow )
    *(_QWORD *)&v44[1] = *(_QWORD *)(v9 + 8) + 32LL;
  if ( !MmAllocateIsrStack(&v44[1], 0) )
    goto LABEL_108;
  v10 = *(_QWORD *)((char *)v4->NtTib.StackBase + 60);
  *(_QWORD *)&v44[1] = v10;
  if ( KiKvaShadow )
    *(_QWORD *)&v44[1] = *(_QWORD *)(v10 + 8) + 32LL;
  if ( !MmAllocateIsrStack(&v44[1], 0) )
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
  v16 = KiComputeProcessorDataSize(v15, &v46, &v45);
  v58[0] = (unsigned int)v46;
  v58[1] = (unsigned int)v45;
  LODWORD(Size) = v16;
  if ( (int)HvlStartBootLogicalProcessors(v45) < 0 )
    goto LABEL_108;
  v17 = 0;
  do
  {
    v18 = 0xFFFFLL;
    if ( (unsigned int)KeNumberProcessors_0 >= v3 )
      break;
    v44[0] = -1;
    v43[0] = -1;
    if ( !(unsigned int)KiQueryProcessorNode(++v6, v44, v43) )
    {
      ++v17;
      IndependentPages = MmAllocateIndependentPagesEx(v16, v43[0], v58, 2u);
      if ( !IndependentPages )
        goto LABEL_108;
      if ( !ExCreatePoolTagTable(v17, v43[0]) )
        goto LABEL_108;
      KernelStack = MmCreateKernelStack(0, v43[0], 0LL);
      v19 = KernelStack;
      if ( !KernelStack )
        goto LABEL_108;
      v57 = MmCreateKernelStack(0, v43[0], 0LL);
      v20 = v57;
      if ( !v57 )
        goto LABEL_108;
      v49 = 0LL;
      if ( !MmAllocateIsrStack(&v49, v43[0]) )
        goto LABEL_108;
      v48 = 0LL;
      if ( !MmAllocateIsrStack(&v48, v43[0]) )
        goto LABEL_108;
      v53 = 0LL;
      if ( !MmAllocateIsrStack(&v53, v43[0]) )
        goto LABEL_108;
      v52 = 0LL;
      if ( !MmAllocateIsrStack(&v52, v43[0]) )
        goto LABEL_108;
      v51 = 0LL;
      if ( !MmAllocateIsrStack(&v51, v43[0]) )
        goto LABEL_108;
      v50 = 0LL;
      if ( !MmAllocateIsrStack(&v50, v43[0]) )
        goto LABEL_108;
      v55 = KeNodeBlock[v43[0]];
      LODWORD(BugCheckParameter4) = Size;
      v21 = KxInitializeProcessorState(
              BugCheckParameter1,
              (_QWORD *)KeLoaderBlock_0,
              IndependentPages,
              0,
              BugCheckParameter4,
              v43[0],
              v17,
              v15,
              v46,
              v45,
              v19,
              v20,
              v49,
              v48,
              v50,
              v52,
              v51,
              v53);
      if ( !v21 )
        goto LABEL_108;
      v22 = (_OWORD *)KeNodeBlock[v43[0]];
      if ( (unsigned int)HvlInitializeProcessor((_SLIST_HEADER *)v21)
        || !(unsigned int)MmInitializeProcessor(v21)
        || (int)KiInitializePrcbContext(v21, v43[0]) < 0
        || (int)KeInitializeTimerTable(v21) < 0 )
      {
        goto LABEL_108;
      }
      started = HalStartNextProcessor((__int64)BugCheckParameter1, v17, v44[0]);
      if ( started == 3 )
        KeBugCheckEx(0x1DFu, (ULONG_PTR)BugCheckParameter1, 3uLL, v17, v44[0]);
      if ( started != 4 )
      {
        KiRemoveProcessorFromGroupDatabase(v21);
        v31 = v55;
        v32 = 3LL;
        v33 = (_OWORD *)v55;
        do
        {
          *v33 = *v22;
          v33[1] = v22[1];
          v33[2] = v22[2];
          v33[3] = v22[3];
          v33[4] = v22[4];
          v33[5] = v22[5];
          v33[6] = v22[6];
          v33 += 8;
          v34 = v22[7];
          v22 += 8;
          *(v33 - 1) = v34;
          --v32;
        }
        while ( v32 );
        KeNodeBlock[v43[0]] = v31;
        HvlDeleteProcessor((struct _KPRCB *)v21, v31, (MEMORY_CACHING_TYPE)128);
        MmDeleteProcessor(v21);
        ExDeletePoolTagTable(v17);
        KiUnshadowProcessorAllocation(v21, (__int64)BugCheckParameter1);
        MmFreeIndependentPages(IndependentPages, (unsigned int)Size);
        MmDeleteKernelStack(KernelStack, 0);
        MmDeleteKernelStack(v57, 0);
        if ( v49 )
          MmFreeIsrStack(v49);
        if ( v48 )
          MmFreeIsrStack(v48);
        if ( v50 )
          MmFreeIsrStack(v50);
        if ( v51 )
          MmFreeIsrStack(v51);
        if ( v52 )
          MmFreeIsrStack(v52);
        if ( v53 )
          MmFreeIsrStack(v53);
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
    v24 = *(_QWORD *)(KeNodeBlock[0] + 136) - ((*(_QWORD *)(KeNodeBlock[0] + 136) >> 1) & 0x5555555555555555LL);
    v18 = (0x101010101010101LL
         * (((v24 & 0x3333333333333333LL)
           + ((v24 >> 2) & 0x3333333333333333LL)
           + (((v24 & 0x3333333333333333LL) + ((v24 >> 2) & 0x3333333333333333LL)) >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >> 56;
    if ( (_DWORD)v18 == (_DWORD)KeNumberProcessors_0 )
    {
      v25 = 0x140000000uLL;
      goto LABEL_60;
    }
LABEL_108:
    KeBugCheckEx(0x32u, 0LL, 0LL, 0x14uLL, 0LL);
  }
  v25 = 0x140000000uLL;
  for ( i = 0; i < (unsigned __int16)KeNumberNodes; ++i )
  {
    v36 = (_OWORD *)((char *)&KiNodeInit + 384 * i);
    if ( (_OWORD *)KeNodeBlock[i] == v36 )
    {
      v37 = ExAllocatePoolWithTag(NonPagedPoolNx, 0x1C0uLL, 0x2020654Bu);
      v38 = (__int64)v37;
      if ( !v37 )
        goto LABEL_108;
      memset(v37, 0, 0x1C0uLL);
      v39 = 3LL;
      v18 = v38;
      do
      {
        *(_OWORD *)v18 = *v36;
        *(_OWORD *)(v18 + 16) = v36[1];
        *(_OWORD *)(v18 + 32) = v36[2];
        *(_OWORD *)(v18 + 48) = v36[3];
        *(_OWORD *)(v18 + 64) = v36[4];
        *(_OWORD *)(v18 + 80) = v36[5];
        *(_OWORD *)(v18 + 96) = v36[6];
        v18 += 128LL;
        v40 = v36[7];
        v36 += 8;
        *(_OWORD *)(v18 - 16) = v40;
        --v39;
      }
      while ( v39 );
      v25 = 0x140000000uLL;
      KeNodeBlock[i] = v38;
    }
  }
LABEL_60:
  v26 = (unsigned __int16)KeNumberNodes;
  v27 = 64LL;
  if ( (unsigned __int16)KeNumberNodes < 0x40u )
    memset(
      (void *)(0x140000000LL + 8LL * (unsigned __int16)KeNumberNodes + 13775744),
      0,
      8LL * (64 - (unsigned int)(unsigned __int16)KeNumberNodes));
  KiConfigureAllSchedulingInformation(v18, v27, v26, v25);
  LOBYTE(v28) = 1;
  ((void (__fastcall *)(__int64, _QWORD))off_140C006B0[0])(v28, 0LL);
  if ( !KeMaximumProcessors )
  {
    if ( !KeDynamicPartitioningSupported || v14 <= (unsigned int)KeNumberProcessors_0 )
    {
      v29 = KeNumberProcessors_0;
LABEL_65:
      KeMaximumProcessors = v29;
      goto LABEL_66;
    }
    v41 = KeRegisteredProcessors
        * *(unsigned __int8 *)(KiProcessorBlock[0] + 142)
        * *(unsigned __int8 *)(KiProcessorBlock[0] + 143);
    KeMaximumProcessors = v41;
    if ( v41 > KiMaximumGroupSize * (unsigned int)(unsigned __int16)KiMaximumGroups )
    {
      KeMaximumProcessors = KiMaximumGroupSize * (unsigned __int16)KiMaximumGroups;
      v41 = KiMaximumGroupSize * (unsigned __int16)KiMaximumGroups;
    }
    if ( v41 > v14 )
    {
      KeMaximumProcessors = v14;
      v41 = v14;
    }
    v29 = 1280;
    if ( v41 > 0x500 )
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
