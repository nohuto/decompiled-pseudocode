/*
 * XREFs of MiPersistMdl @ 0x14059FECC
 * Callers:
 *     MiFlushFileOnlyMdl @ 0x14059EDEC (MiFlushFileOnlyMdl.c)
 * Callees:
 *     MiWritePteShadow @ 0x1402294F0 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140229550 (MiPteHasShadow.c)
 *     KiAbThreadRemoveBoostsSlow @ 0x14022B568 (KiAbThreadRemoveBoostsSlow.c)
 *     MmGetSessionIdEx @ 0x140287F30 (MmGetSessionIdEx.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     MmUnmapLockedPages @ 0x1402BB4E0 (MmUnmapLockedPages.c)
 *     MiMakeValidPte @ 0x1402CBD10 (MiMakeValidPte.c)
 *     MiInsertTbFlushEntry @ 0x1402CF280 (MiInsertTbFlushEntry.c)
 *     KiCheckForKernelApcDelivery @ 0x1402F1D50 (KiCheckForKernelApcDelivery.c)
 *     MmMapLockedPagesSpecifyCache @ 0x140308CD0 (MmMapLockedPagesSpecifyCache.c)
 *     MiPteInShadowRange @ 0x140317A80 (MiPteInShadowRange.c)
 *     MiFlushTbList @ 0x14032F1B0 (MiFlushTbList.c)
 *     KiAbEntryRemoveFromTree @ 0x14034EE30 (KiAbEntryRemoveFromTree.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     KePersistMemory @ 0x140424FC0 (KePersistMemory.c)
 *     memset @ 0x140435E00 (memset.c)
 *     KeInvalidateRangeAllCaches @ 0x140570E60 (KeInvalidateRangeAllCaches.c)
 */

void __fastcall MiPersistMdl(PMDL MemoryDescriptorList)
{
  unsigned __int64 v2; // rdi
  PVOID MappedSystemVa; // rax
  __int64 v4; // rdi
  _QWORD *v5; // rsi
  __int64 *v6; // r12
  struct _KTHREAD *CurrentThread; // rax
  __int64 v8; // rbp
  BOOL v9; // r15d
  unsigned __int64 ValidPte; // rdx
  int v11; // r8d
  bool v12; // zf
  __int64 v13; // rdx
  int v14; // r8d
  bool v15; // zf
  struct _KTHREAD *v16; // rdi
  unsigned int SessionId; // ecx
  __int64 p_Process; // rbx
  unsigned int v19; // edx
  int v20; // r9d
  struct _KTHREAD *v21; // rax
  _QWORD v22[24]; // [rsp+30h] [rbp-F8h] BYREF

  memset(v22, 0, 0xB8uLL);
  if ( byte_140C5072C )
    return;
  v2 = (((LODWORD(MemoryDescriptorList->StartVa) + MemoryDescriptorList->ByteOffset) & 0xFFF)
      + (unsigned __int64)MemoryDescriptorList->ByteCount
      + 4095) >> 12;
  if ( (MemoryDescriptorList->MdlFlags & 5) != 0 )
    MappedSystemVa = MemoryDescriptorList->MappedSystemVa;
  else
    MappedSystemVa = MmMapLockedPagesSpecifyCache(MemoryDescriptorList, 0, MmCached, 0LL, 0, 0xC0000010);
  if ( MappedSystemVa )
  {
    v4 = v2 << 12;
    if ( _bittest64(&KeFeatureBits, 0x24u) )
      KePersistMemory((__int64)MappedSystemVa, v4);
    else
      KeInvalidateRangeAllCaches(MappedSystemVa, v4);
    MmUnmapLockedPages(MemoryDescriptorList->MappedSystemVa, MemoryDescriptorList);
    return;
  }
  v5 = (_QWORD *)qword_140C53268;
  v6 = (__int64 *)&MemoryDescriptorList[1];
  LODWORD(v22[1]) = 20;
  v22[3] = 0LL;
  CurrentThread = KeGetCurrentThread();
  v8 = qword_140C53268 << 25 >> 16;
  --CurrentThread->SpecialApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140C4F470, 0LL);
  if ( v2 )
  {
    v9 = MiPteInShadowRange((unsigned __int64)v5);
    do
    {
      ValidPte = MiMakeValidPte((unsigned __int64)v5, *v6, 536870913);
      v11 = 0;
      if ( !v9 )
        goto LABEL_20;
      if ( (unsigned int)MiPteHasShadow() )
      {
        v11 = 1;
        if ( HIBYTE(word_140C51864) )
          goto LABEL_20;
        v12 = (ValidPte & 1) == 0;
      }
      else
      {
        if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) == 0 )
          goto LABEL_20;
        v12 = (ValidPte & 1) == 0;
      }
      if ( !v12 )
        ValidPte |= 0x8000000000000000uLL;
