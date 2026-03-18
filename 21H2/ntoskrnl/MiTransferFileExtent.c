/*
 * XREFs of MiTransferFileExtent @ 0x1405A1128
 * Callers:
 *     MiIssueHardFaultIo @ 0x14027AEA0 (MiIssueHardFaultIo.c)
 *     MiFlushFileOnlyMdl @ 0x14059EDEC (MiFlushFileOnlyMdl.c)
 * Callees:
 *     MiWritePteShadow @ 0x1402294F0 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140229550 (MiPteHasShadow.c)
 *     KiAbThreadRemoveBoostsSlow @ 0x14022B568 (KiAbThreadRemoveBoostsSlow.c)
 *     MmGetSessionIdEx @ 0x140287F30 (MmGetSessionIdEx.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     MiReleasePtes @ 0x1402BB6D0 (MiReleasePtes.c)
 *     MiMakeValidPte @ 0x1402CBD10 (MiMakeValidPte.c)
 *     MiInsertTbFlushEntry @ 0x1402CF280 (MiInsertTbFlushEntry.c)
 *     KiCheckForKernelApcDelivery @ 0x1402F1D50 (KiCheckForKernelApcDelivery.c)
 *     MmMapLockedPagesSpecifyCache @ 0x140308CD0 (MmMapLockedPagesSpecifyCache.c)
 *     MiReservePtes @ 0x1403095B0 (MiReservePtes.c)
 *     MiPteInShadowRange @ 0x140317A80 (MiPteInShadowRange.c)
 *     MiFlushTbList @ 0x14032F1B0 (MiFlushTbList.c)
 *     KiAbEntryRemoveFromTree @ 0x14034EE30 (KiAbEntryRemoveFromTree.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     KePersistMemory @ 0x140424FC0 (KePersistMemory.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     memset @ 0x140435E00 (memset.c)
 *     KeInvalidateRangeAllCaches @ 0x140570E60 (KeInvalidateRangeAllCaches.c)
 *     MiGetCachedExtentWalkerNextPage @ 0x14059EF54 (MiGetCachedExtentWalkerNextPage.c)
 *     MiInitializeCachedExtentWalker @ 0x14059F4C4 (MiInitializeCachedExtentWalker.c)
 */

