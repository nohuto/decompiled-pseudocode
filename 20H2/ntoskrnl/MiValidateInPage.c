/*
 * XREFs of MiValidateInPage @ 0x1402C9D90
 * Callers:
 *     MiWaitForInPageComplete @ 0x1402D0710 (MiWaitForInPageComplete.c)
 * Callees:
 *     MiPteInShadowRange @ 0x14021EA50 (MiPteInShadowRange.c)
 *     MmMapLockedPagesSpecifyCache @ 0x1402864D0 (MmMapLockedPagesSpecifyCache.c)
 *     MmUnmapLockedPages @ 0x140295370 (MmUnmapLockedPages.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1402B12D0 (MI_READ_PTE_LOCK_FREE.c)
 *     MiFlushEntireTbDueToAttributeChange @ 0x1402E9FB8 (MiFlushEntireTbDueToAttributeChange.c)
 *     MiWritePteShadow @ 0x140313F2C (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140313F8C (MiPteHasShadow.c)
 *     MiMarkPfnVerified @ 0x1403156F4 (MiMarkPfnVerified.c)
 *     KeFlushSingleTb @ 0x140353AC8 (KeFlushSingleTb.c)
 *     MiRelocateImagePfn @ 0x1406818C0 (MiRelocateImagePfn.c)
 *     MiValidateImagePfn @ 0x1406BEE74 (MiValidateImagePfn.c)
 *     SeValidateImageData @ 0x1406BF0A8 (SeValidateImageData.c)
 *     MiGetSectionStrongImageReference @ 0x1408DA710 (MiGetSectionStrongImageReference.c)
 */

