/*
 * XREFs of MiInitNucleus @ 0x140AF47DC
 * Callers:
 *     MmInitSystem @ 0x140B07AB0 (MmInitSystem.c)
 * Callees:
 *     MiWritePteShadow @ 0x1402294F0 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140229550 (MiPteHasShadow.c)
 *     ExInitializeNPagedLookasideListInternal @ 0x140250C50 (ExInitializeNPagedLookasideListInternal.c)
 *     MiAllocatePool @ 0x1402828F0 (MiAllocatePool.c)
 *     RtlRaiseStatus @ 0x1402D37A0 (RtlRaiseStatus.c)
 *     KeQueryPerformanceCounter @ 0x1403027F0 (KeQueryPerformanceCounter.c)
 *     MiReservePtes @ 0x1403095B0 (MiReservePtes.c)
 *     ExAllocatePoolMm @ 0x14030B860 (ExAllocatePoolMm.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140317A10 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x140317A80 (MiPteInShadowRange.c)
 *     KeFlushCurrentTbOnly @ 0x1403AD034 (KeFlushCurrentTbOnly.c)
 *     MiInitializePageFaultResources @ 0x1403B7B80 (MiInitializePageFaultResources.c)
 *     MiFreeUnusedPfnPages @ 0x1403B7CB0 (MiFreeUnusedPfnPages.c)
 *     ExInitializePoolHeapManagement @ 0x1403C3FA0 (ExInitializePoolHeapManagement.c)
 *     MiInitializeCommitment @ 0x1403CF398 (MiInitializeCommitment.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     MiInitializeSections @ 0x14081D9C8 (MiInitializeSections.c)
 *     MiInitializeWsSwapping @ 0x14081DB00 (MiInitializeWsSwapping.c)
 *     MiCreateNodeLists @ 0x14081DC70 (MiCreateNodeLists.c)
 *     MiComputeNodeMemory @ 0x14081DDB0 (MiComputeNodeMemory.c)
 *     MiConvertInitialMemoryBlock @ 0x14081E03C (MiConvertInitialMemoryBlock.c)
 *     MiCreatePfnBitMaps @ 0x14082ACF0 (MiCreatePfnBitMaps.c)
 *     MmInitializeProcessor @ 0x140A59E20 (MmInitializeProcessor.c)
 *     MxCreatePfns @ 0x140AF3514 (MxCreatePfns.c)
 *     MxRelocatePageTables @ 0x140AF35B8 (MxRelocatePageTables.c)
 *     MxMarkValidMappings @ 0x140AF39BC (MxMarkValidMappings.c)
 *     MxZeroPageTablePfns @ 0x140AF43D4 (MxZeroPageTablePfns.c)
 *     MiMarkLargePageRanges @ 0x140AF463C (MiMarkLargePageRanges.c)
 *     MiCreatePfnDatabase @ 0x140AF4DB0 (MiCreatePfnDatabase.c)
 *     MiSwitchToPfns @ 0x140AF522C (MiSwitchToPfns.c)
 *     MiFindLargestLoaderDescriptor @ 0x140AF5AE4 (MiFindLargestLoaderDescriptor.c)
 *     MiCreateHugeIoRanges @ 0x140AF6988 (MiCreateHugeIoRanges.c)
 *     MiClearLoaderDescriptorFlags @ 0x140AF6A0C (MiClearLoaderDescriptorFlags.c)
 *     MiFillPfnGaps @ 0x140AF6A74 (MiFillPfnGaps.c)
 *     MiInitializeGapFrames @ 0x140AF6B44 (MiInitializeGapFrames.c)
 *     MmInitializeMemoryLimits @ 0x140AF740C (MmInitializeMemoryLimits.c)
 *     MiInitializeKernelStacks @ 0x140B04910 (MiInitializeKernelStacks.c)
 *     MiBuildPagedPool @ 0x140B0675C (MiBuildPagedPool.c)
 *     MiInitializeNonPagedPool @ 0x140B0681C (MiInitializeNonPagedPool.c)
 *     MiInitializeSystemPtes @ 0x140B06A84 (MiInitializeSystemPtes.c)
 *     MiInitializeDummyPages @ 0x140B098F0 (MiInitializeDummyPages.c)
 *     MiZeroBootMappings @ 0x140B1AE4C (MiZeroBootMappings.c)
 *     MiMemoryLicense @ 0x140B1B688 (MiMemoryLicense.c)
 *     MiConstructLoaderMemoryTree @ 0x140B1D48C (MiConstructLoaderMemoryTree.c)
 *     MiInitializeDecayPfns @ 0x140B1D550 (MiInitializeDecayPfns.c)
 *     MiCheckLargePageOk @ 0x140B21BAC (MiCheckLargePageOk.c)
 *     MiRemoveLargeFreeLoaderDescriptors @ 0x140B2920C (MiRemoveLargeFreeLoaderDescriptors.c)
 *     MiInitializeDynamicVa @ 0x140B29DA0 (MiInitializeDynamicVa.c)
 *     MiCreateTopLevelUltraMappings @ 0x140B2A068 (MiCreateTopLevelUltraMappings.c)
 *     MiSplitMultiNodeFreeDescriptors @ 0x140B2B244 (MiSplitMultiNodeFreeDescriptors.c)
 *     MiInitializeSystemPteTracker @ 0x140B2B698 (MiInitializeSystemPteTracker.c)
 *     MiInitializeZeroingAttributes @ 0x140B2B6E8 (MiInitializeZeroingAttributes.c)
 *     MiMapDummyPages @ 0x140B2D454 (MiMapDummyPages.c)
 *     MiExamineHalVa @ 0x140B2D91C (MiExamineHalVa.c)
 *     MiInitializeBootDefaults @ 0x140B2DC08 (MiInitializeBootDefaults.c)
 *     MiInitializeSystemDefaults @ 0x140B2E82C (MiInitializeSystemDefaults.c)
 *     MiCreateResidentPfnTemplate @ 0x140B2E9C0 (MiCreateResidentPfnTemplate.c)
 *     MiProtectSharedUserPage @ 0x140B31048 (MiProtectSharedUserPage.c)
 *     MiInitializeNumaRangesTemporary @ 0x140B3111C (MiInitializeNumaRangesTemporary.c)
 *     MiInitializeChannelRangesTemporary @ 0x140B3142C (MiInitializeChannelRangesTemporary.c)
 */

