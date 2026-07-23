/*
 * XREFs of MiRevertValidPte @ 0x14033F050
 * Callers:
 *     MiSetReadOnlyOnSectionView @ 0x1402E53E0 (MiSetReadOnlyOnSectionView.c)
 *     MiProtectPrivateMemory @ 0x140318750 (MiProtectPrivateMemory.c)
 *     MiSetProtectionOnSection @ 0x14033D9C0 (MiSetProtectionOnSection.c)
 * Callees:
 *     MiInsertLargeTbFlushEntry @ 0x1402199E0 (MiInsertLargeTbFlushEntry.c)
 *     MiCapturePageFileInfoInline @ 0x140220130 (MiCapturePageFileInfoInline.c)
 *     MiUserPdeOrAbove @ 0x14022A014 (MiUserPdeOrAbove.c)
 *     MiRotatedToFrameBuffer @ 0x14022E898 (MiRotatedToFrameBuffer.c)
 *     MiWritePteShadow @ 0x140234B9C (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140234BFC (MiPteHasShadow.c)
 *     MiMarkPfnVerified @ 0x140236C14 (MiMarkPfnVerified.c)
 *     MiReleasePageFileInfo @ 0x140255C50 (MiReleasePageFileInfo.c)
 *     MiCaptureWriteWatchDirtyBit @ 0x14027C6CC (MiCaptureWriteWatchDirtyBit.c)
 *     KeYieldProcessorEx @ 0x1402EFAD0 (KeYieldProcessorEx.c)
 *     MiGetPagePrivilege @ 0x140333440 (MiGetPagePrivilege.c)
 *     MiGetLeafVa @ 0x140337BB0 (MiGetLeafVa.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140338C10 (MI_READ_PTE_LOCK_FREE.c)
 *     MiInsertTbFlushEntry @ 0x140340AC0 (MiInsertTbFlushEntry.c)
 *     MiPteInShadowRange @ 0x140353840 (MiPteInShadowRange.c)
 *     MiGetSystemRegionType @ 0x1403556A0 (MiGetSystemRegionType.c)
 *     MiRewritePteWithLockBit @ 0x1403B6D88 (MiRewritePteWithLockBit.c)
 */

