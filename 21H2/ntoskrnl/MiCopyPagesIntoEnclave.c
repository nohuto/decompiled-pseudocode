/*
 * XREFs of MiCopyPagesIntoEnclave @ 0x1408D22E8
 * Callers:
 *     NtLoadEnclaveData @ 0x1408D45B0 (NtLoadEnclaveData.c)
 * Callees:
 *     MiWritePteShadow @ 0x140234B9C (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140234BFC (MiPteHasShadow.c)
 *     MiReleasePteCopyList @ 0x140249314 (MiReleasePteCopyList.c)
 *     MiAllocatePool @ 0x14027C2E0 (MiAllocatePool.c)
 *     KiStackAttachProcess @ 0x14027D850 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x1402AB900 (KiUnstackDetachProcess.c)
 *     MmProbeAndLockPages @ 0x1402AE010 (MmProbeAndLockPages.c)
 *     MiMakeProtectionMask @ 0x1402BF320 (MiMakeProtectionMask.c)
 *     MmMapLockedPagesSpecifyCache @ 0x1402CB5C0 (MmMapLockedPagesSpecifyCache.c)
 *     MiGetPteFromCopyList @ 0x1402E51D0 (MiGetPteFromCopyList.c)
 *     MiCreatePteCopyList @ 0x1402E5388 (MiCreatePteCopyList.c)
 *     MmUnlockPages @ 0x1402E92C0 (MmUnlockPages.c)
 *     MiGetPteAddress @ 0x140322E50 (MiGetPteAddress.c)
 *     MiMakeValidPte @ 0x140339480 (MiMakeValidPte.c)
 *     MiPteInShadowRange @ 0x140353840 (MiPteInShadowRange.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     memmove @ 0x140414040 (memmove.c)
 *     memset @ 0x140414300 (memset.c)
 *     KeAddEnclavePage @ 0x140515198 (KeAddEnclavePage.c)
 *     MiGetVmPartition @ 0x140535960 (MiGetVmPartition.c)
 *     MiGetPageForEnclave @ 0x14054AC04 (MiGetPageForEnclave.c)
 *     MiInitializeEnclavePfn @ 0x14054AC68 (MiInitializeEnclavePfn.c)
 *     MiReturnEnclavePage @ 0x14054B660 (MiReturnEnclavePage.c)
 *     MiWriteEnclavePte @ 0x14054B7DC (MiWriteEnclavePte.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
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
  unsigned __int64 ValidPte; // rax
  int v38; // [rsp+34h] [rbp-1C4h]
  ULONG_PTR v39; // [rsp+38h] [rbp-1C0h]
  int v40; // [rsp+48h] [rbp-1B0h]
  unsigned int v41; // [rsp+4Ch] [rbp-1ACh]
  unsigned __int64 v42; // [rsp+50h] [rbp-1A8h]
  unsigned __int64 PteFromCopyList; // [rsp+60h] [rbp-198h]
  _QWORD *VmPartition; // [rsp+80h] [rbp-178h]
  __int64 v47; // [rsp+90h] [rbp-168h]
  char *v48; // [rsp+98h] [rbp-160h]
  unsigned __int64 v49; // [rsp+A0h] [rbp-158h]
  __int128 v50; // [rsp+A8h] [rbp-150h] BYREF
  __int64 v51; // [rsp+B8h] [rbp-140h]
  _OWORD v52[3]; // [rsp+C0h] [rbp-138h] BYREF
  struct _MDL MemoryDescriptorList[4]; // [rsp+F0h] [rbp-108h] BYREF

  v42 = a4;
  v11 = (unsigned __int64)Src;
  memset(v52, 0, sizeof(v52));
  v50 = 0LL;
  v51 = 0LL;
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
  v40 = (32 * (*(_DWORD *)(a2 + 64) & 2)) | v16 | 1;
  v17 = ProtectionMask & 2 | 4;
  if ( (*(_DWORD *)(a2 + 72) & 1) == 0 )
    v17 = ProtectionMask;
  v41 = v17;
  PteAddress = MiGetPteAddress(a4);
  v39 = PteAddress;
  v21 = PteAddress + 8 * (v18 - 1);
  v49 = v21;
  if ( v18 > 0x14 )
    v18 = 20LL;
  MiCreatePteCopyList(v18 + 1, v18 + 1, (__int64)&v50, v19);
  if ( !DWORD1(v50) )
    return 3221225626LL;
  if ( ((unsigned __int16)Src & 0xFFF) == 0 || (Pool = (char *)MiAllocatePool(256, 0x10000uLL, 0x44456D4Du)) != 0LL )
  {
    VmPartition = (_QWORD *)MiGetVmPartition((__int64)&a1[1].ActiveProcessorsPadding[6]);
    v22 = 0;
    *a8 = 0LL;
    v47 = (__int64)(*(_QWORD *)(a2 + 80) << 25) >> 16;
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
      v48 = (char *)(((unsigned __int64)v24 << 12) + v11);
      KiStackAttachProcess(a1, 0, (__int64)v52);
      v28 = v42;
      v29 = &v27[-v42];
      while ( v24 )
      {
        PageForEnclave = MiGetPageForEnclave(a2, VmPartition);
        v31 = PageForEnclave;
        if ( PageForEnclave == -1 )
        {
          v22 = -1073741801;
          goto LABEL_57;
        }
        PteFromCopyList = (unsigned __int64)MiGetPteFromCopyList((unsigned int *)&v50, PageForEnclave, -1LL);
        v22 = KeAddEnclavePage(v47, (__int64)&v29[v28], (__int64)(PteFromCopyList << 25) >> 16, v28, v40, a9);
        v32 = ZeroPte;
        v38 = 0;
        if ( MiPteInShadowRange(PteFromCopyList) )
        {
          if ( (unsigned int)MiPteHasShadow() )
          {
            v38 = 1;
            if ( HIBYTE(word_140C4E048) )
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
        if ( v38 )
          MiWritePteShadow(PteFromCopyList, v32);
        if ( v22 < 0 )
        {
          MiReturnEnclavePage(v31, v33, v34, v35);
LABEL_57:
          PteAddress = v39;
          break;
        }
        MiInitializeEnclavePfn(v31, v39, v41, v35);
        ValidPte = MiMakeValidPte(v39, v31, v41 | 0x80000000);
        MiWriteEnclavePte(v39, ValidPte, a2, 0LL, 1);
        v28 = v42 + 4096;
        v42 += 4096LL;
        PteAddress = v39 + 8;
        v39 += 8LL;
        --v24;
        *a8 += 4096LL;
      }
      if ( (MemoryDescriptorList[0].MdlFlags & 2) != 0 )
        MmUnlockPages(MemoryDescriptorList);
      KiUnstackDetachProcess((__int64)v52, 0LL);
      v11 = (unsigned __int64)v48;
      v21 = v49;
    }
  }
  v22 = -1073741670;
LABEL_20:
  if ( (MemoryDescriptorList[0].MdlFlags & 2) != 0 )
    MmUnlockPages(MemoryDescriptorList);
  if ( Pool )
    ExFreePoolWithTag(Pool, 0);
  MiReleasePteCopyList((__int64)&v50);
  return (unsigned int)v22;
}