char __fastcall MiInitNucleus(ULONG_PTR BugCheckParameter2)
{
  unsigned __int64 v2; // rax
  _KPROCESS *Process; // rdx
  __int16 v4; // cx
  ULONG_PTR v5; // rax
  _QWORD *v6; // r14
  unsigned __int64 v7; // rbx
  int v8; // ebp
  LARGE_INTEGER PerformanceCounter; // rax
  unsigned int v10; // ebx
  unsigned int v11; // ebx
  _QWORD *PoolMm; // rax
  _QWORD *v13; // rdx
  _QWORD *v14; // rcx
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rcx
  unsigned __int64 i; // rax
  __int64 v19; // rcx
  __int64 v20; // rax
  char *v21; // rax
  char *v22; // rbx
  bool v24; // zf
  unsigned int v25; // esi
  PVOID Pool; // rax
  void *v27; // rbx
  unsigned int v28; // esi
  PVOID v29; // rax
  void *v30; // rbx
  _BYTE v31[48]; // [rsp+48h] [rbp-50h] BYREF

  if ( (_DWORD)dword_140C52AB8 )
    KeBugCheckEx(0x1Au, 0x600uLL, (unsigned int)dword_140C52AB8, 0LL, 0LL);
  MiConstructLoaderMemoryTree();
  qword_140D687C8 = KeQueryPerformanceCounter(0LL).QuadPart;
  MiInitializeSystemDefaults(BugCheckParameter2);
  v2 = MI_READ_PTE_LOCK_FREE(0xFFFFF6FB7DBEDF68uLL);
  Process = KeGetCurrentThread()->ApcState.Process;
  v4 = __readcr3();
  Process->DirectoryTableBase = (((v2 >> 12) & 0xFFFFFFFFFFLL) << 12) | v4 & 0xFFF;
  MiLowHalVa = MiExamineHalVa();
  MiInitializeZeroingAttributes();
  MiInitializeBootDefaults(BugCheckParameter2);
  MiInitializeSystemPteTracker();
  qword_140C53158 = 0LL;
  xmmword_140C53100 = 0LL;
  qword_140C53140 = 1024LL;
  MiInitializeDynamicVa();
  if ( dword_140D051DC == 6881367 )
  {
    MEMORY[0xFFFFF78000000264] = 1;
    dword_140D051DC = 0;
  }
  else
  {
    MEMORY[0xFFFFF78000000264] = (dword_140D051DC != 6357068) + 2;
    dword_140D051DC = 1;
  }
  MiInitializeNumaRangesTemporary();
  MiInitializeChannelRangesTemporary();
  MiSplitMultiNodeFreeDescriptors(BugCheckParameter2);
  MiMemoryLicense(BugCheckParameter2);
  qword_140D687D0 = KeQueryPerformanceCounter(0LL).QuadPart;
  MiRemoveLargeFreeLoaderDescriptors(BugCheckParameter2);
  qword_140D687D8 = KeQueryPerformanceCounter(0LL).QuadPart;
  if ( !(unsigned int)MiFindLargestLoaderDescriptor(BugCheckParameter2) )
  {
    byte_140C52B32 = 3;
    return 0;
  }
  MiCheckLargePageOk(BugCheckParameter2);
  qword_140C507D0 = -1LL;
  MiProtectSharedUserPage();
  MiCreateResidentPfnTemplate(&xmmword_140C51E00);
  xmmword_140C51E50 = xmmword_140C51E20;
  xmmword_140C51E30 = xmmword_140C51E00;
  xmmword_140C51E40 = xmmword_140C51E10;
  BYTE2(xmmword_140C51E50) = _mm_cvtsi128_si32(_mm_srli_si128((__m128i)xmmword_140C51E20, 2)) & 0xF8 | 5;
  MxMarkValidMappings(0xFFFFF6FB7DBED800uLL, 0xFFFFF6FB7DBEDFF8uLL, 3, BugCheckParameter2);
  qword_140D687E0 = KeQueryPerformanceCounter(0LL).QuadPart;
  if ( !(unsigned int)MiCreatePfnDatabase(BugCheckParameter2) )
  {
    byte_140C52B32 = 6;
    return 0;
  }
  qword_140D687E8 = KeQueryPerformanceCounter(0LL).QuadPart;
  MxZeroPageTablePfns();
  MxCreatePfns(BugCheckParameter2);
  KeFlushCurrentTbOnly(0);
  qword_140D687F0 = KeQueryPerformanceCounter(0LL).QuadPart;
  MiSwitchToPfns(BugCheckParameter2);
  qword_140D687F8 = KeQueryPerformanceCounter(0LL).QuadPart;
  MxRelocatePageTables(BugCheckParameter2);
  qword_140D68800 = KeQueryPerformanceCounter(0LL).QuadPart;
  MiZeroBootMappings();
  MiInitializeSections((__int64)&MiSystemPartition);
  MiInitializeCommitment((__int64)&MiSystemPartition);
  MiInitializeDummyPages();
  if ( !(unsigned int)MiInitializeSystemPtes() )
  {
    byte_140C52B32 = 9;
    return 0;
  }
  v5 = MiReservePtes((__int64)&qword_140C534C0, 1u);
  qword_140C52BC8 = v5;
  v6 = (_QWORD *)v5;
  if ( !v5 )
  {
    byte_140C52B32 = 11;
    return 0;
  }
  v7 = ZeroPte;
  v8 = 0;
  if ( MiPteInShadowRange(v5) )
  {
    if ( (unsigned int)MiPteHasShadow() )
    {
      v8 = 1;
      if ( HIBYTE(word_140C51864) )
        goto LABEL_9;
      v24 = (ZeroPte & 1) == 0;
    }
    else
    {
      if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) == 0 )
        goto LABEL_9;
      v24 = (ZeroPte & 1) == 0;
    }
    if ( !v24 )
      v7 = ZeroPte | 0x8000000000000000uLL;
  }
