/*
 * XREFs of MiRevertValidPte @ 0x1402AF480
 * Callers:
 *     MiSetReadOnlyOnSectionView @ 0x140246200 (MiSetReadOnlyOnSectionView.c)
 *     MiProtectPrivateMemory @ 0x140254D50 (MiProtectPrivateMemory.c)
 *     MiSetProtectionOnSection @ 0x1402ADDF0 (MiSetProtectionOnSection.c)
 * Callees:
 *     MiGetSystemRegionType @ 0x140207A80 (MiGetSystemRegionType.c)
 *     MiGetLeafVa @ 0x1402374D0 (MiGetLeafVa.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140238530 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x1402386B0 (MiPteInShadowRange.c)
 *     MiCaptureWriteWatchDirtyBit @ 0x14024B47C (MiCaptureWriteWatchDirtyBit.c)
 *     KeYieldProcessorEx @ 0x140280C50 (KeYieldProcessorEx.c)
 *     MiInsertTbFlushEntry @ 0x1402B0EF0 (MiInsertTbFlushEntry.c)
 *     MiGetPagePrivilege @ 0x1402B42D0 (MiGetPagePrivilege.c)
 *     MiReleasePageFileInfo @ 0x1402D4690 (MiReleasePageFileInfo.c)
 *     MiWritePteShadow @ 0x14032ECC0 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x14032ED20 (MiPteHasShadow.c)
 *     MiCapturePageFileInfoInline @ 0x1403334B0 (MiCapturePageFileInfoInline.c)
 *     MiInsertLargeTbFlushEntry @ 0x1403385B4 (MiInsertLargeTbFlushEntry.c)
 *     MiUserPdeOrAbove @ 0x14033A900 (MiUserPdeOrAbove.c)
 *     MiRotatedToFrameBuffer @ 0x14033CD08 (MiRotatedToFrameBuffer.c)
 *     MiMarkPfnVerified @ 0x14034461C (MiMarkPfnVerified.c)
 *     MiRewritePteWithLockBit @ 0x1403B2B38 (MiRewritePteWithLockBit.c)
 */

struct _KTHREAD *__fastcall MiRevertValidPte(__int64 a1, unsigned __int64 a2, int a3, unsigned __int64 a4, __int64 a5)
{
  unsigned __int64 v5; // r15
  __int64 v6; // rdx
  __int64 v7; // r11
  int v9; // edi
  __int64 v10; // rcx
  __int64 v11; // r9
  __int64 v12; // r14
  __int64 v13; // rsi
  unsigned __int64 v14; // r13
  int v15; // eax
  __int64 v16; // r8
  __int64 v17; // rcx
  __int64 v18; // r14
  unsigned __int64 v19; // rbx
  unsigned __int64 v20; // rbp
  int v21; // eax
  signed __int64 v22; // rbx
  unsigned __int64 v23; // r14
  int v24; // ebp
  BOOL v25; // r13d
  __int64 v26; // rcx
  __int64 v27; // rdi
  __int64 v28; // rdi
  struct _KTHREAD *result; // rax
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r8
  __int64 v33; // r9
  __int64 v34; // r8
  bool v35; // zf
  __int64 v36; // r9
  char v37; // si
  __int64 v38; // rbx
  __int64 v39; // rbx
  __int64 v40; // rdi
  unsigned __int8 v41; // r9
  unsigned __int64 v42; // rax
  unsigned __int64 v43; // r10
  __int64 v44; // r10
  struct _LIST_ENTRY *Flink; // rdx
  __int64 v46; // rax
  __int64 v47; // rdx
  ULONG_PTR v48; // r13
  volatile signed __int32 *v49; // rbx
  __int64 v50; // rbp
  __int64 v51; // r8
  int v52; // eax
  unsigned __int64 LeafVa; // rax
  __int64 v54; // rax
  struct _LIST_ENTRY *v55; // r8
  __int64 v56; // rax
  __int64 v57; // r8
  struct _LIST_ENTRY *v58; // rdx
  __int64 v59; // rax
  __int64 v60; // rdx
  int v61; // [rsp+20h] [rbp-78h] BYREF
  int v62; // [rsp+24h] [rbp-74h] BYREF
  __int64 v63; // [rsp+28h] [rbp-70h]
  __int64 v64; // [rsp+30h] [rbp-68h]
  __int64 v65; // [rsp+38h] [rbp-60h]
  __int64 v66; // [rsp+40h] [rbp-58h]
  unsigned __int64 v67; // [rsp+48h] [rbp-50h]
  unsigned int v70; // [rsp+B0h] [rbp+18h]
  unsigned int v71; // [rsp+B8h] [rbp+20h]

