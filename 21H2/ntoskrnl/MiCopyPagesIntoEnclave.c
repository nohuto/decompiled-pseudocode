/*
 * XREFs of MiCopyPagesIntoEnclave @ 0x140979274
 * Callers:
 *     NtLoadEnclaveData @ 0x14097B500 (NtLoadEnclaveData.c)
 * Callees:
 *     MiWritePteShadow @ 0x1402294F0 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140229550 (MiPteHasShadow.c)
 *     MiCreatePteCopyList @ 0x14024B428 (MiCreatePteCopyList.c)
 *     MiReleasePteCopyList @ 0x140250BDC (MiReleasePteCopyList.c)
 *     MiAllocatePool @ 0x1402828F0 (MiAllocatePool.c)
 *     MmUnlockPages @ 0x1402B8AD0 (MmUnlockPages.c)
 *     MiMakeValidPte @ 0x1402CBD10 (MiMakeValidPte.c)
 *     MiGetPteFromCopyList @ 0x1402CBF80 (MiGetPteFromCopyList.c)
 *     KiUnstackDetachProcess @ 0x1402D0930 (KiUnstackDetachProcess.c)
 *     MmMapLockedPagesSpecifyCache @ 0x140308CD0 (MmMapLockedPagesSpecifyCache.c)
 *     KiStackAttachProcess @ 0x14030D5C0 (KiStackAttachProcess.c)
 *     MiGetPteAddress @ 0x140313C70 (MiGetPteAddress.c)
 *     MiPteInShadowRange @ 0x140317A80 (MiPteInShadowRange.c)
 *     MmProbeAndLockPages @ 0x140319E90 (MmProbeAndLockPages.c)
 *     MiMakeProtectionMask @ 0x14032BCC0 (MiMakeProtectionMask.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     memset @ 0x140435E00 (memset.c)
 *     KeAddEnclavePage @ 0x14056D1E8 (KeAddEnclavePage.c)
 *     MiGetVmPartition @ 0x14058DE04 (MiGetVmPartition.c)
 *     MiCountCommittedPages @ 0x1405A8968 (MiCountCommittedPages.c)
 *     MiGetPageForEnclave @ 0x1405A9530 (MiGetPageForEnclave.c)
 *     MiInitializeEnclavePfn @ 0x1405A95FC (MiInitializeEnclavePfn.c)
 *     MiReturnEnclavePage @ 0x1405A9F00 (MiReturnEnclavePage.c)
 *     MiWriteEnclavePte @ 0x1405AA07C (MiWriteEnclavePte.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiCopyPagesIntoEnclave(
        _KPROCESS *BugCheckParameter1,
        __int64 a2,
        char a3,
        unsigned __int64 a4,
        void *Src,
        __int64 a6,
        int a7,
        _QWORD *a8,
        _DWORD *a9)
{
  unsigned __int64 v11; // r12
  char *Pool; // r14
  unsigned int ProtectionMask; // eax
  int v14; // r8d
  _DWORD *v15; // r9
  int v16; // r13d
  int v18; // ecx
  int v19; // ebx
  signed int v20; // ebx
  unsigned __int64 v21; // rdx
  unsigned __int64 PteAddress; // rbx
  int v23; // esi
  _DWORD *v24; // r9
  unsigned __int64 v25; // rax
  unsigned int v26; // ebx
  char v27; // al
  unsigned __int64 v28; // rcx
  char *v29; // r15
  char *v30; // r15
  unsigned __int64 PageForEnclave; // rax
  ULONG_PTR v32; // r12
  unsigned __int64 v33; // rbx
  unsigned __int64 ValidPte; // rax
  int v37; // [rsp+40h] [rbp-1C8h]
  unsigned int v38; // [rsp+44h] [rbp-1C4h]
  int v39; // [rsp+50h] [rbp-1B8h]
  unsigned __int64 v41; // [rsp+60h] [rbp-1A8h]
  unsigned __int64 PteFromCopyList; // [rsp+68h] [rbp-1A0h]
  unsigned __int64 v43; // [rsp+78h] [rbp-190h]
  __int64 VmPartition; // [rsp+90h] [rbp-178h]
  __int64 v46; // [rsp+A0h] [rbp-168h]
  char *v47; // [rsp+A8h] [rbp-160h]
  __int128 v48; // [rsp+B0h] [rbp-158h] BYREF
  __int64 v49; // [rsp+C0h] [rbp-148h]
  _OWORD v50[3]; // [rsp+C8h] [rbp-140h] BYREF
  struct _MDL MemoryDescriptorList[4]; // [rsp+100h] [rbp-108h] BYREF

  v11 = (unsigned __int64)Src;
  memset(v50, 0, sizeof(v50));
  v48 = 0LL;
  v49 = 0LL;
  memset(MemoryDescriptorList, 0, 0xB8uLL);
  Pool = 0LL;
  ProtectionMask = MiMakeProtectionMask(a7 & 0x5FFFFFFF);
  v16 = ProtectionMask;
  if ( (ProtectionMask & 7) == 0 || ProtectionMask > 7 || (ProtectionMask & 5) == 5 )
    return 3221225541LL;
  if ( (ProtectionMask & 2) != 0 )
  {
    if ( ((__int64)KeGetCurrentThread()->ApcState.Process[2].ReadyListHead.Blink & 0x100) != 0
      && (*(_DWORD *)(&KeGetCurrentThread()[1].SwapListEntry + 1) & 0x40000) == 0 )
    {
      return 3221227012LL;
    }
    v14 |= 4u;
  }
  v18 = v14 | 2;
  if ( (ProtectionMask & 4) == 0 )
    v18 = v14;
  v39 = (32 * (*(_DWORD *)(a2 + 64) & 2)) | v18 | 1;
  if ( (*(_DWORD *)(a2 + 72) & 1) != 0 )
    v16 = ProtectionMask & 2 | 4;
  KiStackAttachProcess(BugCheckParameter1, 0LL, (__int64)v50, v15);
  v19 = -(MiCountCommittedPages(a4, a6 + a4 - 1, a2, (__int64)&BugCheckParameter1[1].ActiveProcessors.StaticBitmap[26]) != 0);
  KiUnstackDetachProcess((__int64)v50, 0LL);
  v20 = v19 & 0xC0000018;
  if ( v20 < 0 )
    return (unsigned int)v20;
  PteAddress = MiGetPteAddress(a4);
  v41 = PteAddress;
  v43 = PteAddress + 8 * (v21 - 1);
  if ( v21 > 0x14 )
    v21 = 20LL;
  MiCreatePteCopyList(v21 + 1, v21 + 1, (__int64)&v48);
  if ( !DWORD1(v48) )
    return 3221225626LL;
  if ( ((unsigned __int16)Src & 0xFFF) == 0 || (Pool = (char *)MiAllocatePool(256, 0x10000uLL, 0x44456D4Du)) != 0LL )
  {
    VmPartition = MiGetVmPartition((__int64)&BugCheckParameter1[1].ActiveProcessors.StaticBitmap[26]);
    v23 = 0;
    *a8 = 0LL;
    v46 = (__int64)(*(_QWORD *)(a2 + 80) << 25) >> 16;
    while ( 1 )
    {
      if ( PteAddress > v43 )
        goto LABEL_22;
      v25 = (__int64)(v43 - PteAddress + 8) >> 3;
      v26 = 16;
      if ( v25 < 0x10 )
        v26 = v25;
      v38 = v26;
      v27 = a3;
      if ( a3 == 1 )
      {
        if ( v26 )
        {
          v28 = ((unsigned __int64)v26 << 12) + v11;
          if ( v28 > 0x7FFFFFFF0000LL || v28 < v11 )
            MEMORY[0x7FFFFFFF0000] = 0;
        }
        v27 = 1;
      }
      if ( Pool )
      {
        memmove(Pool, (const void *)v11, (unsigned __int64)v26 << 12);
        v29 = Pool;
      }
      else if ( v27 == 1 )
      {
        MemoryDescriptorList[0].Next = 0LL;
        MemoryDescriptorList[0].Size = 8 * (((((unsigned __int64)v26 << 12) + (v11 & 0xFFF) + 4095) >> 12) + 6);
        MemoryDescriptorList[0].MdlFlags = 0;
        MemoryDescriptorList[0].StartVa = (PVOID)(v11 & 0xFFFFFFFFFFFFF000uLL);
        MemoryDescriptorList[0].ByteOffset = v11 & 0xFFF;
        MemoryDescriptorList[0].ByteCount = v26 << 12;
        MmProbeAndLockPages(MemoryDescriptorList, 0, IoReadAccess);
        v29 = (char *)MmMapLockedPagesSpecifyCache(MemoryDescriptorList, 0, MmCached, 0LL, 0, 0xC0000000);
        if ( !v29 )
          break;
      }
      else
      {
        v29 = (char *)v11;
      }
      v47 = (char *)(((unsigned __int64)v26 << 12) + v11);
      KiStackAttachProcess(BugCheckParameter1, 0LL, (__int64)v50, v24);
      v30 = &v29[-a4];
      while ( v26 )
      {
        PageForEnclave = MiGetPageForEnclave(a2, VmPartition);
        v32 = PageForEnclave;
        if ( PageForEnclave == -1LL )
        {
          v23 = -1073741801;
          break;
        }
        PteFromCopyList = (unsigned __int64)MiGetPteFromCopyList((unsigned int *)&v48, PageForEnclave, -1LL);
        v23 = KeAddEnclavePage(v46, (__int64)&v30[a4], (__int64)(PteFromCopyList << 25) >> 16, a4, v39, a9);
        v33 = ZeroPte;
        v37 = 0;
        if ( MiPteInShadowRange(PteFromCopyList) )
        {
          if ( (unsigned int)MiPteHasShadow() )
          {
            v37 = 1;
            if ( HIBYTE(word_140C51864) )
              goto LABEL_53;
          }
          else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) == 0 )
          {
            goto LABEL_53;
          }
          if ( (ZeroPte & 1) != 0 )
            v33 = ZeroPte | 0x8000000000000000uLL;
        }
LABEL_53:
        *(_QWORD *)PteFromCopyList = v33;
        if ( v37 )
          MiWritePteShadow(PteFromCopyList, v33);
        if ( v23 < 0 )
        {
          MiReturnEnclavePage(v32);
          break;
        }
        MiInitializeEnclavePfn(v32, v41, v16);
        ValidPte = MiMakeValidPte(v41, v32, v16 | 0x80000000);
        MiWriteEnclavePte(v41, ValidPte, a2, 0, 1);
        a4 += 4096LL;
        v41 += 8LL;
        v26 = --v38;
        *a8 += 4096LL;
      }
      if ( (MemoryDescriptorList[0].MdlFlags & 2) != 0 )
        MmUnlockPages(MemoryDescriptorList);
      KiUnstackDetachProcess((__int64)v50, 0LL);
      v11 = (unsigned __int64)v47;
      PteAddress = v41;
    }
  }
  v23 = -1073741670;
LABEL_22:
  if ( (MemoryDescriptorList[0].MdlFlags & 2) != 0 )
    MmUnlockPages(MemoryDescriptorList);
  if ( Pool )
    ExFreePoolWithTag(Pool, 0);
  MiReleasePteCopyList((__int64)&v48);
  return (unsigned int)v23;
}
