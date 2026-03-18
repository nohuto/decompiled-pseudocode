/*
 * XREFs of MiProtectAweRegion @ 0x140547844
 * Callers:
 *     MmProtectVirtualMemory @ 0x14062CEF0 (MmProtectVirtualMemory.c)
 * Callees:
 *     MiUnlockWorkingSetShared @ 0x14020EC60 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x140219640 (MiLockWorkingSetShared.c)
 *     MiInsertTbFlushEntry @ 0x14021E270 (MiInsertTbFlushEntry.c)
 *     MiMakeTransitionPte @ 0x14028D2E0 (MiMakeTransitionPte.c)
 *     MiMakeValidPte @ 0x14028D330 (MiMakeValidPte.c)
 *     MiGetLeafVa @ 0x140290520 (MiGetLeafVa.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140291580 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x140291700 (MiPteInShadowRange.c)
 *     MiFlushTbList @ 0x140293410 (MiFlushTbList.c)
 *     MiCaptureWriteWatchDirtyBit @ 0x1402A44AC (MiCaptureWriteWatchDirtyBit.c)
 *     MI_GET_GRAPHICS_PROTECTION_FROM_VAD @ 0x1402A4660 (MI_GET_GRAPHICS_PROTECTION_FROM_VAD.c)
 *     MiLockLowestValidPageTable @ 0x1402ACFF0 (MiLockLowestValidPageTable.c)
 *     MiWriteValidPteNewProtection @ 0x1402BC370 (MiWriteValidPteNewProtection.c)
 *     MiUnlockPageTableInternal @ 0x1402DB860 (MiUnlockPageTableInternal.c)
 *     MiWritePteShadow @ 0x1402F2F20 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x1402F2F80 (MiPteHasShadow.c)
 *     MiInsertLargeTbFlushEntry @ 0x1402FB584 (MiInsertLargeTbFlushEntry.c)
 *     MiMakeTransitionPteValid @ 0x1403037D0 (MiMakeTransitionPteValid.c)
 *     MiRewritePteWithLockBit @ 0x1403ACEB8 (MiRewritePteWithLockBit.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     memset @ 0x140408F80 (memset.c)
 *     MiGetAweNode @ 0x1405468C0 (MiGetAweNode.c)
 *     MiGetAweViewPageSize @ 0x1405469B8 (MiGetAweViewPageSize.c)
 *     MiLockAweVadsShared @ 0x140547518 (MiLockAweVadsShared.c)
 *     MiUnlockAweVadsShared @ 0x1405484AC (MiUnlockAweVadsShared.c)
 *     MiGetVadCacheAttribute @ 0x140556290 (MiGetVadCacheAttribute.c)
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
  __int64 v33; // r8
  int v34; // r9d
  int v35; // eax
  int v36; // eax
  unsigned int v37; // r9d
  int v39; // r14d
  __int64 v40; // rax
  unsigned __int64 v41; // rbx
  int v42; // ecx
  int v43; // edx
  __int64 v44; // r11
  unsigned __int64 LeafVa; // r14
  unsigned __int64 v46; // r15
  __int64 v47; // r12
  __int64 v48; // rsi
  __int64 v49; // r13
  __int64 v50; // rdi
  unsigned __int64 v51; // rdi
  __int64 v52; // r9
  struct _LIST_ENTRY *Flink; // rdx
  __int64 v54; // rax
  __int64 v55; // rbx
  __int64 TransitionPte; // rax
  __int64 v57; // rbx
  int v58; // r14d
  __int64 v59; // rdi
  unsigned __int64 ValidPte; // rax
  __int64 v61; // r8
  int v62; // eax
  __int64 v63; // rdi
  int v64; // ebx
  BOOL v65; // r14d
  __int64 v66; // rdx
  unsigned __int64 TransitionPteValid; // rax
  __int64 v68; // r8
  int v69; // r9d
  unsigned __int8 v70; // r8
  unsigned __int8 v71; // r11
  bool v72; // zf
  __int64 v73; // r8
  unsigned __int8 v74; // [rsp+20h] [rbp-E0h]
  int v75; // [rsp+24h] [rbp-DCh]
  __int64 v76; // [rsp+28h] [rbp-D8h] BYREF
  int v77; // [rsp+30h] [rbp-D0h]
  int v78; // [rsp+34h] [rbp-CCh]
  unsigned __int64 *v79; // [rsp+38h] [rbp-C8h]
  unsigned int v80; // [rsp+40h] [rbp-C0h]
  int v81; // [rsp+44h] [rbp-BCh]
  int v82; // [rsp+48h] [rbp-B8h]
  unsigned __int64 v83; // [rsp+50h] [rbp-B0h]
  unsigned __int64 v84; // [rsp+58h] [rbp-A8h]
  unsigned __int64 v85; // [rsp+60h] [rbp-A0h]
  unsigned int v86; // [rsp+68h] [rbp-98h]
  __int64 v87; // [rsp+70h] [rbp-90h]
  unsigned __int64 v88; // [rsp+78h] [rbp-88h]
  unsigned __int64 v89; // [rsp+80h] [rbp-80h]
  unsigned __int64 v90; // [rsp+88h] [rbp-78h] BYREF
  __int64 v91; // [rsp+90h] [rbp-70h]
  _KPROCESS *Process; // [rsp+98h] [rbp-68h]
  unsigned __int64 v93; // [rsp+A0h] [rbp-60h]
  unsigned __int64 v94; // [rsp+A8h] [rbp-58h]
  int *v95; // [rsp+B0h] [rbp-50h]
  _QWORD v96[24]; // [rsp+C0h] [rbp-40h] BYREF

  v5 = a3;
  v81 = a3;
  v95 = a5;
  v90 = 0LL;
  memset(v96, 0, 0xB8uLL);
  CurrentThread = KeGetCurrentThread();
  v75 = 1;
  v85 = 0LL;
  Process = CurrentThread->ApcState.Process;
  v79 = &Process[1].ActiveProcessorsPadding[6];
  v10 = ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v84 = v10;
  v11 = ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  LODWORD(v96[0]) = 1;
  v83 = v11;
  WORD2(v96[0]) = 0;
  v96[2] = 0LL;
  LODWORD(v96[1]) = 20;
  v96[3] = 0LL;
  MiLockAweVadsShared((__int64)CurrentThread);
  AweNode = MiGetAweNode(a1);
  v14 = AweNode[3];
  v15 = AweNode[4];
  v87 = v14;
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
    v14 = v87;
    v5 = v19 | v16;
    v81 = v5;
  }
  if ( (*(_DWORD *)v15 & 1) != 0 )
  {
    v80 = 4;
    goto LABEL_11;
  }
  v80 = (*(_DWORD *)(v14 + 48) >> 7) & 0x1F;
  if ( (v80 & 7) == 1 && (v5 & 7) != 1 )
    goto LABEL_46;
  if ( !a4 )
    goto LABEL_11;
  v34 = MI_GET_GRAPHICS_PROTECTION_FROM_VAD(v14);
  v35 = a4 & 0x20000;
  if ( (v34 & 0x20000) != 0 )
  {
    if ( !v35 )
      goto LABEL_46;
  }
  else if ( v35 )
  {
    goto LABEL_46;
  }
  v36 = a4 & 0x40000;
  if ( (v34 & 0x40000) != 0 )
  {
    if ( !v36 )
      goto LABEL_46;
    goto LABEL_42;
  }
  if ( v36 )
  {
LABEL_46:
    MiUnlockAweVadsShared(CurrentThread, v12);
    return 3221225496LL;
  }
LABEL_42:
  v37 = v34 & 0xFFF9FFFF;
  if ( (v37 & 0x1C000) == 0 && (a4 & 0x1C000) != 0
    || (v37 & 0x12000) == 0 && (a4 & 0x12000) != 0
    || v37 == 2048 && (a4 & 0xFFF9F7FF) != 0 )
  {
    goto LABEL_46;
  }
LABEL_11:
  MiUnlockAweVadsShared(CurrentThread, v12);
  v89 = *(_QWORD *)(v15 + 8);
  v78 = *(_DWORD *)(v87 + 48) & 0x300000;
  v77 = 0;
  AweViewPageSize = MiGetAweViewPageSize((__int64)AweNode);
  v23 = v22;
  if ( AweViewPageSize )
    v23 = AweViewPageSize;
  v24 = v22;
  v94 = v23;
  if ( v23 == 512 )
    v24 = 1LL;
  v91 = v24;
  v25 = v21 | 0x4000000;
  if ( v23 != 512 )
    v25 = v21;
  v82 = v25;
  v26 = v23 == 512;
  v86 = v26;
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
    v83 = v11;
    v84 = v10;
  }
  v27 = (__int64)v79;
  v28 = 0LL;
  v88 = v10;
  v29 = v83;
  v31 = MiLockWorkingSetShared((__int64)v79);
  v74 = v31;
  if ( v10 <= v83 )
  {
    valid = 0LL;
    while ( !valid || (v10 & 0xFFF) == 0 )
    {
      MiFlushTbList((__int64)v96, (_KPROCESS *)v30);
      if ( valid )
      {
        MiUnlockPageTableInternal(v27, valid, v33);
        MiUnlockWorkingSetShared(v27, v74);
        MiLockWorkingSetShared(v27);
        v28 = 0LL;
      }
      valid = MiLockLowestValidPageTable(v27, v10, &v90);
      v85 = valid;
      if ( valid == ((v10 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL )
        break;
      v10 = v10 & 0xFFFFFFFFFFFFF000uLL | 0xFF8;
LABEL_133:
      v10 += 8LL;
      v84 = v10;
      if ( v10 > v29 )
      {
        v31 = v74;
        goto LABEL_135;
      }
    }
    if ( v78 == 3145728 && (v91 == 1 || !(((v10 >> 3) & 0x1FF) % v89)) )
    {
      v39 = 0;
      v77 = 0;
    }
    else
    {
      v39 = v77;
    }
    v40 = MI_READ_PTE_LOCK_FREE(v10);
    v76 = v40;
    v41 = v40;
    if ( !v40 )
      goto LABEL_131;
    if ( (v40 & 1) != 0 )
    {
      if ( !v28 )
        v28 = v10;
      v93 = v28;
      if ( v10 != v88 )
        goto LABEL_64;
      v42 = (v40 & 0x800) != 0 ? 4 : 2;
      if ( v80 >> 3 == 1 )
      {
        v43 = v42 | 0x200;
      }
      else
      {
        v75 = (v40 & 0x800) != 0 ? 4 : 2;
        if ( v80 >> 3 != 3 )
          goto LABEL_64;
        v75 = (v40 & 0x800) != 0 ? 4 : 2;
        if ( (v80 & 7) == 0 )
          goto LABEL_64;
        v43 = v42 | 0x400;
      }
      v75 = v43;
LABEL_64:
      if ( v78 == 3145728 && !v39 && (v40 & 0x42) != 0 )
      {
        LeafVa = MiGetLeafVa(v10);
        v46 = v23 / v89;
        if ( v46 )
        {
          v47 = v87;
          v48 = (__int64)Process;
          v49 = v44;
          v50 = v89 << 12;
          do
          {
            MiCaptureWriteWatchDirtyBit(v48, LeafVa, v47);
            LeafVa += v50;
            v46 -= v49;
          }
          while ( v46 );
          v10 = v84;
          LODWORD(v44) = 1;
          v5 = v81;
          v28 = v93;
        }
        v23 = v94;
        v77 = v44;
      }
      v51 = v41;
      if ( MiPteInShadowRange((unsigned __int64)&v76)
        && (MiFlags & 0xC00000) != 0
        && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
        && ((v41 & 0x20) == 0 || (v41 & 0x42) == 0) )
      {
        Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
        if ( Flink )
        {
          v41 |= 0x20uLL;
          v54 = *((_QWORD *)&Flink->Flink + (((unsigned __int64)&v76 >> 3) & 0x1FF));
          if ( (v54 & 0x20) == 0 )
            v41 = v51;
          if ( (v54 & 0x42) != 0 )
            v41 |= 0x42uLL;
        }
        else
        {
          v41 = v76;
        }
      }
      v55 = (v41 >> 12) & 0xFFFFFFFFFLL;
      if ( v5 == 24 )
      {
        TransitionPte = MiMakeTransitionPte(v55, 24);
        v76 = TransitionPte;
        v57 = TransitionPte;
        if ( v23 != 512 )
        {
          v58 = 0;
          v59 = TransitionPte;
          if ( MiPteInShadowRange(v10) )
          {
            if ( (unsigned int)MiPteHasShadow() )
            {
              v58 = 1;
              if ( !HIBYTE(word_140C4DF48) && (v57 & 1) != 0 )
                v59 |= 0x8000000000000000uLL;
            }
            else
            {
              if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
                && (v57 & 1) != 0 )
              {
                v59 |= 0x8000000000000000uLL;
              }
              v57 = v76;
            }
          }
          *(_QWORD *)v10 = v59;
          if ( v58 )
            MiWritePteShadow(v10, v59);
        }
      }
      else
      {
        ValidPte = MiMakeValidPte(v10, v55, v5 | (unsigned int)v82, v52);
        v57 = ValidPte;
        if ( v23 != 512 )
          MiWriteValidPteNewProtection(v10, ValidPte);
      }
      if ( (v5 & 4) != 0 && v78 != 3145728 )
        v57 |= 0x42uLL;
      if ( v23 == 512 )
      {
        v61 = v57;
        v27 = (__int64)v79;
        MiRewritePteWithLockBit((__int64)v79, (volatile __int64 *)v10, v61);
        MiInsertLargeTbFlushEntry((__int64)v96, v86, v10);
        v29 = v83;
LABEL_132:
        valid = v85;
        goto LABEL_133;
      }
      MiInsertTbFlushEntry((__int64)v96, (__int64)(v10 << 25) >> 16, 1LL, 0);
      goto LABEL_130;
    }
    v62 = v75;
    if ( v10 == v88 )
      v62 = 1;
    v75 = v62;
    if ( v5 == 24 )
      goto LABEL_131;
    v63 = v41 ^ ((unsigned __int16)v41 ^ (unsigned __int16)(32 * v5)) & 0x3E0;
    v64 = 0;
    v76 = v63;
    v65 = MiPteInShadowRange(v10);
    v66 = v63;
    if ( v65 )
    {
      if ( (unsigned int)MiPteHasShadow() )
      {
        v64 = 1;
        if ( !HIBYTE(word_140C4DF48) && (v63 & 1) != 0 )
LABEL_111:
          v66 |= 0x8000000000000000uLL;
      }
      else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
             && (v63 & 1) != 0 )
      {
        goto LABEL_111;
      }
    }
    *(_QWORD *)v10 = v66;
    if ( v64 )
      MiWritePteShadow(v10, v66);
    TransitionPteValid = MiMakeTransitionPteValid(v10);
    v68 = TransitionPteValid;
    v76 = TransitionPteValid;
    if ( (v82 & 0x4000000) != 0 )
    {
      v68 = TransitionPteValid | 0x80;
      v76 = TransitionPteValid | 0x80;
    }
    v69 = 0;
    v30 = v68;
    if ( !v65 )
      goto LABEL_126;
    if ( (unsigned int)MiPteHasShadow() )
    {
      v71 = ++v69;
      if ( !HIBYTE(word_140C4DF48) )
      {
        v72 = (v70 & v71) == 0;
        goto LABEL_124;
      }
    }
    else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
    {
      v72 = (v70 & 1) == 0;
LABEL_124:
      if ( !v72 )
        v30 |= 0x8000000000000000uLL;
    }
LABEL_126:
    *(_QWORD *)v10 = v30;
    if ( v69 )
      MiWritePteShadow(v10, v30);
    if ( !v28 )
      v28 = v10;
LABEL_130:
    v29 = v83;
LABEL_131:
    v27 = (__int64)v79;
    goto LABEL_132;
  }
LABEL_135:
  MiFlushTbList((__int64)v96, (_KPROCESS *)v30);
  if ( v85 )
    MiUnlockPageTableInternal(v27, v85, v73);
  MiUnlockWorkingSetShared(v27, v31);
  *v95 = v75;
  return 0LL;
}
