/*
 * XREFs of MiInitNucleus @ 0x140A43414
 * Callers:
 *     MmInitSystem @ 0x140A52764 (MmInitSystem.c)
 * Callees:
 *     MiPteInShadowRange @ 0x14021EA50 (MiPteInShadowRange.c)
 *     MiAllocatePool @ 0x14022D320 (MiAllocatePool.c)
 *     KeQueryPerformanceCounter @ 0x140266AF0 (KeQueryPerformanceCounter.c)
 *     MiReservePtes @ 0x140285DC0 (MiReservePtes.c)
 *     RtlRaiseStatus @ 0x1402FB1C0 (RtlRaiseStatus.c)
 *     MiWritePteShadow @ 0x140313F2C (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140313F8C (MiPteHasShadow.c)
 *     ExInitializeNPagedLookasideListInternal @ 0x14037A500 (ExInitializeNPagedLookasideListInternal.c)
 *     MiInitializeCommitment @ 0x1403BEDD4 (MiInitializeCommitment.c)
 *     ExInitializePoolHeapManagement @ 0x1403C31C4 (ExInitializePoolHeapManagement.c)
 *     MiInitializePageFaultResources @ 0x1403C9DD8 (MiInitializePageFaultResources.c)
 *     MiFreeUnusedPfnPages @ 0x1403CD700 (MiFreeUnusedPfnPages.c)
 *     __security_check_cookie @ 0x1403CFAF0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140405F40 (_guard_dispatch_icall.c)
 *     memmove @ 0x140411040 (memmove.c)
 *     __report_rangecheckfailure @ 0x1404B4AAC (__report_rangecheckfailure.c)
 *     MiInitializeSections @ 0x14078E938 (MiInitializeSections.c)
 *     MiInitializeWsSwapping @ 0x14078EA70 (MiInitializeWsSwapping.c)
 *     MiCreateNodeLists @ 0x14078EBD0 (MiCreateNodeLists.c)
 *     MiCreatePfnBitMaps @ 0x1407B4884 (MiCreatePfnBitMaps.c)
 *     MiConvertInitialMemoryBlock @ 0x1407C7494 (MiConvertInitialMemoryBlock.c)
 *     MiComputeNodeMemory @ 0x1407C8DE0 (MiComputeNodeMemory.c)
 *     MmInitializeProcessor @ 0x1409A1E3C (MmInitializeProcessor.c)
 *     MiCreateResidentBasePfnTemplate @ 0x140A3BCD4 (MiCreateResidentBasePfnTemplate.c)
 *     MiCreateResidentPfnTemplate @ 0x140A3BD08 (MiCreateResidentPfnTemplate.c)
 *     MmInitializeMemoryLimits @ 0x140A3CB20 (MmInitializeMemoryLimits.c)
 *     MiMarkLargePageRanges @ 0x140A43268 (MiMarkLargePageRanges.c)
 *     MiCreatePfnDatabase @ 0x140A43B9C (MiCreatePfnDatabase.c)
 *     MiSwitchToPfns @ 0x140A43FB8 (MiSwitchToPfns.c)
 *     MiFindLargestLoaderDescriptor @ 0x140A44900 (MiFindLargestLoaderDescriptor.c)
 *     MiRemoveLargeFreeLoaderDescriptors @ 0x140A44AE4 (MiRemoveLargeFreeLoaderDescriptors.c)
 *     MiInitializeKernelStacks @ 0x140A4BE70 (MiInitializeKernelStacks.c)
 *     MiInitializeSystemPtes @ 0x140A4CC24 (MiInitializeSystemPtes.c)
 *     MiInitializeNonPagedPool @ 0x140A4CDFC (MiInitializeNonPagedPool.c)
 *     MiBuildPagedPool @ 0x140A4D074 (MiBuildPagedPool.c)
 *     MiInitializeDummyPages @ 0x140A5433C (MiInitializeDummyPages.c)
 *     MiZeroBootMappings @ 0x140A54FF8 (MiZeroBootMappings.c)
 *     MiInitializePfnsForValidMappings @ 0x140A55068 (MiInitializePfnsForValidMappings.c)
 *     MxRelocatePageTables @ 0x140A55110 (MxRelocatePageTables.c)
 *     MiFillPfnGaps @ 0x140A695CC (MiFillPfnGaps.c)
 *     MiInitializeGapFrames @ 0x140A6961C (MiInitializeGapFrames.c)
 *     MiMemoryLicense @ 0x140A6A21C (MiMemoryLicense.c)
 *     MiCheckLargePageOk @ 0x140A6A708 (MiCheckLargePageOk.c)
 *     MiInitializeDecayPfns @ 0x140A6AC18 (MiInitializeDecayPfns.c)
 *     MiInitializeDynamicVa @ 0x140A6ADFC (MiInitializeDynamicVa.c)
 *     MiCreateTopLevelUltraMappings @ 0x140A719C4 (MiCreateTopLevelUltraMappings.c)
 *     MiMapDummyPages @ 0x140A7404C (MiMapDummyPages.c)
 *     MiExamineHalVa @ 0x140A745C4 (MiExamineHalVa.c)
 *     MiInitializeBootDefaults @ 0x140A7468C (MiInitializeBootDefaults.c)
 *     MiInitializeSystemDefaults @ 0x140A74F48 (MiInitializeSystemDefaults.c)
 *     MiProtectSharedUserPage @ 0x140A76E38 (MiProtectSharedUserPage.c)
 *     MiInitializeChannelRangesTemporary @ 0x140A77254 (MiInitializeChannelRangesTemporary.c)
 */