LABEL_9:
  *v6 = v7;
  if ( v8 )
    MiWritePteShadow((__int64)v6, v7);
  if ( !(unsigned int)MiInitializeNonPagedPool() )
  {
    byte_140C52B32 = 7;
    return 0;
  }
  if ( !(unsigned int)MiMapDummyPages() )
  {
    byte_140C52B32 = 5;
    return 0;
  }
  PerformanceCounter = KeQueryPerformanceCounter(0LL);
  v10 = (unsigned int)MiFlags >> 15;
  qword_140D68800 = PerformanceCounter.QuadPart;
  qword_140D68808 = KeQueryPerformanceCounter(0LL).QuadPart;
  if ( (int)ExInitializePoolHeapManagement((unsigned __int8)(v10 & 1) << 10) < 0 )
  {
    byte_140C52B32 = 2;
    return 0;
  }
  MiInitializeDecayPfns();
  if ( ((unsigned __int8)&stru_140C52E60 & 0xF) != 0 )
    RtlRaiseStatus(-2147483646);
  stru_140C52E60 = 0LL;
  v11 = 0;
  if ( KeNumberNodes )
  {
    while ( 1 )
    {
      PoolMm = ExAllocatePoolMm(64LL, 0x140uLL, 0x6F49694Du, v11 | 0x80000000);
      v13 = PoolMm;
      if ( !PoolMm )
        break;
      v14 = PoolMm + 17;
      v15 = 4LL;
      do
      {
        v14[2] = 0LL;
        v14[1] = v14;
        *v14 = v14;
        v14 += 4;
        --v15;
      }
      while ( v15 );
      v13[35] = 0LL;
      v13[34] = v13 + 33;
      v13[33] = v13 + 33;
      v16 = v11++;
      v17 = 120 * v16;
      LODWORD(v16) = (unsigned __int16)KeNumberNodes;
      *(_QWORD *)(qword_140C506E0 + v17 + 112) = v13;
      if ( v11 >= (unsigned int)v16 )
        goto LABEL_20;
    }
    byte_140C52B32 = 4;
    return 0;
  }