__int64 __fastcall MiValidateInPage(__int64 a1)
{
  _DWORD *v1; // r9
  ULONG_PTR v2; // rbx
  int v3; // r8d
  __int64 v5; // r12
  __int64 *v6; // r14
  __int64 v7; // rcx
  int v8; // edx
  unsigned __int64 v9; // r15
  __int64 *v10; // r13
  unsigned int v11; // r8d
  int v12; // ebp
  __int64 v13; // rdi
  unsigned __int64 v14; // rdx
  int v15; // ebx
  int v16; // ebp
  PVOID MappedSystemVa; // r8
  int v18; // r15d
  int v19; // edi
  __int64 v20; // rbp
  __int64 v21; // rcx
  unsigned __int64 v22; // r15
  __int64 *v23; // r12
  __int64 v24; // rax
  __int64 result; // rax
  int v26; // eax
  CSHORT MdlFlags; // ax
  int v28; // edi
  int v29; // r8d
  __int64 v30; // rdi
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r8
  __int64 v34; // r9
  PMDL v35; // rcx
  char BugCheckOnFailure; // [rsp+20h] [rbp-88h]
  int Priority; // [rsp+28h] [rbp-80h]
  PMDL MemoryDescriptorList; // [rsp+40h] [rbp-68h]
  ULONG_PTR v39; // [rsp+48h] [rbp-60h]
  int v40; // [rsp+50h] [rbp-58h]
  unsigned int v41; // [rsp+B0h] [rbp+8h]
  unsigned int v42; // [rsp+B8h] [rbp+10h]
  PVOID v43; // [rsp+C0h] [rbp+18h]
  _KPROCESS *Process; // [rsp+C8h] [rbp+20h]

  v1 = (_DWORD *)(a1 + 272);
  v2 = *(_QWORD *)(a1 + 208);
  v3 = *(_DWORD *)(a1 + 184);
  v39 = v2;
  if ( *(_QWORD *)(a1 + 256) )
    v1 = *(_DWORD **)(a1 + 256);
  v42 = 0;
  v5 = *(_QWORD *)(v2 + 96);
  MemoryDescriptorList = (PMDL)v1;
  v6 = (__int64 *)(v1 + 12);
  v7 = (unsigned int)v1[10];
  v8 = v1[11];
  v9 = ((unsigned __int64)(((_WORD)v8 + (unsigned __int16)v1[8]) & 0xFFF) + v7 + 4095) >> 12;
  Process = KeGetCurrentThread()->ApcState.Process;
  v10 = (__int64 *)&v1[2 * (unsigned int)v9 + 12];
  *(_QWORD *)(a1 + 96) += (unsigned int)(v3 - v7 - v8);
  v11 = v3 - v1[11] - v1[10];
  v12 = 2;
  v41 = 0;
  *(_DWORD *)(a1 + 188) += ((v11 & 0xFFF) != 0) + (v11 >> 12);
  v13 = *(_QWORD *)(v5 + 40);
  if ( (v13 & 0xFFFFFFFFFFFFFFF8uLL) <= 8 )
    v12 = 0;
  v14 = ((unsigned __int64)MI_READ_PTE_LOCK_FREE(48 * *v6 - 0x57FFFFFFFF0LL) >> 5) & 0x1F;
  v40 = v14;
  if ( (*(_DWORD *)(v2 + 92) & 0xC0000) != 0 && (v12 & 2) != 0 )
  {
    v15 = v12 | 1;
  }
  else
  {
    v15 = v12;
    if ( (MiFlags & 0x40000) != 0 && (v14 & 2) != 0 )
      v41 = 3;
  }
  if ( (*(_DWORD *)(a1 + 192) & 0x10000) != 0 )
  {
    v15 |= 4u;
    if ( (MiFlags & 0x4000) != 0 && (v15 & 1) != 0 )
      v15 &= ~4u;
  }
  v16 = v14 & 2;
  if ( (v14 & 2) != 0 && (MiFlags & 0x40000) != 0 )
  {
    v35 = MemoryDescriptorList;
    if ( (MemoryDescriptorList->MdlFlags & 1) != 0 )
      MmUnmapLockedPages(MemoryDescriptorList->MappedSystemVa, MemoryDescriptorList);
    MiFlushEntireTbDueToAttributeChange(v35, v14);
  }
  MappedSystemVa = 0LL;
  v43 = 0LL;
  if ( (v15 & 2) != 0
    && (unsigned int)v9 > 1
    && (MdlFlags = MemoryDescriptorList->MdlFlags, (MdlFlags & 0x4000) != 0)
    && ((MdlFlags & 5) == 0
      ? (MappedSystemVa = MmMapLockedPagesSpecifyCache(MemoryDescriptorList, 0, MmCached, 0LL, 0, 0xC0000010))
      : (MappedSystemVa = MemoryDescriptorList->MappedSystemVa),
        (v43 = MappedSystemVa) != 0LL) )
  {
    v28 = v13 & 0xFFFFFFF8;
    if ( (v15 & 1) != 0 && !*(_QWORD *)(v5 + 56) )
    {
      result = MiGetSectionStrongImageReference(v5, v14, MappedSystemVa);
      if ( (int)result < 0 )
        return result;
    }
    v29 = (_DWORD)v9 << 12;
    v18 = (int)Process;
    if ( (int)SeValidateImageData(v28, (_DWORD)v43, v29, *(_QWORD *)(a1 + 96), v16 != 0 ? 2 : 0, (__int64)Process) < 0 )
    {
      MappedSystemVa = 0LL;
      v43 = 0LL;
    }
    else
    {
      MappedSystemVa = v43;
    }
  }
  else
  {
    v18 = (int)Process;
  }
  if ( v6 >= v10 )
    return v42;
  v19 = v39;
  v20 = 0LL;
  while ( 1 )
  {
    v21 = 48 * *v6 - 0x58000000000LL;
    v15 ^= ((unsigned __int8)v15 ^ (unsigned __int8)(2 * v15)) & 8;
    if ( v21 == qword_140C4EBF0 )
      goto LABEL_22;
    if ( MappedSystemVa )
    {
      MiMarkPfnVerified(v21, v41);
      goto LABEL_17;
    }
    if ( (v15 & 2) != 0 )
    {
      v26 = MiValidateImagePfn(v19, *(_QWORD *)(a1 + 96), v18, -1, BugCheckOnFailure, v40, *v6, 0);
      if ( v26 < 0 )
        break;
    }
LABEL_17:
    if ( (v15 & 8) == 0 )
      goto LABEL_22;
    if ( (MemoryDescriptorList->MdlFlags & 1) != 0 )
    {
      v22 = (unsigned __int64)MemoryDescriptorList->MappedSystemVa + 4096 * (v20 >> 3);
      v23 = (__int64 *)(((v22 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
      v24 = MI_READ_PTE_LOCK_FREE((unsigned __int64)v23);
      if ( (v24 & 0x42) == 0 )
      {
        v30 = v24 | 0x842;
        if ( !MiPteInShadowRange((unsigned __int64)v23) )
          goto LABEL_44;
        if ( (unsigned int)MiPteHasShadow(v32, v31, v33, v34) )
        {
          if ( !HIBYTE(word_140C4DE88) && (v30 & 1) != 0 )
            v30 |= 0x8000000000000000uLL;
          *v23 = v30;
          MiWritePteShadow(v23, v30);
        }
        else
        {
          if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
            && (v30 & 1) != 0 )
          {
            v30 |= 0x8000000000000000uLL;
          }
LABEL_44:
          *v23 = v30;
        }
        if ( (MiFlags & 0x100) == 0 && (MiFlags & 0x200) == 0 )
          KeFlushSingleTb(v22, 0LL);
      }
    }
    if ( (int)MiRelocateImagePfn(v39, 0LL, Priority, 2) < 0 )
      goto LABEL_73;
    v19 = v39;
LABEL_22:
    *(_QWORD *)(a1 + 96) += 4096LL;
    ++v6;
    ++*(_DWORD *)(a1 + 188);
    v20 += 8LL;
    if ( v6 >= v10 )
      return v42;
    MappedSystemVa = v43;
    v18 = (int)Process;
  }
  if ( v26 != -1073741670 )
  {
    v42 = -1073740748;
    if ( (v15 & 1) != 0 && (MiFlags & 0x4000) != 0 && (*(_DWORD *)(a1 + 192) & 0x10000) != 0 )
      v15 |= 8u;
    goto LABEL_17;
  }
LABEL_73:
  *(_DWORD *)(a1 + 80) = -1073741670;
  return v42;
}
