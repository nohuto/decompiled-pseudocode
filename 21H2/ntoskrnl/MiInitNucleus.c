/*
 * XREFs of MiInitNucleus @ 0x140A43F34
 * Callers:
 *     MmInitSystem @ 0x140A54D6C (MmInitSystem.c)
 * Callees:
 *     RtlRaiseStatus @ 0x140212910 (RtlRaiseStatus.c)
 *     MiWritePteShadow @ 0x140234B9C (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140234BFC (MiPteHasShadow.c)
 *     MiAllocatePool @ 0x14027C2E0 (MiAllocatePool.c)
 *     MiReservePtes @ 0x1402CAEB0 (MiReservePtes.c)
 *     KeQueryPerformanceCounter @ 0x1402D0BC0 (KeQueryPerformanceCounter.c)
 *     MiPteInShadowRange @ 0x140353840 (MiPteInShadowRange.c)
 *     ExInitializeNPagedLookasideListInternal @ 0x14037A250 (ExInitializeNPagedLookasideListInternal.c)
 *     MiInitializeCommitment @ 0x1403BFA54 (MiInitializeCommitment.c)
 *     ExInitializePoolHeapManagement @ 0x1403C3D54 (ExInitializePoolHeapManagement.c)
 *     MiInitializePageFaultResources @ 0x1403CA918 (MiInitializePageFaultResources.c)
 *     MiFreeUnusedPfnPages @ 0x1403CE250 (MiFreeUnusedPfnPages.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 *     memmove @ 0x140414040 (memmove.c)
 *     __report_rangecheckfailure @ 0x1404B66AC (__report_rangecheckfailure.c)
 *     MiInitializeSections @ 0x14079CD94 (MiInitializeSections.c)
 *     MiInitializeWsSwapping @ 0x14079CECC (MiInitializeWsSwapping.c)
 *     MiCreateNodeLists @ 0x14079D02C (MiCreateNodeLists.c)
 *     MiCreatePfnBitMaps @ 0x1407B9A04 (MiCreatePfnBitMaps.c)
 *     MiConvertInitialMemoryBlock @ 0x1407CB8F4 (MiConvertInitialMemoryBlock.c)
 *     MiComputeNodeMemory @ 0x1407CD210 (MiComputeNodeMemory.c)
 *     MmInitializeProcessor @ 0x1409A0640 (MmInitializeProcessor.c)
 *     MiCreateResidentBasePfnTemplate @ 0x140A39CA0 (MiCreateResidentBasePfnTemplate.c)
 *     MiCreateResidentPfnTemplate @ 0x140A39CD4 (MiCreateResidentPfnTemplate.c)
 *     MmInitializeMemoryLimits @ 0x140A3B6AC (MmInitializeMemoryLimits.c)
 *     MiMarkLargePageRanges @ 0x140A43D88 (MiMarkLargePageRanges.c)
 *     MiCreatePfnDatabase @ 0x140A446BC (MiCreatePfnDatabase.c)
 *     MiSwitchToPfns @ 0x140A44AD8 (MiSwitchToPfns.c)
 *     MiFindLargestLoaderDescriptor @ 0x140A45420 (MiFindLargestLoaderDescriptor.c)
 *     MiRemoveLargeFreeLoaderDescriptors @ 0x140A45604 (MiRemoveLargeFreeLoaderDescriptors.c)
 *     MiInitializeKernelStacks @ 0x140A4E410 (MiInitializeKernelStacks.c)
 *     MiInitializeSystemPtes @ 0x140A4F1C4 (MiInitializeSystemPtes.c)
 *     MiInitializeNonPagedPool @ 0x140A4F39C (MiInitializeNonPagedPool.c)
 *     MiBuildPagedPool @ 0x140A4F614 (MiBuildPagedPool.c)
 *     MiInitializeDummyPages @ 0x140A56944 (MiInitializeDummyPages.c)
 *     MiZeroBootMappings @ 0x140A5761C (MiZeroBootMappings.c)
 *     MiInitializePfnsForValidMappings @ 0x140A5768C (MiInitializePfnsForValidMappings.c)
 *     MxRelocatePageTables @ 0x140A57734 (MxRelocatePageTables.c)
 *     MiFillPfnGaps @ 0x140A67AC0 (MiFillPfnGaps.c)
 *     MiInitializeGapFrames @ 0x140A67B10 (MiInitializeGapFrames.c)
 *     MiMemoryLicense @ 0x140A6878C (MiMemoryLicense.c)
 *     MiCheckLargePageOk @ 0x140A68C78 (MiCheckLargePageOk.c)
 *     MiInitializeDecayPfns @ 0x140A69188 (MiInitializeDecayPfns.c)
 *     MiInitializeDynamicVa @ 0x140A6936C (MiInitializeDynamicVa.c)
 *     MiCreateTopLevelUltraMappings @ 0x140A6F944 (MiCreateTopLevelUltraMappings.c)
 *     MiMapDummyPages @ 0x140A71FCC (MiMapDummyPages.c)
 *     MiExamineHalVa @ 0x140A72544 (MiExamineHalVa.c)
 *     MiInitializeBootDefaults @ 0x140A7260C (MiInitializeBootDefaults.c)
 *     MiInitializeSystemDefaults @ 0x140A72EC8 (MiInitializeSystemDefaults.c)
 *     MiProtectSharedUserPage @ 0x140A74CE0 (MiProtectSharedUserPage.c)
 *     MiInitializeChannelRangesTemporary @ 0x140A75154 (MiInitializeChannelRangesTemporary.c)
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
  __int64 v21; // rdx
  __int64 v22; // r8
  unsigned __int64 v23; // r9
  __int64 v24; // r8
  unsigned __int64 v25; // r9
  ULONG_PTR v26; // rax
  _QWORD *v27; // rdi
  unsigned __int64 v28; // rbx
  int v29; // esi
  unsigned __int64 j; // rax
  __int64 v31; // rcx
  char v32; // cl
  _QWORD *v33; // rax
  char *v34; // rax
  char *v35; // rbx
  __int64 v36; // r8
  _DWORD *v37; // r9
  __int64 v38; // r8
  unsigned __int64 v39; // r9
  unsigned int v40; // edi
  PVOID Pool; // rax
  void *v42; // rbx
  unsigned int v43; // edi
  PVOID v44; // rax
  void *v45; // rbx
  _QWORD v46[2]; // [rsp+40h] [rbp-78h] BYREF
  _BYTE v47[48]; // [rsp+50h] [rbp-68h] BYREF

  v46[1] = &MiVisiblePartition;
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
  v8 = dword_140C4DFD8;
  for ( i = 0; i < 3; ++i )
  {
    *v8 = i;
    v8[1] = i;
    v8[2] = i;
    v8[3] = i;
    v8 += 4;
  }
  v10 = 0;
  v11 = &unk_140C4E008;
  do
    *v11++ = v10++;
  while ( v10 <= 3 );
  dword_140C4E014 = 1;
  MiInitializeBootDefaults(BugCheckParameter2);
  if ( ((unsigned __int8)&stru_140C4EB00 & 0xF) != 0 )
    goto LABEL_86;
  qword_140C4EB10 = 0LL;
  stru_140C4EB00 = 0LL;
  v12 = &unk_140C4F870;
  v13 = 16LL;
  do
  {
    v12[1] = v12;
    *v12 = v12;
    v12 += 2;
    --v13;
  }
  while ( v13 );
  qword_140C4ECE0 = 0LL;
  qword_140C4EC98 = 0LL;
  qword_140C4ECA8 = (__int64)&qword_140C4ECA0;
  qword_140C4ECA0 = (__int64)&qword_140C4ECA0;
  xmmword_140C4EC88 = 0LL;
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
  v46[0] = 0LL;
  qword_140C4DEF8 = -1LL;
  v14 = ((__int64 (__fastcall *)(__int64, __int64, _QWORD *, _QWORD))off_140C00A68[0])(30LL, 16LL, v46, 0LL);
  v16 = (__int64)&unk_140C4DEE8;
  if ( v14 >= 0 && (v17 = (char *)v46[0]) != 0LL )
  {
    v15 = 0LL;
    if ( *(_QWORD *)v46[0] != -1LL )
    {
      v18 = (unsigned __int16)KeNumberNodes;
      v16 = 0LL;
      do
      {
        if ( *(_DWORD *)&v17[v16 + 8] >= v18 )
        {
          *(_DWORD *)&v17[v16 + 8] = 0;
          v17 = (char *)v46[0];
        }
        dword_140C4DEC8 = v15;
        v15 = (unsigned int)(v15 + 1);
        v16 = 16LL * (unsigned int)v15;
      }
      while ( *(_QWORD *)&v17[v16] != -1LL );
    }
  }
  else
  {
    v17 = (char *)&unk_140C4DEE8;
    v46[0] = &unk_140C4DEE8;
  }
  qword_140C4DF08 = v17;
  MiInitializeChannelRangesTemporary(v16, v15);
  MiMemoryLicense(BugCheckParameter2);
  qword_140D587F8 = KeQueryPerformanceCounter(0LL).QuadPart;
  MiRemoveLargeFreeLoaderDescriptors(BugCheckParameter2);
  qword_140D58800 = KeQueryPerformanceCounter(0LL).QuadPart;
  if ( !(unsigned int)MiFindLargestLoaderDescriptor(BugCheckParameter2) )
  {
    byte_140C4E83A = 3;
    return 0;
  }
  MiCheckLargePageOk(BugCheckParameter2);
  qword_140C4DFD0 = -1LL;
  MiProtectSharedUserPage();
  MiCreateResidentPfnTemplate((__int64)&xmmword_140C4E5C0);
  MiCreateResidentBasePfnTemplate((__int64)&xmmword_140C4E5F0);
  qword_140D58808 = KeQueryPerformanceCounter(0LL).QuadPart;
  if ( !(unsigned int)MiCreatePfnDatabase(BugCheckParameter2) )
  {
    byte_140C4E83A = 6;
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
  if ( ((unsigned __int8)&stru_140C4EA50 & 0xF) != 0 )
LABEL_86:
    RtlRaiseStatus(-2147483646);
  stru_140C4EA50 = 0LL;
  MiInitializeSections((__int64)&MiSystemPartition);
  MiInitializeCommitment((__int64)&MiSystemPartition);
  MiInitializeDummyPages();
  if ( !(unsigned int)MiInitializeSystemPtes() )
  {
    byte_140C4E83A = 9;
    return 0;
  }
  if ( !(unsigned int)MiInitializeNonPagedPool() )
  {
    byte_140C4E83A = 7;
    return 0;
  }
  if ( !(unsigned int)MiMapDummyPages() )
  {
    byte_140C4E83A = 5;
    return 0;
  }
  v20 = BYTE2(MiFlags);
  qword_140D58830 = KeQueryPerformanceCounter(0LL).QuadPart;
  if ( (int)ExInitializePoolHeapManagement((unsigned __int8)(v20 & 1) << 10) < 0 )
  {
    byte_140C4E83A = 2;
    return 0;
  }
  if ( !(unsigned int)MiInitializeKernelStacks() )
  {
    byte_140C4E83A = 20;
    return 0;
  }
  if ( !(unsigned int)MiCreateTopLevelUltraMappings() )
  {
LABEL_85:
    byte_140C4E83A = 19;
    return 0;
  }
  if ( !(unsigned int)MmInitializeProcessor((__int64)KeGetCurrentPrcb(), v21, v22, v23) )
  {
    byte_140C4E83A = 10;
    return 0;
  }
  v26 = MiReservePtes((__int64)&qword_140C4EF80, 1u, v24, v25);
  qword_140C4E8C8 = v26;
  v27 = (_QWORD *)v26;
  if ( !v26 )
  {
    byte_140C4E83A = 11;
    return 0;
  }
  v28 = ZeroPte;
  v29 = 0;
  if ( MiPteInShadowRange(v26) )
  {
    if ( (unsigned int)MiPteHasShadow() )
    {
      v29 = 1;
      if ( HIBYTE(word_140C4E048) )
        goto LABEL_58;
    }
    else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) == 0 )
    {
      goto LABEL_58;
    }
    if ( (ZeroPte & 1) != 0 )
      v28 = ZeroPte | 0x8000000000000000uLL;
  }
LABEL_58:
  *v27 = v28;
  if ( v29 )
    MiWritePteShadow((__int64)v27, v28);
  MiFreeUnusedPfnPages(0LL);
  for ( j = 0LL; j < 0x29; ++j )
  {
    v31 = 0x1C5C0C00048LL;
    if ( _bittest64(&v31, j) )
      v32 = 0;
    else
      v32 = 1;
    v47[j] = v32;
  }
  qword_140D58838 = KeQueryPerformanceCounter(0LL).QuadPart;
  v33 = MmInitializeMemoryLimits(BugCheckParameter2, (__int64)v47);
  if ( !v33 || (v34 = MiConvertInitialMemoryBlock((__int64)&MiSystemPartition, (__int64)v33), (v35 = v34) == 0LL) )
  {
    byte_140C4E83A = 12;
    return 0;
  }
  qword_140C50DE0 = (__int64)MiCreateNodeLists((__int64)&MiSystemPartition, (__int64)v34);
  if ( !qword_140C50DE0 )
  {
    byte_140C4E83A = 13;
    return 0;
  }
  MiComputeNodeMemory(&MiSystemPartition, 1, v36, v37);
  if ( !(unsigned int)MiFillPfnGaps() )
  {
    byte_140C4E83A = 18;
    return 0;
  }
  if ( !(unsigned int)MiInitializeGapFrames(-1LL, &unk_140C4EDE8) )
    goto LABEL_85;
  qword_140D58840 = KeQueryPerformanceCounter(0LL).QuadPart;
  if ( !(unsigned int)MiInitializePageFaultResources() )
  {
    byte_140C4E83A = 21;
    return 0;
  }
  if ( !(unsigned int)MiBuildPagedPool() )
    return 0;
  MmPhysicalMemoryBlock = v35;
  if ( !(unsigned int)MiCreatePfnBitMaps((__int64)&MiSystemPartition, v35, v38, v39) )
  {
    byte_140C4E83A = 15;
    return 0;
  }
  qword_140D58848 = KeQueryPerformanceCounter(0LL).QuadPart;
  MiMarkLargePageRanges();
  qword_140D58850 = KeQueryPerformanceCounter(0LL).QuadPart;
  MiInitializeWsSwapping(&MiSystemPartition);
  if ( qword_140C4DF08 != &unk_140C4DEE8 )
  {
    v40 = 16 * (dword_140C4DEC8 + 2);
    Pool = MiAllocatePool(64, v40, 0x20206D4Du);
    v42 = Pool;
    if ( Pool )
    {
      memmove(Pool, qword_140C4DF08, v40);
      qword_140C4DF08 = v42;
    }
  }
  if ( qword_140C4DF10 )
  {
    v43 = 16 * (dword_140C4DED4 + 2);
    v44 = MiAllocatePool(64, v43, 0x20206D4Du);
    v45 = v44;
    if ( v44 )
    {
      memmove(v44, qword_140C4DF10, v43);
      qword_140C4DF10 = v45;
    }
  }
  ExInitializeNPagedLookasideListInternal((__int64)&stru_140C4EA80, 0LL, 0LL, 512, 144, 1800170829, 0, 0);
  return 1;
}
