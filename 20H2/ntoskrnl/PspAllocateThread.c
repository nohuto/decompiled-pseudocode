/*
 * XREFs of PspAllocateThread @ 0x14068411C
 * Callers:
 *     PspCreateThread @ 0x140686404 (PspCreateThread.c)
 *     NtCreateUserProcess @ 0x140690C20 (NtCreateUserProcess.c)
 *     PspCreatePicoThread @ 0x14090E7A0 (PspCreatePicoThread.c)
 * Callees:
 *     PoEnergyEstimationEnabled @ 0x140208A50 (PoEnergyEstimationEnabled.c)
 *     KeAbPostRelease @ 0x14021ED30 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140220A40 (ExAcquirePushLockExclusiveEx.c)
 *     HalPutDmaAdapter @ 0x1402211F0 (HalPutDmaAdapter.c)
 *     ObfDereferenceObjectWithTag @ 0x140221210 (ObfDereferenceObjectWithTag.c)
 *     PsQueryThreadStartAddress @ 0x14023F318 (PsQueryThreadStartAddress.c)
 *     ExfTryToWakePushLock @ 0x140242B40 (ExfTryToWakePushLock.c)
 *     KiUnstackDetachProcess @ 0x140268320 (KiUnstackDetachProcess.c)
 *     KeQuerySystemTimeUnsafe @ 0x1402D6A04 (KeQuerySystemTimeUnsafe.c)
 *     KeInitializeSemaphore @ 0x1402D6A20 (KeInitializeSemaphore.c)
 *     ExInitializePushLock @ 0x1402D6A50 (ExInitializePushLock.c)
 *     KeQueryMaximumGroupCount @ 0x1402D6A60 (KeQueryMaximumGroupCount.c)
 *     KeQuerySystemTimePrecise @ 0x1402D6A70 (KeQuerySystemTimePrecise.c)
 *     KiStackAttachProcess @ 0x1402D6FA0 (KiStackAttachProcess.c)
 *     KeSelectIdealProcessor @ 0x1402D8400 (KeSelectIdealProcessor.c)
 *     RtlGetExtendedContextLength @ 0x1402E6530 (RtlGetExtendedContextLength.c)
 *     KeSelectNodeForAffinity @ 0x1402F7D00 (KeSelectNodeForAffinity.c)
 *     __security_check_cookie @ 0x1403CFAF0 (__security_check_cookie.c)
 *     memset @ 0x140411300 (memset.c)
 *     RtlLocateExtendedFeature @ 0x14058DB10 (RtlLocateExtendedFeature.c)
 *     ObCreateObjectEx @ 0x140601B80 (ObCreateObjectEx.c)
 *     ExCreateHandleEx @ 0x140657360 (ExCreateHandleEx.c)
 *     MmDeleteTeb @ 0x140658D4C (MmDeleteTeb.c)
 *     MmCreateTeb @ 0x140685020 (MmCreateTeb.c)
 *     PspSetupUserStack @ 0x140685318 (PspSetupUserStack.c)
 *     PspWow64InitThread @ 0x1406AA374 (PspWow64InitThread.c)
 *     MmSecureVirtualMemoryEx @ 0x1406B3E40 (MmSecureVirtualMemoryEx.c)
 *     PspWow64SetupUserStack @ 0x1406D124C (PspWow64SetupUserStack.c)
 *     PspDeleteUserStack @ 0x1406DEE58 (PspDeleteUserStack.c)
 *     ExRaiseDatatypeMisalignment @ 0x140777E40 (ExRaiseDatatypeMisalignment.c)
 *     PspSetupUserShadowStack @ 0x14090CE2C (PspSetupUserShadowStack.c)
 *     PspUmsInitThread @ 0x14090CF9C (PspUmsInitThread.c)
 *     KeInitThread @ 0x1409922E0 (KeInitThread.c)
 *     ExAllocatePoolWithTag @ 0x1409B7010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1409B70B0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PspAllocateThread(
        ULONG_PTR BugCheckParameter1,
        ULONG_PTR a2,
        unsigned __int8 a3,
        __int64 a4,
        __int64 a5,
        __int64 *a6,
        __int64 a7,
        __int64 a8,
        int *a9,
        PADAPTER_OBJECT *a10,
        _BYTE *a11,
        _DMA_OPERATIONS **a12)
{
  unsigned __int8 v13; // bl
  __int64 v16; // r8
  struct _KTHREAD *CurrentThread; // r9
  __int64 v18; // rax
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
  __int64 v32; // rdx
  __int64 v33; // r8
  __int64 v34; // r9
  __int64 Handle; // rax
  volatile signed __int64 *v36; // rsi
  __int64 v37; // rdx
  int v38; // r8d
  __int16 v39; // dx
  __int16 v40; // cx
  __int16 v41; // ax
  _BYTE *v42; // rcx
  int v43; // ecx
  int v44; // eax
  __int64 Teb; // rbx
  __int64 v46; // rcx
  __int64 v47; // rax
  __int64 v48; // rcx
  _DMA_OPERATIONS *PoolWithTag; // rax
  char *ExtendedFeature; // rax
  __int64 v51; // rdx
  __int64 v52; // rcx
  _DMA_OPERATIONS **v53; // r8
  __int64 v54; // rcx
  int inited; // eax
  _DMA_OPERATIONS *DmaOperations; // rcx
  __int64 v57; // [rsp+20h] [rbp-168h]
  int v58; // [rsp+50h] [rbp-138h]
  char v59; // [rsp+54h] [rbp-134h]
  __int16 v60; // [rsp+54h] [rbp-134h]
  int v61; // [rsp+58h] [rbp-130h]
  __int64 v62; // [rsp+60h] [rbp-128h]
  PADAPTER_OBJECT DmaAdapter; // [rsp+68h] [rbp-120h] BYREF
  __int64 v64; // [rsp+70h] [rbp-118h] BYREF
  _BYTE *v65; // [rsp+78h] [rbp-110h]
  _DMA_OPERATIONS **p_DmaOperations; // [rsp+80h] [rbp-108h]
  SIZE_T NumberOfBytes; // [rsp+88h] [rbp-100h] BYREF
  __int64 v68; // [rsp+90h] [rbp-F8h]
  __int64 v69; // [rsp+98h] [rbp-F0h]
  __int64 v70; // [rsp+A0h] [rbp-E8h]
  struct _KTHREAD *v71; // [rsp+A8h] [rbp-E0h]
  ULONG_PTR v72; // [rsp+B0h] [rbp-D8h]
  __int64 v73; // [rsp+B8h] [rbp-D0h]
  __int64 v74; // [rsp+C0h] [rbp-C8h]
  ULONG_PTR BugCheckParameter2; // [rsp+C8h] [rbp-C0h]
  char v76; // [rsp+D0h] [rbp-B8h] BYREF
  int v77; // [rsp+D1h] [rbp-B7h]
  __int16 v78; // [rsp+D5h] [rbp-B3h]
  char v79; // [rsp+D7h] [rbp-B1h]
  __int64 v80; // [rsp+D8h] [rbp-B0h]
  __int64 v81; // [rsp+E0h] [rbp-A8h]
  __int64 v82; // [rsp+E8h] [rbp-A0h]
  int v83; // [rsp+F0h] [rbp-98h]
  int v84; // [rsp+F4h] [rbp-94h]
  int v85; // [rsp+F8h] [rbp-90h]
  int v86; // [rsp+FCh] [rbp-8Ch]
  __int64 v87; // [rsp+100h] [rbp-88h]
  __int64 v88; // [rsp+108h] [rbp-80h]
  PADAPTER_OBJECT *v89; // [rsp+110h] [rbp-78h]
  _BYTE v90[48]; // [rsp+118h] [rbp-70h] BYREF

  v13 = a3;
  v72 = BugCheckParameter1;
  BugCheckParameter2 = a2;
  v73 = a4;
  v74 = a5;
  v68 = (__int64)a6;
  v89 = a10;
  v65 = a11;
  v16 = (__int64)a12;
  p_DmaOperations = a12;
  memset(v90, 0, sizeof(v90));
  v64 = 0LL;
  v69 = 0LL;
  DmaAdapter = 0LL;
  v77 = 0;
  v78 = 0;
  v79 = 0;
  LODWORD(NumberOfBytes) = 0;
  CurrentThread = KeGetCurrentThread();
  v71 = CurrentThread;
  v61 = 0;
  if ( a6 )
    v18 = *a6;
  else
    v18 = 0LL;
  v70 = v18;
  v62 = v18;
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
    v61 = *(unsigned __int16 *)(*(_QWORD *)(v19 + 192) + 146LL) + 1;
    goto LABEL_18;
  }
  if ( v21 && *v21 )
  {
    v23 = KeSelectNodeForAffinity((a4 + 320) & -(__int64)((*(_DWORD *)(a4 + 4) & 0x1000) != 0));
    v61 = *(unsigned __int16 *)(v23 + 146) + 1;
    *(_DWORD *)(a4 + 4) = v20 | 0x4000;
    *(_DWORD *)(a4 + 252) = (unsigned __int16)KeSelectIdealProcessor(v23, v24, 0LL, 0LL);
    v16 = (__int64)p_DmaOperations;
    CurrentThread = v71;
LABEL_18:
    v13 = a3;
  }
  if ( (*(_DWORD *)(a4 + 4) & 0x8000) != 0
    && (*(_QWORD *)(BugCheckParameter1 + 1408) || (_KPROCESS *)BugCheckParameter1 != CurrentThread->Process) )
  {
    goto LABEL_24;
  }
LABEL_22:
  *(_DWORD *)(v16 + 384) = 0;
  *(_BYTE *)(v16 + 388) = v13;
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
      *(_DWORD *)(v16 + 384) = *(_DWORD *)(a2 + 24) & (v13 != 0 ? 7666 : 73714);
    }
  }
  else if ( a2 )
  {
    *(_DWORD *)(v16 + 384) = *(_DWORD *)(a2 + 24) & 0x11FF2;
  }
  v59 = PoEnergyEstimationEnabled();
  v25 = v59 != 0 ? 2400 : 2200;
  MaximumGroupCount = KeQueryMaximumGroupCount();
  LODWORD(p_DmaOperations) = 0;
  if ( MaximumGroupCount > 1 )
  {
    LODWORD(p_DmaOperations) = (v59 != 0 ? 2407 : 2207) & 0xFFFFFFF8;
    v25 = (_DWORD)p_DmaOperations + 8 * MaximumGroupCount;
  }
  v22 = ObCreateObjectEx(a3, PsThreadType, a2, a3, v57, v25, 0, v25, &DmaAdapter, 0LL);
  v58 = v22;
  if ( v22 < 0 )
    goto LABEL_34;
  v28 = DmaAdapter;
  memset(DmaAdapter, 0, v25);
  if ( v59 )
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
    KeQuerySystemTimePrecise((__int64 *)&v28[67], v32, v33, v34);
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
    v36 = (volatile signed __int64 *)BugCheckParameter2;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)BugCheckParameter2, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v36);
    KeAbPostRelease((ULONG_PTR)v36);
    v22 = -1073741670;
    v58 = -1073741670;
    v28 = DmaAdapter;
    goto LABEL_116;
  }
  if ( a5 )
  {
    v38 = *a9;
    v39 = (16 * (*a9 & 0x40)) | 8;
    if ( (*a9 & 2) == 0 )
      v39 = 16 * (v38 & 0x40);
    v40 = v39 | 0x2000;
    if ( (v38 & 0x80u) == 0 )
      v40 = v39;
    v41 = v40 | 0x4000;
    if ( (v38 & 0x100) == 0 )
      v41 = v40;
    v60 = v41;
    v42 = v65;
    if ( !v65 )
    {
      if ( !*(_QWORD *)(BugCheckParameter1 + 2240) )
      {
        Teb = (__int64)v71->Teb;
        v64 = Teb;
        *(_QWORD *)&v28[69].Version = PsQueryThreadStartAddress((__int64)v71, 1);
        *(_QWORD *)&v28[77].Version = v71[1].ApcState.ApcListHead[0].Blink;
        *(_DWORD *)(&v28[81].Size + 1) |= 0x10u;
        if ( (*(_DWORD *)(BugCheckParameter1 + 2516) & 0x4000) != 0
          && (*(_DWORD *)(a5 + 48) & 0x100040) == 0x100040
          && (*(_DWORD *)(*(int *)(a5 + 1248) + a5 + 1232) & 0x800LL) != 0 )
        {
          ExtendedFeature = RtlLocateExtendedFeature((_DWORD *)(a5 + 1232), 0xBu, 0LL);
          if ( ExtendedFeature )
          {
            if ( (*ExtendedFeature & 1) != 0 && *((_QWORD *)ExtendedFeature + 1) )
              *(_DWORD *)(&v28[7].Size + 1) |= 0x100000u;
          }
        }
        v51 = *(_QWORD *)(BugCheckParameter1 + 1408);
        if ( v51 )
        {
          v52 = 14392LL;
          if ( *(_WORD *)(v51 + 8) != 0x8664 )
            v52 = 12288LL;
          v68 = v52;
        }
        else
        {
          v68 = 6200LL;
        }
        KiStackAttachProcess((_KPROCESS *)BugCheckParameter1, 0, (__int64)v90);
        if ( MmSecureVirtualMemoryEx(Teb, v68, 4LL) )
        {
          v53 = p_DmaOperations;
          *(_OWORD *)(Teb + 64) = *(_OWORD *)p_DmaOperations;
          *(_OWORD *)(Teb + 2008) = *(_OWORD *)v53;
          *(_DWORD *)(Teb + 6044) = 0;
          *(_DWORD *)(Teb + 6120) = 0;
          *(_WORD *)(Teb + 6126) &= 0x62Cu;
          *(_WORD *)(Teb + 6126) |= v60 | 0x40;
          v54 = *(_QWORD *)(BugCheckParameter1 + 1408);
          if ( v54 )
          {
            if ( *(_WORD *)(v54 + 8) == 0x8664 )
            {
              v87 = Teb + 0x2000;
              *(_QWORD *)(Teb + 8256) = *v53;
              *(_QWORD *)(Teb + 8264) = *(_QWORD *)&v28[72].Version;
              *(_QWORD *)(Teb + 10200) = *v53;
              *(_QWORD *)(Teb + 10208) = *(_QWORD *)&v28[72].Version;
              *(_DWORD *)(Teb + 14236) = 0;
              *(_DWORD *)(Teb + 14312) = 0;
              *(_WORD *)(Teb + 14318) &= 0x62Cu;
              *(_WORD *)(Teb + 14318) |= v60 | 0x40;
            }
            else
            {
              v88 = Teb + 0x2000;
              v83 = *(_DWORD *)v53;
              *(_DWORD *)(Teb + 8224) = v83;
              v84 = *(_DWORD *)&v28[72].Version;
              *(_DWORD *)(Teb + 8228) = v84;
              v85 = *(_DWORD *)v53;
              *(_DWORD *)(Teb + 9908) = v85;
              v86 = *(_DWORD *)&v28[72].Version;
              *(_DWORD *)(Teb + 9912) = v86;
              *(_DWORD *)(Teb + 12188) = 0;
              *(_DWORD *)(Teb + 12228) = 0;
              *(_WORD *)(Teb + 12234) &= 0x62Cu;
              *(_WORD *)(Teb + 12234) |= v60 | 0x40;
            }
          }
        }
        else
        {
          v22 = -1073741503;
          v58 = -1073741503;
        }
LABEL_105:
        KiUnstackDetachProcess((__int64)v90, 0);
        if ( v22 < 0 )
          goto LABEL_116;
        goto LABEL_106;
      }
      v47 = *(_QWORD *)(a5 + 248);
      *(_QWORD *)&v28[69].Version = v47;
      *(_QWORD *)&v28[77].Version = v47;
      v48 = v68;
      v28[94].DmaOperations = *(_DMA_OPERATIONS **)(v68 + 8);
      *(_QWORD *)&v28[95].Version = *(_QWORD *)(v48 + 16);
      _interlockedbittestandset((volatile signed __int32 *)v28, 0x1Au);
      RtlGetExtendedContextLength(MEMORY[0xFFFFF780000003D8] != 0LL ? 1048671 : 1048607, (__int64)&NumberOfBytes);
      PoolWithTag = (_DMA_OPERATIONS *)ExAllocatePoolWithTag(PagedPool, (unsigned int)NumberOfBytes, 0x63537350u);
      v28 = DmaAdapter;
      DmaAdapter[97].DmaOperations = PoolWithTag;
      if ( !PoolWithTag )
      {
        v22 = -1073741670;
        v58 = -1073741670;
        goto LABEL_116;
      }
      Teb = v64;
LABEL_106:
      inited = KeInitThread(v28, 0LL, PspUserThreadStartup);
      goto LABEL_108;
    }
    if ( (*(_DWORD *)(BugCheckParameter1 + 2516) & 0x4000) != 0 && (!a4 || (*(_DWORD *)(a4 + 4) & 0x8000) == 0) )
      *(_DWORD *)(&v28[7].Size + 1) |= 0x100000u;
    if ( *(_QWORD *)(BugCheckParameter1 + 1408) )
    {
      v76 = 0;
      v81 = 0x8000LL;
      v82 = 0x40000LL;
      v80 = 0LL;
      v22 = PspSetupUserStack(BugCheckParameter1, a5, v62, &v76, v61);
      v58 = v22;
      if ( v22 >= 0 )
      {
        v43 = (int)v65;
        *v65 ^= (v76 ^ *v65) & 2;
        v44 = PspWow64SetupUserStack(BugCheckParameter1, v37, v62, v43, v61);
LABEL_68:
        v22 = v44;
        v58 = v44;
      }
    }
    else
    {
      v22 = PspSetupUserStack(BugCheckParameter1, a5, v62, v42, v61);
      v58 = v22;
      if ( v22 >= 0 && (*(_DWORD *)(&v28[7].Size + 1) & 0x100000) != 0 )
      {
        v44 = PspSetupUserShadowStack(BugCheckParameter1, v61);
        goto LABEL_68;
      }
    }
    if ( v22 < 0 )
      goto LABEL_116;
    v22 = MmCreateTeb(BugCheckParameter1, (__int64)&v64);
    v58 = v22;
    if ( v22 < 0 )
      goto LABEL_116;
    *(_QWORD *)&v28[69].Version = *(_QWORD *)(a5 + 248);
    *(_QWORD *)&v28[77].Version = *(_QWORD *)(a5 + 128);
    Teb = v64;
    if ( *(_QWORD *)(BugCheckParameter1 + 1408) )
    {
      v22 = PspWow64InitThread(BugCheckParameter1);
      v58 = v22;
      if ( v22 < 0 )
        goto LABEL_116;
    }
    if ( v60 )
    {
      KiStackAttachProcess((_KPROCESS *)BugCheckParameter1, 0, (__int64)v90);
      *(_WORD *)(Teb + 6126) = v60;
      v46 = *(_QWORD *)(BugCheckParameter1 + 1408);
      if ( v46 )
      {
        if ( *(_WORD *)(v46 + 8) == 0x8664 )
        {
          v87 = Teb + 0x2000;
          *(_WORD *)(Teb + 14318) = v60;
        }
        else
        {
          v88 = Teb + 0x2000;
          *(_WORD *)(Teb + 12234) = v60;
        }
      }
      v22 = 0;
      v58 = 0;
      goto LABEL_105;
    }
    goto LABEL_106;
  }
  *(_QWORD *)&v28[69].Version = a7;
  *(_QWORD *)&v28[77].Version = a7;
  inited = KeInitThread(v28, 0LL, PspSystemThreadStartup);
  Teb = v64;
LABEL_108:
  v58 = inited;
  v22 = inited;
  if ( inited < 0 )
  {
    if ( !Teb || !v65 )
      goto LABEL_116;
    goto LABEL_115;
  }
  if ( a4 )
  {
    if ( (*(_DWORD *)(a4 + 4) & 0x8000) != 0 )
    {
      LOBYTE(v37) = a3;
      v22 = PspUmsInitThread(v28, v37, a4, Teb);
      v58 = v22;
      if ( v22 < 0 )
      {
LABEL_115:
        MmDeleteTeb((_KPROCESS *)BugCheckParameter1, Teb);
LABEL_116:
        if ( v65 && *v65 )
          PspDeleteUserStack(BugCheckParameter1, v37, v62, v65);
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
          v22 = v58;
          v28 = DmaAdapter;
        }
        if ( !*(_QWORD *)&v28[34].Version )
          ObfDereferenceObjectWithTag((PVOID)BugCheckParameter1, 0x72437350u);
        HalPutDmaAdapter(v28);
        return (unsigned int)v22;
      }
    }
  }
  *v89 = v28;
  return 0LL;
}