__int64 __fastcall MiTransferFileExtent(
        PMDL MemoryDescriptorList,
        _QWORD *BugCheckParameter2,
        ULONG_PTR BugCheckParameter3,
        int a4,
        __int64 a5)
{
  __int64 v5; // rdi
  unsigned __int64 v10; // r14
  __int64 result; // rax
  int v12; // ecx
  __int64 v13; // rdi
  unsigned __int64 MappedSystemVa; // r12
  __int64 v15; // r13
  ULONG_PTR v16; // rax
  _QWORD *v17; // r15
  __int64 v18; // r14
  unsigned __int64 ValidPte; // rbx
  unsigned __int64 v20; // rdi
  int v21; // esi
  int HasShadow; // eax
  unsigned int v23; // r11d
  unsigned int v24; // edi
  unsigned int v25; // esi
  int CachedExtentWalkerNextPage; // eax
  unsigned __int64 v27; // rdi
  int v28; // eax
  int v29; // r11d
  int v30; // eax
  int v31; // ecx
  size_t v32; // r8
  _DWORD *v33; // rdx
  unsigned __int64 v34; // r14
  __int64 v35; // r15
  struct _KTHREAD *CurrentThread; // rax
  BOOL v37; // eax
  __int64 *p_Size; // rcx
  unsigned __int64 v39; // r12
  unsigned __int64 v40; // rbx
  int v41; // esi
  bool v42; // zf
  __int64 *v43; // rbx
  unsigned __int64 v44; // rax
  int v45; // r11d
  __int64 v46; // rdx
  int v47; // r8d
  bool v48; // zf
  __int64 v49; // r15
  unsigned __int64 *v50; // rsi
  unsigned __int64 v51; // rbx
  int v52; // eax
  struct _KTHREAD *v53; // rdi
  unsigned int SessionId; // ecx
  __int64 p_Process; // rbx
  unsigned int v56; // edx
  int v57; // r9d
  struct _KTHREAD *v58; // rax
  int v59; // [rsp+30h] [rbp-D0h]
  unsigned int v60; // [rsp+30h] [rbp-D0h]
  unsigned int v62; // [rsp+38h] [rbp-C8h]
  unsigned int v63; // [rsp+3Ch] [rbp-C4h]
  unsigned int v64; // [rsp+40h] [rbp-C0h]
  __int64 v65; // [rsp+48h] [rbp-B8h] BYREF
  int v66; // [rsp+50h] [rbp-B0h]
  BOOL v67; // [rsp+54h] [rbp-ACh]
  __int64 v68; // [rsp+58h] [rbp-A8h]
  PMDL v69; // [rsp+60h] [rbp-A0h]
  __int64 v70; // [rsp+68h] [rbp-98h]
  ULONG_PTR BugCheckParameter3a; // [rsp+70h] [rbp-90h]
  ULONG_PTR BugCheckParameter2a; // [rsp+78h] [rbp-88h]
  unsigned __int64 v73; // [rsp+80h] [rbp-80h]
  __int64 v74; // [rsp+88h] [rbp-78h]
  __int64 *v75; // [rsp+90h] [rbp-70h]
  __int64 v76; // [rsp+98h] [rbp-68h]
  __int128 v77; // [rsp+A0h] [rbp-60h] BYREF
  __int128 v78; // [rsp+B0h] [rbp-50h]
  __int64 v79; // [rsp+C0h] [rbp-40h]
  _QWORD v80[24]; // [rsp+D0h] [rbp-30h] BYREF

  v5 = a5;
  BugCheckParameter3a = BugCheckParameter3;
  BugCheckParameter2a = (ULONG_PTR)BugCheckParameter2;
  v70 = a5;
  v79 = 0LL;
  v77 = 0LL;
  v78 = 0LL;
  memset(v80, 0, 0xB8uLL);
  v10 = (((LODWORD(MemoryDescriptorList->StartVa) + MemoryDescriptorList->ByteOffset) & 0xFFF)
       + (unsigned __int64)MemoryDescriptorList->ByteCount
       + 4095) >> 12;
  v64 = v10;
  v59 = a4 != 0 ? 4 : 1;
  v66 = a4 != 0 ? 1 : 4;
  result = MiInitializeCachedExtentWalker((__int64)&v77, BugCheckParameter2, BugCheckParameter3, a4 == 0);
  v12 = result;
  if ( (int)result < 0 )
  {
LABEL_4:
    if ( a4 )
      KeBugCheckEx(0x1Au, 0x14000uLL, (ULONG_PTR)BugCheckParameter2, BugCheckParameter3, v12);
    *(_QWORD *)(v5 + 8) = 0LL;
    *(_DWORD *)v5 = v12;
    return result;
  }
  v13 = v78;
  result = 0x8000000000000000uLL;
  if ( (_QWORD)v78 == 0x8000000000000000uLL )
  {
    v5 = v70;
    v12 = -1073740023;
    goto LABEL_4;
  }
  v42 = (MemoryDescriptorList->MdlFlags & 5) == 0;
  v65 = v78;
  if ( v42 )
    MappedSystemVa = (unsigned __int64)MmMapLockedPagesSpecifyCache(
                                         MemoryDescriptorList,
                                         0,
                                         MmCached,
                                         0LL,
                                         0,
                                         a4 != 0 ? -1073741808 : 1073741840);
  else
    MappedSystemVa = (unsigned __int64)MemoryDescriptorList->MappedSystemVa;
  if ( MappedSystemVa )
  {
    v15 = ((MappedSystemVa >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v16 = MiReservePtes((__int64)&qword_140C534C0, v10);
    v17 = (_QWORD *)v16;
    if ( !v16 )
    {
      v68 = 1LL;
      goto LABEL_49;
    }
    v18 = (__int64)(v16 << 25) >> 16;
    ValidPte = MiMakeValidPte(v16, v13, v59 | 0xA0000000);
    v20 = ValidPte;
    v21 = 0;
    if ( MiPteInShadowRange((unsigned __int64)v17) )
    {
      HasShadow = MiPteHasShadow();
      v23 = 1;
      if ( HasShadow )
      {
        v21 = 1;
        if ( HIBYTE(word_140C51864) )
          goto LABEL_20;
      }
      else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) == 0 )
      {
        goto LABEL_20;
      }
      if ( (ValidPte & 1) != 0 )
        v20 = ValidPte | 0x8000000000000000uLL;
    }
    else
    {
      v23 = 1;
    }
LABEL_20:
    *v17 = v20;
    if ( v21 )
      MiWritePteShadow((__int64)v17, v20);
    v24 = v64;
    v25 = v23;
    if ( v64 <= v23 )
    {
LABEL_37:
      v31 = a4;
LABEL_38:
      v32 = v25 << 12;
      if ( v31 )
      {
        memmove((void *)v18, (const void *)MappedSystemVa, v32);
        if ( !byte_140C5072C )
        {
          if ( _bittest64(&KeFeatureBits, 0x24u) )
            KePersistMemory(v18, 4096LL);
          else
            KeInvalidateRangeAllCaches((PVOID)v18, 0x1000u);
        }
      }
      else
      {
        memmove((void *)MappedSystemVa, (const void *)v18, v32);
      }
      MiReleasePtes((__int64)&qword_140C534C0, v17, v24);
      v33 = (_DWORD *)v70;
      *(_QWORD *)(v70 + 8) = v25 << 12;
      goto LABEL_47;
    }
    while ( 1 )
    {
      CachedExtentWalkerNextPage = MiGetCachedExtentWalkerNextPage((__int64)&v77, &v65);
      if ( CachedExtentWalkerNextPage < 0 )
      {
        v31 = a4;
        if ( a4 )
          KeBugCheckEx(0x1Au, 0x14000uLL, BugCheckParameter2a, BugCheckParameter3a, CachedExtentWalkerNextPage);
        goto LABEL_38;
      }
      ValidPte ^= (ValidPte ^ (v65 << 12)) & 0xFFFFFFFFFF000LL;
      v27 = ValidPte;
      if ( MiPteInShadowRange((unsigned __int64)&v17[v25]) )
      {
        v28 = MiPteHasShadow();
        v29 = 1;
        if ( v28 )
        {
          v30 = 1;
          if ( !HIBYTE(word_140C51864) && (ValidPte & 1) != 0 )
            v27 = ValidPte | 0x8000000000000000uLL;
          goto LABEL_34;
        }
        if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
          && (ValidPte & 1) != 0 )
        {
          v27 = ValidPte | 0x8000000000000000uLL;
        }
      }
      else
      {
        v29 = 1;
      }
      v30 = 0;
LABEL_34:
      v17[v25] = v27;
      if ( v30 )
        MiWritePteShadow((__int64)&v17[v25], v27);
      v24 = v64;
      v25 += v29;
      if ( v25 >= v64 )
        goto LABEL_37;
    }
  }
  v15 = 0LL;
  v68 = 2LL;
