/*
 * XREFs of KeStartAllProcessors @ 0x140A4BFC8
 * Callers:
 *     Phase1InitializationDiscard @ 0x140A3DB24 (Phase1InitializationDiscard.c)
 * Callees:
 *     KeQueryActiveProcessorCountEx @ 0x140219190 (KeQueryActiveProcessorCountEx.c)
 *     MmCreateKernelStack @ 0x1402AD970 (MmCreateKernelStack.c)
 *     MmDeleteKernelStack @ 0x1402ADF80 (MmDeleteKernelStack.c)
 *     HalQueryMaximumProcessorCount @ 0x14037B0B0 (HalQueryMaximumProcessorCount.c)
 *     HalStartNextProcessor @ 0x1403A0BE0 (HalStartNextProcessor.c)
 *     HalEnumerateProcessors @ 0x1403B3840 (HalEnumerateProcessors.c)
 *     HvlStartBootLogicalProcessors @ 0x1403B38F0 (HvlStartBootLogicalProcessors.c)
 *     KiQueryProcessorNode @ 0x1403B461C (KiQueryProcessorNode.c)
 *     __security_check_cookie @ 0x1403CFAF0 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x1403FBCA0 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x140405F40 (_guard_dispatch_icall.c)
 *     memmove @ 0x140411040 (memmove.c)
 *     memset @ 0x140411300 (memset.c)
 *     KiRemoveProcessorFromGroupDatabase @ 0x140513EDC (KiRemoveProcessorFromGroupDatabase.c)
 *     MmDeleteProcessor @ 0x14052C4D0 (MmDeleteProcessor.c)
 *     ExDeletePoolTagTable @ 0x1405B1C4C (ExDeletePoolTagTable.c)
 *     MmAllocateIndependentPagesEx @ 0x14075E21C (MmAllocateIndependentPagesEx.c)
 *     MmFreeIndependentPages @ 0x1407601B0 (MmFreeIndependentPages.c)
 *     MmAllocateIsrStack @ 0x140795418 (MmAllocateIsrStack.c)
 *     KeInitializeTimerTable @ 0x140795614 (KeInitializeTimerTable.c)
 *     HvlInitializeProcessor @ 0x140795810 (HvlInitializeProcessor.c)
 *     KxInitializeProcessorState @ 0x140795860 (KxInitializeProcessorState.c)
 *     ExCreatePoolTagTable @ 0x140796090 (ExCreatePoolTagTable.c)
 *     HvlDeleteProcessor @ 0x140891120 (HvlDeleteProcessor.c)
 *     KiResetBootProcessorApicMask @ 0x1408BD174 (KiResetBootProcessorApicMask.c)
 *     MmFreeIsrStack @ 0x1408D3A98 (MmFreeIsrStack.c)
 *     KiComputeProcessorDataSize @ 0x1409A18D0 (KiComputeProcessorDataSize.c)
 *     KiInitializePrcbContext @ 0x1409A1B9C (KiInitializePrcbContext.c)
 *     KiUpdateProcessorCount @ 0x1409A1CB0 (KiUpdateProcessorCount.c)
 *     KiConfigureProcessorBlock @ 0x1409A1D50 (KiConfigureProcessorBlock.c)
 *     MmInitializeProcessor @ 0x1409A1E3C (MmInitializeProcessor.c)
 *     KiUnshadowProcessorAllocation @ 0x1409B2D4C (KiUnshadowProcessorAllocation.c)
 *     ExAllocatePoolWithTag @ 0x1409B7010 (ExAllocatePoolWithTag.c)
 *     KiAllocateCpuSetData @ 0x140A42DF8 (KiAllocateCpuSetData.c)
 *     KiConfigureAllSchedulingInformation @ 0x140A4D4C0 (KiConfigureAllSchedulingInformation.c)
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
  unsigned int MaximumProcessorCount; // ecx
  unsigned int v13; // r12d
  unsigned int v14; // ebx
  unsigned int v15; // esi
  unsigned int v16; // r14d
  unsigned __int64 v17; // rcx
  __int64 v18; // r15
  __int64 v19; // rsi
  __int64 v20; // rsi
  _OWORD *v21; // r15
  int started; // eax
  unsigned __int64 v23; // rax
  unsigned __int64 v24; // r9
  __int64 v25; // r8
  __int64 v26; // rdx
  __int64 v27; // rcx
  int v28; // eax
  ULONG result; // eax
  SIZE_T v30; // rdx
  __int64 v31; // rcx
  _OWORD *v32; // rax
  __int128 v33; // xmm1
  unsigned int i; // edi
  _OWORD *v35; // rbx
  PVOID v36; // rax
  __int64 v37; // rsi
  __int64 v38; // rax
  __int128 v39; // xmm1
  unsigned int v40; // ecx
  size_t BugCheckParameter4; // [rsp+28h] [rbp-F0h]
  unsigned __int16 v42[2]; // [rsp+98h] [rbp-80h] BYREF
  unsigned int v43[3]; // [rsp+9Ch] [rbp-7Ch] BYREF
  int v44; // [rsp+A8h] [rbp-70h] BYREF
  int v45; // [rsp+ACh] [rbp-6Ch] BYREF
  size_t Size; // [rsp+B0h] [rbp-68h]
  __int64 v47; // [rsp+B8h] [rbp-60h] BYREF
  __int64 v48; // [rsp+C0h] [rbp-58h] BYREF
  __int64 v49; // [rsp+C8h] [rbp-50h] BYREF
  __int64 v50; // [rsp+D0h] [rbp-48h] BYREF
  __int64 v51; // [rsp+D8h] [rbp-40h] BYREF
  __int64 v52; // [rsp+E0h] [rbp-38h] BYREF
  __int64 IndependentPages; // [rsp+E8h] [rbp-30h]
  __int64 v54; // [rsp+F0h] [rbp-28h]
  __int64 KernelStack; // [rsp+F8h] [rbp-20h]
  __int64 v56; // [rsp+100h] [rbp-18h]
  _QWORD v57[2]; // [rsp+108h] [rbp-10h] BYREF
  ULONG_PTR BugCheckParameter1[184]; // [rsp+118h] [rbp+0h] BYREF

  v48 = 0LL;
  v52 = 0LL;
  v51 = 0LL;
  v50 = 0LL;
  v49 = 0LL;
  v42[0] = 0;
  v43[0] = 0;
  memset(BugCheckParameter1, 0, sizeof(BugCheckParameter1));
  Pcr = KeGetPcr();
  v45 = 0;
  v44 = 0;
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
  v47 = (__int64)KeGetPcr()->Prcb.ExceptionStack + 80;
  if ( !MmAllocateIsrStack(&v47, 0) )
    goto LABEL_108;
  v7 = *(_QWORD *)((char *)v4->NtTib.StackBase + 36);
  *(_QWORD *)&v43[1] = v7;
  if ( KiKvaShadow )
    *(_QWORD *)&v43[1] = *(_QWORD *)(v7 + 8) + 32LL;
  if ( !MmAllocateIsrStack(&v43[1], 0) )
    goto LABEL_108;
  v8 = *(_QWORD *)((char *)v4->NtTib.StackBase + 44);
  *(_QWORD *)&v43[1] = v8;
  if ( KiKvaShadow )
    *(_QWORD *)&v43[1] = *(_QWORD *)(v8 + 8) + 32LL;
  if ( !MmAllocateIsrStack(&v43[1], 0) )
    goto LABEL_108;
  v9 = *(_QWORD *)((char *)v4->NtTib.StackBase + 52);
  *(_QWORD *)&v43[1] = v9;
  if ( KiKvaShadow )
    *(_QWORD *)&v43[1] = *(_QWORD *)(v9 + 8) + 32LL;
  if ( !MmAllocateIsrStack(&v43[1], 0) )
    goto LABEL_108;
  v10 = *(_QWORD *)((char *)v4->NtTib.StackBase + 60);
  *(_QWORD *)&v43[1] = v10;
  if ( KiKvaShadow )
    *(_QWORD *)&v43[1] = *(_QWORD *)(v10 + 8) + 32LL;
  if ( !MmAllocateIsrStack(&v43[1], 0) )
    goto LABEL_108;
  MaximumProcessorCount = HalQueryMaximumProcessorCount(v11);
  v13 = MaximumProcessorCount;
  if ( MaximumProcessorCount > 0x500 )
    MaximumProcessorCount = 1280;
  v14 = KeRegisteredProcessors * CurrentPrcb->CoresPerPhysicalProcessor * CurrentPrcb->LogicalProcessorsPerCore;
  if ( MaximumProcessorCount <= v14 )
    v14 = MaximumProcessorCount;
  if ( KeNumprocSpecified && KeNumprocSpecified < v14 )
    v14 = KeNumprocSpecified;
  if ( !KeDynamicPartitioningSupported && v14 > v3 )
    v14 = v3;
  if ( !(unsigned int)KiAllocateCpuSetData(v14) )
    goto LABEL_108;
  v15 = KiComputeProcessorDataSize(v14, &v45, &v44);
  v57[0] = (unsigned int)v45;
  v57[1] = (unsigned int)v44;
  LODWORD(Size) = v15;
  if ( (int)HvlStartBootLogicalProcessors(v44) < 0 )
    goto LABEL_108;
  v16 = 0;
  do
  {
    v17 = 0xFFFFLL;
    if ( (unsigned int)KeNumberProcessors_0 >= v3 )
      break;
    v43[0] = -1;
    v42[0] = -1;
    if ( !(unsigned int)KiQueryProcessorNode(++v6, v43, v42) )
    {
      ++v16;
      IndependentPages = MmAllocateIndependentPagesEx(v15, v42[0], v57, 2u);
      if ( !IndependentPages )
        goto LABEL_108;
      if ( !ExCreatePoolTagTable(v16, v42[0]) )
        goto LABEL_108;
      KernelStack = MmCreateKernelStack(0, v42[0], 0LL);
      v18 = KernelStack;
      if ( !KernelStack )
        goto LABEL_108;
      v56 = MmCreateKernelStack(0, v42[0], 0LL);
      v19 = v56;
      if ( !v56 )
        goto LABEL_108;
      v48 = 0LL;
      if ( !MmAllocateIsrStack(&v48, v42[0]) )
        goto LABEL_108;
      v47 = 0LL;
      if ( !MmAllocateIsrStack(&v47, v42[0]) )
        goto LABEL_108;
      v52 = 0LL;
      if ( !MmAllocateIsrStack(&v52, v42[0]) )
        goto LABEL_108;
      v51 = 0LL;
      if ( !MmAllocateIsrStack(&v51, v42[0]) )
        goto LABEL_108;
      v50 = 0LL;
      if ( !MmAllocateIsrStack(&v50, v42[0]) )
        goto LABEL_108;
      v49 = 0LL;
      if ( !MmAllocateIsrStack(&v49, v42[0]) )
        goto LABEL_108;
      v54 = KeNodeBlock[v42[0]];
      LODWORD(BugCheckParameter4) = Size;
      v20 = KxInitializeProcessorState(
              BugCheckParameter1,
              (_QWORD *)KeLoaderBlock_0,
              IndependentPages,
              0,
              BugCheckParameter4,
              v42[0],
              v16,
              v14,
              v45,
              v44,
              v18,
              v19,
              v48,
              v47,
              v49,
              v51,
              v50,
              v52);
      if ( !v20 )
        goto LABEL_108;
      v21 = (_OWORD *)KeNodeBlock[v42[0]];
      if ( (unsigned int)HvlInitializeProcessor((_SLIST_HEADER *)v20)
        || !(unsigned int)MmInitializeProcessor(v20)
        || (int)KiInitializePrcbContext(v20, v42[0]) < 0
        || (int)KeInitializeTimerTable(v20) < 0 )
      {
        goto LABEL_108;
      }
      started = HalStartNextProcessor((__int64)BugCheckParameter1, v16, v43[0]);
      if ( started == 3 )
        KeBugCheckEx(0x1DFu, (ULONG_PTR)BugCheckParameter1, 3uLL, v16, v43[0]);
      if ( started != 4 )
      {
        KiRemoveProcessorFromGroupDatabase(v20);
        v30 = v54;
        v31 = 3LL;
        v32 = (_OWORD *)v54;
        do
        {
          *v32 = *v21;
          v32[1] = v21[1];
          v32[2] = v21[2];
          v32[3] = v21[3];
          v32[4] = v21[4];
          v32[5] = v21[5];
          v32[6] = v21[6];
          v32 += 8;
          v33 = v21[7];
          v21 += 8;
          *(v32 - 1) = v33;
          --v31;
        }
        while ( v31 );
        KeNodeBlock[v42[0]] = v30;
        HvlDeleteProcessor((struct _KPRCB *)v20, v30, (MEMORY_CACHING_TYPE)128);
        MmDeleteProcessor(v20);
        ExDeletePoolTagTable(v16);
        KiUnshadowProcessorAllocation(v20, (__int64)BugCheckParameter1);
        MmFreeIndependentPages(IndependentPages, (unsigned int)Size);
        MmDeleteKernelStack(KernelStack, 0);
        MmDeleteKernelStack(v56, 0);
        if ( v48 )
          MmFreeIsrStack(v48);
        if ( v47 )
          MmFreeIsrStack(v47);
        if ( v49 )
          MmFreeIsrStack(v49);
        if ( v50 )
          MmFreeIsrStack(v50);
        if ( v51 )
          MmFreeIsrStack(v51);
        if ( v52 )
          MmFreeIsrStack(v52);
        break;
      }
      while ( *(_QWORD *)(KeLoaderBlock_0 + 136) )
        _mm_pause();
      KiConfigureProcessorBlock(v20);
      KiUpdateProcessorCount(v16, *(unsigned __int8 *)(v20 + 208));
      v15 = Size;
    }
  }
  while ( v6 < 0x4FF );
  if ( (unsigned __int16)KeNumberNodes <= 1u )
  {
    v23 = *(_QWORD *)(KeNodeBlock[0] + 136) - ((*(_QWORD *)(KeNodeBlock[0] + 136) >> 1) & 0x5555555555555555LL);
    v17 = (0x101010101010101LL
         * (((v23 & 0x3333333333333333LL)
           + ((v23 >> 2) & 0x3333333333333333LL)
           + (((v23 & 0x3333333333333333LL) + ((v23 >> 2) & 0x3333333333333333LL)) >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >> 56;
    if ( (_DWORD)v17 == (_DWORD)KeNumberProcessors_0 )
    {
      v24 = 0x140000000uLL;
      goto LABEL_60;
    }
LABEL_108:
    KeBugCheckEx(0x32u, 0LL, 0LL, 0x14uLL, 0LL);
  }
  v24 = 0x140000000uLL;
  for ( i = 0; i < (unsigned __int16)KeNumberNodes; ++i )
  {
    v35 = (_OWORD *)((char *)&KiNodeInit + 384 * i);
    if ( (_OWORD *)KeNodeBlock[i] == v35 )
    {
      v36 = ExAllocatePoolWithTag(NonPagedPoolNx, 0x1C0uLL, 0x2020654Bu);
      v37 = (__int64)v36;
      if ( !v36 )
        goto LABEL_108;
      memset(v36, 0, 0x1C0uLL);
      v38 = 3LL;
      v17 = v37;
      do
      {
        *(_OWORD *)v17 = *v35;
        *(_OWORD *)(v17 + 16) = v35[1];
        *(_OWORD *)(v17 + 32) = v35[2];
        *(_OWORD *)(v17 + 48) = v35[3];
        *(_OWORD *)(v17 + 64) = v35[4];
        *(_OWORD *)(v17 + 80) = v35[5];
        *(_OWORD *)(v17 + 96) = v35[6];
        v17 += 128LL;
        v39 = v35[7];
        v35 += 8;
        *(_OWORD *)(v17 - 16) = v39;
        --v38;
      }
      while ( v38 );
      v24 = 0x140000000uLL;
      KeNodeBlock[i] = v37;
    }
  }
LABEL_60:
  v25 = (unsigned __int16)KeNumberNodes;
  v26 = 64LL;
  if ( (unsigned __int16)KeNumberNodes < 0x40u )
    memset(
      (void *)(0x140000000LL + 8LL * (unsigned __int16)KeNumberNodes + 13775744),
      0,
      8LL * (64 - (unsigned int)(unsigned __int16)KeNumberNodes));
  KiConfigureAllSchedulingInformation(v17, v26, v25, v24);
  LOBYTE(v27) = 1;
  ((void (__fastcall *)(__int64, _QWORD))off_140C006B0[0])(v27, 0LL);
  if ( !KeMaximumProcessors )
  {
    if ( !KeDynamicPartitioningSupported || v13 <= (unsigned int)KeNumberProcessors_0 )
    {
      v28 = KeNumberProcessors_0;
LABEL_65:
      KeMaximumProcessors = v28;
      goto LABEL_66;
    }
    v40 = KeRegisteredProcessors * *(_DWORD *)(KiProcessorBlock[0] + 152) * *(_DWORD *)(KiProcessorBlock[0] + 156);
    KeMaximumProcessors = v40;
    if ( v40 > KiMaximumGroupSize * (unsigned int)(unsigned __int16)KiMaximumGroups )
    {
      KeMaximumProcessors = KiMaximumGroupSize * (unsigned __int16)KiMaximumGroups;
      v40 = KiMaximumGroupSize * (unsigned __int16)KiMaximumGroups;
    }
    if ( v40 > v13 )
    {
      KeMaximumProcessors = v13;
      v40 = v13;
    }
    v28 = 1280;
    if ( v40 > 0x500 )
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
