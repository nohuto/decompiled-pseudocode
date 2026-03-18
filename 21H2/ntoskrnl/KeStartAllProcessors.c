/*
 * XREFs of KeStartAllProcessors @ 0x140B03C68
 * Callers:
 *     Phase1InitializationDiscard @ 0x140AFBDF4 (Phase1InitializationDiscard.c)
 * Callees:
 *     MmDeleteKernelStackEx @ 0x1402C1900 (MmDeleteKernelStackEx.c)
 *     MmCreateKernelStack @ 0x1402F4B70 (MmCreateKernelStack.c)
 *     KeQueryActiveProcessorCountEx @ 0x140348830 (KeQueryActiveProcessorCountEx.c)
 *     HalQueryMaximumProcessorCount @ 0x14036FA30 (HalQueryMaximumProcessorCount.c)
 *     HalStartNextProcessor @ 0x1403B2F30 (HalStartNextProcessor.c)
 *     KiQueryProcessorNode @ 0x1403C1A84 (KiQueryProcessorNode.c)
 *     KiAllocateProcessorNumber @ 0x1403C2638 (KiAllocateProcessorNumber.c)
 *     HalEnumerateProcessors @ 0x1403DD110 (HalEnumerateProcessors.c)
 *     HvlStartBootLogicalProcessors @ 0x1403DEDD0 (HvlStartBootLogicalProcessors.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     memset @ 0x140435E00 (memset.c)
 *     KiFreeProcessorNumber @ 0x14056DA54 (KiFreeProcessorNumber.c)
 *     MmDeleteProcessor @ 0x14057F9FC (MmDeleteProcessor.c)
 *     ExDeletePoolTagTable @ 0x14063A6C0 (ExDeletePoolTagTable.c)
 *     ExCreatePoolTagTable @ 0x140829A28 (ExCreatePoolTagTable.c)
 *     MmAllocateIsrStack @ 0x140829ACC (MmAllocateIsrStack.c)
 *     MmAllocateIndependentPagesEx @ 0x140829CBC (MmAllocateIndependentPagesEx.c)
 *     EtwInitializeProcessor @ 0x140829F84 (EtwInitializeProcessor.c)
 *     KeInitializeTimerTable @ 0x14082A0D8 (KeInitializeTimerTable.c)
 *     HvlInitializeProcessor @ 0x14082A2D4 (HvlInitializeProcessor.c)
 *     KiInitializeProcessorState @ 0x14082A324 (KiInitializeProcessorState.c)
 *     HvlDeleteProcessor @ 0x140931100 (HvlDeleteProcessor.c)
 *     KiResetBootProcessorApicMask @ 0x140960278 (KiResetBootProcessorApicMask.c)
 *     KiCreateKernelShadowStack @ 0x140961464 (KiCreateKernelShadowStack.c)
 *     KiDeleteKernelShadowStack @ 0x140961490 (KiDeleteKernelShadowStack.c)
 *     MmFreeIndependentPages @ 0x14096ED20 (MmFreeIndependentPages.c)
 *     MmFreeIsrStack @ 0x1409783E8 (MmFreeIsrStack.c)
 *     EtwDeleteProcessor @ 0x1409DEEDC (EtwDeleteProcessor.c)
 *     KiComputeProcessorDataSize @ 0x140A545F8 (KiComputeProcessorDataSize.c)
 *     KiInitializePrcbContext @ 0x140A59B28 (KiInitializePrcbContext.c)
 *     KiUpdateProcessorCount @ 0x140A59C88 (KiUpdateProcessorCount.c)
 *     KiConfigureProcessorBlock @ 0x140A59D28 (KiConfigureProcessorBlock.c)
 *     MmInitializeProcessor @ 0x140A59E20 (MmInitializeProcessor.c)
 *     KiUnshadowProcessorAllocation @ 0x140A69E6C (KiUnshadowProcessorAllocation.c)
 *     ExAllocatePoolWithTag @ 0x140A6E910 (ExAllocatePoolWithTag.c)
 *     KiConfigureAllSchedulingInformation @ 0x140B03BA8 (KiConfigureAllSchedulingInformation.c)
 *     KiCountNodeZeroSetBitsGroupAffinity @ 0x140B2ED24 (KiCountNodeZeroSetBitsGroupAffinity.c)
 *     KiAllocateCpuSetData @ 0x140B3023C (KiAllocateCpuSetData.c)
 */

