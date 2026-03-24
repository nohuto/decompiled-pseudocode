/*
 * XREFs of MiCopyPagesIntoEnclave @ 0x1408D2188
 * Callers:
 *     NtLoadEnclaveData @ 0x1408D4450 (NtLoadEnclaveData.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x140207000 (KiUnstackDetachProcess.c)
 *     MmProbeAndLockPages @ 0x140209710 (MmProbeAndLockPages.c)
 *     MiMakeProtectionMask @ 0x14021AA20 (MiMakeProtectionMask.c)
 *     MmMapLockedPagesSpecifyCache @ 0x140226CC0 (MmMapLockedPagesSpecifyCache.c)
 *     MiGetPteFromCopyList @ 0x140240980 (MiGetPteFromCopyList.c)
 *     MiCreatePteCopyList @ 0x140240B38 (MiCreatePteCopyList.c)
 *     MmUnlockPages @ 0x140244A70 (MmUnlockPages.c)
 *     MiAllocatePool @ 0x14025AD70 (MiAllocatePool.c)
 *     KiStackAttachProcess @ 0x14025C2E0 (KiStackAttachProcess.c)
 *     MiWritePteShadow @ 0x1402B69BC (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x1402B6A1C (MiPteHasShadow.c)
 *     MiReleasePteCopyList @ 0x1402CAA24 (MiReleasePteCopyList.c)
 *     MiGetPteAddress @ 0x140318100 (MiGetPteAddress.c)
 *     MiMakeValidPte @ 0x14032E730 (MiMakeValidPte.c)
 *     MiPteInShadowRange @ 0x140348AF0 (MiPteInShadowRange.c)
 *     __security_check_cookie @ 0x1403D0460 (__security_check_cookie.c)
 *     memmove @ 0x140413F40 (memmove.c)
 *     memset @ 0x140414200 (memset.c)
 *     KeAddEnclavePage @ 0x140514F58 (KeAddEnclavePage.c)
 *     MiGetVmPartition @ 0x140535720 (MiGetVmPartition.c)
 *     MiGetPageForEnclave @ 0x14054A9C4 (MiGetPageForEnclave.c)
 *     MiInitializeEnclavePfn @ 0x14054AA28 (MiInitializeEnclavePfn.c)
 *     MiReturnEnclavePage @ 0x14054B420 (MiReturnEnclavePage.c)
 *     MiWriteEnclavePte @ 0x14054B59C (MiWriteEnclavePte.c)
 *     ExFreePoolWithTag @ 0x1409B4010 (ExFreePoolWithTag.c)
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
  _DWORD *v23; // r9
  unsigned __int64 v24; // rax
  unsigned int v25; // r13d
  char v26; // al
  unsigned __int64 v27; // rcx
  char *v28; // r15
  __int64 v29; // rbx
  char *v30; // r15
  __int64 PageForEnclave; // rax
  ULONG_PTR v32; // r12
  unsigned __int64 v33; // rbx
  __int64 v34; // rdx
  __int64 v35; // r8
  _DWORD *v36; // r9
  unsigned __int64 ValidPte; // rax
  int v39; // [rsp+34h] [rbp-1C4h]
  ULONG_PTR v40; // [rsp+38h] [rbp-1C0h]
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
  v40 = PteAddress;
  v21 = PteAddress + 8 * (v18 - 1);
  v50 = v21;
  if ( v18 > 0x14 )
    v18 = 20LL;
  MiCreatePteCopyList(v18 + 1, v18 + 1, (__int64)&v51, v19);
  if ( !DWORD1(v51) )
    return 3221225626LL;
  if ( ((unsigned __int16)Src & 0xFFF) == 0 || (Pool = (char *)MiAllocatePool(256, 0x10000uLL, 0x44456D4Du)) != 0LL )
  {
    VmPartition = (_QWORD *)MiGetVmPartition((__int64)&a1[1].ActiveProcessorsPadding[6]);
    v22 = 0;
    *a8 = 0LL;
    v48 = (__int64)(*(_QWORD *)(a2 + 80) << 25) >> 16;
    while ( 1 )
    {
      if ( PteAddress > v21 )
        goto LABEL_20;
      v24 = (__int64)(v21 - PteAddress + 8) >> 3;
      v25 = 16;
      if ( v24 < 0x10 )
        v25 = v24;
      v26 = a3;
      if ( a3 == 1 )
      {
        if ( v25 )
        {
          v27 = ((unsigned __int64)v25 << 12) + v11;
          if ( v27 > 0x7FFFFFFF0000LL || v27 < v11 )
            MEMORY[0x7FFFFFFF0000] = 0;
        }
        v26 = 1;
      }
      if ( Pool )
      {
        memmove(Pool, (const void *)v11, (unsigned __int64)v25 << 12);
        v28 = Pool;
      }
      else if ( v26 == 1 )
      {
        MemoryDescriptorList[0].Next = 0LL;
        MemoryDescriptorList[0].Size = 8 * (((((unsigned __int64)v25 << 12) + (v11 & 0xFFF) + 4095) >> 12) + 6);
        MemoryDescriptorList[0].MdlFlags = 0;
        MemoryDescriptorList[0].StartVa = (PVOID)(v11 & 0xFFFFFFFFFFFFF000uLL);
        MemoryDescriptorList[0].ByteOffset = v11 & 0xFFF;
        MemoryDescriptorList[0].ByteCount = v25 << 12;
        MmProbeAndLockPages(MemoryDescriptorList, 0, IoReadAccess);
        v28 = (char *)MmMapLockedPagesSpecifyCache(MemoryDescriptorList, 0, MmCached, 0LL, 0, 0xC0000000);
        if ( !v28 )
          break;
      }
      else
      {
        v28 = (char *)v11;
      }
      v49 = (char *)(((unsigned __int64)v25 << 12) + v11);
      KiStackAttachProcess(a1, 0LL, (__int64)v53, v23);
      v29 = v43;
      v30 = &v28[-v43];
      while ( v25 )
      {
        PageForEnclave = MiGetPageForEnclave(a2, VmPartition);
        v32 = PageForEnclave;
        if ( PageForEnclave == -1 )
        {
          v22 = -1073741801;
          goto LABEL_57;
        }
        PteFromCopyList = (unsigned __int64)MiGetPteFromCopyList((unsigned int *)&v51, PageForEnclave, -1LL);
        v22 = KeAddEnclavePage(v48, (__int64)&v30[v29], (__int64)(PteFromCopyList << 25) >> 16, v29, v41, a9);
        v33 = ZeroPte;
        v39 = 0;
        if ( MiPteInShadowRange(PteFromCopyList) )
        {
          if ( (unsigned int)MiPteHasShadow() )
          {
            v39 = 1;
            if ( HIBYTE(word_140C4E008) )
              goto LABEL_51;
          }
          else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) == 0 )
          {
            goto LABEL_51;
          }
          if ( (ZeroPte & 1) != 0 )
            v33 = ZeroPte | 0x8000000000000000uLL;
        }
LABEL_51:
        *(_QWORD *)PteFromCopyList = v33;
        if ( v39 )
          MiWritePteShadow(PteFromCopyList, v33, v35);
        if ( v22 < 0 )
        {
          MiReturnEnclavePage(v32, v34, v35, v36);
LABEL_57:
          PteAddress = v40;
          break;
        }
        MiInitializeEnclavePfn(v32, v40, v42, v36);
        ValidPte = MiMakeValidPte(v40, v32, v42 | 0x80000000);
        MiWriteEnclavePte(v40, ValidPte, a2, 0LL, 1);
        v29 = v43 + 4096;
        v43 += 4096LL;
        PteAddress = v40 + 8;
        v40 += 8LL;
        --v25;
        *a8 += 4096LL;
      }
      if ( (MemoryDescriptorList[0].MdlFlags & 2) != 0 )
        MmUnlockPages(MemoryDescriptorList);
      KiUnstackDetachProcess((__int64)v53, 0);
      v11 = (unsigned __int64)v49;
      v21 = v50;
    }
  }
  v22 = -1073741670;
LABEL_20:
  if ( (MemoryDescriptorList[0].MdlFlags & 2) != 0 )
    MmUnlockPages(MemoryDescriptorList);
  if ( Pool )
    ExFreePoolWithTag(Pool, 0);
  MiReleasePteCopyList((__int64)&v51);
  return (unsigned int)v22;
}
