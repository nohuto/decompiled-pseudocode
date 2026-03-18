/*
 * XREFs of MiRevertValidPte @ 0x14032E130
 * Callers:
 *     MiSetProtectionOnSection @ 0x14032D1C0 (MiSetProtectionOnSection.c)
 *     MiProtectPrivateMemory @ 0x14032EA60 (MiProtectPrivateMemory.c)
 *     MiSetReadOnlyOnSectionView @ 0x14033A030 (MiSetReadOnlyOnSectionView.c)
 * Callees:
 *     MiInsertLargeTbFlushEntry @ 0x1402285E8 (MiInsertLargeTbFlushEntry.c)
 *     MiWritePteShadow @ 0x1402294F0 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140229550 (MiPteHasShadow.c)
 *     MiUserPdeOrAbove @ 0x14023261C (MiUserPdeOrAbove.c)
 *     MiCapturePageFileInfoInline @ 0x140232694 (MiCapturePageFileInfoInline.c)
 *     MiCaptureWriteWatchDirtyBit @ 0x1402358D4 (MiCaptureWriteWatchDirtyBit.c)
 *     MiRotatedToFrameBuffer @ 0x1402433D0 (MiRotatedToFrameBuffer.c)
 *     MiMarkPfnVerified @ 0x14026C644 (MiMarkPfnVerified.c)
 *     MiGetSystemRegionType @ 0x14027B080 (MiGetSystemRegionType.c)
 *     MiInsertTbFlushEntry @ 0x1402CF280 (MiInsertTbFlushEntry.c)
 *     MiGetLeafVa @ 0x1402CFEB0 (MiGetLeafVa.c)
 *     MiReleasePageFileInfo @ 0x1402E20D0 (MiReleasePageFileInfo.c)
 *     KeYieldProcessorEx @ 0x1402F32E0 (KeYieldProcessorEx.c)
 *     MiGetPagePrivilege @ 0x140313B20 (MiGetPagePrivilege.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140317A10 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x140317A80 (MiPteInShadowRange.c)
 *     MiRewritePteWithLockBit @ 0x1403C2C58 (MiRewritePteWithLockBit.c)
 */

