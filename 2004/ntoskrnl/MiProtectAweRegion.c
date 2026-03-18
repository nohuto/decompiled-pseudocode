/*
 * XREFs of MiProtectAweRegion @ 0x140547E94
 * Callers:
 *     MmProtectVirtualMemory @ 0x1405F7EB0 (MmProtectVirtualMemory.c)
 * Callees:
 *     MiMakeTransitionPte @ 0x140234290 (MiMakeTransitionPte.c)
 *     MiMakeValidPte @ 0x1402342E0 (MiMakeValidPte.c)
 *     MiGetLeafVa @ 0x1402374D0 (MiGetLeafVa.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140238530 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x1402386B0 (MiPteInShadowRange.c)
 *     MiFlushTbList @ 0x14023A3C0 (MiFlushTbList.c)
 *     MiCaptureWriteWatchDirtyBit @ 0x14024B47C (MiCaptureWriteWatchDirtyBit.c)
 *     MI_GET_GRAPHICS_PROTECTION_FROM_VAD @ 0x14024B630 (MI_GET_GRAPHICS_PROTECTION_FROM_VAD.c)
 *     MiLockLowestValidPageTable @ 0x140253FC0 (MiLockLowestValidPageTable.c)
 *     MiWriteValidPteNewProtection @ 0x140263340 (MiWriteValidPteNewProtection.c)
 *     MiUnlockPageTableInternal @ 0x140278B10 (MiUnlockPageTableInternal.c)
 *     MiUnlockWorkingSetShared @ 0x1402A1770 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x1402AC150 (MiLockWorkingSetShared.c)
 *     MiInsertTbFlushEntry @ 0x1402B0EF0 (MiInsertTbFlushEntry.c)
 *     MiWritePteShadow @ 0x14032ECC0 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x14032ED20 (MiPteHasShadow.c)
 *     MiInsertLargeTbFlushEntry @ 0x1403385B4 (MiInsertLargeTbFlushEntry.c)
 *     MiMakeTransitionPteValid @ 0x1403405A0 (MiMakeTransitionPteValid.c)
 *     MiRewritePteWithLockBit @ 0x1403B2B38 (MiRewritePteWithLockBit.c)
 *     __security_check_cookie @ 0x1403CCE60 (__security_check_cookie.c)
 *     memset @ 0x14040A280 (memset.c)
 *     MiGetAweNode @ 0x140546F10 (MiGetAweNode.c)
 *     MiGetAweViewPageSize @ 0x140547008 (MiGetAweViewPageSize.c)
 *     MiLockAweVadsShared @ 0x140547B68 (MiLockAweVadsShared.c)
 *     MiUnlockAweVadsShared @ 0x140548AFC (MiUnlockAweVadsShared.c)
 *     MiGetVadCacheAttribute @ 0x1405568E0 (MiGetVadCacheAttribute.c)
 */