LABEL_49:
  v34 = qword_140C53268;
  WORD2(v80[0]) = 0;
  v80[1] = 20LL;
  LODWORD(v80[0]) = 0;
  v80[2] = 0LL;
  v73 = qword_140C53268 + 8;
  v80[3] = 0LL;
  v75 = (__int64 *)qword_140C53268;
  v74 = 0LL;
  v35 = qword_140C53268 << 25 >> 16;
  v69 = MemoryDescriptorList + 1;
  v25 = 0;
  CurrentThread = KeGetCurrentThread();
  v76 = v35;
  v62 = 0;
  --CurrentThread->SpecialApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140C4F470, 0LL);
  v63 = 0;
  if ( !v64 )
    goto LABEL_96;
  v60 = v59 | 0xA0000000;
  v37 = MiPteInShadowRange(v34);
  p_Size = (__int64 *)v69;
  v67 = v37;
  do
  {
    if ( v15 )
      goto LABEL_63;
    v39 = v73;
    v40 = MiMakeValidPte(v73, *p_Size, v66 | 0x20000000u);
    v41 = 0;
    if ( MiPteInShadowRange(v39) )
    {
      if ( (unsigned int)MiPteHasShadow() )
      {
        v41 = 1;
        if ( !HIBYTE(word_140C51864) )
        {
          v42 = (v40 & 1) == 0;
          goto LABEL_58;
        }
      }
      else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
      {
        v42 = (v40 & 1) == 0;
LABEL_58:
        if ( !v42 )
          v40 |= 0x8000000000000000uLL;
      }
    }
    *(_QWORD *)v39 = v40;
    if ( v41 )
      MiWritePteShadow(v39, v40);
    v25 = v62;
    MappedSystemVa = (__int64)((v39 << 25) - v74) >> 16;
LABEL_63:
    v43 = v75;
    v44 = MiMakeValidPte((unsigned __int64)v75, v65, v60);
    v45 = 0;
    v46 = v44;
    v47 = 0;
    if ( v67 )
    {
      if ( (unsigned int)MiPteHasShadow() )
      {
        v47 = v45 + 1;
        if ( HIBYTE(word_140C51864) == (_BYTE)v45 )
        {
          v48 = ((unsigned __int8)v46 & (unsigned __int8)(v45 + 1)) == 0;
          goto LABEL_69;
        }
      }
      else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
      {
        v48 = (v46 & 1) == 0;
LABEL_69:
        if ( !v48 )
          v46 |= 0x8000000000000000uLL;
      }
    }
    *v43 = v46;
    if ( v47 )
      MiWritePteShadow((__int64)v43, v46);
    if ( a4 == v45 )
    {
      memmove((void *)MappedSystemVa, (const void *)v35, 0x1000uLL);
    }
    else
    {
      memmove((void *)v35, (const void *)MappedSystemVa, 0x1000uLL);
      if ( !byte_140C5072C )
      {
        if ( _bittest64(&KeFeatureBits, 0x24u) )
          KePersistMemory(v35, 4096LL);
        else
          KeInvalidateRangeAllCaches((PVOID)v35, 0x1000u);
      }
    }
    v62 = v25 + 1;
    if ( v15 )
      MappedSystemVa += 4096LL;
    v49 = v68;
    v50 = (unsigned __int64 *)v43;
    do
    {
      v51 = ZeroPte;
      if ( !MiPteInShadowRange((unsigned __int64)v50) )
        goto LABEL_91;
      if ( !(unsigned int)MiPteHasShadow() )
      {
        if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
          && (ZeroPte & 1) != 0 )
        {
          v51 = ZeroPte | 0x8000000000000000uLL;
        }
LABEL_91:
        *v50 = v51;
        goto LABEL_92;
      }
      if ( !HIBYTE(word_140C51864) && (ZeroPte & 1) != 0 )
        v51 = ZeroPte | 0x8000000000000000uLL;
      *v50 = v51;
      MiWritePteShadow((__int64)v50, v51);
LABEL_92:
      ++v50;
      --v49;
    }
    while ( v49 );
    v35 = v76;
    MiInsertTbFlushEntry((__int64)v80, v76, v68, 0);
    MiFlushTbList((__int64)v80);
    v25 = v62;
    if ( v62 != v64 )
    {
      v52 = MiGetCachedExtentWalkerNextPage((__int64)&v77, &v65);
      if ( v52 < 0 )
      {
        if ( a4 )
          KeBugCheckEx(0x1Au, 0x14000uLL, BugCheckParameter2a, BugCheckParameter3a, v52);
        break;
      }
    }
    p_Size = (__int64 *)&v69->Size;
    ++v63;
    v69 = (PMDL)((char *)v69 + 8);
  }
  while ( v63 < v64 );