void __fastcall MiRevertValidPte(__int64 a1, __int64 a2, __int64 a3, unsigned __int64 a4, __int64 a5)
{
  unsigned __int64 v5; // r10
  unsigned __int64 v6; // rbp
  int v7; // eax
  unsigned __int64 v8; // r12
  int v10; // edi
  __int64 v11; // r11
  __int64 v12; // r15
  unsigned int v13; // r10d
  __int64 v14; // r9
  __int64 v15; // rsi
  __int64 v16; // rdx
  int v17; // eax
  __int64 v18; // r14
  __int64 v19; // r15
  unsigned __int64 v20; // rbx
  unsigned __int64 LeafVa; // r14
  int v22; // eax
  signed __int64 v23; // rbx
  int v24; // r15d
  BOOL v25; // ecx
  unsigned __int64 v26; // r14
  BOOL v27; // r12d
  __int64 v28; // rax
  __int64 v29; // rdi
  __int64 v30; // rdi
  bool v31; // zf
  __int64 v32; // rbx
  unsigned __int8 v33; // r8
  __int64 v34; // rax
  unsigned __int64 v35; // rax
  __int64 v36; // r10
  unsigned int v37; // eax
  unsigned int v38; // ecx
  __int64 v39; // rcx
  struct _LIST_ENTRY *Flink; // rdx
  __int64 v41; // rax
  ULONG_PTR v42; // r12
  volatile signed __int32 *v43; // rbx
  __int64 v44; // r14
  int v45; // eax
  __int64 v46; // rax
  struct _LIST_ENTRY *v47; // r8
  __int64 v48; // rcx
  struct _LIST_ENTRY *v49; // rdx
  __int64 v50; // rax
  __int64 v51; // rcx
  _DWORD v52[2]; // [rsp+20h] [rbp-78h] BYREF
  ULONG_PTR BugCheckParameter2; // [rsp+28h] [rbp-70h]
  __int64 v54; // [rsp+30h] [rbp-68h]
  __int64 v55; // [rsp+38h] [rbp-60h]
  __int64 v56; // [rsp+40h] [rbp-58h]
  __int64 v57; // [rsp+48h] [rbp-50h]
  int v60; // [rsp+B0h] [rbp+18h] BYREF
  unsigned int v61; // [rsp+B8h] [rbp+20h]

  v5 = *(unsigned int *)(a1 + 48);
  v6 = 0LL;
  v7 = *(_DWORD *)(a1 + 48);
  v61 = 0;
  v8 = a2;
  v10 = a3;
  v11 = a1;
  if ( (v7 & 0xA00000) == 0xA00000 )
  {
    v36 = (v5 >> 19) & 3;
    v37 = MiVadPageIndices[v36];
    v38 = 2 - v37;
    v60 = v37;
    if ( v37 > 1 )
      v38 = 0;
    v61 = v38;
    v39 = MiVadPageSizes[v36];
    v56 = v39;
    if ( v39 == 16 )
    {
      v12 = 1LL;
      v14 = 16LL;
    }
    else
    {
      v14 = 1LL;
      v12 = v39;
    }
    v13 = v37;
  }
  else
  {
    v12 = 1LL;
    v13 = 3;
    v60 = 3;
    v14 = 1LL;
    v56 = 1LL;
  }
  v54 = v14;
  v15 = *(_QWORD *)a2;
  v57 = *(_QWORD *)a2;
  v16 = a2 << 25 >> 16;
  v55 = (__int64)(v8 << 25) >> 16;
  if ( v8 >= 0xFFFFF6FB7DBED000uLL && v8 <= 0xFFFFF6FB7DBED7F8uLL )
  {
    if ( (MiFlags & 0xC00000) != 0
      && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
      && (v15 & 1) != 0
      && ((v15 & 0x20) == 0 || (v15 & 0x42) == 0) )
    {
      Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
      if ( Flink )
      {
        v41 = *((_QWORD *)&Flink->Flink + ((v8 >> 3) & 0x1FF));
        if ( (v41 & 0x20) != 0 )
          v15 |= 0x20uLL;
        if ( (v41 & 0x42) != 0 )
          v15 |= 0x42uLL;
      }
      v16 = v55;
    }
    v57 = v15;
  }
  v17 = a3 & 0x18;
  if ( (v15 & 0x18) == 8 )
  {
    v10 = a3 | 0x18;
    if ( v17 == 24 )
      v10 = a3;
  }
  else if ( (v15 & 0x10) != 0 )
  {
    if ( v17 != 8 )
      v10 = a3 & 0xFFFFFFE7 | 8;
  }
  else if ( (a3 & 0x18) != 0 )
  {
    v10 = a3 & 0xFFFFFFE7;
  }
  if ( a4 > qword_140C50840 || (*(_QWORD *)(48 * a4 - 0x21FFFFFFFFD8LL) & 0x40000000000000LL) == 0 )
  {
    v18 = 0LL;
    BugCheckParameter2 = 0LL;
LABEL_11:
    a3 = 0x7FFFFFFFFFFFFFFFLL;
    goto LABEL_12;
  }
  v18 = 48 * a4 - 0x220000000000LL;
  BugCheckParameter2 = v18;
  if ( (MiFlags & 0x20000) == 0 || (v10 & 2) == 0 )
    goto LABEL_11;
  if ( v12 )
  {
    v42 = BugCheckParameter2;
    v43 = (volatile signed __int32 *)(v18 + 24);
    v44 = v12;
    do
    {
      v52[0] = 0;
      while ( _interlockedbittestandset64(v43, 0x3FuLL) )
      {
        do
          KeYieldProcessorEx(v52, v16, a3, v14);
        while ( *(__int64 *)v43 < 0 );
      }
      if ( !(unsigned int)MiGetPagePrivilege(v42, 1, 0LL) )
        MiMarkPfnVerified(v42, 7);
      a3 = 0x7FFFFFFFFFFFFFFFLL;
      _InterlockedAnd64((volatile signed __int64 *)v43, 0x7FFFFFFFFFFFFFFFuLL);
      v42 += 48LL;
      v43 += 12;
      --v44;
    }
    while ( v44 );
    v16 = v55;
    v14 = v54;
    v11 = a1;
    v13 = v60;
    BugCheckParameter2 = v42;
    v18 = v42;
    v8 = a2;
  }
  else
  {
    a3 = 0x7FFFFFFFFFFFFFFFLL;
  }
  v18 += -48 * v12;
  BugCheckParameter2 = v18;
LABEL_12:
  if ( v13 <= 1 )
    v10 |= 0x4000000u;
  v19 = v10 & 0x1F;
  v20 = ((a4 & 0xFFFFFFFFFFLL) << 12) | MmProtectToPteMask[v19] & 0xFFF0000000000E7FuLL | 0x21;
  if ( v8 < 0xFFFFF68000000000uLL || v8 > 0xFFFFF6FFFFFFFFFFuLL )
  {
LABEL_124:
    v20 |= 0x100uLL;
    goto LABEL_24;
  }
  if ( v8 >= 0xFFFFF6FB40000000uLL && v8 <= 0xFFFFF6FB7FFFFFFFuLL )
  {
    if ( v8 == 0xFFFFF6FB7DBEDF68uLL )
    {
      v20 = ((a4 & 0xFFFFFFFFFFLL) << 12) | MmProtectToPteMask[v19] & 0xFFF0000000000E7FuLL | 0x8000000000000021uLL;
    }
    else if ( (v10 & 0x4000000) == 0 )
    {
      v20 = ((a4 & 0xFFFFFFFFFFLL) << 12) & 0x7FFFFFFFFFFFFFFFLL | MmProtectToPteMask[v19] & 0x7FF0000000000E7FLL | 0x21;
    }
    v45 = MiUserPdeOrAbove(v8);
    v16 = v55;
    v14 = v54;
    v11 = a1;
    v13 = v60;
    if ( v45 )
      v20 |= 4uLL;
  }
  if ( v8 <= 0xFFFFF6BFFFFFFF78uLL )
    v20 |= 4uLL;
  if ( (v10 & 0x4000000) != 0 )
    LeafVa = MiGetLeafVa(v16);
  else
    LeafVa = v16;
  if ( LeafVa < 0xFFFF800000000000uLL )
  {
    v22 = HIBYTE(word_140C51864);
    goto LABEL_23;
  }
  if ( (unsigned int)MiGetSystemRegionType(LeafVa) != 1
    && (LeafVa < 0xFFFFF68000000000uLL || LeafVa > 0xFFFFF6FFFFFFFFFFuLL) )
  {
    if ( LeafVa < qword_140C540C0 || (v22 = HIBYTE(word_140C51864), LeafVa > qword_140C51BF0) )
      v22 = (unsigned __int8)word_140C51864;
    v13 = v60;
    v11 = a1;
    v14 = v54;
LABEL_23:
    v18 = BugCheckParameter2;
    if ( !v22 )
      goto LABEL_24;
    goto LABEL_124;
  }
  v13 = v60;
  v11 = a1;
  v14 = v54;
  v18 = BugCheckParameter2;
LABEL_24:
  if ( v10 < 0 && (v10 & 5) == 4 )
    v20 |= 0x42uLL;
  if ( (v10 & 0x40000000) != 0 )
    v20 &= ~4uLL;
  if ( (v10 & 0x20000000) != 0 )
    v20 ^= ((unsigned __int16)v20 ^ (unsigned __int16)((unsigned __int8)word_140C51864 << 8)) & 0x100;
  if ( (v10 & 0x8000000) != 0 )
    v20 &= ~0x100uLL;
  if ( (v10 & 0x4000000) != 0 )
    v20 |= 0x80uLL;
  v23 = v20 & 0xF0FFFFFFFFFFFFFFuLL | 0xA00000000000000LL;
  if ( v18 )
  {
    if ( (MiFlags & 0x2000000) != 0 && (v15 & 0x42) == 0x40 )
      v23 |= 0x40uLL;
  }
  else
  {
    v46 = v23 | 0x42;
    if ( (v10 & 4) == 0 )
      v46 = v23;
    v23 = v46;
  }
  v24 = 0;
  v25 = (*(_DWORD *)(v11 + 48) & 0x600000) == 6291456;
  v52[1] = v25;
  if ( !v14 )
    goto LABEL_54;
  v26 = v8;
  v27 = v25;
  do
  {
    if ( v27 )
    {
      if ( (MI_READ_PTE_LOCK_FREE(v26) & 0x42) != 0 )
      {
        v35 = MiGetLeafVa(v26);
        MiCaptureWriteWatchDirtyBit((__int64)KeGetCurrentThread()->ApcState.Process, v35, a1);
        v27 = 0;
      }
      v13 = v60;
    }
    v23 ^= (v23 ^ (a4 << 12)) & 0xFFFFFFFFFF000LL;
    if ( !v24 )
    {
      if ( (MiFlags & 0x100) != 0 || (MiFlags & 0x200) != 0 )
      {
        v28 = *(_QWORD *)v26;
        if ( v26 >= 0xFFFFF6FB7DBED000uLL
          && v26 <= 0xFFFFF6FB7DBED7F8uLL
          && (MiFlags & 0xC00000) != 0
          && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
          && (v28 & 1) != 0
          && ((v28 & 0x20) == 0 || (v28 & 0x42) == 0) )
        {
          v47 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
          if ( v47 )
          {
            v48 = *((_QWORD *)&v47->Flink + ((v26 >> 3) & 0x1FF));
            if ( (v48 & 0x20) != 0 )
              v28 |= 0x20uLL;
            if ( (v48 & 0x42) != 0 )
              v28 |= 0x42uLL;
          }
        }
        if ( (v28 & 0x40) != 0 && (v23 & 0x40) == 0 || (v28 & 2) != 0 && (v23 & 2) == 0 || v23 < 0 && v28 >= 0 )
          v24 = 1;
      }
      else
      {
        v24 = 1;
      }
    }
    ++a4;
    if ( v13 <= 1 )
    {
      MiRewritePteWithLockBit(&KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.StaticBitmap[26], v26, v23);
    }
    else
    {
      v29 = *(_QWORD *)v26;
      if ( v26 >= 0xFFFFF6FB7DBED000uLL
        && v26 <= 0xFFFFF6FB7DBED7F8uLL
        && (MiFlags & 0xC00000) != 0
        && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
        && (v29 & 1) != 0
        && ((v29 & 0x20) == 0 || (v29 & 0x42) == 0) )
      {
        v49 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
        if ( v49 )
        {
          v50 = *((_QWORD *)&v49->Flink + ((v26 >> 3) & 0x1FF));
          if ( (v50 & 0x20) != 0 )
            v29 |= 0x20uLL;
          if ( (v50 & 0x42) != 0 )
            v29 |= 0x42uLL;
        }
      }
      v30 = v23 ^ (v23 ^ v29) & 0xF00000000000000LL ^ (v23 ^ (v23 ^ v29) & 0xF00000000000000LL ^ v29) & 0x7000000000000000LL;
      if ( !MiPteInShadowRange(v26) )
        goto LABEL_50;
      if ( !(unsigned int)MiPteHasShadow() )
      {
        if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
          && (v30 & 1) != 0 )
        {
          v30 |= 0x8000000000000000uLL;
        }
LABEL_50:
        *(_QWORD *)v26 = v30;
        goto LABEL_51;
      }
      if ( !HIBYTE(word_140C51864) && (v30 & 1) != 0 )
        v30 |= 0x8000000000000000uLL;
      *(_QWORD *)v26 = v30;
      MiWritePteShadow(v26, v30);
    }
LABEL_51:
    v13 = v60;
    v26 += 8LL;
    v31 = v54-- == 1;
    a3 = 0xF00000000000000LL;
    v14 = 0x7000000000000000LL;
  }
  while ( !v31 );
  LOBYTE(v15) = v57;
  v8 = a2;
  if ( !v24 )
    goto LABEL_53;
  if ( !v61 )
  {
    v32 = v56;
    MiInsertTbFlushEntry(a5, v55, v56, 0);
    v11 = a1;
    v18 = BugCheckParameter2;
    goto LABEL_55;
  }
  MiInsertLargeTbFlushEntry(a5, v61, a2);