__int64 __fastcall MiProtectAweRegion(unsigned __int64 a1, unsigned __int64 a2, int a3, int a4, int *a5)
{
  int v5; // r12d
  struct _KTHREAD *CurrentThread; // r14
  unsigned __int64 v10; // rsi
  unsigned __int64 v11; // r13
  __int64 v12; // r10
  _QWORD *AweNode; // r15
  __int64 v14; // rcx
  __int64 v15; // rbx
  int v16; // r12d
  int VadCacheAttribute; // r8d
  int v18; // r9d
  int v19; // eax
  __int64 AweViewPageSize; // rax
  int v21; // r8d
  __int64 v22; // r9
  unsigned __int64 v23; // r15
  __int64 v24; // rax
  int v25; // eax
  unsigned int v26; // ecx
  __int64 v27; // rbx
  unsigned __int64 v28; // r13
  unsigned __int64 v29; // rdi
  __int64 v30; // rdx
  unsigned __int8 v31; // r14
  unsigned __int64 valid; // r14
  int v33; // r9d
  int v34; // eax
  int v35; // eax
  unsigned int v36; // r9d
  int v38; // r14d
  __int64 v39; // rax
  unsigned __int64 v40; // rbx
  int v41; // ecx
  int v42; // edx
  __int64 v43; // r11
  unsigned __int64 LeafVa; // r14
  unsigned __int64 v45; // r15
  __int64 v46; // r12
  __int64 v47; // rsi
  __int64 v48; // r13
  __int64 v49; // rdi
  unsigned __int64 v50; // rdi
  __int64 v51; // r9
  struct _LIST_ENTRY *Flink; // rdx
  __int64 v53; // rax
  __int64 v54; // rbx
  __int64 TransitionPte; // rax
  __int64 v56; // rbx
  int v57; // r14d
  __int64 v58; // rdi
  __int64 v59; // r8
  unsigned __int64 ValidPte; // rax
  __int64 v61; // r8
  int v62; // eax
  __int64 v63; // rdi
  int v64; // ebx
  __int64 v65; // r8
  BOOL v66; // r14d
  __int64 v67; // rdx
  unsigned __int64 TransitionPteValid; // rax
  __int64 v69; // r8
  int v70; // r9d
  unsigned __int8 v71; // r11
  bool v72; // zf
  unsigned __int8 v73; // [rsp+20h] [rbp-E0h]
  int v74; // [rsp+24h] [rbp-DCh]
  __int64 v75; // [rsp+28h] [rbp-D8h] BYREF
  int v76; // [rsp+30h] [rbp-D0h]
  int v77; // [rsp+34h] [rbp-CCh]
  unsigned __int64 *v78; // [rsp+38h] [rbp-C8h]
  unsigned int v79; // [rsp+40h] [rbp-C0h]
  int v80; // [rsp+44h] [rbp-BCh]
  int v81; // [rsp+48h] [rbp-B8h]
  unsigned __int64 v82; // [rsp+50h] [rbp-B0h]
  unsigned __int64 v83; // [rsp+58h] [rbp-A8h]
  unsigned __int64 v84; // [rsp+60h] [rbp-A0h]
  unsigned int v85; // [rsp+68h] [rbp-98h]
  __int64 v86; // [rsp+70h] [rbp-90h]
  unsigned __int64 v87; // [rsp+78h] [rbp-88h]
  unsigned __int64 v88; // [rsp+80h] [rbp-80h]
  unsigned __int64 v89; // [rsp+88h] [rbp-78h] BYREF
  __int64 v90; // [rsp+90h] [rbp-70h]
  _KPROCESS *Process; // [rsp+98h] [rbp-68h]
  unsigned __int64 v92; // [rsp+A0h] [rbp-60h]
  unsigned __int64 v93; // [rsp+A8h] [rbp-58h]
  int *v94; // [rsp+B0h] [rbp-50h]
  _QWORD v95[24]; // [rsp+C0h] [rbp-40h] BYREF

  v5 = a3;
  v80 = a3;
  v94 = a5;
  v89 = 0LL;
  memset(v95, 0, 0xB8uLL);
  CurrentThread = KeGetCurrentThread();
  v74 = 1;
  v84 = 0LL;
  Process = CurrentThread->ApcState.Process;
  v78 = &Process[1].ActiveProcessorsPadding[6];
  v10 = ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v83 = v10;
  v11 = ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  LODWORD(v95[0]) = 1;
  v82 = v11;
  WORD2(v95[0]) = 0;
  v95[2] = 0LL;
  LODWORD(v95[1]) = 20;
  v95[3] = 0LL;
  MiLockAweVadsShared((__int64)CurrentThread);
  AweNode = MiGetAweNode(a1);
  v14 = AweNode[3];
  v15 = AweNode[4];
  v86 = v14;
  if ( v5 != 24 )
  {
    v16 = v5 & 7;
    if ( v16 != 1 && v16 != 4 )
      goto LABEL_46;
    VadCacheAttribute = MiGetVadCacheAttribute();
    if ( VadCacheAttribute )
    {
      v19 = 0;
      if ( VadCacheAttribute == 2 )
        v19 = v18;
    }
    else
    {
      v19 = 8;
    }
    v14 = v86;
    v5 = v19 | v16;
    v80 = v5;
  }
  if ( (*(_DWORD *)v15 & 1) != 0 )
  {
    v79 = 4;
    goto LABEL_11;
  }
  v79 = (*(_DWORD *)(v14 + 48) >> 7) & 0x1F;
  if ( (v79 & 7) == 1 && (v5 & 7) != 1 )
    goto LABEL_46;
  if ( !a4 )
    goto LABEL_11;
  v33 = MI_GET_GRAPHICS_PROTECTION_FROM_VAD(v14);
  v34 = a4 & 0x20000;
  if ( (v33 & 0x20000) != 0 )
  {
    if ( !v34 )
      goto LABEL_46;
  }
  else if ( v34 )
  {
    goto LABEL_46;
  }
  v35 = a4 & 0x40000;
  if ( (v33 & 0x40000) != 0 )
  {
    if ( !v35 )
      goto LABEL_46;
    goto LABEL_42;
  }
  if ( v35 )
  {
LABEL_46:
    MiUnlockAweVadsShared(CurrentThread, v12);
    return 3221225496LL;
  }
LABEL_42:
  v36 = v33 & 0xFFF9FFFF;
  if ( (v36 & 0x1C000) == 0 && (a4 & 0x1C000) != 0
    || (v36 & 0x12000) == 0 && (a4 & 0x12000) != 0
    || v36 == 2048 && (a4 & 0xFFF9F7FF) != 0 )
  {
    goto LABEL_46;
  }
LABEL_11:
  MiUnlockAweVadsShared(CurrentThread, v12);
  v88 = *(_QWORD *)(v15 + 8);
  v77 = *(_DWORD *)(v86 + 48) & 0x300000;
  v76 = 0;
  AweViewPageSize = MiGetAweViewPageSize((__int64)AweNode);
  v23 = v22;
  if ( AweViewPageSize )
    v23 = AweViewPageSize;
  v24 = v22;
  v93 = v23;
  if ( v23 == 512 )
    v24 = 1LL;
  v90 = v24;
  v25 = v21 | 0x4000000;
  if ( v23 != 512 )
    v25 = v21;
  v81 = v25;
  v26 = v23 == 512;
  v85 = v26;
  if ( v22 != 1 && (((v10 >> 3) & 0x1FF) % v23 || (((__int64)(v11 - v10) >> 3) + 1) % v23) )
    return 3221225496LL;
  if ( v23 == 512 )
  {
    do
    {
      v10 = ((v10 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      v11 = ((v11 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      --v26;
    }
    while ( v26 );
    v82 = v11;
    v83 = v10;
  }
  v27 = (__int64)v78;
  v28 = 0LL;
  v87 = v10;
  v29 = v82;
  v31 = MiLockWorkingSetShared((__int64)v78);
  v73 = v31;
  if ( v10 <= v82 )
  {
    valid = 0LL;
    while ( !valid || (v10 & 0xFFF) == 0 )
    {
      MiFlushTbList((__int64)v95, (_KPROCESS *)v30);
      if ( valid )
      {
        MiUnlockPageTableInternal(v27, valid);
        MiUnlockWorkingSetShared(v27, v73);
        MiLockWorkingSetShared(v27);
        v28 = 0LL;
      }
      valid = MiLockLowestValidPageTable(v27, v10, &v89);
      v84 = valid;
      if ( valid == ((v10 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL )
        break;
      v10 = v10 & 0xFFFFFFFFFFFFF000uLL | 0xFF8;
LABEL_133:
      v10 += 8LL;
      v83 = v10;
      if ( v10 > v29 )
      {
        v31 = v73;
        goto LABEL_135;
      }
    }
    if ( v77 == 3145728 && (v90 == 1 || !(((v10 >> 3) & 0x1FF) % v88)) )
    {
      v38 = 0;
      v76 = 0;
    }
    else
    {
      v38 = v76;
    }
    v39 = MI_READ_PTE_LOCK_FREE(v10);
    v75 = v39;
    v40 = v39;
    if ( !v39 )
      goto LABEL_131;
    if ( (v39 & 1) != 0 )
    {
      if ( !v28 )
        v28 = v10;
      v92 = v28;
      if ( v10 != v87 )
        goto LABEL_64;
      v41 = (v39 & 0x800) != 0 ? 4 : 2;
      if ( v79 >> 3 == 1 )
      {
        v42 = v41 | 0x200;
      }
      else
      {
        v74 = (v39 & 0x800) != 0 ? 4 : 2;
        if ( v79 >> 3 != 3 )
          goto LABEL_64;
        v74 = (v39 & 0x800) != 0 ? 4 : 2;
        if ( (v79 & 7) == 0 )
          goto LABEL_64;
        v42 = v41 | 0x400;
      }
      v74 = v42;
LABEL_64:
      if ( v77 == 3145728 && !v38 && (v39 & 0x42) != 0 )
      {
        LeafVa = MiGetLeafVa(v10);
        v45 = v23 / v88;
        if ( v45 )
        {
          v46 = v86;
          v47 = (__int64)Process;
          v48 = v43;
          v49 = v88 << 12;
          do
          {
            MiCaptureWriteWatchDirtyBit(v47, LeafVa, v46);
            LeafVa += v49;
            v45 -= v48;
          }
          while ( v45 );
          v10 = v83;
          LODWORD(v43) = 1;
          v5 = v80;
          v28 = v92;
        }
        v23 = v93;
        v76 = v43;
      }
      v50 = v40;
      if ( MiPteInShadowRange((unsigned __int64)&v75)
        && (MiFlags & 0xC00000) != 0
        && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
        && ((v40 & 0x20) == 0 || (v40 & 0x42) == 0) )
      {
        Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
        if ( Flink )
        {
          v40 |= 0x20uLL;
          v53 = *((_QWORD *)&Flink->Flink + (((unsigned __int64)&v75 >> 3) & 0x1FF));
          if ( (v53 & 0x20) == 0 )
            v40 = v50;
          if ( (v53 & 0x42) != 0 )
            v40 |= 0x42uLL;
        }
        else
        {
          v40 = v75;
        }
      }
      v54 = (v40 >> 12) & 0xFFFFFFFFFLL;
      if ( v5 == 24 )
      {
        TransitionPte = MiMakeTransitionPte(v54, 24);
        v75 = TransitionPte;
        v56 = TransitionPte;
        if ( v23 != 512 )
        {
          v57 = 0;
          v58 = TransitionPte;
          if ( MiPteInShadowRange(v10) )
          {
            if ( (unsigned int)MiPteHasShadow() )
            {
              v57 = 1;
              if ( !HIBYTE(word_140C4DE08) && (v56 & 1) != 0 )
                v58 |= 0x8000000000000000uLL;
            }
            else
            {
              if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
                && (v56 & 1) != 0 )
              {
                v58 |= 0x8000000000000000uLL;
              }
              v56 = v75;
            }
          }
          *(_QWORD *)v10 = v58;
          if ( v57 )
            MiWritePteShadow(v10, v58, v59);
        }
      }
      else
      {
        ValidPte = MiMakeValidPte(v10, v54, v5 | (unsigned int)v81, v51);
        v56 = ValidPte;
        if ( v23 != 512 )
          MiWriteValidPteNewProtection(v10, ValidPte);
      }
      if ( (v5 & 4) != 0 && v77 != 3145728 )
        v56 |= 0x42uLL;
      if ( v23 == 512 )
      {
        v61 = v56;
        v27 = (__int64)v78;
        MiRewritePteWithLockBit((__int64)v78, (volatile __int64 *)v10, v61);
        MiInsertLargeTbFlushEntry((__int64)v95, v85, v10);
        v29 = v82;
LABEL_132:
        valid = v84;
        goto LABEL_133;
      }
      MiInsertTbFlushEntry((__int64)v95, (__int64)(v10 << 25) >> 16, 1LL, 0);
      goto LABEL_130;
    }
    v62 = v74;
    if ( v10 == v87 )
      v62 = 1;
    v74 = v62;
    if ( v5 == 24 )
      goto LABEL_131;
    v63 = v40 ^ ((unsigned __int16)v40 ^ (unsigned __int16)(32 * v5)) & 0x3E0;
    v64 = 0;
    v75 = v63;
    v66 = MiPteInShadowRange(v10);
    v67 = v63;
    if ( v66 )
    {
      if ( (unsigned int)MiPteHasShadow() )
      {
        v64 = 1;
        if ( !HIBYTE(word_140C4DE08) && (v63 & 1) != 0 )
LABEL_111:
          v67 |= 0x8000000000000000uLL;
      }
      else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
             && (v63 & 1) != 0 )
      {
        goto LABEL_111;
      }
    }
    *(_QWORD *)v10 = v67;
    if ( v64 )
      MiWritePteShadow(v10, v67, v65);
    TransitionPteValid = MiMakeTransitionPteValid(v10);
    v69 = TransitionPteValid;
    v75 = TransitionPteValid;
    if ( (v81 & 0x4000000) != 0 )
    {
      v69 = TransitionPteValid | 0x80;
      v75 = TransitionPteValid | 0x80;
    }
    v70 = 0;
    v30 = v69;
    if ( !v66 )
      goto LABEL_126;
    if ( (unsigned int)MiPteHasShadow() )
    {
      v71 = ++v70;
      if ( !HIBYTE(word_140C4DE08) )
      {
        v72 = ((unsigned __int8)v69 & v71) == 0;
        goto LABEL_124;
      }
    }
    else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
    {
      v72 = (v69 & 1) == 0;
LABEL_124:
      if ( !v72 )
        v30 |= 0x8000000000000000uLL;
    }
LABEL_126:
    *(_QWORD *)v10 = v30;
    if ( v70 )
      MiWritePteShadow(v10, v30, v69);
    if ( !v28 )
      v28 = v10;
LABEL_130:
    v29 = v82;
LABEL_131:
    v27 = (__int64)v78;
    goto LABEL_132;
  }
LABEL_135:
  MiFlushTbList((__int64)v95, (_KPROCESS *)v30);
  if ( v84 )
    MiUnlockPageTableInternal(v27, v84);
  MiUnlockWorkingSetShared(v27, v31);
  *v94 = v74;
  return 0LL;
}