void __fastcall MiRevertValidPte(__int64 a1, unsigned __int64 a2, int a3, unsigned __int64 a4, __int64 a5)
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
  __int64 v29; // rdx
  __int64 v30; // r8
  bool v31; // zf
  __int64 v32; // r9
  char v33; // si
  __int64 v34; // rbx
  __int64 v35; // rbx
  __int64 v36; // rdi
  unsigned __int8 v37; // r9
  unsigned __int64 v38; // rax
  unsigned __int64 v39; // rax
  unsigned __int64 v40; // r10
  __int64 v41; // r10
  struct _LIST_ENTRY *Flink; // rdx
  __int64 v43; // rax
  __int64 v44; // rdx
  ULONG_PTR v45; // r13
  volatile signed __int32 *v46; // rbx
  __int64 v47; // rbp
  int v48; // eax
  unsigned __int64 LeafVa; // rax
  __int64 v50; // rax
  struct _LIST_ENTRY *v51; // r8
  __int64 v52; // rax
  __int64 v53; // r8
  struct _LIST_ENTRY *v54; // rdx
  __int64 v55; // rax
  __int64 v56; // rdx
  int v57; // [rsp+20h] [rbp-78h] BYREF
  int v58; // [rsp+24h] [rbp-74h] BYREF
  __int64 v59; // [rsp+28h] [rbp-70h]
  __int64 v60; // [rsp+30h] [rbp-68h]
  __int64 v61; // [rsp+38h] [rbp-60h]
  __int64 v62; // [rsp+40h] [rbp-58h]
  unsigned __int64 v63; // [rsp+48h] [rbp-50h]
  unsigned int v66; // [rsp+B0h] [rbp+18h]
  unsigned int v67; // [rsp+B8h] [rbp+20h]

  v5 = a2;
  v6 = 0LL;
  v67 = 0;
  v7 = a1;
  v9 = a3;
  if ( (*(_DWORD *)(a1 + 48) & 0x500000) == 0x500000 )
  {
    v40 = ((unsigned __int64)*(unsigned int *)(a1 + 48) >> 18) & 3;
    v11 = (unsigned int)MiVadPageIndices[v40];
    v66 = v11;
    if ( (unsigned int)v11 <= 1 )
      v67 = 2 - v11;
    v10 = MiVadPageSizes[v40];
    v41 = 16LL;
    v12 = v10;
    if ( v10 == 16 )
      v12 = 1LL;
    else
      v41 = 1LL;
    v61 = v41;
  }
  else
  {
    v10 = 1LL;
    v11 = 3LL;
    v66 = 3;
    v12 = 1LL;
    v61 = 1LL;
  }
  v60 = v10;
  v13 = *(_QWORD *)v5;
  v62 = *(_QWORD *)v5;
  v14 = (__int64)(v5 << 25) >> 16;
  v63 = v14;
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
        v43 = *((_QWORD *)&Flink->Flink + ((v5 >> 3) & 0x1FF));
        v44 = v13 | 0x20;
        if ( (v43 & 0x20) == 0 )
          v44 = v13;
        v13 = v44;
        if ( (v43 & 0x42) != 0 )
          v13 = v44 | 0x42;
      }
      v6 = 0LL;
    }
    v62 = v13;
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
    v59 = v17;
    if ( (MiFlags & 0x40000) != 0 && (v9 & 2) != 0 )
    {
      if ( v12 )
      {
        v45 = 48 * a4 - 0x58000000000LL;
        v46 = (volatile signed __int32 *)(v17 + 24);
        v47 = v12;
        do
        {
          v57 = 0;
          while ( _interlockedbittestandset64(v46, 0x3FuLL) )
          {
            do
              KeYieldProcessorEx(&v57, v6, v16, v11);
            while ( *(__int64 *)v46 < 0 );
          }
          if ( !(unsigned int)MiGetPagePrivilege(v45, 1, 0LL) )
            MiMarkPfnVerified(v45, 7);
          v16 = 0x7FFFFFFFFFFFFFFFLL;
          _InterlockedAnd64((volatile signed __int64 *)v46, 0x7FFFFFFFFFFFFFFFuLL);
          v45 += 48LL;
          v46 += 12;
          --v47;
        }
        while ( v47 );
        v5 = a2;
        LODWORD(v11) = v66;
        v7 = a1;
        v59 = v45;
        v17 = v45;
        v14 = v63;
      }
      v17 += -48 * v12;
      v59 = v17;
    }
  }
  else
  {
    v17 = 0LL;
    v59 = 0LL;
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
    v48 = MiUserPdeOrAbove(v5);
    v17 = v59;
    v7 = a1;
    if ( v48 )
      v19 |= 4uLL;
  }
  if ( v5 <= 0xFFFFF6BFFFFFFF78uLL )
    v19 |= 4uLL;
  if ( (v9 & 0x4000000) != 0 )
  {
    LeafVa = MiGetLeafVa(v14);
    v17 = v59;
    v20 = LeafVa;
  }
  else
  {
    v20 = v14;
  }
  if ( v20 < 0xFFFF800000000000uLL )
  {
    v21 = HIBYTE(word_140C4E048);
    goto LABEL_22;
  }
  if ( (unsigned int)MiGetSystemRegionType(v20) != 1 && (v20 < 0xFFFFF68000000000uLL || v20 > 0xFFFFF6FFFFFFFFFFuLL) )
  {
    if ( v20 < qword_140C4FB78 || (v21 = HIBYTE(word_140C4E048), v20 > qword_140C4E3A8) )
      v21 = (unsigned __int8)word_140C4E048;
    v7 = a1;
    v17 = v59;
LABEL_22:
    if ( !v21 )
      goto LABEL_23;
    goto LABEL_122;
  }
  v7 = a1;
  v17 = v59;