char __fastcall MiInitNucleus(ULONG_PTR BugCheckParameter2)
{
  __int64 v2; // rbx
  struct _LIST_ENTRY *Flink; // rdx
  struct _LIST_ENTRY *Blink; // rax
  __int64 v5; // rdx
  _KPROCESS *Process; // rcx
  __int16 v7; // ax
  int *v8; // rcx
  unsigned int i; // eax
  unsigned int v10; // eax
  _DWORD *v11; // rcx
  _QWORD *v12; // rax
  __int64 v13; // rcx
  int v14; // eax
  __int64 v15; // rdx
  __int64 v16; // rcx
  char *v17; // rax
  unsigned int v18; // r8d
  char v20; // bl
  ULONG_PTR v21; // rax
  _QWORD *v22; // rdi
  unsigned __int64 v23; // rbx
  int v24; // esi
  __int64 v25; // r8
  unsigned __int64 j; // rax
  __int64 v27; // rcx
  char v28; // cl
  _QWORD *v29; // rax
  char *v30; // rax
  char *v31; // rbx
  __int64 v32; // r8
  _DWORD *v33; // r9
  unsigned int v34; // edi
  PVOID Pool; // rax
  void *v36; // rbx
  unsigned int v37; // edi
  PVOID v38; // rax
  void *v39; // rbx
  _QWORD v40[2]; // [rsp+40h] [rbp-78h] BYREF
  _BYTE v41[48]; // [rsp+50h] [rbp-68h] BYREF

  v40[1] = &MiVisiblePartition;
  MiInitializeSystemDefaults();
  v2 = MEMORY[0xFFFFF6FB7DBEDF68];
  if ( MiPteInShadowRange(0xFFFFF6FB7DBEDF68uLL)
    && (unsigned int)MiPteHasShadow()
    && (v2 & 1) != 0
    && ((v2 & 0x20) == 0 || (v2 & 0x42) == 0) )
  {
    Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
    if ( Flink )
    {
      Blink = Flink[246].Blink;
      v5 = v2 | 0x20;
      if ( ((unsigned __int8)Blink & 0x20) == 0 )
        v5 = v2;
      v2 = v5;
      if ( ((unsigned __int8)Blink & 0x42) != 0 )
        v2 = v5 | 0x42;
    }
  }
  Process = KeGetCurrentThread()->ApcState.Process;
  v7 = __readcr3();
  Process->DirectoryTableBase = v2 & 0xFFFFFFFFF000LL | v7 & 0xFFF;
  MiLowHalVa = MiExamineHalVa();
  v8 = dword_140C4DE18;
  for ( i = 0; i < 3; ++i )
  {
    *v8 = i;
    v8[1] = i;
    v8[2] = i;
    v8[3] = i;
    v8 += 4;
  }
  v10 = 0;
  v11 = &unk_140C4DE48;
  do
    *v11++ = v10++;
  while ( v10 <= 3 );
  dword_140C4DE54 = 1;
  MiInitializeBootDefaults(BugCheckParameter2);
  if ( ((unsigned __int8)&stru_140C4E940 & 0xF) != 0 )
    goto LABEL_86;
  qword_140C4E950 = 0LL;
  stru_140C4E940 = 0LL;
  v12 = &unk_140C4F6B0;
  v13 = 16LL;
  do
  {
    v12[1] = v12;
    *v12 = v12;
    v12 += 2;
    --v13;
  }
  while ( v13 );
  qword_140C4EB20 = 0LL;
  qword_140C4EAD8 = 0LL;
  qword_140C4EAE8 = (__int64)&qword_140C4EAE0;
  qword_140C4EAE0 = (__int64)&qword_140C4EAE0;
  xmmword_140C4EAC8 = 0LL;
  MiInitializeDynamicVa();
  if ( dword_140CFB19C == 6881367 )
  {
    MEMORY[0xFFFFF78000000264] = 1;
    dword_140CFB19C = 0;
  }
  else
  {
    MEMORY[0xFFFFF78000000264] = (dword_140CFB19C != 6357068) + 2;
    dword_140CFB19C = 1;
  }
  v40[0] = 0LL;
  qword_140C4DD38 = -1LL;
  v14 = ((__int64 (__fastcall *)(__int64, __int64, _QWORD *, _QWORD))off_140C00A68[0])(30LL, 16LL, v40, 0LL);
  v16 = (__int64)&unk_140C4DD28;
  if ( v14 >= 0 && (v17 = (char *)v40[0]) != 0LL )
  {
    v15 = 0LL;
    if ( *(_QWORD *)v40[0] != -1LL )
    {
      v18 = (unsigned __int16)KeNumberNodes;
      v16 = 0LL;
      do
      {
        if ( *(_DWORD *)&v17[v16 + 8] >= v18 )
        {
          *(_DWORD *)&v17[v16 + 8] = 0;
          v17 = (char *)v40[0];
        }
        dword_140C4DD08 = v15;
        v15 = (unsigned int)(v15 + 1);
        v16 = 16LL * (unsigned int)v15;
      }
      while ( *(_QWORD *)&v17[v16] != -1LL );
    }
  }
  else
  {
    v17 = (char *)&unk_140C4DD28;
    v40[0] = &unk_140C4DD28;
  }
  qword_140C4DD48 = v17;
  MiInitializeChannelRangesTemporary(v16, v15);
  MiMemoryLicense(BugCheckParameter2);
  qword_140D587F8 = KeQueryPerformanceCounter(0LL).QuadPart;
  MiRemoveLargeFreeLoaderDescriptors(BugCheckParameter2);
  qword_140D58800 = KeQueryPerformanceCounter(0LL).QuadPart;
  if ( !(unsigned int)MiFindLargestLoaderDescriptor(BugCheckParameter2) )
  {
    byte_140C4E67A = 3;
    return 0;
  }
  MiCheckLargePageOk(BugCheckParameter2);
  qword_140C4DE10 = -1LL;
  MiProtectSharedUserPage();
  MiCreateResidentPfnTemplate((__int64)&xmmword_140C4E400);
  MiCreateResidentBasePfnTemplate((__int64)&xmmword_140C4E430);
  qword_140D58808 = KeQueryPerformanceCounter(0LL).QuadPart;
  if ( !(unsigned int)MiCreatePfnDatabase(BugCheckParameter2) )
  {
    byte_140C4E67A = 6;
    return 0;
  }
  qword_140D58810 = KeQueryPerformanceCounter(0LL).QuadPart;
  MiInitializePfnsForValidMappings(BugCheckParameter2);
  qword_140D58818 = KeQueryPerformanceCounter(0LL).QuadPart;
  MiSwitchToPfns(BugCheckParameter2);
  qword_140D58820 = KeQueryPerformanceCounter(0LL).QuadPart;
  MxRelocatePageTables(BugCheckParameter2);
  qword_140D58828 = KeQueryPerformanceCounter(0LL).QuadPart;
  MiZeroBootMappings();
  MiInitializeDecayPfns();
  if ( ((unsigned __int8)&stru_140C4E890 & 0xF) != 0 )
LABEL_86:
    RtlRaiseStatus(-2147483646);
  stru_140C4E890 = 0LL;
  MiInitializeSections((__int64)&MiSystemPartition);
  MiInitializeCommitment((unsigned __int64)&MiSystemPartition);
  MiInitializeDummyPages();
  if ( !(unsigned int)MiInitializeSystemPtes() )
  {
    byte_140C4E67A = 9;
    return 0;
  }
  if ( !(unsigned int)MiInitializeNonPagedPool() )
  {
    byte_140C4E67A = 7;
    return 0;
  }
  if ( !(unsigned int)MiMapDummyPages() )
  {
    byte_140C4E67A = 5;
    return 0;
  }
  v20 = BYTE2(MiFlags);
  qword_140D58830 = KeQueryPerformanceCounter(0LL).QuadPart;
  if ( (int)ExInitializePoolHeapManagement((unsigned __int8)(v20 & 1) << 10) < 0 )
  {
    byte_140C4E67A = 2;
    return 0;
  }
  if ( !(unsigned int)MiInitializeKernelStacks() )
  {
    byte_140C4E67A = 20;
    return 0;
  }
  if ( !(unsigned int)MiCreateTopLevelUltraMappings() )
  {
LABEL_85:
    byte_140C4E67A = 19;
    return 0;
  }
  if ( !(unsigned int)MmInitializeProcessor((__int64)KeGetCurrentPrcb()) )
  {
    byte_140C4E67A = 10;
    return 0;
  }
  v21 = MiReservePtes((__int64)&qword_140C4EDC0, 1u);
  qword_140C4E708 = v21;
  v22 = (_QWORD *)v21;
  if ( !v21 )
  {
    byte_140C4E67A = 11;
    return 0;
  }
  v23 = ZeroPte;
  v24 = 0;
  if ( MiPteInShadowRange(v21) )
  {
    if ( (unsigned int)MiPteHasShadow() )
    {
      v24 = 1;
      if ( HIBYTE(word_140C4DE88) )
        goto LABEL_58;
    }
    else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) == 0 )
    {
      goto LABEL_58;
    }
    if ( (ZeroPte & 1) != 0 )
      v23 = ZeroPte | 0x8000000000000000uLL;
  }
