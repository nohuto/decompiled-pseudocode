/*
 * XREFs of MiInitNucleus @ 0x140A43F3C
 * Callers:
 *     MmInitSystem @ 0x140A4C3E4 (MmInitSystem.c)
 * Callees:
 *     KeQueryPerformanceCounter @ 0x140240CA0 (KeQueryPerformanceCounter.c)
 *     MiReservePtes @ 0x1402743A0 (MiReservePtes.c)
 *     MiPteInShadowRange @ 0x140291700 (MiPteInShadowRange.c)
 *     MiAllocatePool @ 0x1402A0FB0 (MiAllocatePool.c)
 *     RtlRaiseStatus @ 0x1402EE870 (RtlRaiseStatus.c)
 *     MiWritePteShadow @ 0x1402F2F20 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x1402F2F80 (MiPteHasShadow.c)
 *     ExInitializeNPagedLookasideListInternal @ 0x1403779C0 (ExInitializeNPagedLookasideListInternal.c)
 *     MiInitializeCommitment @ 0x1403BB634 (MiInitializeCommitment.c)
 *     ExInitializePoolHeapManagement @ 0x1403BFB94 (ExInitializePoolHeapManagement.c)
 *     MiInitializePageFaultResources @ 0x1403C6228 (MiInitializePageFaultResources.c)
 *     MiFreeUnusedPfnPages @ 0x1403C9CE0 (MiFreeUnusedPfnPages.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1403FE9E0 (_guard_dispatch_icall.c)
 *     memmove @ 0x140408CC0 (memmove.c)
 *     __report_rangecheckfailure @ 0x1404B0ECC (__report_rangecheckfailure.c)
 *     MiInitializeSections @ 0x140784488 (MiInitializeSections.c)
 *     MiInitializeWsSwapping @ 0x1407845C0 (MiInitializeWsSwapping.c)
 *     MiCreateNodeLists @ 0x140784720 (MiCreateNodeLists.c)
 *     MiCreatePfnBitMaps @ 0x1407A2EE4 (MiCreatePfnBitMaps.c)
 *     MiConvertInitialMemoryBlock @ 0x1407B5A94 (MiConvertInitialMemoryBlock.c)
 *     MiComputeNodeMemory @ 0x1407B73E0 (MiComputeNodeMemory.c)
 *     MmInitializeProcessor @ 0x14099A5A0 (MmInitializeProcessor.c)
 *     MiCreateResidentBasePfnTemplate @ 0x140A35CD4 (MiCreateResidentBasePfnTemplate.c)
 *     MiCreateResidentPfnTemplate @ 0x140A35D08 (MiCreateResidentPfnTemplate.c)
 *     MmInitializeMemoryLimits @ 0x140A3762C (MmInitializeMemoryLimits.c)
 *     MiInitializeKernelStacks @ 0x140A40374 (MiInitializeKernelStacks.c)
 *     MiInitializeSystemPtes @ 0x140A4112C (MiInitializeSystemPtes.c)
 *     MiInitializeNonPagedPool @ 0x140A41304 (MiInitializeNonPagedPool.c)
 *     MiBuildPagedPool @ 0x140A4157C (MiBuildPagedPool.c)
 *     MiMarkLargePageRanges @ 0x140A43D90 (MiMarkLargePageRanges.c)
 *     MiCreatePfnDatabase @ 0x140A446C4 (MiCreatePfnDatabase.c)
 *     MiSwitchToPfns @ 0x140A44AE0 (MiSwitchToPfns.c)
 *     MiFindLargestLoaderDescriptor @ 0x140A45428 (MiFindLargestLoaderDescriptor.c)
 *     MiRemoveLargeFreeLoaderDescriptors @ 0x140A4560C (MiRemoveLargeFreeLoaderDescriptors.c)
 *     MiInitializeDummyPages @ 0x140A4DFBC (MiInitializeDummyPages.c)
 *     MiZeroBootMappings @ 0x140A4EC78 (MiZeroBootMappings.c)
 *     MiInitializePfnsForValidMappings @ 0x140A4ECE8 (MiInitializePfnsForValidMappings.c)
 *     MxRelocatePageTables @ 0x140A4ED90 (MxRelocatePageTables.c)
 *     MiFillPfnGaps @ 0x140A5F0A0 (MiFillPfnGaps.c)
 *     MiInitializeGapFrames @ 0x140A5F0F0 (MiInitializeGapFrames.c)
 *     MiMemoryLicense @ 0x140A5FD5C (MiMemoryLicense.c)
 *     MiCheckLargePageOk @ 0x140A60248 (MiCheckLargePageOk.c)
 *     MiInitializeDecayPfns @ 0x140A60758 (MiInitializeDecayPfns.c)
 *     MiInitializeDynamicVa @ 0x140A6093C (MiInitializeDynamicVa.c)
 *     MiCreateTopLevelUltraMappings @ 0x140A6AE58 (MiCreateTopLevelUltraMappings.c)
 *     MiMapDummyPages @ 0x140A6D284 (MiMapDummyPages.c)
 *     MiExamineHalVa @ 0x140A6D774 (MiExamineHalVa.c)
 *     MiInitializeBootDefaults @ 0x140A6D83C (MiInitializeBootDefaults.c)
 *     MiInitializeSystemDefaults @ 0x140A6E070 (MiInitializeSystemDefaults.c)
 *     MiProtectSharedUserPage @ 0x140A6FE3C (MiProtectSharedUserPage.c)
 *     MiInitializeChannelRangesTemporary @ 0x140A70224 (MiInitializeChannelRangesTemporary.c)
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
  unsigned __int64 j; // rax
  __int64 v26; // rcx
  char v27; // cl
  _QWORD *v28; // rax
  char *v29; // rax
  char *v30; // rbx
  __int64 v31; // r8
  _DWORD *v32; // r9
  unsigned int v33; // edi
  PVOID Pool; // rax
  void *v35; // rbx
  unsigned int v36; // edi
  PVOID v37; // rax
  void *v38; // rbx
  _QWORD v39[2]; // [rsp+40h] [rbp-78h] BYREF
  _BYTE v40[48]; // [rsp+50h] [rbp-68h] BYREF

  v39[1] = &MiVisiblePartition;
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
  v8 = dword_140C4DED8;
  for ( i = 0; i < 3; ++i )
  {
    *v8 = i;
    v8[1] = i;
    v8[2] = i;
    v8[3] = i;
    v8 += 4;
  }
  v10 = 0;
  v11 = &unk_140C4DF08;
  do
    *v11++ = v10++;
  while ( v10 <= 3 );
  dword_140C4DF14 = 1;
  MiInitializeBootDefaults(BugCheckParameter2);
  if ( ((unsigned __int8)&stru_140C4EA00 & 0xF) != 0 )
    goto LABEL_86;
  qword_140C4EA10 = 0LL;
  stru_140C4EA00 = 0LL;
  v12 = &unk_140C4F770;
  v13 = 16LL;
  do
  {
    v12[1] = v12;
    *v12 = v12;
    v12 += 2;
    --v13;
  }
  while ( v13 );
  qword_140C4EBE0 = 0LL;
  qword_140C4EB98 = 0LL;
  qword_140C4EBA8 = (__int64)&qword_140C4EBA0;
  qword_140C4EBA0 = (__int64)&qword_140C4EBA0;
  xmmword_140C4EB88 = 0LL;
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
  v39[0] = 0LL;
  qword_140C4DDF8 = -1LL;
  v14 = ((__int64 (__fastcall *)(__int64, __int64, _QWORD *, _QWORD))off_140C00A68[0])(30LL, 16LL, v39, 0LL);
  v16 = (__int64)&unk_140C4DDE8;
  if ( v14 >= 0 && (v17 = (char *)v39[0]) != 0LL )
  {
    v15 = 0LL;
    if ( *(_QWORD *)v39[0] != -1LL )
    {
      v18 = (unsigned __int16)KeNumberNodes;
      v16 = 0LL;
      do
      {
        if ( *(_DWORD *)&v17[v16 + 8] >= v18 )
        {
          *(_DWORD *)&v17[v16 + 8] = 0;
          v17 = (char *)v39[0];
        }
        dword_140C4DDC8 = v15;
        v15 = (unsigned int)(v15 + 1);
        v16 = 16LL * (unsigned int)v15;
      }
      while ( *(_QWORD *)&v17[v16] != -1LL );
    }
  }
  else
  {
    v17 = (char *)&unk_140C4DDE8;
    v39[0] = &unk_140C4DDE8;
  }
  qword_140C4DE08 = v17;
  MiInitializeChannelRangesTemporary(v16, v15);
  MiMemoryLicense(BugCheckParameter2);
  qword_140D557F8 = KeQueryPerformanceCounter(0LL).QuadPart;
  MiRemoveLargeFreeLoaderDescriptors(BugCheckParameter2);
  qword_140D55800 = KeQueryPerformanceCounter(0LL).QuadPart;
  if ( !(unsigned int)MiFindLargestLoaderDescriptor(BugCheckParameter2) )
  {
    byte_140C4E73A = 3;
    return 0;
  }
  MiCheckLargePageOk(BugCheckParameter2);
  qword_140C4DED0 = -1LL;
  MiProtectSharedUserPage();
  MiCreateResidentPfnTemplate((__int64)&xmmword_140C4E4C0);
  MiCreateResidentBasePfnTemplate((__int64)&xmmword_140C4E4F0);
  qword_140D55808 = KeQueryPerformanceCounter(0LL).QuadPart;
  if ( !(unsigned int)MiCreatePfnDatabase(BugCheckParameter2) )
  {
    byte_140C4E73A = 6;
    return 0;
  }
  qword_140D55810 = KeQueryPerformanceCounter(0LL).QuadPart;
  MiInitializePfnsForValidMappings(BugCheckParameter2);
  qword_140D55818 = KeQueryPerformanceCounter(0LL).QuadPart;
  MiSwitchToPfns(BugCheckParameter2);
  qword_140D55820 = KeQueryPerformanceCounter(0LL).QuadPart;
  MxRelocatePageTables(BugCheckParameter2);
  qword_140D55828 = KeQueryPerformanceCounter(0LL).QuadPart;
  MiZeroBootMappings();
  MiInitializeDecayPfns();
  if ( ((unsigned __int8)&stru_140C4E950 & 0xF) != 0 )
LABEL_86:
    RtlRaiseStatus(-2147483646);
  stru_140C4E950 = 0LL;
  MiInitializeSections((__int64)&MiSystemPartition);
  MiInitializeCommitment((__int64)&MiSystemPartition);
  MiInitializeDummyPages();
  if ( !(unsigned int)MiInitializeSystemPtes() )
  {
    byte_140C4E73A = 9;
    return 0;
  }
  if ( !(unsigned int)MiInitializeNonPagedPool() )
  {
    byte_140C4E73A = 7;
    return 0;
  }
  if ( !(unsigned int)MiMapDummyPages() )
  {
    byte_140C4E73A = 5;
    return 0;
  }
  v20 = BYTE2(MiFlags);
  qword_140D55830 = KeQueryPerformanceCounter(0LL).QuadPart;
  if ( (int)ExInitializePoolHeapManagement((unsigned __int8)(v20 & 1) << 10) < 0 )
  {
    byte_140C4E73A = 2;
    return 0;
  }
  if ( !(unsigned int)MiInitializeKernelStacks() )
  {
    byte_140C4E73A = 20;
    return 0;
  }
  if ( !(unsigned int)MiCreateTopLevelUltraMappings() )
  {
LABEL_85:
    byte_140C4E73A = 19;
    return 0;
  }
  if ( !(unsigned int)MmInitializeProcessor((__int64)KeGetCurrentPrcb()) )
  {
    byte_140C4E73A = 10;
    return 0;
  }
  v21 = MiReservePtes((__int64)&qword_140C4EE80, 1LL);
  qword_140C4E7C8 = v21;
  v22 = (_QWORD *)v21;
  if ( !v21 )
  {
    byte_140C4E73A = 11;
    return 0;
  }
  v23 = ZeroPte;
  v24 = 0;
  if ( MiPteInShadowRange(v21) )
  {
    if ( (unsigned int)MiPteHasShadow() )
    {
      v24 = 1;
      if ( HIBYTE(word_140C4DF48) )
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
    MiWritePteShadow((__int64)v22, v23);
  MiFreeUnusedPfnPages(0LL);
  for ( j = 0LL; j < 0x29; ++j )
  {
    v26 = 0x1C5C0C00048LL;
    if ( _bittest64(&v26, j) )
      v27 = 0;
    else
      v27 = 1;
    v40[j] = v27;
  }
  qword_140D55838 = KeQueryPerformanceCounter(0LL).QuadPart;
  v28 = MmInitializeMemoryLimits(BugCheckParameter2, (__int64)v40);
  if ( !v28 || (v29 = MiConvertInitialMemoryBlock((__int64)&MiSystemPartition, (__int64)v28), (v30 = v29) == 0LL) )
  {
    byte_140C4E73A = 12;
    return 0;
  }
  qword_140C50CA0 = (__int64)MiCreateNodeLists((__int64)&MiSystemPartition, (__int64)v29);
  if ( !qword_140C50CA0 )
  {
    byte_140C4E73A = 13;
    return 0;
  }
  MiComputeNodeMemory(&MiSystemPartition, 1, v31, v32);
  if ( !(unsigned int)MiFillPfnGaps() )
  {
    byte_140C4E73A = 18;
    return 0;
  }
  if ( !(unsigned int)MiInitializeGapFrames(-1LL, &unk_140C4ECE8) )
    goto LABEL_85;
  qword_140D55840 = KeQueryPerformanceCounter(0LL).QuadPart;
  if ( !(unsigned int)MiInitializePageFaultResources() )
  {
    byte_140C4E73A = 21;
    return 0;
  }
  if ( !(unsigned int)MiBuildPagedPool() )
    return 0;
  MmPhysicalMemoryBlock = v30;
  if ( !(unsigned int)MiCreatePfnBitMaps((__int64)&MiSystemPartition, v30) )
  {
    byte_140C4E73A = 15;
    return 0;
  }
  qword_140D55848 = KeQueryPerformanceCounter(0LL).QuadPart;
  MiMarkLargePageRanges();
  qword_140D55850 = KeQueryPerformanceCounter(0LL).QuadPart;
  MiInitializeWsSwapping(&MiSystemPartition);
  if ( qword_140C4DE08 != &unk_140C4DDE8 )
  {
    v33 = 16 * (dword_140C4DDC8 + 2);
    Pool = MiAllocatePool(64, v33, 0x20206D4Du);
    v35 = Pool;
    if ( Pool )
    {
      memmove(Pool, qword_140C4DE08, v33);
      qword_140C4DE08 = v35;
    }
  }
  if ( qword_140C4DE10 )
  {
    v36 = 16 * (dword_140C4DDD4 + 2);
    v37 = MiAllocatePool(64, v36, 0x20206D4Du);
    v38 = v37;
    if ( v37 )
    {
      memmove(v37, qword_140C4DE10, v36);
      qword_140C4DE10 = v38;
    }
  }
  ExInitializeNPagedLookasideListInternal((__int64)&stru_140C4E980, 0LL, 0LL, 512, 144, 1800170829, 0, 0);
  return 1;
}