LABEL_96:
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140C4F470, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(&qword_140C4F470);
  v53 = KeGetCurrentThread();
  if ( (unsigned __int64)&qword_140C4F470 - qword_140C50630 >= 0x8000000000LL )
    SessionId = -1;
  else
    SessionId = MmGetSessionIdEx((__int64)v53->ApcState.Process);
  _disable();
  p_Process = (__int64)&v53[1].Process;
  v56 = 0;
  while ( (*(_QWORD *)p_Process & 0x7FFFFFFFFFFFFFFCLL) != ((unsigned __int64)&qword_140C4F470 & 0x7FFFFFFFFFFFFFFCLL)
       || !*(_BYTE *)(p_Process + 18)
       || (*(_DWORD *)p_Process & 1) != 0
       || *(_DWORD *)(p_Process + 8) != SessionId )
  {
    ++v56;
    p_Process += 96LL;
    if ( v56 >= 6 )
      goto LABEL_109;
  }
  *(_BYTE *)(p_Process + 18) = 0;
  if ( !p_Process )
  {
LABEL_109:
    if ( (*((_DWORD *)&v53->0 + 1) & 0x10000) == 0 )
      KeBugCheckEx(0x162u, (ULONG_PTR)v53, (ULONG_PTR)&qword_140C4F470, SessionId, 0LL);
    _enable();
    goto LABEL_117;
  }
  if ( *(__int64 *)p_Process < 0 )
  {
    *(_BYTE *)p_Process |= 2u;
    _enable();
    KiAbEntryRemoveFromTree(p_Process);
    _disable();
  }
  v57 = *(_DWORD *)(p_Process + 88);
  *(_DWORD *)(p_Process + 88) = 0;
  *(_BYTE *)(p_Process + 17) = 0;
  *(_QWORD *)p_Process = 0LL;
  v53->AbEntrySummary |= 1 << *(_BYTE *)(p_Process + 16);
  _enable();
  if ( v57 )
    KiAbThreadRemoveBoostsSlow((ULONG_PTR)v53, (__int64)&qword_140C4F470, v57);
LABEL_117:
  v58 = KeGetCurrentThread();
  v42 = v58->SpecialApcDisable++ == -1;
  if ( v42 && ($CEA84C04E3712D858E5667A507841A2A *)v58->ApcState.ApcListHead[0].Flink != &v58->152 )
    KiCheckForKernelApcDelivery();
  v33 = (_DWORD *)v70;
  *(_QWORD *)(v70 + 8) = v25 << 12;
LABEL_47:
  result = v25 == 0 ? 0xC0000709 : 0;
  *v33 = result;
  return result;
}
