/*
 * XREFs of MiCopyPagesIntoEnclave @ 0x1408D49C8
 * Callers:
 *     NtLoadEnclaveData @ 0x1408D6C90 (NtLoadEnclaveData.c)
 * Callees:
 *     MiPteInShadowRange @ 0x14021EA50 (MiPteInShadowRange.c)
 *     MiAllocatePool @ 0x14022D320 (MiAllocatePool.c)
 *     MiGetPteAddress @ 0x140230160 (MiGetPteAddress.c)
 *     KiUnstackDetachProcess @ 0x140268320 (KiUnstackDetachProcess.c)
 *     MmProbeAndLockPages @ 0x14026AA30 (MmProbeAndLockPages.c)
 *     MiMakeProtectionMask @ 0x14027C200 (MiMakeProtectionMask.c)
 *     MmMapLockedPagesSpecifyCache @ 0x1402864D0 (MmMapLockedPagesSpecifyCache.c)
 *     MiGetPteFromCopyList @ 0x140290F30 (MiGetPteFromCopyList.c)
 *     MiCreatePteCopyList @ 0x1402910E8 (MiCreatePteCopyList.c)
 *     MmUnlockPages @ 0x1402936A0 (MmUnlockPages.c)
 *     MiMakeValidPte @ 0x1402B1B40 (MiMakeValidPte.c)
 *     KiStackAttachProcess @ 0x1402D6FA0 (KiStackAttachProcess.c)
 *     MiWritePteShadow @ 0x140313F2C (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140313F8C (MiPteHasShadow.c)
 *     MiReleasePteCopyList @ 0x1403292F4 (MiReleasePteCopyList.c)
 *     __security_check_cookie @ 0x1403CFAF0 (__security_check_cookie.c)
 *     memmove @ 0x140411040 (memmove.c)
 *     memset @ 0x140411300 (memset.c)
 *     KeAddEnclavePage @ 0x140513418 (KeAddEnclavePage.c)
 *     MiGetVmPartition @ 0x140533C20 (MiGetVmPartition.c)
 *     MiGetPageForEnclave @ 0x140548EC4 (MiGetPageForEnclave.c)
 *     MiInitializeEnclavePfn @ 0x140548F28 (MiInitializeEnclavePfn.c)
 *     MiReturnEnclavePage @ 0x140549920 (MiReturnEnclavePage.c)
 *     MiWriteEnclavePte @ 0x140549A9C (MiWriteEnclavePte.c)
 *     ExFreePoolWithTag @ 0x1409B70B0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiCopyPagesIntoEnclave(
        _KPROCESS *a1,
        __int64 a2,
        char a3,
        unsigned __int64 a4,
        void *Src,
        __int64 a6,
        int a7,
        _QWORD *a8,
        _DWORD *a9)
{
  unsigned __int64 v11; // rbx
  char *Pool; // r14
  unsigned int ProtectionMask; // eax
  int v14; // r8d
  int v16; // ecx
  int v17; // edx
  unsigned __int64 v18; // rdx
  unsigned __int64 PteAddress; // r12
  unsigned __int64 v20; // r13
  int v21; // edi
  unsigned __int64 v22; // rax
  unsigned int v23; // r13d
  char v24; // al
  unsigned __int64 v25; // rcx
  char *v26; // r15
  __int64 v27; // rbx
  char *v28; // r15
  __int64 PageForEnclave; // rax
  ULONG_PTR v30; // r12
  unsigned __int64 v31; // rbx
  __int64 v32; // rdx
  __int64 v33; // r8
  _DWORD *v34; // r9
  __int64 v35; // r8
  __int64 v36; // r9
  unsigned __int64 ValidPte; // rax
  int v39; // [rsp+34h] [rbp-1C4h]
  ULONG_PTR BugCheckParameter4; // [rsp+38h] [rbp-1C0h]
  int v41; // [rsp+48h] [rbp-1B0h]
  unsigned int v42; // [rsp+4Ch] [rbp-1ACh]
  unsigned __int64 v43; // [rsp+50h] [rbp-1A8h]
  unsigned __int64 PteFromCopyList; // [rsp+60h] [rbp-198h]
  _QWORD *VmPartition; // [rsp+80h] [rbp-178h]
  __int64 v48; // [rsp+90h] [rbp-168h]
  char *v49; // [rsp+98h] [rbp-160h]
  unsigned __int64 v50; // [rsp+A0h] [rbp-158h]
  __int128 v51; // [rsp+A8h] [rbp-150h] BYREF
  __int64 v52; // [rsp+B8h] [rbp-140h]
  _OWORD v53[3]; // [rsp+C0h] [rbp-138h] BYREF
  struct _MDL MemoryDescriptorList[4]; // [rsp+F0h] [rbp-108h] BYREF

  v43 = a4;
  v11 = (unsigned __int64)Src;
  memset(v53, 0, sizeof(v53));
  v51 = 0LL;
  v52 = 0LL;
  memset(MemoryDescriptorList, 0, 0xB8uLL);
  Pool = 0LL;
  ProtectionMask = MiMakeProtectionMask(a7 & 0x5FFFFFFF);
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
  v16 = v14 | 2;
  if ( (ProtectionMask & 4) == 0 )
    v16 = v14;
  v41 = (32 * (*(_DWORD *)(a2 + 64) & 2)) | v16 | 1;
  v17 = ProtectionMask & 2 | 4;
  if ( (*(_DWORD *)(a2 + 72) & 1) == 0 )
    v17 = ProtectionMask;
  v42 = v17;
  PteAddress = MiGetPteAddress(a4);
  BugCheckParameter4 = PteAddress;
  v20 = PteAddress + 8 * (v18 - 1);
  v50 = v20;
  if ( v18 > 0x14 )
    v18 = 20LL;
  MiCreatePteCopyList(v18 + 1, v18 + 1, (__int64)&v51);
  if ( !DWORD1(v51) )
    return 3221225626LL;
  if ( ((unsigned __int16)Src & 0xFFF) == 0 || (Pool = (char *)MiAllocatePool(256, 0x10000uLL, 0x44456D4Du)) != 0LL )
  {
    VmPartition = (_QWORD *)MiGetVmPartition((__int64)&a1[1].ActiveProcessorsPadding[6]);
    v21 = 0;
    *a8 = 0LL;
    v48 = (__int64)(*(_QWORD *)(a2 + 80) << 25) >> 16;
    while ( 1 )
    {
      if ( PteAddress > v20 )
        goto LABEL_20;
      v22 = (__int64)(v20 - PteAddress + 8) >> 3;
      v23 = 16;
      if ( v22 < 0x10 )
        v23 = v22;
      v24 = a3;
      if ( a3 == 1 )
      {
        if ( v23 )
        {
          v25 = ((unsigned __int64)v23 << 12) + v11;
          if ( v25 > 0x7FFFFFFF0000LL || v25 < v11 )
            MEMORY[0x7FFFFFFF0000] = 0;
        }
        v24 = 1;
      }
      if ( Pool )
      {
        memmove(Pool, (const void *)v11, (unsigned __int64)v23 << 12);
        v26 = Pool;
      }
      else if ( v24 == 1 )
      {
        MemoryDescriptorList[0].Next = 0LL;
        MemoryDescriptorList[0].Size = 8 * (((((unsigned __int64)v23 << 12) + (v11 & 0xFFF) + 4095) >> 12) + 6);
        MemoryDescriptorList[0].MdlFlags = 0;
        MemoryDescriptorList[0].StartVa = (PVOID)(v11 & 0xFFFFFFFFFFFFF000uLL);
        MemoryDescriptorList[0].ByteOffset = v11 & 0xFFF;
        MemoryDescriptorList[0].ByteCount = v23 << 12;
        MmProbeAndLockPages(MemoryDescriptorList, 0, IoReadAccess);
        v26 = (char *)MmMapLockedPagesSpecifyCache(MemoryDescriptorList, 0, MmCached, 0LL, 0, 0xC0000000);
        if ( !v26 )
          break;
      }
      else
      {
        v26 = (char *)v11;
      }
      v49 = (char *)(((unsigned __int64)v23 << 12) + v11);
      KiStackAttachProcess(a1, 0, (__int64)v53);
      v27 = v43;
      v28 = &v26[-v43];
      while ( v23 )
      {
        PageForEnclave = MiGetPageForEnclave(a2, VmPartition);
        v30 = PageForEnclave;
        if ( PageForEnclave == -1 )
        {
          v21 = -1073741801;
          goto LABEL_57;
        }
        PteFromCopyList = (unsigned __int64)MiGetPteFromCopyList((unsigned int *)&v51, PageForEnclave, -1LL);
        v21 = KeAddEnclavePage(v48, (__int64)&v28[v27], (__int64)(PteFromCopyList << 25) >> 16, v27, v41, a9);
        v31 = ZeroPte;
        v39 = 0;
        if ( MiPteInShadowRange(PteFromCopyList) )
        {
          if ( (unsigned int)MiPteHasShadow() )
          {
            v39 = 1;
            if ( HIBYTE(word_140C4DE88) )
              goto LABEL_51;
          }
          else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) == 0 )
          {
            goto LABEL_51;
          }
          if ( (ZeroPte & 1) != 0 )
            v31 = ZeroPte | 0x8000000000000000uLL;
        }
LABEL_51:
        *(_QWORD *)PteFromCopyList = v31;
        if ( v39 )
          MiWritePteShadow(PteFromCopyList, v31, v33);
        if ( v21 < 0 )
        {
          MiReturnEnclavePage(v30, v32, v33, v34);
LABEL_57:
          PteAddress = BugCheckParameter4;
          break;
        }
        MiInitializeEnclavePfn(v30, BugCheckParameter4, v42, v34);
        v35 = v42;
        LODWORD(v35) = v42 | 0x80000000;
        ValidPte = MiMakeValidPte(BugCheckParameter4, v30, v35, v36);
        MiWriteEnclavePte(BugCheckParameter4, ValidPte, a2, 0, 1);
        v27 = v43 + 4096;
        v43 += 4096LL;
        PteAddress = BugCheckParameter4 + 8;
        BugCheckParameter4 += 8LL;
        --v23;
        *a8 += 4096LL;
      }
      if ( (MemoryDescriptorList[0].MdlFlags & 2) != 0 )
        MmUnlockPages(MemoryDescriptorList);
      KiUnstackDetachProcess((__int64)v53, 0);
      v11 = (unsigned __int64)v49;
      v20 = v50;
    }
  }
  v21 = -1073741670;
LABEL_20:
  if ( (MemoryDescriptorList[0].MdlFlags & 2) != 0 )
    MmUnlockPages(MemoryDescriptorList);
  if ( Pool )
    ExFreePoolWithTag(Pool, 0);
  MiReleasePteCopyList((__int64)&v51);
  return (unsigned int)v21;
}
