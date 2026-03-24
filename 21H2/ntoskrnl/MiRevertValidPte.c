/*
 * XREFs of MiRevertValidPte @ 0x140334300
 * Callers:
 *     MiSetReadOnlyOnSectionView @ 0x140240B90 (MiSetReadOnlyOnSectionView.c)
 *     MiProtectPrivateMemory @ 0x14030DA00 (MiProtectPrivateMemory.c)
 *     MiSetProtectionOnSection @ 0x140332C70 (MiSetProtectionOnSection.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x14024B280 (KeYieldProcessorEx.c)
 *     MiCaptureWriteWatchDirtyBit @ 0x14025B15C (MiCaptureWriteWatchDirtyBit.c)
 *     MiReleasePageFileInfo @ 0x140267CB0 (MiReleasePageFileInfo.c)
 *     MiInsertLargeTbFlushEntry @ 0x14029A7DC (MiInsertLargeTbFlushEntry.c)
 *     MiCapturePageFileInfoInline @ 0x1402A2CF0 (MiCapturePageFileInfoInline.c)
 *     MiUserPdeOrAbove @ 0x1402ABED4 (MiUserPdeOrAbove.c)
 *     MiRotatedToFrameBuffer @ 0x1402B0538 (MiRotatedToFrameBuffer.c)
 *     MiWritePteShadow @ 0x1402B69BC (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x1402B6A1C (MiPteHasShadow.c)
 *     MiMarkPfnVerified @ 0x1402B8A04 (MiMarkPfnVerified.c)
 *     MiGetPagePrivilege @ 0x1403286F0 (MiGetPagePrivilege.c)
 *     MiGetLeafVa @ 0x14032CE60 (MiGetLeafVa.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14032DEC0 (MI_READ_PTE_LOCK_FREE.c)
 *     MiInsertTbFlushEntry @ 0x140335D70 (MiInsertTbFlushEntry.c)
 *     MiPteInShadowRange @ 0x140348AF0 (MiPteInShadowRange.c)
 *     MiGetSystemRegionType @ 0x14034A950 (MiGetSystemRegionType.c)
 *     MiRewritePteWithLockBit @ 0x1403B6C18 (MiRewritePteWithLockBit.c)
 */