LABEL_53:
  v11 = a1;
  v18 = BugCheckParameter2;
LABEL_54:
  v32 = v56;
LABEL_55:
  if ( v32 == 1 && (v15 & 0x42) != 0 && v18 && ((*(_DWORD *)(v11 + 48) & 0x70) != 0x40 || MiRotatedToFrameBuffer(v8)) )
  {
    v60 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v18 + 24), 0x3FuLL) )
    {
      do
        KeYieldProcessorEx(&v60, v16, a3, v14);
      while ( *(__int64 *)(v18 + 24) < 0 );
    }
    v33 = *(_BYTE *)(v18 + 34);
    if ( (v33 & 0x10) != 0 )
      goto LABEL_67;
    if ( (!_bittest64((const signed __int64 *)(v18 + 16), 0xAu) & (unsigned __int8)~(v33 >> 3)) != 0 )
    {
      v34 = MiCapturePageFileInfoInline((unsigned __int64 *)(v18 + 16), 1, 0);
      v33 = *(_BYTE *)(v18 + 34);
      v6 = v34;
    }
    *(_BYTE *)(v18 + 34) = v33 | 0x10;
    if ( !v6 )
    {
LABEL_67:
      _InterlockedAnd64((volatile signed __int64 *)(v18 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    }
    else
    {
      v51 = *(_QWORD *)(qword_140C51F48 + 8 * ((*(_QWORD *)(v18 + 40) >> 43) & 0x3FFLL));
      _InterlockedAnd64((volatile signed __int64 *)(v18 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      MiReleasePageFileInfo(v51, v6, 1);
    }
  }
}