ULONG KeStartAllProcessors()
{
  __int64 v0; // r13
  KPCR *Pcr; // rax
  void *Base; // rbx
  PVOID PoolWithTag; // rax
  unsigned int v4; // edi
  KPCR *v5; // rbx
  struct _KPRCB *CurrentPrcb; // rsi
  unsigned int v7; // r14d
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rax
  unsigned int MaximumProcessorCount; // eax
  unsigned int LogicalProcessorsPerCore; // ebx
  unsigned int v14; // ecx
  unsigned int v15; // ebx
  unsigned int v16; // esi
  unsigned int v17; // r15d
  __int64 v18; // rcx
  __int64 v19; // r14
  __int64 v20; // r12
  struct _KPRCB *v21; // rsi
  _OWORD *v22; // r14
  int started; // eax
  __int64 v24; // rcx
  int v25; // eax
  ULONG result; // eax
  _QWORD *v27; // rax
  _QWORD *v28; // rsi
  __int64 v29; // rax
  unsigned __int64 v30; // rcx
  __int64 v31; // rcx
  __int64 v32; // rax
  _OWORD *v33; // rdx
  __int128 v34; // xmm1
  unsigned int i; // edi
  _OWORD *v36; // rbx
  PVOID v37; // rax
  __int64 v38; // rsi
  __int64 v39; // rax
  _OWORD *v40; // rcx
  __int128 v41; // xmm1
  unsigned int v42; // ecx
  unsigned __int16 v43; // [rsp+38h] [rbp-D0h] BYREF
  unsigned int v44; // [rsp+3Ch] [rbp-CCh] BYREF
  __int64 v45; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v46; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v47; // [rsp+50h] [rbp-B8h]
  __int64 v48; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v49; // [rsp+60h] [rbp-A8h] BYREF
  unsigned int v50; // [rsp+68h] [rbp-A0h]
  unsigned int v51; // [rsp+6Ch] [rbp-9Ch]
  __int64 v52; // [rsp+70h] [rbp-98h] BYREF
  __int64 v53; // [rsp+78h] [rbp-90h] BYREF
  unsigned __int64 v54; // [rsp+80h] [rbp-88h] BYREF
  unsigned __int64 v55; // [rsp+88h] [rbp-80h] BYREF
  unsigned __int64 v56; // [rsp+90h] [rbp-78h] BYREF
  unsigned __int64 v57; // [rsp+98h] [rbp-70h] BYREF
  unsigned __int64 v58; // [rsp+A0h] [rbp-68h] BYREF
  unsigned __int64 v59; // [rsp+A8h] [rbp-60h] BYREF
  _QWORD v60[16]; // [rsp+B8h] [rbp-50h] BYREF
  char *v61; // [rsp+138h] [rbp+30h] BYREF
  __int64 v62; // [rsp+140h] [rbp+38h]
  __int64 IndependentPages; // [rsp+148h] [rbp+40h]
  _QWORD v64[3]; // [rsp+150h] [rbp+48h] BYREF
  ULONG_PTR BugCheckParameter1[184]; // [rsp+168h] [rbp+60h] BYREF

  memset(v60, 0, 0x78uLL);
  v0 = 0LL;
  v43 = 0;
  v44 = 0;
  Pcr = KeGetPcr();
  v46 = 0LL;
  v54 = 0LL;
  Base = Pcr->Prcb.ProcessorState.SpecialRegisters.Idtr.Base;
  LODWORD(Pcr) = Pcr->Prcb.ProcessorState.SpecialRegisters.Idtr.Limit + 1;
  v53 = 0LL;
  v56 = 0LL;
  v52 = 0LL;
  v57 = 0LL;
  v48 = 0LL;
  v58 = 0LL;
  v49 = 0LL;
  v59 = 0LL;
  v55 = 0LL;
  LODWORD(KiBootProcessorIdtSize) = (_DWORD)Pcr;
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, (unsigned int)Pcr, 0x2020654Bu);
  KiBootProcessorIdt = PoolWithTag;
  if ( !PoolWithTag )
    goto LABEL_132;
  memmove(PoolWithTag, Base, (unsigned int)KiBootProcessorIdtSize);
  if ( (unsigned int)KeRegisteredProcessors > 0x800 )
    KeRegisteredProcessors = 2048;
  KiBarrierWait = 1;
  memset(BugCheckParameter1, 0, sizeof(BugCheckParameter1));
  if ( !HalpInterruptHyperThreading )
    KiResetBootProcessorApicMask();
  v4 = HalEnumerateProcessors(KeRegisteredProcessors);
  if ( KeNumprocSpecified && KeNumprocSpecified < v4 )
    v4 = KeNumprocSpecified;
  if ( KeBootprocSpecified && KeBootprocSpecified < v4 )
    v4 = KeBootprocSpecified;
  v5 = KeGetPcr();
  CurrentPrcb = KeGetCurrentPrcb();
  v7 = 0;
  if ( (int)KiInitializePrcbContext((__int64)CurrentPrcb, 0LL) < 0 )
    goto LABEL_132;
  if ( !MmAllocateIsrStack(&CurrentPrcb->IsrStack, 0LL) )
    goto LABEL_132;
  v61 = (char *)KeGetPcr()->Prcb.ExceptionStack + 80;
  if ( !MmAllocateIsrStack(&v61, 0LL) )
    goto LABEL_132;
  v8 = *(_QWORD *)((char *)v5->NtTib.StackBase + 36);
  v45 = v8;
  if ( KiKvaShadow )
    v45 = *(_QWORD *)(v8 + 8) + 32LL;
  if ( !MmAllocateIsrStack(&v45, 0LL) )
    goto LABEL_132;
  v9 = *(_QWORD *)((char *)v5->NtTib.StackBase + 44);
  v45 = v9;
  if ( KiKvaShadow )
    v45 = *(_QWORD *)(v9 + 8) + 32LL;
  if ( !MmAllocateIsrStack(&v45, 0LL) )
    goto LABEL_132;
  v10 = *(_QWORD *)((char *)v5->NtTib.StackBase + 52);
  v45 = v10;
  if ( KiKvaShadow )
    v45 = *(_QWORD *)(v10 + 8) + 32LL;
  if ( !MmAllocateIsrStack(&v45, 0LL) )
    goto LABEL_132;
  v11 = *(_QWORD *)((char *)v5->NtTib.StackBase + 60);
  v45 = v11;
  if ( KiKvaShadow )
    v45 = *(_QWORD *)(v11 + 8) + 32LL;
  if ( !MmAllocateIsrStack(&v45, 0LL) )
    goto LABEL_132;
  MaximumProcessorCount = HalQueryMaximumProcessorCount();
  LogicalProcessorsPerCore = CurrentPrcb->LogicalProcessorsPerCore;
  v14 = MaximumProcessorCount;
  v51 = MaximumProcessorCount;
  if ( MaximumProcessorCount > 0x800 )
    v14 = 2048;
  v15 = KeRegisteredProcessors * CurrentPrcb->CoresPerPhysicalProcessor * LogicalProcessorsPerCore;
  if ( v14 <= v15 )
    v15 = v14;
  if ( KeNumprocSpecified && KeNumprocSpecified < v15 )
    v15 = KeNumprocSpecified;
  if ( !KeDynamicPartitioningSupported && v15 > v4 )
    v15 = v4;
  if ( !(unsigned int)KiAllocateCpuSetData(v15) )
    goto LABEL_132;
  v16 = KiComputeProcessorDataSize(v15, &v46, (_DWORD *)&v46 + 1);
  v64[0] = (unsigned int)v46;
  v64[1] = HIDWORD(v46);
  LODWORD(v47) = v16;
  if ( (int)HvlStartBootLogicalProcessors(SHIDWORD(v46)) < 0 )
    goto LABEL_132;
  v17 = 0;
  do
  {
    v18 = 0xFFFFLL;
    if ( (unsigned int)KeNumberProcessors_0 >= v4 )
      break;
    v44 = -1;
    ++v7;
    v43 = -1;
    v50 = v7;
    if ( !(unsigned int)KiQueryProcessorNode(v7, &v44, &v43) )
    {
      memset(v60, 0, 0x78uLL);
      ++v17;
      IndependentPages = MmAllocateIndependentPagesEx(v16, v43, v64, 2u);
      v19 = IndependentPages;
      if ( !IndependentPages )
        goto LABEL_132;
      if ( !ExCreatePoolTagTable(v17, v43) )
        goto LABEL_132;
      v60[4] = MmCreateKernelStack(0, v43, 0LL);
      if ( !v60[4] )
        goto LABEL_132;
      v60[5] = MmCreateKernelStack(0, v43, 0LL);
      if ( !v60[5]
        || !MmAllocateIsrStack(&v60[6], v43)
        || !MmAllocateIsrStack(&v60[7], v43)
        || !MmAllocateIsrStack(&v60[11], v43)
        || !MmAllocateIsrStack(&v60[9], v43)
        || !MmAllocateIsrStack(&v60[10], v43)
        || !MmAllocateIsrStack(&v60[8], v43) )
      {
        goto LABEL_132;
      }
      v54 = 0LL;
      v20 = 0LL;
      v55 = 0LL;
      v56 = 0LL;
      v57 = 0LL;
      v58 = 0LL;
      v59 = 0LL;
      v53 = 0LL;
      v52 = 0LL;
      v48 = 0LL;
      v49 = 0LL;
      if ( (_BYTE)KiKernelCetEnabled )
      {
        if ( (int)KiCreateKernelShadowStack(0LL, 2, 0LL, v43, &v54, &v60[12]) < 0 )
          goto LABEL_132;
        if ( (int)KiCreateKernelShadowStack(0LL, 4, 0LL, v43, &v55, &v60[13]) < 0 )
          goto LABEL_132;
        if ( (int)KiCreateKernelShadowStack(0LL, 3, 0LL, v43, &v56, &v53) < 0 )
          goto LABEL_132;
        if ( (int)KiCreateKernelShadowStack(0LL, 3, 0LL, v43, &v57, &v52) < 0 )
          goto LABEL_132;
        if ( (int)KiCreateKernelShadowStack(0LL, 3, 0LL, v43, &v58, &v48) < 0 )
          goto LABEL_132;
        if ( (int)KiCreateKernelShadowStack(0LL, 3, 0LL, v43, &v59, &v49) < 0 )
          goto LABEL_132;
        v27 = (_QWORD *)MmAllocateIndependentPagesEx(0x1000uLL, v43, (_QWORD *)0xFFFFFFFFFFFFFFFFLL, 1u);
        v60[14] = v27;
        v28 = v27;
        if ( !v27 )
          goto LABEL_132;
        memset(v27, 0, 0x1000uLL);
        v29 = v48;
        v0 = v52;
        v20 = v53;
        v28[1] = v52;
        v28[2] = v29;
        v28[3] = v49;
        v28[4] = v20;
        v16 = v47;
      }
      KiAllocateProcessorNumber(v43, (__int64)&v60[2] + 4);
      LODWORD(v60[0]) = 0;
      HIDWORD(v60[0]) = v16;
      v62 = KeNodeBlock[v43];
      LODWORD(v60[1]) = v43;
      v60[3] = v46;
      HIDWORD(v60[1]) = v17;
      LODWORD(v60[2]) = v15;
      v21 = (struct _KPRCB *)KiInitializeProcessorState(
                               BugCheckParameter1,
                               (_QWORD *)KeLoaderBlock_0,
                               v19,
                               (__int64)v60);
      if ( !v21 )
        goto LABEL_132;
      v22 = (_OWORD *)KeNodeBlock[v43];
      if ( (unsigned int)HvlInitializeProcessor((union _SLIST_HEADER *)v21)
        || !(unsigned int)MmInitializeProcessor((__int64)v21)
        || (int)KiInitializePrcbContext((__int64)v21, v43) < 0
        || (int)KeInitializeTimerTable((__int64)v21) < 0
        || (int)EtwInitializeProcessor((__int64)v21) < 0 )
      {
        goto LABEL_132;
      }
      started = HalStartNextProcessor((__int64)BugCheckParameter1, v17, v44);
      if ( started == 3 )
        KeBugCheckEx(0x1DFu, (ULONG_PTR)BugCheckParameter1, 3uLL, v17, v44);
      if ( started != 4 )
      {
        v30 = (unsigned __int64)v21->Group << 6;
        KiProcessorIndexToNumberMappingTable[v21->Number] = 0;
        KiProcessorNumberToIndexMappingTable[v21->GroupIndex + v30] = 0;
        v21->SchedulerSubNode = 0LL;
        KiFreeProcessorNumber((unsigned __int16 *)&v60[2] + 2);
        v31 = v62;
        v32 = 2LL;
        v33 = (_OWORD *)v62;
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
        *v33 = *v22;
        *((_QWORD *)v33 + 2) = *((_QWORD *)v22 + 2);
        KeNodeBlock[v43] = v31;
        HvlDeleteProcessor(v21, (SIZE_T)v33, (MEMORY_CACHING_TYPE)128);
        MmDeleteProcessor((__int64)v21);
        EtwDeleteProcessor((__int64)v21);
        ExDeletePoolTagTable(v17);
        KiUnshadowProcessorAllocation((__int64)v21, (__int64)BugCheckParameter1);
        MmFreeIndependentPages(IndependentPages, (unsigned int)v47);
        MmDeleteKernelStackEx(v60[4], 0, 0LL);
        MmDeleteKernelStackEx(v60[5], 0, 0LL);
        if ( v60[6] )
          MmFreeIsrStack(v60[6]);
        if ( v60[7] )
          MmFreeIsrStack(v60[7]);
        if ( v60[8] )
          MmFreeIsrStack(v60[8]);
        if ( v60[10] )
          MmFreeIsrStack(v60[10]);
        if ( v60[9] )
          MmFreeIsrStack(v60[9]);
        if ( v60[11] )
          MmFreeIsrStack(v60[11]);
        if ( v60[12] )
          KiDeleteKernelShadowStack(v54, 2, 0);
        if ( v60[13] )
          KiDeleteKernelShadowStack(v55, 4, 0);
        if ( v20 )
          KiDeleteKernelShadowStack(v56, 3, 0);
        if ( v0 )
          KiDeleteKernelShadowStack(v57, 3, 0);
        if ( v48 )
          KiDeleteKernelShadowStack(v58, 3, 0);
        if ( v49 )
          KiDeleteKernelShadowStack(v59, 3, 0);
        v18 = v60[14];
        if ( v60[14] )
          MmFreeIndependentPages(v60[14], 0x1000uLL);
        break;
      }
      v0 = 0LL;
      while ( *(_QWORD *)(KeLoaderBlock_0 + 136) )
        _mm_pause();
      KiConfigureProcessorBlock((__int64)v21);
      KiUpdateProcessorCount(v17, v21->Group);
      v7 = v50;
      v16 = v47;
    }
  }
  while ( v7 < 0x7FF );
  if ( (unsigned __int16)KeNumberNodes <= 1u )
  {
    if ( (unsigned int)KiCountNodeZeroSetBitsGroupAffinity(v18) == (_DWORD)KeNumberProcessors_0 )
      goto LABEL_62;
LABEL_132:
    KeBugCheckEx(0x32u, 0LL, 0LL, 0x14uLL, 0LL);
  }
  for ( i = 0; i < (unsigned __int16)KeNumberNodes; ++i )
  {
    v36 = (_OWORD *)((char *)&KiNodeInit + 280 * i);
    if ( (_OWORD *)KeNodeBlock[i] == v36 )
    {
      v37 = ExAllocatePoolWithTag(NonPagedPoolNx, 0x140uLL, 0x2020654Bu);
      v38 = (__int64)v37;
      if ( !v37 )
        goto LABEL_132;
      memset(v37, 0, 0x140uLL);
      v39 = 2LL;
      v40 = (_OWORD *)v38;
      do
      {
        *v40 = *v36;
        v40[1] = v36[1];
        v40[2] = v36[2];
        v40[3] = v36[3];
        v40[4] = v36[4];
        v40[5] = v36[5];
        v40[6] = v36[6];
        v40 += 8;
        v41 = v36[7];
        v36 += 8;
        *(v40 - 1) = v41;
        --v39;
      }
      while ( v39 );
      *v40 = *v36;
      *((_QWORD *)v40 + 2) = *((_QWORD *)v36 + 2);
      KeNodeBlock[i] = v38;
    }
  }