LABEL_20:
      *v5 = ValidPte;
      if ( v11 )
        MiWritePteShadow((__int64)v5, ValidPte);
      if ( !byte_140C5072C )
      {
        if ( _bittest64(&KeFeatureBits, 0x24u) )
          KePersistMemory(v8, 4096LL);
        else
          KeInvalidateRangeAllCaches((PVOID)v8, 0x1000u);
      }
      v13 = ZeroPte;
      v14 = 0;
      if ( !v9 )
        goto LABEL_34;
      if ( (unsigned int)MiPteHasShadow() )
      {
        v14 = 1;
        if ( !HIBYTE(word_140C51864) )
        {
          v15 = (v13 & 1) == 0;
          goto LABEL_32;
        }
      }
      else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
      {
        v15 = (v13 & 1) == 0;
LABEL_32:
        if ( !v15 )
          v13 |= 0x8000000000000000uLL;
      }
LABEL_34:
      *v5 = v13;
      if ( v14 )
        MiWritePteShadow((__int64)v5, v13);
      MiInsertTbFlushEntry((__int64)v22, v8, 1LL, 0);
      MiFlushTbList((__int64)v22);
      ++v6;
      --v2;
    }
    while ( v2 );
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140C4F470, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(&qword_140C4F470);
  v16 = KeGetCurrentThread();
  if ( (unsigned __int64)&qword_140C4F470 - qword_140C50630 >= 0x8000000000LL )
    SessionId = -1;
  else
    SessionId = MmGetSessionIdEx((__int64)v16->ApcState.Process);
  _disable();
  p_Process = (__int64)&v16[1].Process;
  v19 = 0;
  while ( (*(_QWORD *)p_Process & 0x7FFFFFFFFFFFFFFCLL) != ((unsigned __int64)&qword_140C4F470 & 0x7FFFFFFFFFFFFFFCLL)
       || !*(_BYTE *)(p_Process + 18)
       || (*(_DWORD *)p_Process & 1) != 0
       || *(_DWORD *)(p_Process + 8) != SessionId )
  {
    ++v19;
    p_Process += 96LL;
    if ( v19 >= 6 )
      goto LABEL_48;
  }
  *(_BYTE *)(p_Process + 18) = 0;
  if ( !p_Process )
  {
LABEL_48:
    if ( (*((_DWORD *)&v16->0 + 1) & 0x10000) == 0 )
      KeBugCheckEx(0x162u, (ULONG_PTR)v16, (ULONG_PTR)&qword_140C4F470, SessionId, 0LL);
    _enable();
    goto LABEL_56;
  }
  if ( *(__int64 *)p_Process < 0 )
  {
    *(_BYTE *)p_Process |= 2u;
    _enable();
    KiAbEntryRemoveFromTree(p_Process);
    _disable();
  }
  v20 = *(_DWORD *)(p_Process + 88);
  *(_DWORD *)(p_Process + 88) = 0;
  *(_BYTE *)(p_Process + 17) = 0;
  *(_QWORD *)p_Process = 0LL;
  v16->AbEntrySummary |= 1 << *(_BYTE *)(p_Process + 16);
  _enable();
  if ( v20 )
    KiAbThreadRemoveBoostsSlow((ULONG_PTR)v16, (__int64)&qword_140C4F470, v20);
LABEL_56:
  v21 = KeGetCurrentThread();
  v12 = v21->SpecialApcDisable++ == -1;
  if ( v12 && ($CEA84C04E3712D858E5667A507841A2A *)v21->ApcState.ApcListHead[0].Flink != &v21->152 )
    KiCheckForKernelApcDelivery();
}
