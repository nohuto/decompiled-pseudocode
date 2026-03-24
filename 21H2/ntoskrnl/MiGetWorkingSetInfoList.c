/*
 * XREFs of MiGetWorkingSetInfoList @ 0x14026E89C
 * Callers:
 *     MmQueryVirtualMemory @ 0x14061E930 (MmQueryVirtualMemory.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x140207000 (KiUnstackDetachProcess.c)
 *     MiProbeAndLockPages @ 0x14020A860 (MiProbeAndLockPages.c)
 *     MiUnlockWorkingSetShared @ 0x14020F790 (MiUnlockWorkingSetShared.c)
 *     MiGetPfnPriority @ 0x1402185D0 (MiGetPfnPriority.c)
 *     MiLockWorkingSetShared @ 0x140219CB0 (MiLockWorkingSetShared.c)
 *     MiObtainReferencedVadEx @ 0x14021B2A0 (MiObtainReferencedVadEx.c)
 *     MmMapLockedPagesSpecifyCache @ 0x140226CC0 (MmMapLockedPagesSpecifyCache.c)
 *     MiInvalidPteConforms @ 0x14023B540 (MiInvalidPteConforms.c)
 *     MmUnlockPages @ 0x140244A70 (MmUnlockPages.c)
 *     MiAllocatePool @ 0x14025AD70 (MiAllocatePool.c)
 *     MiUnlockAndDereferenceVadShared @ 0x14025B250 (MiUnlockAndDereferenceVadShared.c)
 *     KiStackAttachProcess @ 0x14025C2E0 (KiStackAttachProcess.c)
 *     MiLockLeafPage @ 0x140269CD0 (MiLockLeafPage.c)
 *     MiGetPfnProtection @ 0x140270C88 (MiGetPfnProtection.c)
 *     MiGetWsleContents @ 0x140270D40 (MiGetWsleContents.c)
 *     MiGetPagingFileOffset @ 0x1402712A0 (MiGetPagingFileOffset.c)
 *     MiUnlockPageTableInternal @ 0x1402855F0 (MiUnlockPageTableInternal.c)
 *     MiIsPrototypePteVadLookup @ 0x14028D4D0 (MiIsPrototypePteVadLookup.c)
 *     KeShouldYieldProcessor @ 0x140293FD0 (KeShouldYieldProcessor.c)
 *     MiRotatedToFrameBuffer @ 0x1402B0538 (MiRotatedToFrameBuffer.c)
 *     MiLockProtoPage @ 0x1402C4364 (MiLockProtoPage.c)
 *     MiQueryPfn @ 0x1402C96A8 (MiQueryPfn.c)
 *     MiIsPageOnBadList @ 0x14030356C (MiIsPageOnBadList.c)
 *     MiLockLowestValidPageTable @ 0x1403055C0 (MiLockLowestValidPageTable.c)
 *     MiWorkingSetIsContended @ 0x14030B7D0 (MiWorkingSetIsContended.c)
 *     MiSearchNumaNodeTable @ 0x14032B790 (MiSearchNumaNodeTable.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14032DEC0 (MI_READ_PTE_LOCK_FREE.c)
 *     MiGetProtoPteAddress @ 0x140330B40 (MiGetProtoPteAddress.c)
 *     MiLockTransitionLeafPage @ 0x140364704 (MiLockTransitionLeafPage.c)
 *     __security_check_cookie @ 0x1403D0460 (__security_check_cookie.c)
 *     MiGetProtectionFromPte @ 0x1403F4550 (MiGetProtectionFromPte.c)
 *     MI_PFN_IS_PROTO @ 0x1403F48C8 (MI_PFN_IS_PROTO.c)
 *     memmove @ 0x140413F40 (memmove.c)
 *     MiWorkingSetInfoCheckPageTable @ 0x1405477F0 (MiWorkingSetInfoCheckPageTable.c)
 *     MiGetValidAweProtection @ 0x14054C628 (MiGetValidAweProtection.c)
 *     ExFreePoolWithTag @ 0x1409B4010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiGetWorkingSetInfoList(ULONG_PTR a1, int a2, unsigned __int64 a3, unsigned __int64 a4)
{
  int v6; // edi
  unsigned __int64 v8; // rcx
  struct _KTHREAD *CurrentThread; // rsi
  struct _MDL *Pool; // rax
  struct _MDL *v11; // r15
  char PreviousMode; // dl
  unsigned __int64 *MappedSystemVa; // r12
  ULONG_PTR v14; // r9
  volatile signed __int32 *v15; // r15
  __int64 v16; // r8
  unsigned __int8 v17; // dl
  __int64 v18; // rbx
  __int64 v19; // r10
  int v20; // ecx
  __int64 v21; // rsi
  unsigned __int64 v22; // rax
  unsigned __int64 v23; // r9
  unsigned int v24; // ebx
  unsigned __int64 v25; // r9
  unsigned int v26; // ecx
  __int64 v27; // rdx
  unsigned int v28; // eax
  ULONG_PTR v29; // r13
  __int64 v30; // r15
  unsigned __int64 v31; // r12
  unsigned __int64 v32; // rbx
  __int64 v33; // rax
  __int64 v34; // r8
  __int64 v35; // r9
  ULONG_PTR v36; // r15
  __int64 v37; // rbx
  int v38; // eax
  int i; // r8d
  __int64 v40; // rdx
  unsigned __int64 j; // rcx
  __int64 v42; // rax
  __int64 v43; // r11
  __int64 v44; // r11
  ULONG_PTR v45; // rcx
  __int64 ProtoPteAddress; // rdx
  __int64 v47; // rbx
  __int64 v48; // r15
  __int64 v49; // rax
  __int64 v50; // rbx
  int PagingFileOffset; // eax
  int v52; // r13d
  unsigned __int64 v53; // rax
  __int64 v54; // rbx
  __int64 v55; // r12
  __int16 v56; // r8
  int v57; // r8d
  int v58; // eax
  char PfnPriority; // si
  __int64 v60; // rsi
  __int64 v61; // rax
  __int64 v62; // r13
  __int64 v63; // rdx
  unsigned __int64 v64; // r12
  char v65; // bl
  __int64 v66; // rcx
  char v67; // r12
  __int64 v68; // rdx
  __int64 v69; // r9
  __int64 v70; // rax
  char v71; // r11
  __int64 v72; // rcx
  unsigned __int64 v73; // r12
  unsigned __int64 v74; // rdx
  _QWORD *v75; // rcx
  unsigned __int64 v76; // rdx
  unsigned __int64 v77; // r8
  int ValidAweProtection; // eax
  ULONG_PTR v79; // rdx
  unsigned __int64 v80; // rsi
  __int64 v81; // r9
  unsigned __int64 v82; // r11
  __int64 v83; // rbx
  __int64 v84; // rax
  bool v85; // zf
  unsigned __int64 v86; // rax
  ULONG_PTR v87; // rdx
  unsigned __int64 v88; // rsi
  int v89; // eax
  __int64 v90; // rdx
  __int64 v91; // rcx
  char v92; // si
  PVOID v93; // r15
  char v94; // [rsp+30h] [rbp-1C8h]
  __int64 v95; // [rsp+38h] [rbp-1C0h]
  __int64 valid; // [rsp+40h] [rbp-1B8h]
  __int64 v97; // [rsp+48h] [rbp-1B0h]
  ULONG_PTR BugCheckParameter2; // [rsp+50h] [rbp-1A8h]
  unsigned __int64 v99; // [rsp+58h] [rbp-1A0h]
  unsigned __int64 *v100; // [rsp+60h] [rbp-198h]
  unsigned __int64 v101; // [rsp+68h] [rbp-190h]
  __int64 v102; // [rsp+78h] [rbp-180h]
  unsigned int v103; // [rsp+80h] [rbp-178h] BYREF
  __int64 v104; // [rsp+88h] [rbp-170h] BYREF
  __int64 v105; // [rsp+90h] [rbp-168h]
  __int64 v106; // [rsp+98h] [rbp-160h] BYREF
  __int64 v107; // [rsp+A0h] [rbp-158h]
  ULONG_PTR BugCheckParameter1; // [rsp+A8h] [rbp-150h]
  unsigned __int64 *v109; // [rsp+B0h] [rbp-148h]
  ULONG_PTR v110; // [rsp+B8h] [rbp-140h] BYREF
  PVOID P; // [rsp+C0h] [rbp-138h]
  __int64 v112; // [rsp+C8h] [rbp-130h]
  void *v113; // [rsp+D0h] [rbp-128h]
  ULONG_PTR v114; // [rsp+D8h] [rbp-120h]
  unsigned __int64 v115; // [rsp+E0h] [rbp-118h]
  char v116[8]; // [rsp+E8h] [rbp-110h] BYREF
  unsigned __int64 v117; // [rsp+F0h] [rbp-108h]
  __int64 v118; // [rsp+F8h] [rbp-100h]
  _OWORD v119[3]; // [rsp+100h] [rbp-F8h] BYREF
  _BYTE Src[128]; // [rsp+130h] [rbp-C8h] BYREF

  v113 = (void *)a3;
  BugCheckParameter1 = a1;
  v114 = a1;
  v115 = a3;
  v106 = 0LL;
  v110 = 0LL;
  memset(v119, 0, sizeof(v119));
  v6 = 0;
  if ( a4 > 0xFFFFFFFF )
    return 3221225990LL;
  v8 = a4 >> 4;
  v99 = a4 >> 4;
  if ( !(a4 >> 4) )
    return 3221225476LL;
  if ( (a2 & 0x3FFFFFFC) != 0 || (a2 & 3) == 3 )
    return 3221225485LL;
  CurrentThread = KeGetCurrentThread();
  if ( v8 <= 8 )
  {
    memmove(Src, (const void *)a3, 16 * v8);
    P = 0LL;
    MappedSystemVa = (unsigned __int64 *)Src;
    v100 = (unsigned __int64 *)Src;
    v109 = (unsigned __int64 *)Src;
  }
  else
  {
    Pool = (struct _MDL *)MiAllocatePool(
                            64,
                            8 * ((a4 >> 12) + 7 - ((unsigned __int128)-(__int128)(a4 & 0xFFF) >> 64)),
                            0x20206D4Du);
    v11 = Pool;
    P = Pool;
    if ( !Pool )
      return 3221225626LL;
    Pool->Next = 0LL;
    Pool->Size = 8 * ((((a3 & 0xFFF) + a4 + 4095) >> 12) + 6);
    Pool->MdlFlags = 0;
    Pool->StartVa = (PVOID)(a3 & 0xFFFFFFFFFFFFF000uLL);
    Pool->ByteOffset = a3 & 0xFFF;
    Pool->ByteCount = a4;
    PreviousMode = CurrentThread->PreviousMode;
    MiProbeAndLockPages((__int64)Pool, PreviousMode != 0, 1u);
    if ( (v11->MdlFlags & 5) != 0 )
      MappedSystemVa = (unsigned __int64 *)v11->MappedSystemVa;
    else
      MappedSystemVa = (unsigned __int64 *)MmMapLockedPagesSpecifyCache(v11, 0, MmCached, 0LL, 0, 0x40000010u);
    v109 = MappedSystemVa;
    v100 = MappedSystemVa;
    if ( !MappedSystemVa )
    {
      MmUnlockPages(v11);
      ExFreePoolWithTag(v11, 0);
      return 3221225626LL;
    }
  }
  v14 = BugCheckParameter1;
  if ( CurrentThread->ApcState.Process != (_KPROCESS *)BugCheckParameter1 )
  {
    KiStackAttachProcess((_KPROCESS *)BugCheckParameter1, 0LL, (__int64)v119, (_DWORD *)BugCheckParameter1);
    v6 = 1;
    v14 = BugCheckParameter1;
  }
  v15 = 0LL;
  BugCheckParameter2 = 0LL;
  v16 = v14 + 1664;
  v95 = v14 + 1664;
  v17 = 17;
  v94 = 17;
  v18 = 0LL;
  valid = 0LL;
  v19 = 0LL;
  v97 = 0LL;
  v103 = 0;
  v20 = a2;
  do
  {
    v21 = 0LL;
    v107 = 0LL;
    v6 &= ~4u;
    v22 = *MappedSystemVa;
    v101 = *MappedSystemVa;
    if ( *MappedSystemVa > 0x7FFFFFFEFFFFLL )
      goto LABEL_204;
    v23 = v22 >> 12;
    v117 = v22 >> 12;
    if ( !v15 )
      goto LABEL_230;
    if ( v23 < (*((unsigned int *)v15 + 6) | ((unsigned __int64)*((unsigned __int8 *)v15 + 32) << 32))
      || v23 > (*((unsigned int *)v15 + 7) | ((unsigned __int64)*((unsigned __int8 *)v15 + 33) << 32)) )
    {
      if ( v19 )
      {
        MiLockProtoPage(0LL);
        v97 = 0LL;
        v17 = v94;
        v16 = v95;
      }
      if ( v17 != 17 )
      {
        if ( v18 )
        {
          MiUnlockPageTableInternal(v16, v18);
          v18 = 0LL;
          valid = 0LL;
          v17 = v94;
        }
        MiUnlockWorkingSetShared(v95, v17);
        v94 = 17;
      }
      MiUnlockAndDereferenceVadShared((char *)v15);
      v15 = 0LL;
      BugCheckParameter2 = 0LL;
    }
    v22 = v101;
    if ( !v15 )
    {
LABEL_230:
      v15 = MiObtainReferencedVadEx(v22, 2, (int *)&v103);
      BugCheckParameter2 = (ULONG_PTR)v15;
      if ( !v15 )
      {
        v24 = v103;
        if ( v103 == -1073741558 )
          goto LABEL_213;
LABEL_201:
        v18 = valid;
        goto LABEL_202;
      }
    }
    v25 = v101;
    if ( ((v101 & 0xFFFFFFFFFFFFF000uLL) == 0x7FFE0000
       || (v101 & 0xFFFFFFFFFFFFF000uLL) == qword_140C4DE48 && qword_140C4DE48)
      && (*(_DWORD *)(BugCheckParameter1 + 2172) & 1) == 0 )
    {
      v6 |= 4u;
    }
    if ( (v15[12] & 0x70) == 0x10 )
    {
      v21 = (16LL * (MmProtectToValue[((unsigned __int64)*((unsigned int *)v15 + 12) >> 7) & 0x1F] & 0x7FF)) | 0x400001;
LABEL_202:
      v19 = v97;
      v16 = v95;
LABEL_203:
      v17 = v94;
      v20 = a2;
LABEL_204:
      v86 = v99;
      goto LABEL_205;
    }
LABEL_41:
    v6 &= ~2u;
    v26 = *((_DWORD *)v15 + 12);
    v27 = v26 & 0x100000;
    if ( (v26 & 0x100000) != 0 && ((v28 = (v26 >> 18) & 3, (v26 & 0x400000) != 0) || v28 >= 2) && v28 >= 2
      || !(_DWORD)v27 && (v15[16] & 0x1000000) != 0 )
    {
      v6 |= 2u;
    }
    if ( (v6 & 2) != 0 && v94 != 17 )
    {
      if ( v18 )
      {
        MiUnlockPageTableInternal(v95, v18);
        v18 = 0LL;
        valid = 0LL;
      }
      MiUnlockWorkingSetShared(v95, v94);
      v94 = 17;
      v25 = v101;
    }
    v29 = ((v25 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v112 = v29;
    LOBYTE(v27) = v94;
    if ( v94 != 17 )
    {
      if ( (((_BYTE)v29 + 8) & 0x78) == 0 && (unsigned int)MiWorkingSetIsContended(v95) || KeShouldYieldProcessor() )
      {
        if ( v18 )
        {
          MiUnlockPageTableInternal(v95, v18);
          v18 = 0LL;
          valid = 0LL;
        }
        MiUnlockWorkingSetShared(v95, v94);
        LOBYTE(v27) = 17;
        v94 = 17;
      }
      else
      {
        LOBYTE(v27) = v94;
      }
    }
    v30 = ((v29 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v102 = v30;
    while ( 1 )
    {
      if ( (_BYTE)v27 == 17 )
        v94 = MiLockWorkingSetShared(v95, v27, v16, (_DWORD *)v25);
      v31 = -1LL;
      v105 = -1LL;
      v21 = 0LL;
      v107 = 0LL;
      if ( v18 == v30 )
      {
        v32 = v29;
        v110 = v29;
      }
      else
      {
        if ( v18 )
          MiUnlockPageTableInternal(v95, v18);
        valid = MiLockLowestValidPageTable(v95, v29, &v110);
        v32 = v110;
      }
      v33 = MI_READ_PTE_LOCK_FREE(v32);
      v36 = v33;
      v104 = v33;
      if ( !v33 )
      {
        v37 = 0LL;
        v38 = v6 & 2;
        if ( (v6 & 2) == 0 )
          goto LABEL_101;
        goto LABEL_86;
      }
      if ( (v33 & 1) == 0 || (v33 & 0x80u) == 0LL )
      {
        if ( valid != v102 )
        {
          if ( (unsigned int)MiWorkingSetInfoCheckPageTable(v95, v32, (unsigned int)&v106, a2, v94) == 1 )
          {
            v18 = 0LL;
            valid = 0LL;
            goto LABEL_83;
          }
          v21 = v107;
        }
        v38 = v6 & 2;
LABEL_86:
        v25 = v101;
        goto LABEL_87;
      }
      v31 = ((unsigned __int64)MI_READ_PTE_LOCK_FREE(&v104) >> 12) & 0xFFFFFFFFFLL;
      v105 = v31;
      for ( i = -1; v32 >= 0xFFFFF68000000000uLL; ++i )
      {
        if ( v32 > 0xFFFFF6FFFFFFFFFFuLL )
          break;
        v32 = (__int64)(v32 << 25) >> 16;
      }
      v40 = 1LL;
      v25 = v101;
      for ( j = v101 >> 12; i; --i )
      {
        v31 += v40 * (j & 0x1FF);
        j >>= 9;
        v40 <<= 9;
      }
      v21 = 8388609LL;
      v107 = 8388609LL;
      v38 = v6 & 2;
LABEL_87:
      v16 = v105;
      if ( v105 != -1 )
        goto LABEL_156;
      if ( v38 )
      {
        v15 = (volatile signed __int32 *)BugCheckParameter2;
        v18 = valid;
        goto LABEL_41;
      }
      v18 = valid;
      if ( valid != ((v25 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL )
      {
        v15 = (volatile signed __int32 *)BugCheckParameter2;
        goto LABEL_98;
      }
      v42 = MI_READ_PTE_LOCK_FREE(v29);
      v36 = v42;
      v104 = v42;
      if ( (v42 & 1) != 0 )
        break;
      v37 = v42;
      if ( (v42 & 0x400) != 0 )
      {
        v45 = BugCheckParameter2;
        goto LABEL_105;
      }
      if ( (v42 & 0x800) == 0 )
      {
        if ( (unsigned int)MiGetPagingFileOffset(&v104) )
        {
          v21 = v21 & 0xFFFFFFFFFF3FFFFFuLL | 0x800000;
          goto LABEL_96;
        }
        if ( v36 )
          goto LABEL_96;
LABEL_101:
        v45 = BugCheckParameter2;
        if ( (v6 & 4) == 0 && (*(_DWORD *)(BugCheckParameter2 + 48) & 0x100000) != 0 )
        {
          v15 = (volatile signed __int32 *)BugCheckParameter2;
          goto LABEL_97;
        }
LABEL_105:
        ProtoPteAddress = 0LL;
        if ( (v6 & 4) != 0 )
        {
          ProtoPteAddress = qword_140C4DE40;
          if ( (v101 & 0xFFFFFFFFFFFFF000uLL) == 0x7FFE0000 )
            ProtoPteAddress = qword_140C4DE38;
          goto LABEL_108;
        }
        if ( (*(_DWORD *)(v45 + 48) & 0x100000) != 0 )
        {
          if ( !qword_140C4DF40 )
            goto LABEL_119;
          if ( (v37 & 0x10) == 0 )
          {
            v37 &= ~qword_140C4DF40;
            goto LABEL_119;
          }
        }
        else
        {
          ProtoPteAddress = MiGetProtoPteAddress(v45, v101 >> 12, 0LL, v116);
          if ( !v37 || (unsigned int)MiIsPrototypePteVadLookup(v36) )
          {
LABEL_108:
            v47 = ProtoPteAddress;
LABEL_120:
            if ( !v47 )
              goto LABEL_96;
            v21 |= 0x8000uLL;
            v107 = v21;
            if ( v47 == ProtoPteAddress )
            {
              v21 |= 0x40000000uLL;
              v107 = v21;
            }
            if ( ((v47 ^ v97) & 0xFFFFFFFFFFFFF000uLL) == 0 )
            {
              v48 = MiLockLeafPage((__int64 *)v47, 0, v34, v35);
              v49 = MI_READ_PTE_LOCK_FREE(v47);
              v50 = v49;
              v104 = v49;
              if ( v48 )
              {
                MiQueryPfn((v48 + 0x58000000000LL) / 48, &v106);
                _InterlockedAnd64((volatile signed __int64 *)(v48 + 24), 0x7FFFFFFFFFFFFFFFuLL);
LABEL_95:
                v21 = v107;
LABEL_96:
                v15 = (volatile signed __int32 *)BugCheckParameter2;
LABEL_97:
                v18 = valid;
LABEL_98:
                MappedSystemVa = v100;
                goto LABEL_202;
              }
              if ( (v49 & 0x400) != 0 || (v49 & 0x800) != 0 || !MiInvalidPteConforms(v49) )
                goto LABEL_96;
              PagingFileOffset = MiGetPagingFileOffset(&v104);
              MappedSystemVa = v100;
              v15 = (volatile signed __int32 *)BugCheckParameter2;
              v17 = v94;
              v16 = v95;
              v19 = v97;
              v20 = a2;
              if ( PagingFileOffset )
                v21 = v21 & 0xFFFFFFFFFF3FFFFFuLL | 0x800000;
              else
                v21 &= -(__int64)(v50 != 0);
              v18 = valid;
              goto LABEL_204;
            }
            if ( valid )
            {
              MiUnlockPageTableInternal(v95, valid);
              valid = 0LL;
            }
            v97 = MiLockProtoPage(v47);
            goto LABEL_127;
          }
          if ( !qword_140C4DF40 )
          {
LABEL_119:
            v47 = v37 >> 16;
            goto LABEL_120;
          }
          if ( (v37 & 0x10) == 0 )
          {
            v37 &= ~qword_140C4DF40;
            goto LABEL_119;
          }
        }
        v37 &= ~0x10uLL;
        goto LABEL_119;
      }
      v43 = MiLockTransitionLeafPage(v29);
      if ( v43 )
      {
        MiQueryPfn((v43 + 0x58000000000LL) / 48, &v106);
        _InterlockedAnd64((volatile signed __int64 *)(v44 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        goto LABEL_95;
      }
LABEL_127:
      v18 = valid;
LABEL_83:
      v30 = v102;
      LOBYTE(v27) = v94;
    }
    v21 |= 1uLL;
    v52 = *(_DWORD *)(BugCheckParameter2 + 48);
    if ( (v52 & 0x70) == 0x40 )
    {
      v53 = MI_READ_PTE_LOCK_FREE(&v104);
      v54 = 48 * ((v53 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL;
      v55 = v21;
      if ( ((*(_QWORD *)(48 * ((v53 >> 12) & 0xFFFFFFFFFLL) - 0x57FFFFFFFD8LL) >> 50) & 1) != 0 )
      {
        v56 = v36;
        if ( (*(_BYTE *)(v54 + 35) & 0x40) != 0 || (unsigned int)MiIsPageOnBadList(v54) )
        {
          v21 |= 0x80000000uLL;
          LOWORD(v36) = v56;
          v55 = v21;
        }
      }
      if ( (unsigned int)MiRotatedToFrameBuffer(v112) )
      {
        v57 = (v36 & 0x800) != 0 ? 4 : 1;
        v58 = v52 & 0xC00;
        if ( v58 == 3072 && (v52 & 0x380) != 0 )
        {
          v57 |= 0x18u;
        }
        else if ( v58 == 1024 )
        {
          v57 |= 8u;
        }
      }
      else
      {
        PfnPriority = MiGetPfnPriority(v54);
        v21 = v55 & 0xFFFFFFFFF8C0FFFFuLL | ((*(_DWORD *)(MiSearchNumaNodeTable((v54 + 0x58000000000LL) / 48) + 8) & 0x3F | ((unsigned __int64)(PfnPriority & 7) << 8)) << 16);
        v57 = (*(_DWORD *)(v54 + 16) >> 5) & 0x1F;
        if ( (*(_QWORD *)(v54 + 40) & 0x1000000000LL) == 0 && *(__int64 *)(v54 + 8) > 0 )
        {
          v60 = v21 | 0x8000;
          LOBYTE(v61) = 7;
          if ( (*(_QWORD *)(v54 + 24) & 0x3FFFFFFFFFFFFFFFuLL) < 7 )
            v61 = *(_QWORD *)(v54 + 24) & 0x3FFFFFFFFFFFFFFFLL;
          v21 = v60 ^ ((unsigned __int8)v60 ^ (unsigned __int8)(2 * v61)) & 0xE;
          v57 = MmMakeProtectNotWriteCopy[v57];
        }
      }
      v21 = ((unsigned __int16)v21 ^ (unsigned __int16)(16 * MmProtectToValue[v57])) & 0x7FF0 ^ (unsigned __int64)v21;
      goto LABEL_96;
    }
    v31 = ((unsigned __int64)MI_READ_PTE_LOCK_FREE(&v104) >> 12) & 0xFFFFFFFFFLL;
    v16 = v105;
LABEL_156:
    v112 = 48 * v31;
    v62 = 48 * v31 - 0x58000000000LL;
    v63 = v62;
    v105 = v62;
    if ( (*(_QWORD *)(v62 + 40) & 0x1000000000LL) != 0 )
    {
      v64 = v31 & 0xFFFFFFFFFFFFFFF0uLL;
      if ( v16 != -1 )
        v64 = v16;
      v63 = 48 * v64 - 0x58000000000LL;
      v105 = v63;
    }
    v65 = MI_PFN_IS_PROTO(v63);
    v67 = MiGetPfnPriority(v66);
    v70 = MiSearchNumaNodeTable((v68 - v69) / 48);
    v71 = 7;
    v72 = *(_DWORD *)(v70 + 8) & 0x3F;
    v73 = v21 & 0xFFFFFFFFF8C07FFFuLL | ((v65 & 1 | (2 * (v72 | ((unsigned __int64)(v67 & 7) << 8)))) << 15);
    if ( (*(_BYTE *)(v62 + 35) & 0x40) != 0 || (unsigned int)MiIsPageOnBadList(v62) )
      v73 |= 0x80000000uLL;
    if ( (v73 & 0x800000) != 0 || (v74 = *(_QWORD *)(v62 + 40), (v74 & 0x1000000000LL) != 0) )
    {
LABEL_193:
      v87 = v36;
      v15 = (volatile signed __int32 *)BugCheckParameter2;
      v88 = v73 ^ ((unsigned __int16)v73 ^ (unsigned __int16)(16
                                                            * MmProtectToValue[(unsigned int)MiGetProtectionFromPte(
                                                                                               BugCheckParameter2,
                                                                                               v87)])) & 0x7FF0;
      if ( (*(_DWORD *)(BugCheckParameter2 + 48) & 0x1100000) == 0x1100000 )
        v88 &= 0xFFFFFFF0FFFFFFFFuLL;
      v21 = v88 | 0x400000;
      v89 = MI_PFN_IS_PROTO(v105);
      MappedSystemVa = v100;
      v18 = valid;
      v16 = v95;
      v19 = v97;
      if ( v89 )
      {
        v92 = 7;
        if ( (*(_QWORD *)(v91 + 24) & 0x3FFFFFFFFFFFFFFFuLL) < 7 )
          v92 = *(_BYTE *)(v91 + 24);
        v21 = v90 & 0xFFFFFFFFFFFFFFF1uLL | (2 * (v92 & 7 | 0x20000000LL));
      }
      goto LABEL_203;
    }
    if ( (*(_QWORD *)&v71 & (v74 >> 60)) == 1 )
    {
      if ( !(unsigned int)MI_PFN_IS_PROTO(v62) )
      {
        v75 = (_QWORD *)qword_140C4EE80;
        if ( !qword_140C4EE80 )
          goto LABEL_177;
        v76 = v112 / 48;
        v118 = v112 / 48;
        while ( v75 )
        {
          v77 = v75[3];
          if ( v76 < v77 )
          {
            v75 = (_QWORD *)*v75;
          }
          else
          {
            if ( v76 - v77 < v75[4] )
              break;
            v75 = (_QWORD *)v75[1];
          }
        }
        if ( v75 )
        {
          ValidAweProtection = (*(_DWORD *)(v62 + 16) >> 5) & 0x1F;
          v15 = (volatile signed __int32 *)BugCheckParameter2;
        }
        else
        {
LABEL_177:
          v79 = v36;
          v15 = (volatile signed __int32 *)BugCheckParameter2;
          ValidAweProtection = MiGetValidAweProtection(BugCheckParameter2, v79);
        }
        v80 = v73 ^ ((unsigned __int16)v73 ^ (unsigned __int16)(16 * MmProtectToValue[ValidAweProtection])) & 0x7FF0;
        if ( (v15[12] & 0x1100000) == 0x1100000 )
          v80 &= 0xFFFFFFF0FFFFFFFFuLL;
        v21 = v80 | 0x400000;
        goto LABEL_97;
      }
      goto LABEL_193;
    }
    if ( (MiGetWsleContents(v72, v101) & 0xF) == 8 )
      v73 |= 0x400000uLL;
    if ( !(unsigned int)MI_PFN_IS_PROTO(v62) )
    {
      v21 = v73 & 0xFFFFFFFFFFFF8001uLL | (16LL * (MmProtectToValue[(*(_DWORD *)(v62 + 16) >> 5) & 0x1F] & 0x7FF));
      v15 = (volatile signed __int32 *)BugCheckParameter2;
      MappedSystemVa = v100;
      v18 = valid;
      v17 = v94;
      v16 = v95;
      v19 = v97;
      v20 = a2;
      if ( (*(_DWORD *)(BugCheckParameter2 + 48) & 0x1100000) == 0x1100000 )
        v21 &= 0xFFFFFFF0FFFFFFFFuLL;
      goto LABEL_204;
    }
    LOBYTE(v83) = v82;
    if ( (*(_QWORD *)(v62 + 24) & 0x3FFFFFFFFFFFFFFFuLL) < v82 )
      v83 = *(_QWORD *)(v62 + 24) & 0x3FFFFFFFFFFFFFFFLL;
    v21 = v73 & 0xFFFFFFFFFFFF8001uLL | (2
                                       * (v83 & 7 | (8LL
                                                   * (MmProtectToValue[(unsigned int)MiGetPfnProtection(
                                                                                       0x3FFFFFFFFFFFFFFFLL,
                                                                                       v81,
                                                                                       v62)] & 0x7FF))));
    v15 = (volatile signed __int32 *)BugCheckParameter2;
    if ( (v6 & 4) != 0 )
    {
      v21 |= 0x40000000uLL;
      goto LABEL_97;
    }
    if ( (*(_DWORD *)(BugCheckParameter2 + 48) & 0x100000) != 0 )
    {
      MappedSystemVa = v100;
      goto LABEL_201;
    }
    v84 = MiGetProtoPteAddress(BugCheckParameter2, v117, 0LL, v116);
    MappedSystemVa = v100;
    v18 = valid;
    v17 = v94;
    v16 = v95;
    v19 = v97;
    v85 = v84 == (*(_QWORD *)(v62 + 8) | 0x8000000000000000uLL);
    v86 = v99;
    v20 = a2;
    if ( v85 )
      v21 |= 0x40000000uLL;
LABEL_205:
    if ( (v20 & 0x40000000) != 0 )
    {
      if ( (v21 & 1) != 0 )
      {
        if ( (v21 & 0x40000000) != 0 )
          v21 = v21 & 0xFFFFFFFFF8C0FFF1uLL | 0xE;
      }
      else if ( (v21 & 0x40000000) != 0 )
      {
        v21 &= 0xFFFFFFFFF03FFFFFuLL;
      }
    }
    MappedSystemVa[1] = v21;
    MappedSystemVa += 2;
    v100 = MappedSystemVa;
    v109 = MappedSystemVa;
    v99 = v86 - 1;
  }
  while ( v86 != 1 );
  v24 = 0;
LABEL_213:
  if ( v94 != 17 )
  {
    if ( valid )
      MiUnlockPageTableInternal(v95, valid);
    MiUnlockWorkingSetShared(v95, v94);
  }
  if ( v97 )
    MiLockProtoPage(0LL);
  if ( v15 )
    MiUnlockAndDereferenceVadShared((char *)v15);
  if ( (v6 & 1) != 0 )
    KiUnstackDetachProcess((__int64)v119, 0);
  v93 = P;
  if ( P )
  {
    MmUnlockPages((PMDL)P);
    ExFreePoolWithTag(v93, 0);
  }
  else
  {
    memmove(v113, Src, ((char *)MappedSystemVa - Src) & 0xFFFFFFFFFFFFFFF0uLL);
  }
  return v24;
}