void __fastcall MiRevertValidPte(__int64 a1, unsigned __int64 a2, int a3, unsigned __int64 a4, __int64 a5)
{
  unsigned __int64 v5; // r15
  unsigned __int64 Process; // rdx
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
  __int64 v29; // r8
  bool v30; // zf
  __int64 v31; // r9
  char v32; // si
  __int64 v33; // rbx
  __int64 v34; // rbx
  __int64 v35; // rdi
  unsigned __int8 v36; // r9
  unsigned __int64 v37; // rax
  unsigned __int64 v38; // rax
  unsigned __int64 v39; // r10
  __int64 v40; // r10
  struct _LIST_ENTRY *Flink; // rdx
  __int64 v42; // rax
  __int64 v43; // rdx
  ULONG_PTR v44; // r13
  volatile signed __int32 *v45; // rbx
  __int64 v46; // rbp
  int v47; // eax
  unsigned __int64 LeafVa; // rax
  __int64 v49; // rax
  __int64 v50; // r8
  __int64 v51; // rax
  __int64 v52; // r8
  __int64 v53; // rax
  __int64 v54; // r8
  int v55; // [rsp+20h] [rbp-78h] BYREF
  int v56; // [rsp+24h] [rbp-74h] BYREF
  __int64 v57; // [rsp+28h] [rbp-70h]
  __int64 v58; // [rsp+30h] [rbp-68h]
  __int64 v59; // [rsp+38h] [rbp-60h]
  __int64 v60; // [rsp+40h] [rbp-58h]
  unsigned __int64 v61; // [rsp+48h] [rbp-50h]
  unsigned int v64; // [rsp+B0h] [rbp+18h]
  unsigned int v65; // [rsp+B8h] [rbp+20h]

  v5 = a2;
  Process = 0LL;
  v65 = 0;
  v7 = a1;
  v9 = a3;
  if ( (*(_DWORD *)(a1 + 48) & 0x500000) == 0x500000 )
  {
    v39 = ((unsigned __int64)*(unsigned int *)(a1 + 48) >> 18) & 3;
    v11 = (unsigned int)MiVadPageIndices[v39];
    v64 = v11;
    if ( (unsigned int)v11 <= 1 )
      v65 = 2 - v11;
    v10 = MiVadPageSizes[v39];
    v40 = 16LL;
    v12 = v10;
    if ( v10 == 16 )
      v12 = 1LL;
    else
      v40 = 1LL;
    v59 = v40;
  }
  else
  {
    v10 = 1LL;
    v11 = 3LL;
    v64 = 3;
    v12 = 1LL;
    v59 = 1LL;
  }
  v58 = v10;
  v13 = *(_QWORD *)v5;
  v60 = *(_QWORD *)v5;
  v14 = (__int64)(v5 << 25) >> 16;
  v61 = v14;
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
        v42 = *((_QWORD *)&Flink->Flink + ((v5 >> 3) & 0x1FF));
        v43 = v13 | 0x20;
        if ( (v42 & 0x20) == 0 )
          v43 = v13;
        v13 = v43;
        if ( (v42 & 0x42) != 0 )
          v13 = v43 | 0x42;
      }
      Process = 0LL;
    }
    v60 = v13;
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
    v57 = v17;
    if ( (MiFlags & 0x40000) != 0 && (v9 & 2) != 0 )
    {
      if ( v12 )
      {
        v44 = 48 * a4 - 0x58000000000LL;
        v45 = (volatile signed __int32 *)(v17 + 24);
        v46 = v12;
        do
        {
          v55 = 0;
          while ( _interlockedbittestandset64(v45, 0x3FuLL) )
          {
            do
              KeYieldProcessorEx(&v55, Process, v16, v11);
            while ( *(__int64 *)v45 < 0 );
          }
          if ( !(unsigned int)MiGetPagePrivilege(v44, 1, 0LL) )
            MiMarkPfnVerified(v44, 7);
          v16 = 0x7FFFFFFFFFFFFFFFLL;
          _InterlockedAnd64((volatile signed __int64 *)v45, 0x7FFFFFFFFFFFFFFFuLL);
          v44 += 48LL;
          v45 += 12;
          --v46;
        }
        while ( v46 );
        v5 = a2;
        Process = 0LL;
        LODWORD(v11) = v64;
        v7 = a1;
        v57 = v44;
        v17 = v44;
        v14 = v61;
      }
      v17 += -48 * v12;
      v57 = v17;
    }
  }
  else
  {
    v17 = 0LL;
    v57 = 0LL;
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
    v47 = MiUserPdeOrAbove(v5);
    v17 = v57;
    v7 = a1;
    if ( v47 )
      v19 |= 4uLL;
    Process = 0LL;
  }
  if ( v5 <= 0xFFFFF6BFFFFFFF78uLL )
    v19 |= 4uLL;
  if ( (v9 & 0x4000000) != 0 )
  {
    LeafVa = MiGetLeafVa(v14);
    v17 = v57;
    v20 = LeafVa;
    Process = 0LL;
  }
  else
  {
    v20 = v14;
  }
  if ( v20 < 0xFFFF800000000000uLL )
  {
    v21 = HIBYTE(word_140C4E008);
    goto LABEL_22;
  }
  if ( (unsigned int)MiGetSystemRegionType(v20) != 1 && (v20 < 0xFFFFF68000000000uLL || v20 > 0xFFFFF6FFFFFFFFFFuLL) )
  {
    if ( v20 < qword_140C4FB38 || (v21 = HIBYTE(word_140C4E008), v20 > qword_140C4E368) )
      v21 = (unsigned __int8)word_140C4E008;
    v7 = a1;
    Process = 0LL;
    v17 = v57;
LABEL_22:
    if ( !v21 )
      goto LABEL_23;
    goto LABEL_122;
  }
  v7 = a1;
  Process = 0LL;
  v17 = v57;
