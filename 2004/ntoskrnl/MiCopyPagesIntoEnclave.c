/*
 * XREFs of MiCopyPagesIntoEnclave @ 0x1408CEB88
 * Callers:
 *     NtLoadEnclaveData @ 0x1408D0E50 (NtLoadEnclaveData.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x140205370 (KiUnstackDetachProcess.c)
 *     MmMapLockedPagesSpecifyCache @ 0x14021BA60 (MmMapLockedPagesSpecifyCache.c)
 *     MiGetPteAddress @ 0x140221EF0 (MiGetPteAddress.c)
 *     MiMakeValidPte @ 0x1402342E0 (MiMakeValidPte.c)
 *     MiPteInShadowRange @ 0x1402386B0 (MiPteInShadowRange.c)
 *     MiAllocatePool @ 0x140247F80 (MiAllocatePool.c)
 *     MmProbeAndLockPages @ 0x14024D8A0 (MmProbeAndLockPages.c)
 *     KiStackAttachProcess @ 0x14024F890 (KiStackAttachProcess.c)
 *     MmUnlockPages @ 0x140283990 (MmUnlockPages.c)
 *     MiMakeProtectionMask @ 0x1402ACEC0 (MiMakeProtectionMask.c)
 *     MiGetPteFromCopyList @ 0x1402B4DE0 (MiGetPteFromCopyList.c)
 *     MiCreatePteCopyList @ 0x1402B7128 (MiCreatePteCopyList.c)
 *     MiWritePteShadow @ 0x14032ECC0 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x14032ED20 (MiPteHasShadow.c)
 *     MiReleasePteCopyList @ 0x140358E98 (MiReleasePteCopyList.c)
 *     __security_check_cookie @ 0x1403CCE60 (__security_check_cookie.c)
 *     memmove @ 0x140409FC0 (memmove.c)
 *     memset @ 0x14040A280 (memset.c)
 *     KeAddEnclavePage @ 0x14050FAE8 (KeAddEnclavePage.c)
 *     MiGetVmPartition @ 0x140530250 (MiGetVmPartition.c)
 *     MiGetPageForEnclave @ 0x1405454F4 (MiGetPageForEnclave.c)
 *     MiInitializeEnclavePfn @ 0x140545558 (MiInitializeEnclavePfn.c)
 *     MiReturnEnclavePage @ 0x140545F50 (MiReturnEnclavePage.c)
 *     MiWriteEnclavePte @ 0x1405460CC (MiWriteEnclavePte.c)
 *     ExFreePoolWithTag @ 0x1409B1140 (ExFreePoolWithTag.c)
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
  unsigned __int64 v19; // r9
  unsigned __int64 PteAddress; // r12
  unsigned __int64 v21; // r13
  int v22; // edi
  unsigned __int64 v23; // rax
  unsigned int v24; // r13d
  char v25; // al
  unsigned __int64 v26; // rcx
  char *v27; // r15
  __int64 v28; // rbx
  char *v29; // r15
  __int64 PageForEnclave; // rax
  ULONG_PTR v31; // r12
  unsigned __int64 v32; // rbx
  __int64 v33; // rdx
  __int64 v34; // r8
  _DWORD *v35; // r9
  __int64 v36; // r8
  __int64 v37; // r9
  unsigned __int64 ValidPte; // rax
  int v40; // [rsp+34h] [rbp-1C4h]
  ULONG_PTR BugCheckParameter4; // [rsp+38h] [rbp-1C0h]
  int v42; // [rsp+48h] [rbp-1B0h]
  unsigned int v43; // [rsp+4Ch] [rbp-1ACh]
  unsigned __int64 v44; // [rsp+50h] [rbp-1A8h]
  unsigned __int64 PteFromCopyList; // [rsp+60h] [rbp-198h]
  _QWORD *VmPartition; // [rsp+80h] [rbp-178h]
  __int64 v49; // [rsp+90h] [rbp-168h]
  char *v50; // [rsp+98h] [rbp-160h]
  unsigned __int64 v51; // [rsp+A0h] [rbp-158h]
  __int128 v52; // [rsp+A8h] [rbp-150h] BYREF
  __int64 v53; // [rsp+B8h] [rbp-140h]
  _OWORD v54[3]; // [rsp+C0h] [rbp-138h] BYREF
  struct _MDL MemoryDescriptorList[4]; // [rsp+F0h] [rbp-108h] BYREF

  v44 = a4;
  v11 = (unsigned __int64)Src;
  memset(v54, 0, sizeof(v54));
  v52 = 0LL;
  v53 = 0LL;
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
  v42 = (32 * (*(_DWORD *)(a2 + 64) & 2)) | v16 | 1;
  v17 = ProtectionMask & 2 | 4;
  if ( (*(_DWORD *)(a2 + 72) & 1) == 0 )
    v17 = ProtectionMask;
  v43 = v17;
  PteAddress = MiGetPteAddress(a4);
  BugCheckParameter4 = PteAddress;
  v21 = PteAddress + 8 * (v18 - 1);
  v51 = v21;
  if ( v18 > 0x14 )
    v18 = 20LL;
  MiCreatePteCopyList(v18 + 1, v18 + 1, (__int64)&v52, v19);
  if ( !DWORD1(v52) )
    return 3221225626LL;
  if ( ((unsigned __int16)Src & 0xFFF) == 0 || (Pool = (char *)MiAllocatePool(256, 0x10000uLL, 0x44456D4Du)) != 0LL )
  {
    VmPartition = (_QWORD *)MiGetVmPartition((__int64)&a1[1].ActiveProcessorsPadding[6]);
    v22 = 0;
    *a8 = 0LL;
    v49 = (__int64)(*(_QWORD *)(a2 + 80) << 25) >> 16;
    while ( 1 )
    {
      if ( PteAddress > v21 )
        goto LABEL_20;
      v23 = (__int64)(v21 - PteAddress + 8) >> 3;
      v24 = 16;
      if ( v23 < 0x10 )
        v24 = v23;
      v25 = a3;
      if ( a3 == 1 )
      {
        if ( v24 )
        {
          v26 = ((unsigned __int64)v24 << 12) + v11;
          if ( v26 > 0x7FFFFFFF0000LL || v26 < v11 )
            MEMORY[0x7FFFFFFF0000] = 0;
        }
        v25 = 1;
      }
      if ( Pool )
      {
        memmove(Pool, (const void *)v11, (unsigned __int64)v24 << 12);
        v27 = Pool;
      }
      else if ( v25 == 1 )
      {
        MemoryDescriptorList[0].Next = 0LL;
        MemoryDescriptorList[0].Size = 8 * (((((unsigned __int64)v24 << 12) + (v11 & 0xFFF) + 4095) >> 12) + 6);
        MemoryDescriptorList[0].MdlFlags = 0;
        MemoryDescriptorList[0].StartVa = (PVOID)(v11 & 0xFFFFFFFFFFFFF000uLL);
        MemoryDescriptorList[0].ByteOffset = v11 & 0xFFF;
        MemoryDescriptorList[0].ByteCount = v24 << 12;
        MmProbeAndLockPages(MemoryDescriptorList, 0, IoReadAccess);
        v27 = (char *)MmMapLockedPagesSpecifyCache(MemoryDescriptorList, 0, MmCached, 0LL, 0, 0xC0000000);
        if ( !v27 )
          break;
      }
      else
      {
        v27 = (char *)v11;
      }
      v50 = (char *)(((unsigned __int64)v24 << 12) + v11);
      KiStackAttachProcess(a1, 0LL, (__int64)v54);
      v28 = v44;
      v29 = &v27[-v44];
      while ( v24 )
      {
        PageForEnclave = MiGetPageForEnclave(a2, VmPartition);
        v31 = PageForEnclave;
        if ( PageForEnclave == -1 )
        {
          v22 = -1073741801;
          goto LABEL_57;
        }
        PteFromCopyList = (unsigned __int64)MiGetPteFromCopyList((unsigned int *)&v52, PageForEnclave, -1LL);
        v22 = KeAddEnclavePage(v49, (__int64)&v29[v28], (__int64)(PteFromCopyList << 25) >> 16, v28, v42, a9);
        v32 = ZeroPte;
        v40 = 0;
        if ( MiPteInShadowRange(PteFromCopyList) )
        {
          if ( (unsigned int)MiPteHasShadow() )
          {
            v40 = 1;
            if ( HIBYTE(word_140C4DE08) )
              goto LABEL_51;
          }
          else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) == 0 )
          {
            goto LABEL_51;
          }
          if ( (ZeroPte & 1) != 0 )
            v32 = ZeroPte | 0x8000000000000000uLL;
        }
LABEL_51:
        *(_QWORD *)PteFromCopyList = v32;
        if ( v40 )
          MiWritePteShadow(PteFromCopyList, v32, v34);
        if ( v22 < 0 )
        {
          MiReturnEnclavePage(v31, v33, v34, v35);
LABEL_57:
          PteAddress = BugCheckParameter4;
          break;
        }
        MiInitializeEnclavePfn(v31, BugCheckParameter4, v43, v35);
        v36 = v43;
        LODWORD(v36) = v43 | 0x80000000;
        ValidPte = MiMakeValidPte(BugCheckParameter4, v31, v36, v37);
        MiWriteEnclavePte(BugCheckParameter4, ValidPte, a2, 0, 1);
        v28 = v44 + 4096;
        v44 += 4096LL;
        PteAddress = BugCheckParameter4 + 8;
        BugCheckParameter4 += 8LL;
        --v24;
        *a8 += 4096LL;
      }
      if ( (MemoryDescriptorList[0].MdlFlags & 2) != 0 )
        MmUnlockPages(MemoryDescriptorList);
      KiUnstackDetachProcess((__int64)v54, 0LL);
      v11 = (unsigned __int64)v50;
      v21 = v51;
    }
  }
  v22 = -1073741670;
LABEL_20:
  if ( (MemoryDescriptorList[0].MdlFlags & 2) != 0 )
    MmUnlockPages(MemoryDescriptorList);
  if ( Pool )
    ExFreePoolWithTag(Pool, 0);
  MiReleasePteCopyList((__int64)&v52);
  return (unsigned int)v22;
}
