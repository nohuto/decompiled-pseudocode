/*
 * XREFs of MiValidateInPage @ 0x140282810
 * Callers:
 *     MiWaitForInPageComplete @ 0x1402B6650 (MiWaitForInPageComplete.c)
 * Callees:
 *     MmMapLockedPagesSpecifyCache @ 0x140274AB0 (MmMapLockedPagesSpecifyCache.c)
 *     MmUnmapLockedPages @ 0x14027DBC0 (MmUnmapLockedPages.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140291580 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x140291700 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x1402F2F20 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x1402F2F80 (MiPteHasShadow.c)
 *     MiMarkPfnVerified @ 0x140306818 (MiMarkPfnVerified.c)
 *     KeFlushSingleTb @ 0x14034C17C (KeFlushSingleTb.c)
 *     MiFlushEntireTbDueToAttributeChange @ 0x140350E3C (MiFlushEntireTbDueToAttributeChange.c)
 *     MiRelocateImagePfn @ 0x140631750 (MiRelocateImagePfn.c)
 *     MiValidateImagePfn @ 0x1406CA7E4 (MiValidateImagePfn.c)
 *     SeValidateImageData @ 0x1406CAA18 (SeValidateImageData.c)
 *     MiGetSectionStrongImageReference @ 0x1408D3580 (MiGetSectionStrongImageReference.c)
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
  __int64 v16; // r9
  int v17; // ebp
  PVOID MappedSystemVa; // r8
  int v19; // r15d
  int v20; // edi
  __int64 v21; // rbp
  __int64 v22; // rcx
  unsigned __int64 v23; // r15
  __int64 *v24; // r12
  __int64 v25; // rax
  __int64 v26; // rdx
  __int64 result; // rax
  int v28; // eax
  CSHORT MdlFlags; // ax
  int v30; // edi
  int v31; // r8d
  __int64 v32; // rdi
  __int64 v33; // rdx
  __int64 v34; // rcx
  PMDL v35; // rcx
  char BugCheckOnFailure; // [rsp+20h] [rbp-88h]
  int Priority; // [rsp+28h] [rbp-80h]
  PMDL MemoryDescriptorList; // [rsp+40h] [rbp-68h]
  ULONG_PTR BugCheckParameter2; // [rsp+48h] [rbp-60h]
  int v40; // [rsp+50h] [rbp-58h]
  unsigned int v41; // [rsp+B0h] [rbp+8h]
  unsigned int v42; // [rsp+B8h] [rbp+10h]
  PVOID v43; // [rsp+C0h] [rbp+18h]
  _KPROCESS *Process; // [rsp+C8h] [rbp+20h]

  v1 = (_DWORD *)(a1 + 272);
  v2 = *(_QWORD *)(a1 + 208);
  v3 = *(_DWORD *)(a1 + 184);
  BugCheckParameter2 = v2;
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
  v16 = 0x4000LL;
  if ( (*(_DWORD *)(a1 + 192) & 0x10000) != 0 )
  {
    v15 |= 4u;
    if ( (MiFlags & 0x4000) != 0 && (v15 & 1) != 0 )
      v15 &= ~4u;
  }
  v17 = v14 & 2;
  if ( (v14 & 2) != 0 && (MiFlags & 0x40000) != 0 )
  {
    v35 = MemoryDescriptorList;
    if ( (MemoryDescriptorList->MdlFlags & 1) != 0 )
      MmUnmapLockedPages(MemoryDescriptorList->MappedSystemVa, MemoryDescriptorList);
    MiFlushEntireTbDueToAttributeChange(v35, v14);
    v16 = 0x4000LL;
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
    v30 = v13 & 0xFFFFFFF8;
    if ( (v15 & 1) != 0 && !*(_QWORD *)(v5 + 56) )
    {
      result = MiGetSectionStrongImageReference(v5, v14, MappedSystemVa, v16);
      if ( (int)result < 0 )
        return result;
    }
    v31 = (_DWORD)v9 << 12;
    v19 = (int)Process;
    if ( (int)SeValidateImageData(v30, (_DWORD)v43, v31, *(_QWORD *)(a1 + 96), v17 != 0 ? 2 : 0, (__int64)Process) < 0 )
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
    v19 = (int)Process;
  }
  if ( v6 >= v10 )
    return v42;
  v20 = BugCheckParameter2;
  v21 = 0LL;
  while ( 1 )
  {
    v22 = 48 * *v6 - 0x58000000000LL;
    v15 ^= ((unsigned __int8)v15 ^ (unsigned __int8)(2 * v15)) & 8;
    if ( v22 == qword_140C4ECB0 )
      goto LABEL_22;
    if ( MappedSystemVa )
    {
      MiMarkPfnVerified(v22, v41);
      goto LABEL_17;
    }
    if ( (v15 & 2) != 0 )
    {
      v28 = MiValidateImagePfn(v20, *(_QWORD *)(a1 + 96), v19, -1, BugCheckOnFailure, v40, *v6, 0);
      if ( v28 < 0 )
        break;
    }
LABEL_17:
    if ( (v15 & 8) == 0 )
      goto LABEL_22;
    if ( (MemoryDescriptorList->MdlFlags & 1) != 0 )
    {
      v23 = (unsigned __int64)MemoryDescriptorList->MappedSystemVa + 4096 * (v21 >> 3);
      v24 = (__int64 *)(((v23 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
      v25 = MI_READ_PTE_LOCK_FREE(v24);
      if ( (v25 & 0x42) == 0 )
      {
        v32 = v25 | 0x842;
        if ( !(unsigned int)MiPteInShadowRange(v24, v26) )
          goto LABEL_44;
        if ( (unsigned int)MiPteHasShadow(v34, v33) )
        {
          if ( !HIBYTE(word_140C4DF48) && (v32 & 1) != 0 )
            v32 |= 0x8000000000000000uLL;
          *v24 = v32;
          MiWritePteShadow(v24, v32);
        }
        else
        {
          if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
            && (v32 & 1) != 0 )
          {
            v32 |= 0x8000000000000000uLL;
          }
LABEL_44:
          *v24 = v32;
        }
        if ( (MiFlags & 0x100) == 0 && (MiFlags & 0x200) == 0 )
          KeFlushSingleTb(v23, 0LL, 1LL);
      }
    }
    if ( (int)MiRelocateImagePfn(BugCheckParameter2, 0LL, Priority, 2) < 0 )
      goto LABEL_73;
    v20 = BugCheckParameter2;
LABEL_22:
    *(_QWORD *)(a1 + 96) += 4096LL;
    ++v6;
    ++*(_DWORD *)(a1 + 188);
    v21 += 8LL;
    if ( v6 >= v10 )
      return v42;
    MappedSystemVa = v43;
    v19 = (int)Process;
  }
  if ( v28 != -1073741670 )
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