LABEL_62:
  if ( (unsigned __int16)KeNumberNodes < 0x40u )
    memset(&KeNodeBlock[(unsigned __int16)KeNumberNodes], 0, 8LL * (64 - (unsigned int)(unsigned __int16)KeNumberNodes));
  KiConfigureAllSchedulingInformation();
  LOBYTE(v24) = 1;
  ((void (__fastcall *)(__int64, _QWORD))off_140C01D00[0])(v24, 0LL);
  if ( !KeMaximumProcessors )
  {
    if ( !KeDynamicPartitioningSupported || v51 <= (unsigned int)KeNumberProcessors_0 )
    {
      v25 = KeNumberProcessors_0;
LABEL_67:
      KeMaximumProcessors = v25;
      goto LABEL_68;
    }
    v42 = KeRegisteredProcessors * *(_DWORD *)(KiProcessorBlock[0] + 152) * *(_DWORD *)(KiProcessorBlock[0] + 156);
    KeMaximumProcessors = v42;
    if ( v42 > KiMaximumGroupSize * (unsigned int)(unsigned __int16)KiMaximumGroups )
    {
      KeMaximumProcessors = KiMaximumGroupSize * (unsigned __int16)KiMaximumGroups;
      v42 = KiMaximumGroupSize * (unsigned __int16)KiMaximumGroups;
    }
    if ( v42 > v51 )
    {
      KeMaximumProcessors = v51;
      v42 = v51;
    }
    v25 = 2048;
    if ( v42 > 0x800 )
      goto LABEL_67;
  }
LABEL_68:
  if ( !KeDynamicPartitioningSupported )
    KiMaximumGroups = KiActiveGroups;
  KiBootProcessorsStarted = 1;
  result = KeQueryActiveProcessorCountEx(0xFFFFu);
  KiBootProcessorCount = result;
  KiBarrierWait = 0;
  return result;
}