LABEL_20:
  if ( !(unsigned int)MiInitializeKernelStacks() )
  {
    byte_140C52B32 = 20;
    return 0;
  }
  if ( !(unsigned int)MiCreateTopLevelUltraMappings() )
    goto LABEL_66;
  if ( !(unsigned int)MmInitializeProcessor((__int64)KeGetCurrentPrcb()) )
  {
    byte_140C52B32 = 10;
    return 0;
  }
  if ( !(unsigned int)MiFillPfnGaps() )
  {
    byte_140C52B32 = 18;
    return 0;
  }
  MiFreeUnusedPfnPages(0LL);
  for ( i = 0LL; i < 0x2B; ++i )
  {
    v19 = 0x5C5C0C00048LL;
    v31[i] = !_bittest64(&v19, i);
  }
  qword_140D68810 = KeQueryPerformanceCounter(0LL).QuadPart;
  v20 = MmInitializeMemoryLimits(BugCheckParameter2, v31);
  if ( !v20 || (v21 = MiConvertInitialMemoryBlock((__int64)&MiSystemPartition, v20), (v22 = v21) == 0LL) )
  {
    byte_140C52B32 = 12;
    return 0;
  }
  qword_140C54FA0 = (__int64)MiCreateNodeLists((__int64)&MiSystemPartition, (__int64)v21);
  if ( !qword_140C54FA0 )
  {
    byte_140C52B32 = 13;
    return 0;
  }
  MiComputeNodeMemory(&MiSystemPartition, 1);
  if ( !(unsigned int)MiInitializeGapFrames(-1LL, &qword_140C532B8) )
  {
LABEL_66:
    byte_140C52B32 = 19;
    return 0;
  }
  qword_140D68818 = KeQueryPerformanceCounter(0LL).QuadPart;
  if ( !(unsigned int)MiInitializePageFaultResources() )
  {
    byte_140C52B32 = 21;
    return 0;
  }
  if ( !(unsigned int)MiBuildPagedPool() )
    return 0;
  MmPhysicalMemoryBlock = v22;
  if ( !(unsigned int)MiCreatePfnBitMaps((__int64)&MiSystemPartition, v22) )
  {
    byte_140C52B32 = 15;
    return 0;
  }
  qword_140D68820 = KeQueryPerformanceCounter(0LL).QuadPart;
  MiMarkLargePageRanges(BugCheckParameter2);
  qword_140D68828 = KeQueryPerformanceCounter(0LL).QuadPart;
  MiClearLoaderDescriptorFlags(BugCheckParameter2);
  MiCreateHugeIoRanges(BugCheckParameter2);
  MiInitializeWsSwapping(&MiSystemPartition);
  if ( qword_140C50708 != &unk_140C506E8 )
  {
    v25 = 16 * (dword_140C506C8 + 2);
    Pool = MiAllocatePool(64, v25, 0x20206D4Du);
    v27 = Pool;
    if ( Pool )
    {
      memmove(Pool, qword_140C50708, v25);
      qword_140C50708 = v27;
    }
  }
  if ( qword_140C50710 )
  {
    v28 = 16 * (dword_140C506D4 + 2);
    v29 = MiAllocatePool(64, v28, 0x20206D4Du);
    v30 = v29;
    if ( v29 )
    {
      memmove(v29, qword_140C50710, v28);
      qword_140C50710 = v30;
    }
  }
  ExInitializeNPagedLookasideListInternal((__int64)&stru_140C52E80, 0LL, 0LL, 512, 144, 1800170829, 0, 0);
  return 1;
}