LABEL_23:
  if ( v9 < 0 && (v9 & 5) == 4 )
    v19 |= 0x42uLL;
  if ( (v9 & 0x40000000) != 0 )
    v19 &= ~4uLL;
  if ( (v9 & 0x20000000) != 0 )
    v19 ^= ((unsigned __int16)v19 ^ (unsigned __int16)((unsigned __int8)word_140C4E008 << 8)) & 0x100;
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
    v49 = v22 | 0x42;
    if ( (v9 & 4) == 0 )
      v49 = v22;
    v22 = v49;
  }
  v23 = v5;
  v24 = 0;
  v25 = (*(_DWORD *)(v7 + 48) & 0x300000) == 3145728;
  do
  {
    if ( v25 && (MI_READ_PTE_LOCK_FREE(v23) & 0x42) != 0 )
    {
      v38 = MiGetLeafVa(v23);
      MiCaptureWriteWatchDirtyBit((__int64)KeGetCurrentThread()->ApcState.Process, v38, a1);
      v25 = 0;
    }
    v22 ^= (v22 ^ (a4 << 12)) & 0xFFFFFFFFF000LL;
    if ( !v24 )
    {
      if ( (MiFlags & 0x100) != 0 || (MiFlags & 0x200) != 0 )
      {
        v26 = *(_QWORD *)v23;
        Process = 0xFFFFF6FB7DBED000uLL;
        if ( v23 >= 0xFFFFF6FB7DBED000uLL )
        {
          Process = 0xFFFFF6FB7DBED7F8uLL;
          if ( v23 <= 0xFFFFF6FB7DBED7F8uLL && (MiFlags & 0xC00000) != 0 )
          {
            Process = (unsigned __int64)KeGetCurrentThread()->ApcState.Process;
            if ( *(_BYTE *)(Process + 912) != 1 && (v26 & 1) != 0 && ((v26 & 0x20) == 0 || (v26 & 0x42) == 0) )
            {
              Process = (unsigned __int64)KeGetCurrentThread()->ApcState.Process;
              v50 = *(_QWORD *)(Process + 1928);
              if ( v50 )
              {
                v51 = *(_QWORD *)(v50 + 8 * ((v23 >> 3) & 0x1FF));
                v52 = v26 | 0x20;
                Process = (unsigned __int8)v51;
                if ( (v51 & 0x20) == 0 )
                  v52 = *(_QWORD *)v23;
                v26 = v52;
                if ( (v51 & 0x42) != 0 )
                  v26 = v52 | 0x42;
              }
            }
          }
        }
        LOBYTE(Process) = (v26 & 0x40) != 0;
        if ( ((unsigned __int8)Process & ((v22 & 0x40) == 0)) != 0
          || (LOBYTE(Process) = (v26 & 2) != 0, ((unsigned __int8)Process & ((v22 & 2) == 0)) != 0)
          || v22 < 0 && v26 >= 0 )
        {
          v24 = 1;
        }
      }
      else
      {
        v24 = 1;
      }
    }
    ++a4;
    if ( v64 <= 1 )
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
        Process = (unsigned __int64)KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
        if ( Process )
        {
          v53 = *(_QWORD *)(Process + 8 * ((v23 >> 3) & 0x1FF));
          Process = v27 | 0x20;
          if ( (v53 & 0x20) == 0 )
            Process = *(_QWORD *)v23;
          v27 = Process;
          if ( (v53 & 0x42) != 0 )
            v27 = Process | 0x42;
        }
      }
      v28 = v22 ^ (v22 ^ v27) & 0xF00000000000000LL ^ (v22 ^ (v22 ^ v27) & 0xF00000000000000LL ^ v27) & 0x7000000000000000LL;
      if ( !(unsigned int)MiPteInShadowRange(v23, Process) )
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
      if ( !HIBYTE(word_140C4E008) && (v28 & 1) != 0 )
        v28 |= 0x8000000000000000uLL;
      *(_QWORD *)v23 = v28;
      MiWritePteShadow(v23, v28, v54);
    }
LABEL_49:
    v23 += 8LL;
    v29 = 0xF00000000000000LL;
    v30 = v59-- == 1;
    v31 = 0x7000000000000000LL;
  }
  while ( !v30 );
  v32 = v60;
  if ( !v24 )
    goto LABEL_51;
  if ( v65 )
  {
    MiInsertLargeTbFlushEntry(a5, v65, a2);
LABEL_51:
    v33 = v58;
  }
  else
  {
    v33 = v58;
    MiInsertTbFlushEntry(a5, v61, v58, 0LL);
  }
  if ( v33 == 1 && (v32 & 0x42) != 0 )
  {
    v34 = v57;
    if ( v57 )
    {
      if ( (*(_DWORD *)(a1 + 48) & 0x70) != 0x40 || MiRotatedToFrameBuffer(a2) )
      {
        v35 = 0LL;
        v56 = 0;
        while ( _interlockedbittestandset64((volatile signed __int32 *)(v34 + 24), 0x3FuLL) )
        {
          do
            KeYieldProcessorEx(&v56, Process, v29, v31);
          while ( *(__int64 *)(v34 + 24) < 0 );
        }
        v36 = *(_BYTE *)(v34 + 34);
        v37 = 0LL;
        if ( (v36 & 0x10) == 0 )
        {
          if ( (!_bittest64((const signed __int64 *)(v34 + 16), 0xAu) & (unsigned __int8)~(v36 >> 3)) != 0 )
          {
            v37 = MiCapturePageFileInfoInline((unsigned __int64 *)(v34 + 16), 1, 0);
            v36 = *(_BYTE *)(v34 + 34);
          }
          *(_BYTE *)(v34 + 34) = v36 | 0x10;
          if ( v37 )
            v35 = *(_QWORD *)(qword_140C4E648 + 8 * ((*(_QWORD *)(v34 + 40) >> 39) & 0x3FFLL));
        }
        _InterlockedAnd64((volatile signed __int64 *)(v34 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        if ( v37 )
          MiReleasePageFileInfo(v35, v37, 1);
      }
    }
  }
}