  v5 = a2;
  v6 = 0LL;
  v71 = 0;
  v7 = a1;
  v9 = a3;
  if ( (*(_DWORD *)(a1 + 48) & 0x500000) == 0x500000 )
  {
    v43 = ((unsigned __int64)*(unsigned int *)(a1 + 48) >> 18) & 3;
    v11 = (unsigned int)MiVadPageIndices[v43];
    v70 = v11;
    if ( (unsigned int)v11 <= 1 )
      v71 = 2 - v11;
    v10 = MiVadPageSizes[v43];
    v44 = 16LL;
    v12 = v10;
    if ( v10 == 16 )
      v12 = 1LL;
    else
      v44 = 1LL;
    v65 = v44;
  }
  else
  {
    v10 = 1LL;
    v11 = 3LL;
    v70 = 3;
    v12 = 1LL;
    v65 = 1LL;
  }
  v64 = v10;
  v13 = *(_QWORD *)v5;
  v66 = *(_QWORD *)v5;
  v14 = (__int64)(v5 << 25) >> 16;
  v67 = v14;
  if ( v5 >= 0xFFFFF6FB7DBED000uLL && v5 <= 0xFFFFF6FB7DBED7F8uLL )
  {
    if ( (MiFlags & 0xC00000) != 0
      && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
      && (v13 & 1) != 0
      && ((v13 & 0x20) == 0 || (v13 & 0x42) == 0) )
    {
      Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
      if ( Flink )
      {
        v46 = *((_QWORD *)&Flink->Flink + ((v5 >> 3) & 0x1FF));
        v47 = v13 | 0x20;
        if ( (v46 & 0x20) == 0 )
          v47 = v13;
        v13 = v47;
        if ( (v46 & 0x42) != 0 )
          v13 = v47 | 0x42;
      }
      v6 = 0LL;
    }
    v66 = v13;
  }
  v15 = a3 & 0x18;
  if ( (v13 & 0x18) == 8 )
  {
    v9 = a3 | 0x18;
    if ( v15 == 24 )
      v9 = a3;
  }
  else if ( (v13 & 0x10) != 0 )
  {
    if ( v15 != 8 )
      v9 = a3 & 0xFFFFFFE7 | 8;
  }
  else if ( (a3 & 0x18) != 0 )
  {
    v9 = a3 & 0xFFFFFFE7;
  }
  if ( a4 <= 0xFFFFFFFFFLL
    && (v16 = 0x4000000000000LL, (*(_QWORD *)(48 * a4 - 0x57FFFFFFFD8LL) & 0x4000000000000LL) != 0) )
  {
    v17 = 48 * a4 - 0x58000000000LL;
    v63 = v17;
    if ( (MiFlags & 0x40000) != 0 && (v9 & 2) != 0 )
    {
      if ( v12 )
      {
        v48 = 48 * a4 - 0x58000000000LL;
        v49 = (volatile signed __int32 *)(v17 + 24);
        v50 = v12;
        do
        {
          v61 = 0;
          while ( _interlockedbittestandset64(v49, 0x3FuLL) )
          {
            do
              KeYieldProcessorEx(&v61, v6, v16, v11);
            while ( *(__int64 *)v49 < 0 );
          }
          if ( !(unsigned int)MiGetPagePrivilege(v48) )
            MiMarkPfnVerified(v48, 7LL, v51, v11);
          v16 = 0x7FFFFFFFFFFFFFFFLL;
          _InterlockedAnd64((volatile signed __int64 *)v49, 0x7FFFFFFFFFFFFFFFuLL);
          v48 += 48LL;
          v49 += 12;
          --v50;
        }
        while ( v50 );
        v5 = a2;
        LODWORD(v11) = v70;
        v7 = a1;
        v63 = v48;
        v17 = v48;
        v14 = v67;
      }
      v17 += -48 * v12;
      v63 = v17;
    }
  }
  else
  {
    v17 = 0LL;
    v63 = 0LL;
  }
  if ( (unsigned int)v11 <= 1 )
    v9 |= 0x4000000u;
  v18 = v9 & 0x1F;
  v19 = ((a4 & 0xFFFFFFFFFLL) << 12) | MmProtectToPteMask[v18] & 0xFFFF000000000E7FuLL | 0x21;
  if ( v5 < 0xFFFFF68000000000uLL || v5 > 0xFFFFF6FFFFFFFFFFuLL )
  {
LABEL_122:
    v19 |= 0x100uLL;
    goto LABEL_23;
  }
  if ( v5 >= 0xFFFFF6FB40000000uLL && v5 <= 0xFFFFF6FB7FFFFFFFuLL )
  {
    if ( v5 == 0xFFFFF6FB7DBEDF68uLL )
    {
      v19 = ((a4 & 0xFFFFFFFFFLL) << 12) | MmProtectToPteMask[v18] & 0xFFFF000000000E7FuLL | 0x8000000000000021uLL;
    }
    else if ( (v9 & 0x4000000) == 0 )
    {
      v19 = ((a4 & 0xFFFFFFFFFLL) << 12) & 0x7FFFFFFFFFFFFFFFLL | MmProtectToPteMask[v18] & 0x7FFF000000000E7FLL | 0x21;
    }
    v52 = MiUserPdeOrAbove(v5);
    v17 = v63;
    v7 = a1;
    if ( v52 )
      v19 |= 4uLL;
  }
  if ( v5 <= 0xFFFFF6BFFFFFFF78uLL )
    v19 |= 4uLL;
  if ( (v9 & 0x4000000) != 0 )
  {
    LeafVa = MiGetLeafVa(v14);
    v17 = v63;
    v20 = LeafVa;
  }
  else
  {
    v20 = v14;
  }
  if ( v20 < 0xFFFF800000000000uLL )
  {
    v21 = HIBYTE(word_140C4DE08);
    goto LABEL_22;
  }
  if ( (unsigned int)MiGetSystemRegionType(v20) != 1 && (v20 < 0xFFFFF68000000000uLL || v20 > 0xFFFFF6FFFFFFFFFFuLL) )
  {
    if ( v20 < qword_140C4F938 || (v21 = HIBYTE(word_140C4DE08), v20 > qword_140C4E168) )
      v21 = (unsigned __int8)word_140C4DE08;
    v7 = a1;
    v17 = v63;
LABEL_22:
    if ( !v21 )
      goto LABEL_23;
    goto LABEL_122;
  }
  v7 = a1;
  v17 = v63;
LABEL_23:
  if ( v9 < 0 && (v9 & 5) == 4 )
    v19 |= 0x42uLL;
  if ( (v9 & 0x40000000) != 0 )
    v19 &= ~4uLL;
  if ( (v9 & 0x20000000) != 0 )
    v19 ^= ((unsigned __int16)v19 ^ (unsigned __int16)((unsigned __int8)word_140C4DE08 << 8)) & 0x100;
  if ( (v9 & 0x8000000) != 0 )
    v19 &= ~0x100uLL;
  if ( (v9 & 0x4000000) != 0 )
    v19 |= 0x80uLL;
  v22 = v19 & 0xF0FFFFFFFFFFFFFFuLL | 0xA00000000000000LL;
  if ( v17 )
  {
    if ( (MiFlags & 0x2000000) != 0 && (v13 & 0x42) == 0x40 )
      v22 |= 0x40uLL;
  }
  else
  {
    v54 = v22 | 0x42;
    if ( (v9 & 4) == 0 )
      v54 = v22;
    v22 = v54;
  }
  v23 = v5;
  v24 = 0;
  v25 = (*(_DWORD *)(v7 + 48) & 0x300000) == 3145728;
  do
  {
    if ( v25 && (MI_READ_PTE_LOCK_FREE(v23) & 0x42) != 0 )
    {
      v42 = MiGetLeafVa(v23);
      MiCaptureWriteWatchDirtyBit((__int64)KeGetCurrentThread()->ApcState.Process, v42, a1);
      v25 = 0;
    }
    v22 ^= (v22 ^ (a4 << 12)) & 0xFFFFFFFFF000LL;
    if ( !v24 )
    {
      if ( (MiFlags & 0x100) != 0 || (MiFlags & 0x200) != 0 )
      {
        v26 = *(_QWORD *)v23;
        if ( v23 >= 0xFFFFF6FB7DBED000uLL
          && v23 <= 0xFFFFF6FB7DBED7F8uLL
          && (MiFlags & 0xC00000) != 0
          && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
          && (v26 & 1) != 0
          && ((v26 & 0x20) == 0 || (v26 & 0x42) == 0) )
        {
          v55 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
          if ( v55 )
          {
            v56 = *((_QWORD *)&v55->Flink + ((v23 >> 3) & 0x1FF));
            v57 = v26 | 0x20;
            if ( (v56 & 0x20) == 0 )
              v57 = *(_QWORD *)v23;
            v26 = v57;
            if ( (v56 & 0x42) != 0 )
              v26 = v57 | 0x42;
          }
        }
        if ( (v26 & 0x40) != 0 && (v22 & 0x40) == 0 || (v26 & 2) != 0 && (v22 & 2) == 0 || v22 < 0 && v26 >= 0 )
          v24 = 1;
      }
      else
      {
        v24 = 1;
      }
    }
    ++a4;
    if ( v70 <= 1 )
    {
      result = (struct _KTHREAD *)MiRewritePteWithLockBit(
                                    &KeGetCurrentThread()->ApcState.Process[1].ActiveProcessorsPadding[6],
                                    v23,
                                    v22,
                                    0x7000000000000000LL);
    }
    else
    {
      v27 = *(_QWORD *)v23;
      if ( v23 >= 0xFFFFF6FB7DBED000uLL
        && v23 <= 0xFFFFF6FB7DBED7F8uLL
        && (MiFlags & 0xC00000) != 0
        && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
        && (v27 & 1) != 0
        && ((v27 & 0x20) == 0 || (v27 & 0x42) == 0) )
      {
        v58 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
        if ( v58 )
        {
          v59 = *((_QWORD *)&v58->Flink + ((v23 >> 3) & 0x1FF));
          v60 = v27 | 0x20;
          if ( (v59 & 0x20) == 0 )
            v60 = *(_QWORD *)v23;
          v27 = v60;
          if ( (v59 & 0x42) != 0 )
            v27 = v60 | 0x42;
        }
      }
      v28 = v22 ^ (v22 ^ v27) & 0xF00000000000000LL ^ (v22 ^ (v22 ^ v27) & 0xF00000000000000LL ^ v27) & 0x7000000000000000LL;
      result = (struct _KTHREAD *)MiPteInShadowRange(v23);
      if ( !(_DWORD)result )
        goto LABEL_48;
      if ( !(unsigned int)MiPteHasShadow(v31, v30, v32, v33) )
      {
        result = KeGetCurrentThread();
        if ( (HIDWORD(result->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 && (v28 & 1) != 0 )
        {
          result = (struct _KTHREAD *)0x8000000000000000LL;
          v28 |= 0x8000000000000000uLL;
        }
LABEL_48:
        *(_QWORD *)v23 = v28;
        goto LABEL_49;
      }
      if ( !HIBYTE(word_140C4DE08) && (v28 & 1) != 0 )
        v28 |= 0x8000000000000000uLL;
      *(_QWORD *)v23 = v28;
      result = (struct _KTHREAD *)MiWritePteShadow(v23, v28);
    }
LABEL_49:
    v23 += 8LL;
    v34 = 0xF00000000000000LL;
    v35 = v65-- == 1;
    v36 = 0x7000000000000000LL;
  }
  while ( !v35 );
  v37 = v66;
  if ( !v24 )
    goto LABEL_51;
  if ( v71 )
  {
    result = (struct _KTHREAD *)MiInsertLargeTbFlushEntry(a5, v71, a2);
LABEL_51:
    v38 = v64;
  }
  else
  {
    v38 = v64;
    result = (struct _KTHREAD *)MiInsertTbFlushEntry(a5, v67, v64, 0LL);
  }
  if ( v38 == 1 && (v37 & 0x42) != 0 )
  {
    v39 = v63;
    if ( v63 )
    {
      if ( (*(_DWORD *)(a1 + 48) & 0x70) != 0x40
        || (result = (struct _KTHREAD *)MiRotatedToFrameBuffer(a2), (_DWORD)result) )
      {
        v40 = 0LL;
        v62 = 0;
        while ( _interlockedbittestandset64((volatile signed __int32 *)(v39 + 24), 0x3FuLL) )
        {
          do
            KeYieldProcessorEx(&v62, v30, v34, v36);
          while ( *(__int64 *)(v39 + 24) < 0 );
        }
        v41 = *(_BYTE *)(v39 + 34);
        result = 0LL;
        if ( (v41 & 0x10) == 0 )
        {
          if ( (!_bittest64((const signed __int64 *)(v39 + 16), 0xAu) & (unsigned __int8)~(v41 >> 3)) != 0 )
          {
            result = (struct _KTHREAD *)MiCapturePageFileInfoInline(v39 + 16, 1LL);
            v41 = *(_BYTE *)(v39 + 34);
          }
          *(_BYTE *)(v39 + 34) = v41 | 0x10;
          if ( result )
            v40 = *(_QWORD *)(qword_140C4E448 + 8 * ((*(_QWORD *)(v39 + 40) >> 39) & 0x3FFLL));
        }
        _InterlockedAnd64((volatile signed __int64 *)(v39 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        if ( result )
          return (struct _KTHREAD *)MiReleasePageFileInfo(v40, result, 1LL);
      }
    }
  }
  return result;
}