LABEL_58:
  *v22 = v23;
  if ( v24 )
    MiWritePteShadow((__int64)v22, v23, v25);
  MiFreeUnusedPfnPages(0LL);
  for ( j = 0LL; j < 0x29; ++j )
  {
    v27 = 0x1C5C0C00048LL;
    if ( _bittest64(&v27, j) )
      v28 = 0;
    else
      v28 = 1;
    v41[j] = v28;
  }
  qword_140D58838 = KeQueryPerformanceCounter(0LL).QuadPart;
  v29 = MmInitializeMemoryLimits(BugCheckParameter2, (__int64)v41);
  if ( !v29 || (v30 = MiConvertInitialMemoryBlock((__int64)&MiSystemPartition, (__int64)v29), (v31 = v30) == 0LL) )
  {
    byte_140C4E67A = 12;
    return 0;
  }
  qword_140C50C20 = (__int64)MiCreateNodeLists((__int64)&MiSystemPartition, (__int64)v30);
  if ( !qword_140C50C20 )
  {
    byte_140C4E67A = 13;
    return 0;
  }
  MiComputeNodeMemory(&MiSystemPartition, 1, v32, v33);
  if ( !(unsigned int)MiFillPfnGaps() )
  {
    byte_140C4E67A = 18;
    return 0;
  }
  if ( !(unsigned int)MiInitializeGapFrames(-1LL, &unk_140C4EC28) )
    goto LABEL_85;
  qword_140D58840 = KeQueryPerformanceCounter(0LL).QuadPart;
  if ( !(unsigned int)MiInitializePageFaultResources() )
  {
    byte_140C4E67A = 21;
    return 0;
  }
  if ( !(unsigned int)MiBuildPagedPool() )
    return 0;
  MmPhysicalMemoryBlock = v31;
  if ( !(unsigned int)MiCreatePfnBitMaps((__int64)&MiSystemPartition, v31) )
  {
    byte_140C4E67A = 15;
    return 0;
  }
  qword_140D58848 = KeQueryPerformanceCounter(0LL).QuadPart;
  MiMarkLargePageRanges();
  qword_140D58850 = KeQueryPerformanceCounter(0LL).QuadPart;
  MiInitializeWsSwapping(&MiSystemPartition);
  if ( qword_140C4DD48 != &unk_140C4DD28 )
  {
    v34 = 16 * (dword_140C4DD08 + 2);
    Pool = MiAllocatePool(64, v34, 0x20206D4Du);
    v36 = Pool;
    if ( Pool )
    {
      memmove(Pool, qword_140C4DD48, v34);
      qword_140C4DD48 = v36;
    }
  }
  if ( qword_140C4DD50 )
  {
    v37 = 16 * (dword_140C4DD14 + 2);
    v38 = MiAllocatePool(64, v37, 0x20206D4Du);
    v39 = v38;
    if ( v38 )
    {
      memmove(v38, qword_140C4DD50, v37);
      qword_140C4DD50 = v39;
    }
  }
  ExInitializeNPagedLookasideListInternal((__int64)&stru_140C4E8C0, 0LL, 0LL, 512, 144, 1800170829, 0, 0);
  return 1;
}
