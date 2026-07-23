/*
 * XREFs of PspAllocateThread @ 0x1406AF6DC
 * Callers:
 *     NtCreateUserProcess @ 0x1406149A0 (NtCreateUserProcess.c)
 *     PspCreateThread @ 0x1406B12C0 (PspCreateThread.c)
 *     PspCreatePicoThread @ 0x140908B80 (PspCreatePicoThread.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x140205370 (KiUnstackDetachProcess.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140207AC0 (ExAcquirePushLockExclusiveEx.c)
 *     HalPutDmaAdapter @ 0x140208270 (HalPutDmaAdapter.c)
 *     ObfDereferenceObjectWithTag @ 0x140208290 (ObfDereferenceObjectWithTag.c)
 *     KeAbPostRelease @ 0x14020ACF0 (KeAbPostRelease.c)
 *     KiStackAttachProcess @ 0x14024F890 (KiStackAttachProcess.c)
 *     ExInitializePushLock @ 0x140267800 (ExInitializePushLock.c)
 *     ExfTryToWakePushLock @ 0x1402749E0 (ExfTryToWakePushLock.c)
 *     PsQueryThreadStartAddress @ 0x140277F78 (PsQueryThreadStartAddress.c)
 *     PoEnergyEstimationEnabled @ 0x140296BC0 (PoEnergyEstimationEnabled.c)
 *     RtlGetExtendedContextLength @ 0x1402EA9B0 (RtlGetExtendedContextLength.c)
 *     KeQuerySystemTimeUnsafe @ 0x1402F9514 (KeQuerySystemTimeUnsafe.c)
 *     KeInitializeSemaphore @ 0x1402F9530 (KeInitializeSemaphore.c)
 *     KeQueryMaximumGroupCount @ 0x1402F9560 (KeQueryMaximumGroupCount.c)
 *     KeQuerySystemTimePrecise @ 0x1402F9570 (KeQuerySystemTimePrecise.c)
 *     KeSelectIdealProcessor @ 0x14030C074 (KeSelectIdealProcessor.c)
 *     KeSelectNodeForAffinity @ 0x14030C27C (KeSelectNodeForAffinity.c)
 *     __security_check_cookie @ 0x1403CCE60 (__security_check_cookie.c)
 *     memset @ 0x14040A280 (memset.c)
 *     RtlLocateExtendedFeature @ 0x14058A0E0 (RtlLocateExtendedFeature.c)
 *     ExCreateHandleEx @ 0x1405E83C0 (ExCreateHandleEx.c)
 *     PspSetupUserStack @ 0x140603EA8 (PspSetupUserStack.c)
 *     MmCreateTeb @ 0x140604274 (MmCreateTeb.c)
 *     MmDeleteTeb @ 0x140605648 (MmDeleteTeb.c)
 *     ObCreateObjectEx @ 0x140679FF0 (ObCreateObjectEx.c)
 *     MmSecureVirtualMemoryEx @ 0x1406DBC70 (MmSecureVirtualMemoryEx.c)
 *     PspWow64InitThread @ 0x1406E53AC (PspWow64InitThread.c)
 *     PspWow64SetupUserStack @ 0x1406FE2E8 (PspWow64SetupUserStack.c)
 *     PspDeleteUserStack @ 0x14070C948 (PspDeleteUserStack.c)
 *     ExRaiseDatatypeMisalignment @ 0x140769830 (ExRaiseDatatypeMisalignment.c)
 *     PspSetupUserShadowStack @ 0x14090720C (PspSetupUserShadowStack.c)
 *     PspUmsInitThread @ 0x14090737C (PspUmsInitThread.c)
 *     KeInitThread @ 0x14098C548 (KeInitThread.c)
 *     ExFreePoolWithTag @ 0x1409B1140 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B1160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall PspAllocateThread(
        ULONG_PTR BugCheckParameter1,
        ULONG_PTR a2,
        unsigned __int8 a3,
        __int64 a4,
        __int64 a5,
        _INITIAL_TEB **a6,
        __int64 a7,
        __int64 a8,
        int *a9,
        PADAPTER_OBJECT *a10,
        char *a11,
        _DMA_OPERATIONS **a12)
{
  unsigned __int8 v13; // bl
  _DMA_OPERATIONS **v16; // r8
  struct _KTHREAD *CurrentThread; // r9
  _INITIAL_TEB *v18; // rax
  __int64 v19; // rdx
  int v20; // r14d
  _QWORD *v21; // r11
  int v22; // r14d
  __int64 v23; // rax
  _QWORD *v24; // r11
  unsigned int v25; // ebx
  unsigned int MaximumGroupCount; // ecx
  PADAPTER_OBJECT v28; // rsi
  __int64 v29; // rax
  int v30; // eax
  ULONG_PTR v31; // rbx
  __int64 Handle; // rax
  volatile signed __int64 *v33; // rsi
  __int64 v34; // rdx
  int v35; // r8d
  __int16 v36; // dx
  __int16 v37; // cx
  __int16 v38; // ax
  char *v39; // rcx
  int v40; // ecx
  __int64 v41; // rbx
  int v42; // eax
  __int64 v43; // rax
  __int64 Teb; // rbx
  __int64 v45; // rcx
  __int64 v46; // rax
  __int64 v47; // rcx
  _DMA_OPERATIONS *PoolWithTag; // rax
  _QWORD *ExtendedFeature; // rax
  __int64 v50; // rdx
  __int64 v51; // rcx
  _DMA_OPERATIONS **v52; // r8
  __int64 v53; // rcx
  int inited; // eax
  _DMA_OPERATIONS *DmaOperations; // rcx
  __int64 v56; // [rsp+20h] [rbp-168h]
  int v57; // [rsp+50h] [rbp-138h]
  char v58; // [rsp+54h] [rbp-134h]
  __int16 v59; // [rsp+54h] [rbp-134h]
  int v60; // [rsp+58h] [rbp-130h]
  _INITIAL_TEB *v61; // [rsp+60h] [rbp-128h]
  PADAPTER_OBJECT DmaAdapter; // [rsp+68h] [rbp-120h] BYREF
  __int64 v63; // [rsp+70h] [rbp-118h] BYREF
  char *v64; // [rsp+78h] [rbp-110h]
  _DMA_OPERATIONS **p_DmaOperations; // [rsp+80h] [rbp-108h]
  ULONG ContextLength; // [rsp+88h] [rbp-100h] BYREF
  __int64 v67; // [rsp+90h] [rbp-F8h]
  __int64 v68; // [rsp+98h] [rbp-F0h]
  _INITIAL_TEB *v69; // [rsp+A0h] [rbp-E8h]
  struct _KTHREAD *v70; // [rsp+A8h] [rbp-E0h]
  ULONG_PTR v71; // [rsp+B0h] [rbp-D8h]
  __int64 v72; // [rsp+B8h] [rbp-D0h]
  __int64 v73; // [rsp+C0h] [rbp-C8h]
  ULONG_PTR BugCheckParameter2; // [rsp+C8h] [rbp-C0h]
  char v75; // [rsp+D0h] [rbp-B8h] BYREF
  int v76; // [rsp+D1h] [rbp-B7h]
  __int16 v77; // [rsp+D5h] [rbp-B3h]
  char v78; // [rsp+D7h] [rbp-B1h]
  __int64 v79; // [rsp+D8h] [rbp-B0h]
  __int64 v80; // [rsp+E0h] [rbp-A8h]
  __int64 v81; // [rsp+E8h] [rbp-A0h]
  int v82; // [rsp+F0h] [rbp-98h]
  int v83; // [rsp+F4h] [rbp-94h]
  int v84; // [rsp+F8h] [rbp-90h]
  int v85; // [rsp+FCh] [rbp-8Ch]
  __int64 v86; // [rsp+100h] [rbp-88h]
  __int64 v87; // [rsp+108h] [rbp-80h]
  PADAPTER_OBJECT *v88; // [rsp+110h] [rbp-78h]
  _BYTE v89[48]; // [rsp+118h] [rbp-70h] BYREF

  v13 = a3;
  v71 = BugCheckParameter1;
  BugCheckParameter2 = a2;
  v72 = a4;
  v73 = a5;
  v67 = (__int64)a6;
  v88 = a10;
  v64 = a11;
  v16 = a12;
  p_DmaOperations = a12;
  memset(v89, 0, sizeof(v89));
  v63 = 0LL;
  v68 = 0LL;
  DmaAdapter = 0LL;
  v76 = 0;
  v77 = 0;
  v78 = 0;
  ContextLength = 0;
  CurrentThread = KeGetCurrentThread();
  v70 = CurrentThread;
  v60 = 0;
  if ( a6 )
    v18 = *a6;
  else
    v18 = 0LL;
  v69 = v18;
  v61 = v18;
  if ( !a4 )
    goto LABEL_22;
  v19 = 0LL;
  v20 = *(_DWORD *)(a4 + 4);
  v21 = (_QWORD *)((a4 + 320) & -(__int64)((v20 & 0x1000) != 0));
  if ( (v20 & 0x4000) != 0 )
    v19 = KiProcessorBlock[*(unsigned int *)(a4 + 252)];
  if ( v19 )
  {
    if ( v21 )
    {
      if ( *(unsigned __int8 *)(v19 + 208) != *(_WORD *)(((a4 + 320) & -(__int64)((*(_DWORD *)(a4 + 4) & 0x1000) != 0))
                                                       + 8)
        || *v21 && (*v21 & *(_QWORD *)(v19 + 200)) == 0LL )
      {
        v22 = -1073741776;
LABEL_34:
        ObfDereferenceObjectWithTag((PVOID)BugCheckParameter1, 0x72437350u);
        return (unsigned int)v22;
      }
    }
    else
    {
      *(_DWORD *)(a4 + 4) = v20 | 0x1000;
      *(_WORD *)(a4 + 328) = *(unsigned __int8 *)(v19 + 208);
      *(_QWORD *)(a4 + 320) = qword_140CFC848[*(unsigned __int8 *)(v19 + 208)];
    }
    v60 = *(unsigned __int16 *)(*(_QWORD *)(v19 + 192) + 146LL) + 1;
    goto LABEL_18;
  }
  if ( v21 && *v21 )
  {
    v23 = KeSelectNodeForAffinity((a4 + 320) & -(__int64)((*(_DWORD *)(a4 + 4) & 0x1000) != 0));
    v60 = *(unsigned __int16 *)(v23 + 146) + 1;
    *(_DWORD *)(a4 + 4) = v20 | 0x4000;
    *(_DWORD *)(a4 + 252) = (unsigned __int16)KeSelectIdealProcessor(v23, v24, 0LL, 0LL);
    v16 = p_DmaOperations;
    CurrentThread = v70;
LABEL_18:
    v13 = a3;
  }
  if ( (*(_DWORD *)(a4 + 4) & 0x8000) != 0
    && (*(_QWORD *)(BugCheckParameter1 + 1408) || (_KPROCESS *)BugCheckParameter1 != CurrentThread->Process) )
  {
    goto LABEL_24;
  }
LABEL_22:
  *((_DWORD *)v16 + 96) = 0;
  *((_BYTE *)v16 + 388) = v13;
  if ( a5 )
  {
    if ( (PEPROCESS)BugCheckParameter1 == PsInitialSystemProcess )
    {
LABEL_24:
      v22 = -1073741811;
      goto LABEL_34;
    }
    if ( a2 )
    {
      if ( v13 == 1 && (a2 & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      *((_DWORD *)v16 + 96) = *(_DWORD *)(a2 + 24) & (v13 != 0 ? 7666 : 73714);
    }
  }
  else if ( a2 )
  {
    *((_DWORD *)v16 + 96) = *(_DWORD *)(a2 + 24) & 0x11FF2;
  }
  v58 = PoEnergyEstimationEnabled();
  v25 = v58 != 0 ? 2400 : 2200;
  MaximumGroupCount = KeQueryMaximumGroupCount();
  LODWORD(p_DmaOperations) = 0;
  if ( MaximumGroupCount > 1 )
  {
    LODWORD(p_DmaOperations) = (v58 != 0 ? 2407 : 2207) & 0xFFFFFFF8;
    v25 = (_DWORD)p_DmaOperations + 8 * MaximumGroupCount;
  }
  v22 = ObCreateObjectEx(a3, PsThreadType, a2, a3, v56, v25, 0, v25, &DmaAdapter, 0LL);
  v57 = v22;
  if ( v22 < 0 )
    goto LABEL_34;
  v28 = DmaAdapter;
  memset(DmaAdapter, 0, v25);
  if ( v58 )
  {
    v28[95].DmaOperations = (_DMA_OPERATIONS *)&v28[137].DmaOperations;
    _interlockedbittestandset((volatile signed __int32 *)v28, 0x15u);
    v28 = DmaAdapter;
  }
  if ( KiSchedulerAssistThreadFlagEnabled )
  {
    _interlockedbittestandset((volatile signed __int32 *)v28, 0x16u);
    v28 = DmaAdapter;
  }
  v29 = (unsigned int)p_DmaOperations;
  if ( (_DWORD)p_DmaOperations )
  {
    *(_DWORD *)&v28[81].Version |= 0x20000u;
    *(_QWORD *)&v28[96].Version = (char *)v28 + v29;
  }
  ExInitializePushLock((PKSPIN_LOCK)&v28[79].DmaOperations);
  p_DmaOperations = &v28[71].DmaOperations;
  v28[71].DmaOperations = *(_DMA_OPERATIONS **)(BugCheckParameter1 + 1088);
  v30 = *a9;
  if ( (*a9 & 4) != 0 )
  {
    *(_DWORD *)&v28[81].Version |= 4u;
    v30 = *a9;
  }
  if ( (v30 & 0x200) != 0 )
    *(_DWORD *)(&v28[7].Size + 1) |= 0x200000u;
  v31 = (ULONG_PTR)&v28[80];
  BugCheckParameter2 = (ULONG_PTR)&v28[80];
  *(_QWORD *)&v28[80].Version = 0LL;
  LODWORD(v28[80].DmaOperations) = 7;
  KeInitializeSemaphore((PRKSEMAPHORE)&v28[72].DmaOperations, 0, 1);
  *(_QWORD *)&v28[68].Version = (char *)v28 + 1080;
  v28[67].DmaOperations = (_DMA_OPERATIONS *)&v28[67].DmaOperations;
  v28[86].DmaOperations = (_DMA_OPERATIONS *)&v28[86];
  *(_QWORD *)&v28[86].Version = v28 + 86;
  v28[87].DmaOperations = (_DMA_OPERATIONS *)&v28[87];
  *(_QWORD *)&v28[87].Version = v28 + 87;
  *(_QWORD *)&v28[88].Version = 0LL;
  *(_QWORD *)&v28[93].Version = (char *)v28 + 1480;
  v28[92].DmaOperations = (_DMA_OPERATIONS *)&v28[92].DmaOperations;
  v28[93].DmaOperations = 0LL;
  v28[75].DmaOperations = (_DMA_OPERATIONS *)&v28[75];
  *(_QWORD *)&v28[75].Version = v28 + 75;
  v28[88].DmaOperations = 0LL;
  *(_QWORD *)&v28[70].Version = 0LL;
  *(_QWORD *)&v28[71].Version = (char *)v28 + 1128;
  v28[70].DmaOperations = (_DMA_OPERATIONS *)&v28[70].DmaOperations;
  v28[96].DmaOperations = (_DMA_OPERATIONS *)-3LL;
  if ( KeQuerySystemTimeUnsafe() )
  {
    KeQuerySystemTimePrecise((LARGE_INTEGER *)&v28[67]);
  }
  else
  {
    v28 = DmaAdapter;
    *(_QWORD *)&DmaAdapter[67].Version = MEMORY[0xFFFFF78000000014];
  }
  *(_QWORD *)&v28[99].Version = (char *)v28 + 1576;
  v28[98].DmaOperations = (_DMA_OPERATIONS *)&v28[98].DmaOperations;
  v28[99].DmaOperations = 0LL;
  v28[100].DmaOperations = (_DMA_OPERATIONS *)&v28[100];
  *(_QWORD *)&v28[100].Version = v28 + 100;
  ExAcquirePushLockExclusiveEx(v31, 0LL);
  Handle = ExCreateHandleEx(PspCidTable, (__int64)v28, 0, 0, 0LL);
  *(_QWORD *)&v28[72].Version = Handle;
  if ( !Handle )
  {
    v33 = (volatile signed __int64 *)BugCheckParameter2;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)BugCheckParameter2, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v33);
    KeAbPostRelease((ULONG_PTR)v33);
    v22 = -1073741670;
    v57 = -1073741670;
    v28 = DmaAdapter;
    goto LABEL_121;
  }
  if ( a5 )
  {
    v35 = *a9;
    v36 = (16 * (*a9 & 0x40)) | 8;
    if ( (*a9 & 2) == 0 )
      v36 = 16 * (v35 & 0x40);
    v37 = v36 | 0x2000;
    if ( (v35 & 0x80u) == 0 )
      v37 = v36;
    v38 = v37 | 0x4000;
    if ( (v35 & 0x100) == 0 )
      v38 = v37;
    v59 = v38;
    v39 = v64;
    if ( !v64 )
    {
      if ( !*(_QWORD *)(BugCheckParameter1 + 2240) )
      {
        Teb = (__int64)v70->Teb;
        v63 = Teb;
        *(_QWORD *)&v28[69].Version = PsQueryThreadStartAddress((__int64)v70, 1);
        *(_QWORD *)&v28[77].Version = v70[1].ApcState.ApcListHead[0].Blink;
        *(_DWORD *)(&v28[81].Size + 1) |= 0x10u;
        if ( (*(_DWORD *)(BugCheckParameter1 + 2516) & 0x4000) != 0
          && (*(_DWORD *)(a5 + 48) & 0x100040) == 0x100040
          && (*(_DWORD *)(*(int *)(a5 + 1248) + a5 + 1232) & 0x800LL) != 0 )
        {
          ExtendedFeature = RtlLocateExtendedFeature((PCONTEXT_EX)(a5 + 1232), 0xBu, 0LL);
          if ( ExtendedFeature )
          {
            if ( (*(_BYTE *)ExtendedFeature & 1) != 0 && ExtendedFeature[1] )
              *(_DWORD *)(&v28[7].Size + 1) |= 0x100000u;
          }
        }
        v50 = *(_QWORD *)(BugCheckParameter1 + 1408);
        if ( v50 )
        {
          v51 = 14392LL;
          if ( *(_WORD *)(v50 + 8) != 0x8664 )
            v51 = 12288LL;
          v67 = v51;
        }
        else
        {
          v67 = 6200LL;
        }
        KiStackAttachProcess((_KPROCESS *)BugCheckParameter1, 0LL, (__int64)v89);
        if ( MmSecureVirtualMemoryEx(Teb, v67, 4LL) )
        {
          v52 = p_DmaOperations;
          *(_OWORD *)(Teb + 64) = *(_OWORD *)p_DmaOperations;
          *(_OWORD *)(Teb + 2008) = *(_OWORD *)v52;
          *(_DWORD *)(Teb + 6044) = 0;
          *(_DWORD *)(Teb + 6120) = 0;
          *(_WORD *)(Teb + 6126) &= 0x62Cu;
          *(_WORD *)(Teb + 6126) |= v59 | 0x40;
          v53 = *(_QWORD *)(BugCheckParameter1 + 1408);
          if ( v53 )
          {
            if ( *(_WORD *)(v53 + 8) == 0x8664 )
            {
              v86 = Teb + 0x2000;
              *(_QWORD *)(Teb + 8256) = *v52;
              *(_QWORD *)(Teb + 8264) = *(_QWORD *)&v28[72].Version;
              *(_QWORD *)(Teb + 10200) = *v52;
              *(_QWORD *)(Teb + 10208) = *(_QWORD *)&v28[72].Version;
              *(_DWORD *)(Teb + 14236) = 0;
              *(_DWORD *)(Teb + 14312) = 0;
              *(_WORD *)(Teb + 14318) &= 0x62Cu;
              *(_WORD *)(Teb + 14318) |= v59 | 0x40;
            }
            else
            {
              v87 = Teb + 0x2000;
              v82 = *(_DWORD *)v52;
              *(_DWORD *)(Teb + 8224) = v82;
              v83 = *(_DWORD *)&v28[72].Version;
              *(_DWORD *)(Teb + 8228) = v83;
              v84 = *(_DWORD *)v52;
              *(_DWORD *)(Teb + 9908) = v84;
              v85 = *(_DWORD *)&v28[72].Version;
              *(_DWORD *)(Teb + 9912) = v85;
              *(_DWORD *)(Teb + 12188) = 0;
              *(_DWORD *)(Teb + 12228) = 0;
              *(_WORD *)(Teb + 12234) &= 0x62Cu;
              *(_WORD *)(Teb + 12234) |= v59 | 0x40;
            }
          }
        }
        else
        {
          v22 = -1073741503;
          v57 = -1073741503;
        }
LABEL_110:
        KiUnstackDetachProcess((__int64)v89, 0LL);
        if ( v22 < 0 )
          goto LABEL_121;
        goto LABEL_111;
      }
      v46 = *(_QWORD *)(a5 + 248);
      *(_QWORD *)&v28[69].Version = v46;
      *(_QWORD *)&v28[77].Version = v46;
      v47 = v67;
      v28[94].DmaOperations = *(_DMA_OPERATIONS **)(v67 + 8);
      *(_QWORD *)&v28[95].Version = *(_QWORD *)(v47 + 16);
      _interlockedbittestandset((volatile signed __int32 *)v28, 0x1Au);
      RtlGetExtendedContextLength(MEMORY[0xFFFFF780000003D8] != 0LL ? 1048671 : 1048607, &ContextLength);
      PoolWithTag = (_DMA_OPERATIONS *)ExAllocatePoolWithTag(PagedPool, ContextLength, 0x63537350u);
      v28 = DmaAdapter;
      DmaAdapter[97].DmaOperations = PoolWithTag;
      if ( !PoolWithTag )
      {
        v22 = -1073741670;
        v57 = -1073741670;
        goto LABEL_121;
      }
      Teb = v63;
LABEL_111:
      inited = KeInitThread(v28, 0LL, PspUserThreadStartup);
      goto LABEL_113;
    }
    if ( (*(_DWORD *)(BugCheckParameter1 + 2516) & 0x4000) != 0 && (!a4 || (*(_DWORD *)(a4 + 4) & 0x8000) == 0) )
      *(_DWORD *)(&v28[7].Size + 1) |= 0x100000u;
    if ( *(_QWORD *)(BugCheckParameter1 + 1408) )
    {
      v75 = 0;
      v80 = 0x8000LL;
      v81 = 0x40000LL;
      v79 = 0LL;
      v22 = PspSetupUserStack(BugCheckParameter1, a5, v61, &v75, v60);
      v57 = v22;
      if ( v22 >= 0 )
      {
        v40 = (int)v64;
        *v64 ^= (v75 ^ *v64) & 2;
        v41 = (__int64)v61;
        v42 = PspWow64SetupUserStack(BugCheckParameter1, v34, (_DWORD)v61, v40, v60);
LABEL_68:
        v22 = v42;
        v57 = v42;
LABEL_73:
        if ( v22 < 0 )
          goto LABEL_121;
        v43 = v68;
        if ( a4 && (*(_DWORD *)(a4 + 4) & 0x8000) != 0 && (KeFeatureBits & 0x10000000) == 0 )
          v43 = 0x100000000LL;
        v22 = MmCreateTeb((_KPROCESS *)BugCheckParameter1, v41, p_DmaOperations, v43, &v63);
        v57 = v22;
        if ( v22 < 0 )
          goto LABEL_121;
        *(_QWORD *)&v28[69].Version = *(_QWORD *)(a5 + 248);
        *(_QWORD *)&v28[77].Version = *(_QWORD *)(a5 + 128);
        Teb = v63;
        if ( *(_QWORD *)(BugCheckParameter1 + 1408) )
        {
          v22 = PspWow64InitThread(BugCheckParameter1);
          v57 = v22;
          if ( v22 < 0 )
            goto LABEL_121;
        }
        if ( v59 )
        {
          KiStackAttachProcess((_KPROCESS *)BugCheckParameter1, 0LL, (__int64)v89);
          *(_WORD *)(Teb + 6126) = v59;
          v45 = *(_QWORD *)(BugCheckParameter1 + 1408);
          if ( v45 )
          {
            if ( *(_WORD *)(v45 + 8) == 0x8664 )
            {
              v86 = Teb + 0x2000;
              *(_WORD *)(Teb + 14318) = v59;
            }
            else
            {
              v87 = Teb + 0x2000;
              *(_WORD *)(Teb + 12234) = v59;
            }
          }
          v22 = 0;
          v57 = 0;
          goto LABEL_110;
        }
        goto LABEL_111;
      }
    }
    else
    {
      v22 = PspSetupUserStack(BugCheckParameter1, a5, v61, v39, v60);
      v57 = v22;
      if ( v22 >= 0 && (*(_DWORD *)(&v28[7].Size + 1) & 0x100000) != 0 )
      {
        v41 = (__int64)v61;
        v42 = PspSetupUserShadowStack(BugCheckParameter1, v60);
        goto LABEL_68;
      }
    }
    v41 = (__int64)v61;
    goto LABEL_73;
  }
  *(_QWORD *)&v28[69].Version = a7;
  *(_QWORD *)&v28[77].Version = a7;
  inited = KeInitThread(v28, 0LL, PspSystemThreadStartup);
  Teb = v63;
LABEL_113:
  v57 = inited;
  v22 = inited;
  if ( inited < 0 )
  {
    if ( !Teb || !v64 )
      goto LABEL_121;
    goto LABEL_120;
  }
  if ( a4 )
  {
    if ( (*(_DWORD *)(a4 + 4) & 0x8000) != 0 )
    {
      LOBYTE(v34) = a3;
      v22 = PspUmsInitThread(v28, v34, a4, Teb);
      v57 = v22;
      if ( v22 < 0 )
      {
LABEL_120:
        MmDeleteTeb((_KPROCESS *)BugCheckParameter1, Teb);
LABEL_121:
        if ( v64 && *v64 )
          PspDeleteUserStack(BugCheckParameter1, v34, v61, v64);
        DmaOperations = v28[97].DmaOperations;
        if ( DmaOperations )
        {
          ExFreePoolWithTag(DmaOperations, 0x63537350u);
          v28[97].DmaOperations = 0LL;
        }
        if ( *(_QWORD *)&v28[72].Version )
        {
          if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&v28[80], 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
            ExfTryToWakePushLock((volatile signed __int64 *)&v28[80]);
          KeAbPostRelease((ULONG_PTR)&v28[80]);
          v22 = v57;
          v28 = DmaAdapter;
        }
        if ( !*(_QWORD *)&v28[34].Version )
          ObfDereferenceObjectWithTag((PVOID)BugCheckParameter1, 0x72437350u);
        HalPutDmaAdapter(v28);
        return (unsigned int)v22;
      }
    }
  }
  *v88 = v28;
  return 0LL;
}
