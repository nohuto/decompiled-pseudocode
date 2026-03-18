/*
 * XREFs of MiCopyPagesIntoEnclave @ 0x1408CD838
 * Callers:
 *     NtLoadEnclaveData @ 0x1408CFB00 (NtLoadEnclaveData.c)
 * Callees:
 *     MiMakeProtectionMask @ 0x14021A3B0 (MiMakeProtectionMask.c)
 *     MiGetPteFromCopyList @ 0x140222160 (MiGetPteFromCopyList.c)
 *     MiCreatePteCopyList @ 0x1402244A8 (MiCreatePteCopyList.c)
 *     MmUnlockPages @ 0x1402471B0 (MmUnlockPages.c)
 *     KiUnstackDetachProcess @ 0x14025E290 (KiUnstackDetachProcess.c)
 *     MmMapLockedPagesSpecifyCache @ 0x140274AB0 (MmMapLockedPagesSpecifyCache.c)
 *     MiGetPteAddress @ 0x14027AF40 (MiGetPteAddress.c)
 *     MiMakeValidPte @ 0x14028D330 (MiMakeValidPte.c)
 *     MiPteInShadowRange @ 0x140291700 (MiPteInShadowRange.c)
 *     MiAllocatePool @ 0x1402A0FB0 (MiAllocatePool.c)
 *     MmProbeAndLockPages @ 0x1402A68D0 (MmProbeAndLockPages.c)
 *     KiStackAttachProcess @ 0x1402A88C0 (KiStackAttachProcess.c)
 *     MiWritePteShadow @ 0x1402F2F20 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x1402F2F80 (MiPteHasShadow.c)
 *     MiReleasePteCopyList @ 0x14031B3E8 (MiReleasePteCopyList.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     memmove @ 0x140408CC0 (memmove.c)
 *     memset @ 0x140408F80 (memset.c)
 *     KeAddEnclavePage @ 0x14050F498 (KeAddEnclavePage.c)
 *     MiGetVmPartition @ 0x14052FC00 (MiGetVmPartition.c)
 *     MiGetPageForEnclave @ 0x140544EA4 (MiGetPageForEnclave.c)
 *     MiInitializeEnclavePfn @ 0x140544F08 (MiInitializeEnclavePfn.c)
 *     MiReturnEnclavePage @ 0x140545900 (MiReturnEnclavePage.c)
 *     MiWriteEnclavePte @ 0x140545A7C (MiWriteEnclavePte.c)
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
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
  _DWORD *v22; // r9
  unsigned __int64 v23; // rax
  unsigned int v24; // r13d
  char v25; // al
  unsigned __int64 v26; // rcx
  char *v27; // r15
  __int64 v28; // r8
  _DWORD *v29; // r9
  __int64 v30; // rbx
  char *v31; // r15
  __int64 PageForEnclave; // rax
  ULONG_PTR v33; // r12
  unsigned __int64 v34; // rbx
  __int64 v35; // rdx
  __int64 v36; // r8
  _DWORD *v37; // r9
  __int64 v38; // r8
  __int64 v39; // r9
  unsigned __int64 ValidPte; // rax
  int v42; // [rsp+34h] [rbp-1C4h]
  ULONG_PTR v43; // [rsp+38h] [rbp-1C0h]
  int v44; // [rsp+48h] [rbp-1B0h]
  unsigned int v45; // [rsp+4Ch] [rbp-1ACh]
  unsigned __int64 v46; // [rsp+50h] [rbp-1A8h]
  unsigned __int64 PteFromCopyList; // [rsp+60h] [rbp-198h]
  _QWORD *VmPartition; // [rsp+80h] [rbp-178h]
  __int64 v51; // [rsp+90h] [rbp-168h]
  char *v52; // [rsp+98h] [rbp-160h]
  unsigned __int64 v53; // [rsp+A0h] [rbp-158h]
  __int128 v54; // [rsp+A8h] [rbp-150h] BYREF
  __int64 v55; // [rsp+B8h] [rbp-140h]
  _OWORD v56[3]; // [rsp+C0h] [rbp-138h] BYREF
  struct _MDL MemoryDescriptorList[4]; // [rsp+F0h] [rbp-108h] BYREF

  v46 = a4;
  v11 = (unsigned __int64)Src;
  memset(v56, 0, sizeof(v56));
  v54 = 0LL;
  v55 = 0LL;
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
  v44 = (32 * (*(_DWORD *)(a2 + 64) & 2)) | v16 | 1;
  v17 = ProtectionMask & 2 | 4;
  if ( (*(_DWORD *)(a2 + 72) & 1) == 0 )
    v17 = ProtectionMask;
  v45 = v17;
  PteAddress = MiGetPteAddress(a4);
  v43 = PteAddress;
  v20 = PteAddress + 8 * (v18 - 1);
  v53 = v20;
  if ( v18 > 0x14 )
    v18 = 20LL;
  MiCreatePteCopyList(v18 + 1, v18 + 1, (__int64)&v54);
  if ( !DWORD1(v54) )
    return 3221225626LL;
  if ( ((unsigned __int16)Src & 0xFFF) == 0 || (Pool = (char *)MiAllocatePool(256, 0x10000uLL, 0x44456D4Du)) != 0LL )
  {
    VmPartition = (_QWORD *)MiGetVmPartition((__int64)&a1[1].ActiveProcessorsPadding[6]);
    v21 = 0;
    *a8 = 0LL;
    v51 = (__int64)(*(_QWORD *)(a2 + 80) << 25) >> 16;
    while ( 1 )
    {
      if ( PteAddress > v20 )
        goto LABEL_20;
      v23 = (__int64)(v20 - PteAddress + 8) >> 3;
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
      v52 = (char *)(((unsigned __int64)v24 << 12) + v11);
      KiStackAttachProcess(a1, 0LL, (__int64)v56, v22);
      v30 = v46;
      v31 = &v27[-v46];
      while ( v24 )
      {
        PageForEnclave = MiGetPageForEnclave(a2, VmPartition);
        v33 = PageForEnclave;
        if ( PageForEnclave == -1 )
        {
          v21 = -1073741801;
          goto LABEL_57;
        }
        PteFromCopyList = (unsigned __int64)MiGetPteFromCopyList((unsigned int *)&v54, PageForEnclave, -1LL);
        v21 = KeAddEnclavePage(v51, (__int64)&v31[v30], (__int64)(PteFromCopyList << 25) >> 16, v30, v44, a9);
        v34 = ZeroPte;
        v42 = 0;
        if ( MiPteInShadowRange(PteFromCopyList) )
        {
          if ( (unsigned int)MiPteHasShadow() )
          {
            v42 = 1;
            if ( HIBYTE(word_140C4DF48) )
              goto LABEL_51;
          }
          else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) == 0 )
          {
            goto LABEL_51;
          }
          if ( (ZeroPte & 1) != 0 )
            v34 = ZeroPte | 0x8000000000000000uLL;
        }
LABEL_51:
        *(_QWORD *)PteFromCopyList = v34;
        if ( v42 )
          MiWritePteShadow(PteFromCopyList, v34);
        if ( v21 < 0 )
        {
          MiReturnEnclavePage(v33, v35, v36, v37);
LABEL_57:
          PteAddress = v43;
          break;
        }
        MiInitializeEnclavePfn(v33, v43, v45, v37);
        v38 = v45;
        LODWORD(v38) = v45 | 0x80000000;
        ValidPte = MiMakeValidPte(v43, v33, v38, v39);
        MiWriteEnclavePte(v43, ValidPte, a2, 0, 1);
        v30 = v46 + 4096;
        v46 += 4096LL;
        PteAddress = v43 + 8;
        v43 += 8LL;
        --v24;
        *a8 += 4096LL;
      }
      if ( (MemoryDescriptorList[0].MdlFlags & 2) != 0 )
        MmUnlockPages(MemoryDescriptorList);
      KiUnstackDetachProcess((__int64)v56, 0LL, v28, v29);
      v11 = (unsigned __int64)v52;
      v20 = v53;
    }
  }
  v21 = -1073741670;
LABEL_20:
  if ( (MemoryDescriptorList[0].MdlFlags & 2) != 0 )
    MmUnlockPages(MemoryDescriptorList);
  if ( Pool )
    ExFreePoolWithTag(Pool, 0);
  MiReleasePteCopyList((__int64)&v54);
  return (unsigned int)v21;
}
