/*
 * XREFs of MiRevertValidPte @ 0x1402B7550
 * Callers:
 *     MiProtectPrivateMemory @ 0x1402349C0 (MiProtectPrivateMemory.c)
 *     MiSetReadOnlyOnSectionView @ 0x14028EFF0 (MiSetReadOnlyOnSectionView.c)
 *     MiSetProtectionOnSection @ 0x1402B5EC0 (MiSetProtectionOnSection.c)
 * Callees:
 *     MiPteInShadowRange @ 0x14021EA50 (MiPteInShadowRange.c)
 *     MiGetSystemRegionType @ 0x140220A00 (MiGetSystemRegionType.c)
 *     MiCaptureWriteWatchDirtyBit @ 0x1402309EC (MiCaptureWriteWatchDirtyBit.c)
 *     MiGetPagePrivilege @ 0x1402ABE40 (MiGetPagePrivilege.c)
 *     MiGetLeafVa @ 0x1402B0270 (MiGetLeafVa.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1402B12D0 (MI_READ_PTE_LOCK_FREE.c)
 *     MiInsertTbFlushEntry @ 0x1402B8FC0 (MiInsertTbFlushEntry.c)
 *     KeYieldProcessorEx @ 0x1402DE380 (KeYieldProcessorEx.c)
 *     MiCapturePageFileInfoInline @ 0x140306460 (MiCapturePageFileInfoInline.c)
 *     MiUserPdeOrAbove @ 0x14030CD44 (MiUserPdeOrAbove.c)
 *     MiRotatedToFrameBuffer @ 0x14030F8A8 (MiRotatedToFrameBuffer.c)
 *     MiWritePteShadow @ 0x140313F2C (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140313F8C (MiPteHasShadow.c)
 *     MiMarkPfnVerified @ 0x1403156F4 (MiMarkPfnVerified.c)
 *     MiInsertLargeTbFlushEntry @ 0x140319B24 (MiInsertLargeTbFlushEntry.c)
 *     MiReleasePageFileInfo @ 0x140344F70 (MiReleasePageFileInfo.c)
 *     MiRewritePteWithLockBit @ 0x1403B54A8 (MiRewritePteWithLockBit.c)
 */