LABEL_23:
  if ( v9 < 0 && (v9 & 5) == 4 )
    v19 |= 0x42uLL;
  if ( (v9 & 0x40000000) != 0 )
    v19 &= ~4uLL;
  if ( (v9 & 0x20000000) != 0 )
    v19 ^= ((unsigned __int16)v19 ^ (unsigned __int16)((unsigned __int8)word_140C4E048 << 8)) & 0x100;
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
    v50 = v22 | 0x42;
    if ( (v9 & 4) == 0 )
      v50 = v22;
    v22 = v50;
  }
  v23 = v5;
  v24 = 0;
  v25 = (*(_DWORD *)(v7 + 48) & 0x300000) == 3145728;
  do
  {
    if ( v25 && (MI_READ_PTE_LOCK_FREE(v23) & 0x42) != 0 )
    {
      v39 = MiGetLeafVa(v23);
      MiCaptureWriteWatchDirtyBit((__int64)KeGetCurrentThread()->ApcState.Process, v39, a1);
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
          v51 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
          if ( v51 )
          {
            v52 = *((_QWORD *)&v51->Flink + ((v23 >> 3) & 0x1FF));
            v53 = v26 | 0x20;
            if ( (v52 & 0x20) == 0 )
              v53 = *(_QWORD *)v23;
            v26 = v53;
            if ( (v52 & 0x42) != 0 )
              v26 = v53 | 0x42;
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
    if ( v66 <= 1 )
    {
      MiRewritePteWithLockBit(&KeGetCurrentThread()->ApcState.Process[1].ActiveProcessorsPadding[6], v23, v22);
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
        v54 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
        if ( v54 )
        {
          v55 = *((_QWORD *)&v54->Flink + ((v23 >> 3) & 0x1FF));
          v56 = v27 | 0x20;
          if ( (v55 & 0x20) == 0 )
            v56 = *(_QWORD *)v23;
          v27 = v56;
          if ( (v55 & 0x42) != 0 )
            v27 = v56 | 0x42;
        }
      }
      v28 = v22 ^ (v22 ^ v27) & 0xF00000000000000LL ^ (v22 ^ (v22 ^ v27) & 0xF00000000000000LL ^ v27) & 0x7000000000000000LL;
      if ( !(unsigned int)MiPteInShadowRange(v23) )
        goto LABEL_48;
      if ( !(unsigned int)MiPteHasShadow() )
      {
        if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
          && (v28 & 1) != 0 )
        {
          v28 |= 0x8000000000000000uLL;
        }
LABEL_48:
        *(_QWORD *)v23 = v28;
        goto LABEL_49;
      }
      if ( !HIBYTE(word_140C4E048) && (v28 & 1) != 0 )
        v28 |= 0x8000000000000000uLL;
      *(_QWORD *)v23 = v28;
      MiWritePteShadow(v23, v28);
    }
LABEL_49:
    v23 += 8LL;
    v30 = 0xF00000000000000LL;
    v31 = v61-- == 1;
    v32 = 0x7000000000000000LL;
  }
  while ( !v31 );
  v33 = v62;
  if ( !v24 )
    goto LABEL_51;
  if ( v67 )
  {
    MiInsertLargeTbFlushEntry(a5, v67, a2);
LABEL_51:
    v34 = v60;
  }
  else
  {
    v34 = v60;
    MiInsertTbFlushEntry(a5, v63, v60, 0LL);
  }
  if ( v34 == 1 && (v33 & 0x42) != 0 )
  {
    v35 = v59;
    if ( v59 )
    {
      if ( (*(_DWORD *)(a1 + 48) & 0x70) != 0x40 || MiRotatedToFrameBuffer(a2) )
      {
        v36 = 0LL;
        v58 = 0;
        while ( _interlockedbittestandset64((volatile signed __int32 *)(v35 + 24), 0x3FuLL) )
        {
          do
            KeYieldProcessorEx(&v58, v29, v30, v32);
          while ( *(__int64 *)(v35 + 24) < 0 );
        }
        v37 = *(_BYTE *)(v35 + 34);
        v38 = 0LL;
        if ( (v37 & 0x10) == 0 )
        {
          if ( (!_bittest64((const signed __int64 *)(v35 + 16), 0xAu) & (unsigned __int8)~(v37 >> 3)) != 0 )
          {
            v38 = MiCapturePageFileInfoInline((unsigned __int64 *)(v35 + 16), 1, 0);
            v37 = *(_BYTE *)(v35 + 34);
          }
          *(_BYTE *)(v35 + 34) = v37 | 0x10;
          if ( v38 )
            v36 = *(_QWORD *)(qword_140C4E688 + 8 * ((*(_QWORD *)(v35 + 40) >> 39) & 0x3FFLL));
        }
        _InterlockedAnd64((volatile signed __int64 *)(v35 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        if ( v38 )
          MiReleasePageFileInfo(v36, v38, 1);
      }
    }
  }
}
