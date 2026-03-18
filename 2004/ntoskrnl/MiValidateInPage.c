/*
 * XREFs of MiValidateInPage @ 0x1402297C0
 * Callers:
 *     MiWaitForInPageComplete @ 0x14025D620 (MiWaitForInPageComplete.c)
 * Callees:
 *     MmMapLockedPagesSpecifyCache @ 0x14021BA60 (MmMapLockedPagesSpecifyCache.c)
 *     MmUnmapLockedPages @ 0x140224B70 (MmUnmapLockedPages.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140238530 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x1402386B0 (MiPteInShadowRange.c)
 *     MiFlushEntireTbDueToAttributeChange @ 0x1402F4E60 (MiFlushEntireTbDueToAttributeChange.c)
 *     KeFlushSingleTb @ 0x14031CE3C (KeFlushSingleTb.c)
 *     MiWritePteShadow @ 0x14032ECC0 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x14032ED20 (MiPteHasShadow.c)
 *     MiMarkPfnVerified @ 0x14034461C (MiMarkPfnVerified.c)
 *     MiRelocateImagePfn @ 0x1405FC710 (MiRelocateImagePfn.c)
 *     MiValidateImagePfn @ 0x1406EBA64 (MiValidateImagePfn.c)
 *     SeValidateImageData @ 0x1406EBC98 (SeValidateImageData.c)
 *     MiGetSectionStrongImageReference @ 0x1408D48D0 (MiGetSectionStrongImageReference.c)
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
  __int64 v15; // r8
  int v16; // ebx
  __int64 v17; // r9
  int v18; // ebp
  PVOID MappedSystemVa; // r8
  int v20; // r15d
  int v21; // edi
  __int64 v22; // rbp
  __int64 v23; // rcx
  unsigned __int64 v24; // r15
  __int64 *v25; // r12
  __int64 v26; // rax
  __int64 result; // rax
  int v28; // eax
  CSHORT MdlFlags; // ax
  int v30; // edi
  int v31; // r8d
  __int64 v32; // rdi
  PMDL v33; // rcx
  char BugCheckOnFailure; // [rsp+20h] [rbp-88h]
  int Priority; // [rsp+28h] [rbp-80h]
  PMDL MemoryDescriptorList; // [rsp+40h] [rbp-68h]
  ULONG_PTR BugCheckParameter2; // [rsp+48h] [rbp-60h]
  int v38; // [rsp+50h] [rbp-58h]
  unsigned int v39; // [rsp+B0h] [rbp+8h]
  unsigned int v40; // [rsp+B8h] [rbp+10h]
  PVOID v41; // [rsp+C0h] [rbp+18h]
  _KPROCESS *Process; // [rsp+C8h] [rbp+20h]

  v1 = (_DWORD *)(a1 + 272);
  v2 = *(_QWORD *)(a1 + 208);
  v3 = *(_DWORD *)(a1 + 184);
  BugCheckParameter2 = v2;
  if ( *(_QWORD *)(a1 + 256) )
    v1 = *(_DWORD **)(a1 + 256);
  v40 = 0;
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
  v39 = 0;
  *(_DWORD *)(a1 + 188) += ((v11 & 0xFFF) != 0) + (v11 >> 12);
  v13 = *(_QWORD *)(v5 + 40);
  if ( (v13 & 0xFFFFFFFFFFFFFFF8uLL) <= 8 )
    v12 = 0;
  v14 = ((unsigned __int64)MI_READ_PTE_LOCK_FREE(48 * *v6 - 0x57FFFFFFFF0LL) >> 5) & 0x1F;
  v38 = v14;
  if ( (*(_DWORD *)(v2 + 92) & 0xC0000) != 0 && (v12 & 2) != 0 )
  {
    v16 = v12 | 1;
  }
  else
  {
    v16 = v12;
    if ( (MiFlags & 0x40000) != 0 && (v14 & 2) != 0 )
      v39 = 3;
  }
  v17 = 0x4000LL;
  if ( (*(_DWORD *)(a1 + 192) & 0x10000) != 0 )
  {
    v16 |= 4u;
    if ( (MiFlags & 0x4000) != 0 && (v16 & 1) != 0 )
      v16 &= ~4u;
  }
  v18 = v14 & 2;
  if ( (v14 & 2) != 0 && (MiFlags & 0x40000) != 0 )
  {
    v33 = MemoryDescriptorList;
    if ( (MemoryDescriptorList->MdlFlags & 1) != 0 )
      MmUnmapLockedPages(MemoryDescriptorList->MappedSystemVa, MemoryDescriptorList);
    MiFlushEntireTbDueToAttributeChange(v33, v14, v15, v17);
    v17 = 0x4000LL;
  }
  MappedSystemVa = 0LL;
  v41 = 0LL;
  if ( (v16 & 2) != 0
    && (unsigned int)v9 > 1
    && (MdlFlags = MemoryDescriptorList->MdlFlags, (MdlFlags & 0x4000) != 0)
    && ((MdlFlags & 5) == 0
      ? (MappedSystemVa = MmMapLockedPagesSpecifyCache(MemoryDescriptorList, 0, MmCached, 0LL, 0, 0xC0000010))
      : (MappedSystemVa = MemoryDescriptorList->MappedSystemVa),
        (v41 = MappedSystemVa) != 0LL) )
  {
    v30 = v13 & 0xFFFFFFF8;
    if ( (v16 & 1) != 0 && !*(_QWORD *)(v5 + 56) )
    {
      result = MiGetSectionStrongImageReference(v5, v14, MappedSystemVa, v17);
      if ( (int)result < 0 )
        return result;
    }
    v31 = (_DWORD)v9 << 12;
    v20 = (int)Process;
    if ( (int)SeValidateImageData(v30, (_DWORD)v41, v31, *(_QWORD *)(a1 + 96), v18 != 0 ? 2 : 0, (__int64)Process) < 0 )
    {
      MappedSystemVa = 0LL;
      v41 = 0LL;
    }
    else
    {
      MappedSystemVa = v41;
    }
  }
  else
  {
    v20 = (int)Process;
  }
  if ( v6 >= v10 )
    return v40;
  v21 = BugCheckParameter2;
  v22 = 0LL;
  while ( 1 )
  {
    v23 = 48 * *v6 - 0x58000000000LL;
    v16 ^= ((unsigned __int8)v16 ^ (unsigned __int8)(2 * v16)) & 8;
    if ( v23 == qword_140C4EB70 )
      goto LABEL_22;
    if ( MappedSystemVa )
    {
      MiMarkPfnVerified(v23, v39, MappedSystemVa, 0xFFFFF68000000000uLL);
      goto LABEL_17;
    }
    if ( (v16 & 2) != 0 )
    {
      v28 = MiValidateImagePfn(v21, *(_QWORD *)(a1 + 96), v20, -1, BugCheckOnFailure, v38, *v6, 0);
      if ( v28 < 0 )
        break;
    }
LABEL_17:
    if ( (v16 & 8) == 0 )
      goto LABEL_22;
    if ( (MemoryDescriptorList->MdlFlags & 1) != 0 )
    {
      v24 = (unsigned __int64)MemoryDescriptorList->MappedSystemVa + 4096 * (v22 >> 3);
      v25 = (__int64 *)(((v24 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
      v26 = MI_READ_PTE_LOCK_FREE(v25);
      if ( (v26 & 0x42) == 0 )
      {
        v32 = v26 | 0x842;
        if ( !(unsigned int)MiPteInShadowRange(v25) )
          goto LABEL_44;
        if ( (unsigned int)MiPteHasShadow() )
        {
          if ( !HIBYTE(word_140C4DE08) && (v32 & 1) != 0 )
            v32 |= 0x8000000000000000uLL;
          *v25 = v32;
          MiWritePteShadow(v25, v32);
        }
        else
        {
          if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
            && (v32 & 1) != 0 )
          {
            v32 |= 0x8000000000000000uLL;
          }
LABEL_44:
          *v25 = v32;
        }
        if ( (MiFlags & 0x100) == 0 && (MiFlags & 0x200) == 0 )
          KeFlushSingleTb(v24, 0LL, 1LL);
      }
    }
    if ( (int)MiRelocateImagePfn(BugCheckParameter2, 0LL, Priority, 2) < 0 )
      goto LABEL_73;
    v21 = BugCheckParameter2;
LABEL_22:
    *(_QWORD *)(a1 + 96) += 4096LL;
    ++v6;
    ++*(_DWORD *)(a1 + 188);
    v22 += 8LL;
    if ( v6 >= v10 )
      return v40;
    MappedSystemVa = v41;
    v20 = (int)Process;
  }
  if ( v28 != -1073741670 )
  {
    v40 = -1073740748;
    if ( (v16 & 1) != 0 && (MiFlags & 0x4000) != 0 && (*(_DWORD *)(a1 + 192) & 0x10000) != 0 )
      v16 |= 8u;
    goto LABEL_17;
  }
LABEL_73:
  *(_DWORD *)(a1 + 80) = -1073741670;
  return v40;
}