struct _KTHREAD *__fastcall MiRevertValidPte(__int64 a1, unsigned __int64 a2, int a3, unsigned __int64 a4, __int64 a5)
{
  unsigned __int64 v5; // r15
  __int64 v6; // r11
  int v8; // edi
  __int64 v9; // rcx
  unsigned int v10; // r9d
  __int64 v11; // r14
  __int64 v12; // rsi
  unsigned __int64 v13; // r13
  int v14; // eax
  __int64 v15; // rcx
  __int64 v16; // r14
  unsigned __int64 v17; // rbx
  unsigned __int64 v18; // rbp
  int v19; // eax
  signed __int64 v20; // rbx
  unsigned __int64 v21; // r14
  int v22; // ebp
  BOOL v23; // r13d
  __int64 v24; // rcx
  __int64 v25; // rdi
  __int64 v26; // rdi
  struct _KTHREAD *result; // rax
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // r9
  char v32; // si
  __int64 v33; // rbx
  __int64 v34; // rbx
  __int64 v35; // rdi
  unsigned __int8 v36; // r9
  unsigned __int64 v37; // rax
  unsigned __int64 v38; // r10
  __int64 v39; // r10
  struct _LIST_ENTRY *Flink; // rdx
  __int64 v41; // rax
  __int64 v42; // rdx
  ULONG_PTR v43; // r13
  volatile signed __int32 *v44; // rbx
  __int64 v45; // rbp
  int v46; // eax
  unsigned __int64 LeafVa; // rax
  __int64 v48; // rax
  struct _LIST_ENTRY *v49; // r8
  __int64 v50; // rax
  __int64 v51; // r8
  struct _LIST_ENTRY *v52; // rdx
  __int64 v53; // rax
  __int64 v54; // rdx
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
  v65 = 0;
  v6 = a1;
  v8 = a3;
  if ( (*(_DWORD *)(a1 + 48) & 0x500000) == 0x500000 )
  {
    v38 = ((unsigned __int64)*(unsigned int *)(a1 + 48) >> 18) & 3;
    v10 = MiVadPageIndices[v38];
    v64 = v10;
    if ( v10 <= 1 )
      v65 = 2 - v10;
    v9 = MiVadPageSizes[v38];
    v39 = 16LL;
    v11 = v9;
    if ( v9 == 16 )
      v11 = 1LL;
    else
      v39 = 1LL;
    v59 = v39;
  }
  else
  {
    v9 = 1LL;
    v10 = 3;
    v64 = 3;
    v11 = 1LL;
    v59 = 1LL;
  }
  v58 = v9;
  v12 = *(_QWORD *)a2;
  v60 = *(_QWORD *)a2;
  v13 = (__int64)(a2 << 25) >> 16;
  v61 = v13;
  if ( a2 >= 0xFFFFF6FB7DBED000uLL && a2 <= 0xFFFFF6FB7DBED7F8uLL )
  {
    if ( (MiFlags & 0xC00000) != 0
      && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
      && (v12 & 1) != 0
      && ((v12 & 0x20) == 0 || (v12 & 0x42) == 0) )
    {
      Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
      if ( Flink )
      {
        v41 = *((_QWORD *)&Flink->Flink + ((v5 >> 3) & 0x1FF));
        v42 = v12 | 0x20;
        if ( (v41 & 0x20) == 0 )
          v42 = v12;
        v12 = v42;
        if ( (v41 & 0x42) != 0 )
          v12 = v42 | 0x42;
      }
    }
    v60 = v12;
  }
  v14 = a3 & 0x18;
  if ( (v12 & 0x18) == 8 )
  {
    v8 = a3 | 0x18;
    if ( v14 == 24 )
      v8 = a3;
  }
  else if ( (v12 & 0x10) != 0 )
  {
    if ( v14 != 8 )
      v8 = a3 & 0xFFFFFFE7 | 8;
  }
  else if ( (a3 & 0x18) != 0 )
  {
    v8 = a3 & 0xFFFFFFE7;
  }
  if ( a4 <= 0xFFFFFFFFFLL && (*(_QWORD *)(48 * a4 - 0x57FFFFFFFD8LL) & 0x4000000000000LL) != 0 )
  {
    v15 = 48 * a4 - 0x58000000000LL;
    v57 = v15;
    if ( (MiFlags & 0x40000) != 0 && (v8 & 2) != 0 )
    {
      if ( v11 )
      {
        v43 = 48 * a4 - 0x58000000000LL;
        v44 = (volatile signed __int32 *)(v15 + 24);
        v45 = v11;
        do
        {
          v55 = 0;
          while ( _interlockedbittestandset64(v44, 0x3FuLL) )
          {
            do
              KeYieldProcessorEx(&v55);
            while ( *(__int64 *)v44 < 0 );
          }
          if ( !(unsigned int)MiGetPagePrivilege(v43, 1, 0LL) )
            MiMarkPfnVerified(v43, 7LL);
          _InterlockedAnd64((volatile signed __int64 *)v44, 0x7FFFFFFFFFFFFFFFuLL);
          v43 += 48LL;
          v44 += 12;
          --v45;
        }
        while ( v45 );
        v5 = a2;
        v10 = v64;
        v6 = a1;
        v57 = v43;
        v15 = v43;
        v13 = v61;
      }
      v15 += -48 * v11;
      v57 = v15;
    }
  }
  else
  {
    v15 = 0LL;
    v57 = 0LL;
  }
  if ( v10 <= 1 )
    v8 |= 0x4000000u;
  v16 = v8 & 0x1F;
  v17 = ((a4 & 0xFFFFFFFFFLL) << 12) | MmProtectToPteMask[v16] & 0xFFFF000000000E7FuLL | 0x21;
  if ( v5 < 0xFFFFF68000000000uLL || v5 > 0xFFFFF6FFFFFFFFFFuLL )
  {
LABEL_121:
    v17 |= 0x100uLL;
    goto LABEL_23;
  }
  if ( v5 >= 0xFFFFF6FB40000000uLL && v5 <= 0xFFFFF6FB7FFFFFFFuLL )
  {
    if ( v5 == 0xFFFFF6FB7DBEDF68uLL )
    {
      v17 = ((a4 & 0xFFFFFFFFFLL) << 12) | MmProtectToPteMask[v16] & 0xFFFF000000000E7FuLL | 0x8000000000000021uLL;
    }
    else if ( (v8 & 0x4000000) == 0 )
    {
      v17 = ((a4 & 0xFFFFFFFFFLL) << 12) & 0x7FFFFFFFFFFFFFFFLL | MmProtectToPteMask[v16] & 0x7FFF000000000E7FLL | 0x21;
    }
    v46 = MiUserPdeOrAbove(v5, 0LL, 0x7FFFFFFFFFFFFFFFLL, 0x8000000000000000uLL);
    v15 = v57;
    v6 = a1;
    if ( v46 )
      v17 |= 4uLL;
  }
  if ( v5 <= 0xFFFFF6BFFFFFFF78uLL )
    v17 |= 4uLL;
  if ( (v8 & 0x4000000) != 0 )
  {
    LeafVa = MiGetLeafVa(v13);
    v15 = v57;
    v18 = LeafVa;
  }
  else
  {
    v18 = v13;
  }
  if ( v18 < 0xFFFF800000000000uLL )
  {
    v19 = HIBYTE(word_140C4DE88);
    goto LABEL_22;
  }
  if ( (unsigned int)MiGetSystemRegionType(v18) != 1 && (v18 < 0xFFFFF68000000000uLL || v18 > 0xFFFFF6FFFFFFFFFFuLL) )
  {
    if ( v18 < qword_140C4F9B8 || (v19 = HIBYTE(word_140C4DE88), v18 > qword_140C4E1E8) )
      v19 = (unsigned __int8)word_140C4DE88;
    v6 = a1;
    v15 = v57;
LABEL_22:
    if ( !v19 )
      goto LABEL_23;
    goto LABEL_121;
  }
  v6 = a1;
  v15 = v57;
LABEL_23:
  if ( v8 < 0 && (v8 & 5) == 4 )
    v17 |= 0x42uLL;
  if ( (v8 & 0x40000000) != 0 )
    v17 &= ~4uLL;
  if ( (v8 & 0x20000000) != 0 )
    v17 ^= ((unsigned __int16)v17 ^ (unsigned __int16)((unsigned __int8)word_140C4DE88 << 8)) & 0x100;
  if ( (v8 & 0x8000000) != 0 )
    v17 &= ~0x100uLL;
  if ( (v8 & 0x4000000) != 0 )
    v17 |= 0x80uLL;
  v20 = v17 & 0xF0FFFFFFFFFFFFFFuLL | 0xA00000000000000LL;
  if ( v15 )
  {
    if ( (MiFlags & 0x2000000) != 0 && (v12 & 0x42) == 0x40 )
      v20 |= 0x40uLL;
  }
  else
  {
    v48 = v20 | 0x42;
    if ( (v8 & 4) == 0 )
      v48 = v20;
    v20 = v48;
  }
  v21 = v5;
  v22 = 0;
  v23 = (*(_DWORD *)(v6 + 48) & 0x300000) == 3145728;
  do
  {
    if ( v23 && (MI_READ_PTE_LOCK_FREE(v21) & 0x42) != 0 )
    {
      v37 = MiGetLeafVa(v21);
      MiCaptureWriteWatchDirtyBit((__int64)KeGetCurrentThread()->ApcState.Process, v37, (__int64 **)a1);
      v23 = 0;
    }
    v20 ^= (v20 ^ (a4 << 12)) & 0xFFFFFFFFF000LL;
    if ( !v22 )
    {
      if ( (MiFlags & 0x100) != 0 || (MiFlags & 0x200) != 0 )
      {
        v24 = *(_QWORD *)v21;
        if ( v21 >= 0xFFFFF6FB7DBED000uLL
          && v21 <= 0xFFFFF6FB7DBED7F8uLL
          && (MiFlags & 0xC00000) != 0
          && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
          && (v24 & 1) != 0
          && ((v24 & 0x20) == 0 || (v24 & 0x42) == 0) )
        {
          v49 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
          if ( v49 )
          {
            v50 = *((_QWORD *)&v49->Flink + ((v21 >> 3) & 0x1FF));
            v51 = v24 | 0x20;
            if ( (v50 & 0x20) == 0 )
              v51 = *(_QWORD *)v21;
            v24 = v51;
            if ( (v50 & 0x42) != 0 )
              v24 = v51 | 0x42;
          }
        }
        if ( (v24 & 0x40) != 0 && (v20 & 0x40) == 0 || (v24 & 2) != 0 && (v20 & 2) == 0 || v20 < 0 && v24 >= 0 )
          v22 = 1;
      }
      else
      {
        v22 = 1;
      }
    }
    ++a4;
    if ( v64 <= 1 )
    {
      result = (struct _KTHREAD *)MiRewritePteWithLockBit(
                                    &KeGetCurrentThread()->ApcState.Process[1].ActiveProcessorsPadding[6],
                                    v21,
                                    v20,
                                    0x7000000000000000LL);
    }
    else
    {
      v25 = *(_QWORD *)v21;
      if ( v21 >= 0xFFFFF6FB7DBED000uLL
        && v21 <= 0xFFFFF6FB7DBED7F8uLL
        && (MiFlags & 0xC00000) != 0
        && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
        && (v25 & 1) != 0
        && ((v25 & 0x20) == 0 || (v25 & 0x42) == 0) )
      {
        v52 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
        if ( v52 )
        {
          v53 = *((_QWORD *)&v52->Flink + ((v21 >> 3) & 0x1FF));
          v54 = v25 | 0x20;
          if ( (v53 & 0x20) == 0 )
            v54 = *(_QWORD *)v21;
          v25 = v54;
          if ( (v53 & 0x42) != 0 )
            v25 = v54 | 0x42;
        }
      }
      v26 = v20 ^ (v20 ^ v25) & 0xF00000000000000LL ^ (v20 ^ (v20 ^ v25) & 0xF00000000000000LL ^ v25) & 0x7000000000000000LL;
      result = (struct _KTHREAD *)MiPteInShadowRange(v21);
      if ( !(_DWORD)result )
        goto LABEL_48;
      if ( !(unsigned int)MiPteHasShadow(v29, v28, v30, v31) )
      {
        result = KeGetCurrentThread();
        if ( (HIDWORD(result->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 && (v26 & 1) != 0 )
        {
          result = (struct _KTHREAD *)0x8000000000000000LL;
          v26 |= 0x8000000000000000uLL;
        }
LABEL_48:
        *(_QWORD *)v21 = v26;
        goto LABEL_49;
      }
      if ( !HIBYTE(word_140C4DE88) && (v26 & 1) != 0 )
        v26 |= 0x8000000000000000uLL;
      *(_QWORD *)v21 = v26;
      result = (struct _KTHREAD *)MiWritePteShadow(v21, v26);
    }
LABEL_49:
    v21 += 8LL;
    --v59;
  }
  while ( v59 );
  v32 = v60;
  if ( !v22 )
    goto LABEL_51;
  if ( v65 )
  {
    result = (struct _KTHREAD *)MiInsertLargeTbFlushEntry(a5, v65, a2);
LABEL_51:
    v33 = v58;
  }
  else
  {
    v33 = v58;
    result = (struct _KTHREAD *)MiInsertTbFlushEntry(a5, v61, v58, 0LL);
  }
  if ( v33 == 1 && (v32 & 0x42) != 0 )
  {
    v34 = v57;
    if ( v57 )
    {
      if ( (*(_DWORD *)(a1 + 48) & 0x70) != 0x40
        || (result = (struct _KTHREAD *)MiRotatedToFrameBuffer(a2), (_DWORD)result) )
      {
        v35 = 0LL;
        v56 = 0;
        while ( _interlockedbittestandset64((volatile signed __int32 *)(v34 + 24), 0x3FuLL) )
        {
          do
            KeYieldProcessorEx(&v56);
          while ( *(__int64 *)(v34 + 24) < 0 );
        }
        v36 = *(_BYTE *)(v34 + 34);
        result = 0LL;
        if ( (v36 & 0x10) == 0 )
        {
          if ( (!_bittest64((const signed __int64 *)(v34 + 16), 0xAu) & (unsigned __int8)~(v36 >> 3)) != 0 )
          {
            result = (struct _KTHREAD *)MiCapturePageFileInfoInline(v34 + 16, 1LL);
            v36 = *(_BYTE *)(v34 + 34);
          }
          *(_BYTE *)(v34 + 34) = v36 | 0x10;
          if ( result )
            v35 = *(_QWORD *)(qword_140C4E4C8 + 8 * ((*(_QWORD *)(v34 + 40) >> 39) & 0x3FFLL));
        }
        _InterlockedAnd64((volatile signed __int64 *)(v34 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        if ( result )
          return (struct _KTHREAD *)MiReleasePageFileInfo(v35, result, 1LL);
      }
    }
  }
  return result;
}
