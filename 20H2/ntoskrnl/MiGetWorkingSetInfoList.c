/*
 * XREFs of MiGetWorkingSetInfoList @ 0x14034F6A8
 * Callers:
 *     MmQueryVirtualMemory @ 0x140621F60 (MmQueryVirtualMemory.c)
 * Callees:
 *     MiUnlockAndDereferenceVadShared @ 0x14022C070 (MiUnlockAndDereferenceVadShared.c)
 *     MiAllocatePool @ 0x14022D320 (MiAllocatePool.c)
 *     MiLockLowestValidPageTable @ 0x140236270 (MiLockLowestValidPageTable.c)
 *     MiLockTransitionLeafPage @ 0x14023681C (MiLockTransitionLeafPage.c)
 *     MiIsPrototypePteVadLookup @ 0x140236D50 (MiIsPrototypePteVadLookup.c)
 *     MiGetPagingFileOffset @ 0x1402397FC (MiGetPagingFileOffset.c)
 *     KiUnstackDetachProcess @ 0x140268320 (KiUnstackDetachProcess.c)
 *     MiProbeAndLockPages @ 0x14026BB80 (MiProbeAndLockPages.c)
 *     MiUnlockWorkingSetShared @ 0x140270AB0 (MiUnlockWorkingSetShared.c)
 *     MiGetPfnPriority @ 0x140279DB0 (MiGetPfnPriority.c)
 *     MiLockWorkingSetShared @ 0x14027B490 (MiLockWorkingSetShared.c)
 *     MiObtainReferencedVadEx @ 0x14027CA80 (MiObtainReferencedVadEx.c)
 *     MmMapLockedPagesSpecifyCache @ 0x1402864D0 (MmMapLockedPagesSpecifyCache.c)
 *     MmUnlockPages @ 0x1402936A0 (MmUnlockPages.c)
 *     MiSearchNumaNodeTable @ 0x1402AEBA0 (MiSearchNumaNodeTable.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1402B12D0 (MI_READ_PTE_LOCK_FREE.c)
 *     MiGetProtoPteAddress @ 0x1402B3F50 (MiGetProtoPteAddress.c)
 *     MiInvalidPteConforms @ 0x1402C9D60 (MiInvalidPteConforms.c)
 *     MiWorkingSetIsContended @ 0x1402CB2C0 (MiWorkingSetIsContended.c)
 *     MiGetPfnProtection @ 0x1402D3C28 (MiGetPfnProtection.c)
 *     MiGetWsleContents @ 0x1402D3CE0 (MiGetWsleContents.c)
 *     KiStackAttachProcess @ 0x1402D6FA0 (KiStackAttachProcess.c)
 *     KeShouldYieldProcessor @ 0x1402F80C0 (KeShouldYieldProcessor.c)
 *     MiRotatedToFrameBuffer @ 0x14030F8A8 (MiRotatedToFrameBuffer.c)
 *     MiLockProtoPage @ 0x140323190 (MiLockProtoPage.c)
 *     MiQueryPfn @ 0x140328448 (MiQueryPfn.c)
 *     MiLockLeafPage @ 0x14034A220 (MiLockLeafPage.c)
 *     MiIsPageOnBadList @ 0x14034D80C (MiIsPageOnBadList.c)
 *     MiUnlockPageTableInternal @ 0x14035B910 (MiUnlockPageTableInternal.c)
 *     __security_check_cookie @ 0x1403CFAF0 (__security_check_cookie.c)
 *     MiGetProtectionFromPte @ 0x1403F2D08 (MiGetProtectionFromPte.c)
 *     MI_PFN_IS_PROTO @ 0x1403F3080 (MI_PFN_IS_PROTO.c)
 *     memmove @ 0x140411040 (memmove.c)
 *     MiWorkingSetInfoCheckPageTable @ 0x140545CF0 (MiWorkingSetInfoCheckPageTable.c)
 *     MiGetValidAweProtection @ 0x14054AB28 (MiGetValidAweProtection.c)
 *     ExFreePoolWithTag @ 0x1409B70B0 (ExFreePoolWithTag.c)
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
  unsigned __int64 v18; // rbx
  unsigned __int64 v19; // r10
  int v20; // ecx
  __int64 v21; // rsi
  unsigned __int64 v22; // rax
  unsigned __int64 v23; // r9
  unsigned int v24; // ebx
  unsigned __int64 v25; // r9
  unsigned int v26; // ecx
  unsigned int v27; // eax
  unsigned __int64 v28; // r13
  char v29; // dl
  __int64 v30; // r15
  unsigned __int64 v31; // r12
  unsigned __int64 v32; // rbx
  __int64 v33; // rax
  __int64 v34; // r8
  __int64 v35; // r9
  unsigned __int64 v36; // r15
  __int64 v37; // rbx
  int v38; // eax
  int i; // r8d
  __int64 v40; // rdx
  unsigned __int64 j; // rcx
  unsigned __int64 v42; // r8
  __int64 v43; // rax
  __int64 v44; // r11
  __int64 v45; // r11
  __int64 v46; // rcx
  __int64 ProtoPteAddress; // rdx
  unsigned __int64 v48; // rbx
  __int64 v49; // r15
  __int64 v50; // rax
  __int64 v51; // rbx
  int PagingFileOffset; // eax
  int v53; // r13d
  unsigned __int64 v54; // rax
  __int64 v55; // rbx
  __int64 v56; // r12
  __int16 v57; // r8
  int v58; // r8d
  int v59; // eax
  char PfnPriority; // si
  __int64 v61; // rsi
  __int64 v62; // rax
  __int64 v63; // r13
  __int64 v64; // rdx
  unsigned __int64 v65; // r12
  char v66; // bl
  __int64 v67; // rcx
  char v68; // r12
  __int64 v69; // rdx
  __int64 v70; // r9
  _QWORD *v71; // rax
  char v72; // r11
  __int64 v73; // rcx
  unsigned __int64 v74; // r12
  unsigned __int64 v75; // rdx
  _QWORD *v76; // rcx
  unsigned __int64 v77; // rdx
  unsigned __int64 v78; // r8
  int ValidAweProtection; // eax
  unsigned __int64 v80; // rdx
  unsigned __int64 v81; // rsi
  __int64 v82; // r9
  unsigned __int64 v83; // r11
  __int64 v84; // rbx
  __int64 v85; // rax
  bool v86; // zf
  unsigned __int64 v87; // rax
  ULONG_PTR v88; // rdx
  unsigned __int64 v89; // rsi
  int v90; // eax
  __int64 v91; // rdx
  __int64 v92; // rcx
  char v93; // si
  PVOID v94; // r15
  char v95; // [rsp+30h] [rbp-1C8h]
  __int64 v96; // [rsp+38h] [rbp-1C0h]
  unsigned __int64 valid; // [rsp+40h] [rbp-1B8h]
  ULONG_PTR v98; // [rsp+48h] [rbp-1B0h]
  ULONG_PTR BugCheckParameter2; // [rsp+50h] [rbp-1A8h]
  unsigned __int64 v100; // [rsp+58h] [rbp-1A0h]
  unsigned __int64 *v101; // [rsp+60h] [rbp-198h]
  unsigned __int64 v102; // [rsp+68h] [rbp-190h]
  __int64 v103; // [rsp+78h] [rbp-180h]
  unsigned int v104; // [rsp+80h] [rbp-178h] BYREF
  __int64 v105; // [rsp+88h] [rbp-170h] BYREF
  __int64 v106; // [rsp+90h] [rbp-168h]
  __int64 v107; // [rsp+98h] [rbp-160h] BYREF
  __int64 v108; // [rsp+A0h] [rbp-158h]
  ULONG_PTR BugCheckParameter1; // [rsp+A8h] [rbp-150h]
  unsigned __int64 *v110; // [rsp+B0h] [rbp-148h]
  unsigned __int64 v111; // [rsp+B8h] [rbp-140h] BYREF
  PVOID P; // [rsp+C0h] [rbp-138h]
  signed __int64 v113; // [rsp+C8h] [rbp-130h]
  void *v114; // [rsp+D0h] [rbp-128h]
  ULONG_PTR v115; // [rsp+D8h] [rbp-120h]
  unsigned __int64 v116; // [rsp+E0h] [rbp-118h]
  __int64 v117; // [rsp+E8h] [rbp-110h] BYREF
  unsigned __int64 v118; // [rsp+F0h] [rbp-108h]
  __int64 v119; // [rsp+F8h] [rbp-100h]
  _OWORD v120[3]; // [rsp+100h] [rbp-F8h] BYREF
  _BYTE Src[128]; // [rsp+130h] [rbp-C8h] BYREF

  v114 = (void *)a3;
  BugCheckParameter1 = a1;
  v115 = a1;
  v116 = a3;
  v107 = 0LL;
  v111 = 0LL;
  memset(v120, 0, sizeof(v120));
  v6 = 0;
  if ( a4 > 0xFFFFFFFF )
    return 3221225990LL;
  v8 = a4 >> 4;
  v100 = a4 >> 4;
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
    v101 = (unsigned __int64 *)Src;
    v110 = (unsigned __int64 *)Src;
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
    MiProbeAndLockPages((__int64)Pool, PreviousMode != 0, 1);
    if ( (v11->MdlFlags & 5) != 0 )
      MappedSystemVa = (unsigned __int64 *)v11->MappedSystemVa;
    else
      MappedSystemVa = (unsigned __int64 *)MmMapLockedPagesSpecifyCache(v11, 0, MmCached, 0LL, 0, 0x40000010u);
    v110 = MappedSystemVa;
    v101 = MappedSystemVa;
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
    KiStackAttachProcess((_KPROCESS *)BugCheckParameter1, 0, (__int64)v120);
    v6 = 1;
    v14 = BugCheckParameter1;
  }
  v15 = 0LL;
  BugCheckParameter2 = 0LL;
  v16 = v14 + 1664;
  v96 = v14 + 1664;
  v17 = 17;
  v95 = 17;
  v18 = 0LL;
  valid = 0LL;
  v19 = 0LL;
  v98 = 0LL;
  v104 = 0;
  v20 = a2;
  do
  {
    v21 = 0LL;
    v108 = 0LL;
    v6 &= ~4u;
    v22 = *MappedSystemVa;
    v102 = *MappedSystemVa;
    if ( *MappedSystemVa > 0x7FFFFFFEFFFFLL )
      goto LABEL_204;
    v23 = v22 >> 12;
    v118 = v22 >> 12;
    if ( !v15 )
      goto LABEL_230;
    if ( v23 < (*((unsigned int *)v15 + 6) | ((unsigned __int64)*((unsigned __int8 *)v15 + 32) << 32))
      || v23 > (*((unsigned int *)v15 + 7) | ((unsigned __int64)*((unsigned __int8 *)v15 + 33) << 32)) )
    {
      if ( v19 )
      {
        MiLockProtoPage(0LL, v19, v17);
        v98 = 0LL;
        v17 = v95;
        v16 = v96;
      }
      if ( v17 != 17 )
      {
        if ( v18 )
        {
          MiUnlockPageTableInternal(v16);
          v18 = 0LL;
          valid = 0LL;
          v17 = v95;
        }
        MiUnlockWorkingSetShared(v96, v17);
        v95 = 17;
      }
      MiUnlockAndDereferenceVadShared((char *)v15);
      v15 = 0LL;
      BugCheckParameter2 = 0LL;
    }
    v22 = v102;
    if ( !v15 )
    {
LABEL_230:
      v15 = MiObtainReferencedVadEx(v22, 2, (int *)&v104);
      BugCheckParameter2 = (ULONG_PTR)v15;
      if ( !v15 )
      {
        v24 = v104;
        if ( v104 == -1073741558 )
          goto LABEL_213;
LABEL_201:
        v18 = valid;
        goto LABEL_202;
      }
    }
    v25 = v102;
    if ( ((v102 & 0xFFFFFFFFFFFFF000uLL) == 0x7FFE0000
       || (v102 & 0xFFFFFFFFFFFFF000uLL) == qword_140C4DCC8 && qword_140C4DCC8)
      && (*(_DWORD *)(BugCheckParameter1 + 2172) & 1) == 0 )
    {
      v6 |= 4u;
    }
    if ( (v15[12] & 0x70) == 0x10 )
    {
      v21 = (16LL * (MmProtectToValue[((unsigned __int64)*((unsigned int *)v15 + 12) >> 7) & 0x1F] & 0x7FF)) | 0x400001;
LABEL_202:
      v19 = v98;
      v16 = v96;
LABEL_203:
      v17 = v95;
      v20 = a2;
LABEL_204:
      v87 = v100;
      goto LABEL_205;
    }
LABEL_41:
    v6 &= ~2u;
    v26 = *((_DWORD *)v15 + 12);
    if ( (v26 & 0x100000) != 0 && ((v27 = (v26 >> 18) & 3, (v26 & 0x400000) != 0) || v27 >= 2) && v27 >= 2
      || (v15[12] & 0x100000) == 0 && (v15[16] & 0x1000000) != 0 )
    {
      v6 |= 2u;
    }
    if ( (v6 & 2) != 0 && v95 != 17 )
    {
      if ( v18 )
      {
        MiUnlockPageTableInternal(v96);
        v18 = 0LL;
        valid = 0LL;
      }
      MiUnlockWorkingSetShared(v96, v95);
      v95 = 17;
      v25 = v102;
    }
    v28 = ((v25 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v113 = v28;
    v29 = v95;
    if ( v95 != 17 )
    {
      if ( (((_BYTE)v28 + 8) & 0x78) == 0 && MiWorkingSetIsContended(v96) || KeShouldYieldProcessor() )
      {
        if ( v18 )
        {
          MiUnlockPageTableInternal(v96);
          v18 = 0LL;
          valid = 0LL;
        }
        MiUnlockWorkingSetShared(v96, v95);
        v29 = 17;
        v95 = 17;
      }
      else
      {
        v29 = v95;
      }
    }
    v30 = ((v28 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v103 = v30;
    while ( 1 )
    {
      if ( v29 == 17 )
        v95 = MiLockWorkingSetShared(v96);
      v31 = -1LL;
      v106 = -1LL;
      v21 = 0LL;
      v108 = 0LL;
      if ( v18 == v30 )
      {
        v32 = v28;
        v111 = v28;
      }
      else
      {
        if ( v18 )
          MiUnlockPageTableInternal(v96);
        valid = MiLockLowestValidPageTable(v96, v28, &v111);
        v32 = v111;
      }
      v33 = MI_READ_PTE_LOCK_FREE(v32);
      v36 = v33;
      v105 = v33;
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
        if ( valid != v103 )
        {
          if ( (unsigned int)MiWorkingSetInfoCheckPageTable(v96, v32, (unsigned int)&v107, a2, v95) == 1 )
          {
            v18 = 0LL;
            valid = 0LL;
            goto LABEL_83;
          }
          v21 = v108;
        }
        v38 = v6 & 2;
LABEL_86:
        v25 = v102;
        goto LABEL_87;
      }
      v31 = ((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v105) >> 12) & 0xFFFFFFFFFLL;
      v106 = v31;
      for ( i = -1; v32 >= 0xFFFFF68000000000uLL; ++i )
      {
        if ( v32 > 0xFFFFF6FFFFFFFFFFuLL )
          break;
        v32 = (__int64)(v32 << 25) >> 16;
      }
      v40 = 1LL;
      v25 = v102;
      for ( j = v102 >> 12; i; --i )
      {
        v31 += v40 * (j & 0x1FF);
        j >>= 9;
        v40 <<= 9;
      }
      v21 = 8388609LL;
      v108 = 8388609LL;
      v38 = v6 & 2;
LABEL_87:
      v42 = v106;
      if ( v106 != -1 )
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
      v43 = MI_READ_PTE_LOCK_FREE(v28);
      v36 = v43;
      v105 = v43;
      if ( (v43 & 1) != 0 )
        break;
      v37 = v43;
      if ( (v43 & 0x400) != 0 )
      {
        v46 = BugCheckParameter2;
        goto LABEL_105;
      }
      if ( (v43 & 0x800) == 0 )
      {
        if ( (unsigned int)MiGetPagingFileOffset((__int64)&v105) )
        {
          v21 = v21 & 0xFFFFFFFFFF3FFFFFuLL | 0x800000;
          goto LABEL_96;
        }
        if ( v36 )
          goto LABEL_96;
LABEL_101:
        v46 = BugCheckParameter2;
        if ( (v6 & 4) == 0 && (*(_DWORD *)(BugCheckParameter2 + 48) & 0x100000) != 0 )
        {
          v15 = (volatile signed __int32 *)BugCheckParameter2;
          goto LABEL_97;
        }
LABEL_105:
        ProtoPteAddress = 0LL;
        if ( (v6 & 4) != 0 )
        {
          ProtoPteAddress = qword_140C4DCC0;
          if ( (v102 & 0xFFFFFFFFFFFFF000uLL) == 0x7FFE0000 )
            ProtoPteAddress = qword_140C4DCB8;
          goto LABEL_108;
        }
        if ( (*(_DWORD *)(v46 + 48) & 0x100000) != 0 )
        {
          if ( !qword_140C4DDC0 )
            goto LABEL_119;
          if ( (v37 & 0x10) == 0 )
          {
            v37 &= ~qword_140C4DDC0;
            goto LABEL_119;
          }
        }
        else
        {
          ProtoPteAddress = MiGetProtoPteAddress(v46, v102 >> 12, 0, &v117);
          if ( !v37 || MiIsPrototypePteVadLookup(v36) )
          {
LABEL_108:
            v48 = ProtoPteAddress;
LABEL_120:
            if ( !v48 )
              goto LABEL_96;
            v21 |= 0x8000uLL;
            v108 = v21;
            if ( v48 == ProtoPteAddress )
            {
              v21 |= 0x40000000uLL;
              v108 = v21;
            }
            if ( ((v48 ^ v98) & 0xFFFFFFFFFFFFF000uLL) == 0 )
            {
              v49 = MiLockLeafPage((__int64 *)v48, 0, v34, v35);
              v50 = MI_READ_PTE_LOCK_FREE(v48);
              v51 = v50;
              v105 = v50;
              if ( v49 )
              {
                MiQueryPfn((v49 + 0x58000000000LL) / 48, (__int64)&v107);
                _InterlockedAnd64((volatile signed __int64 *)(v49 + 24), 0x7FFFFFFFFFFFFFFFuLL);
LABEL_95:
                v21 = v108;
LABEL_96:
                v15 = (volatile signed __int32 *)BugCheckParameter2;
LABEL_97:
                v18 = valid;
LABEL_98:
                MappedSystemVa = v101;
                goto LABEL_202;
              }
              if ( (v50 & 0x400) != 0 || (v50 & 0x800) != 0 || !MiInvalidPteConforms(v50) )
                goto LABEL_96;
              PagingFileOffset = MiGetPagingFileOffset((__int64)&v105);
              MappedSystemVa = v101;
              v15 = (volatile signed __int32 *)BugCheckParameter2;
              v17 = v95;
              v16 = v96;
              v19 = v98;
              v20 = a2;
              if ( PagingFileOffset )
                v21 = v21 & 0xFFFFFFFFFF3FFFFFuLL | 0x800000;
              else
                v21 &= -(__int64)(v51 != 0);
              v18 = valid;
              goto LABEL_204;
            }
            if ( valid )
            {
              MiUnlockPageTableInternal(v96);
              valid = 0LL;
            }
            v98 = MiLockProtoPage(v48, v98, v95);
            goto LABEL_127;
          }
          if ( !qword_140C4DDC0 )
          {
LABEL_119:
            v48 = v37 >> 16;
            goto LABEL_120;
          }
          if ( (v37 & 0x10) == 0 )
          {
            v37 &= ~qword_140C4DDC0;
            goto LABEL_119;
          }
        }
        v37 &= ~0x10uLL;
        goto LABEL_119;
      }
      v44 = MiLockTransitionLeafPage(v28, 0LL);
      if ( v44 )
      {
        MiQueryPfn((v44 + 0x58000000000LL) / 48, (__int64)&v107);
        _InterlockedAnd64((volatile signed __int64 *)(v45 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        goto LABEL_95;
      }
LABEL_127:
      v18 = valid;
LABEL_83:
      v30 = v103;
      v29 = v95;
    }
    v21 |= 1uLL;
    v53 = *(_DWORD *)(BugCheckParameter2 + 48);
    if ( (v53 & 0x70) == 0x40 )
    {
      v54 = MI_READ_PTE_LOCK_FREE((unsigned __int64)&v105);
      v55 = 48 * ((v54 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL;
      v56 = v21;
      if ( ((*(_QWORD *)(48 * ((v54 >> 12) & 0xFFFFFFFFFLL) - 0x57FFFFFFFD8LL) >> 50) & 1) != 0 )
      {
        v57 = v36;
        if ( (*(_BYTE *)(v55 + 35) & 0x40) != 0 || MiIsPageOnBadList(v55) )
        {
          v21 |= 0x80000000uLL;
          LOWORD(v36) = v57;
          v56 = v21;
        }
      }
      if ( MiRotatedToFrameBuffer(v113) )
      {
        v58 = (v36 & 0x800) != 0 ? 4 : 1;
        v59 = v53 & 0xC00;
        if ( v59 == 3072 && (v53 & 0x380) != 0 )
        {
          v58 |= 0x18u;
        }
        else if ( v59 == 1024 )
        {
          v58 |= 8u;
        }
      }
      else
      {
        PfnPriority = MiGetPfnPriority(v55);
        v21 = v56 & 0xFFFFFFFFF8C0FFFFuLL | ((MiSearchNumaNodeTable((v55 + 0x58000000000LL) / 48)[1] & 0x3F | ((unsigned __int64)(PfnPriority & 7) << 8)) << 16);
        v58 = (*(_DWORD *)(v55 + 16) >> 5) & 0x1F;
        if ( (*(_QWORD *)(v55 + 40) & 0x1000000000LL) == 0 && *(__int64 *)(v55 + 8) > 0 )
        {
          v61 = v21 | 0x8000;
          LOBYTE(v62) = 7;
          if ( (*(_QWORD *)(v55 + 24) & 0x3FFFFFFFFFFFFFFFuLL) < 7 )
            v62 = *(_QWORD *)(v55 + 24) & 0x3FFFFFFFFFFFFFFFLL;
          v21 = v61 ^ ((unsigned __int8)v61 ^ (unsigned __int8)(2 * v62)) & 0xE;
          v58 = MmMakeProtectNotWriteCopy[v58];
        }
      }
      v21 = ((unsigned __int16)v21 ^ (unsigned __int16)(16 * MmProtectToValue[v58])) & 0x7FF0 ^ (unsigned __int64)v21;
      goto LABEL_96;
    }
    v31 = ((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v105) >> 12) & 0xFFFFFFFFFLL;
    v42 = v106;
LABEL_156:
    v113 = 48 * v31;
    v63 = 48 * v31 - 0x58000000000LL;
    v64 = v63;
    v106 = v63;
    if ( (*(_QWORD *)(v63 + 40) & 0x1000000000LL) != 0 )
    {
      v65 = v31 & 0xFFFFFFFFFFFFFFF0uLL;
      if ( v42 != -1LL )
        v65 = v42;
      v64 = 48 * v65 - 0x58000000000LL;
      v106 = v64;
    }
    v66 = MI_PFN_IS_PROTO(v64);
    v68 = MiGetPfnPriority(v67);
    v71 = MiSearchNumaNodeTable((v69 - v70) / 48);
    v72 = 7;
    v73 = v71[1] & 0x3F;
    v74 = v21 & 0xFFFFFFFFF8C07FFFuLL | ((v66 & 1 | (2 * (v73 | ((unsigned __int64)(v68 & 7) << 8)))) << 15);
    if ( (*(_BYTE *)(v63 + 35) & 0x40) != 0 || MiIsPageOnBadList(v63) )
      v74 |= 0x80000000uLL;
    if ( (v74 & 0x800000) != 0 || (v75 = *(_QWORD *)(v63 + 40), (v75 & 0x1000000000LL) != 0) )
    {
LABEL_193:
      v88 = v36;
      v15 = (volatile signed __int32 *)BugCheckParameter2;
      v89 = v74 ^ ((unsigned __int16)v74 ^ (unsigned __int16)(16
                                                            * MmProtectToValue[(unsigned int)MiGetProtectionFromPte(
                                                                                               BugCheckParameter2,
                                                                                               v88)])) & 0x7FF0;
      if ( (*(_DWORD *)(BugCheckParameter2 + 48) & 0x1100000) == 0x1100000 )
        v89 &= 0xFFFFFFF0FFFFFFFFuLL;
      v21 = v89 | 0x400000;
      v90 = MI_PFN_IS_PROTO(v106);
      MappedSystemVa = v101;
      v18 = valid;
      v16 = v96;
      v19 = v98;
      if ( v90 )
      {
        v93 = 7;
        if ( (*(_QWORD *)(v92 + 24) & 0x3FFFFFFFFFFFFFFFuLL) < 7 )
          v93 = *(_BYTE *)(v92 + 24);
        v21 = v91 & 0xFFFFFFFFFFFFFFF1uLL | (2 * (v93 & 7 | 0x20000000LL));
      }
      goto LABEL_203;
    }
    if ( (*(_QWORD *)&v72 & (v75 >> 60)) == 1 )
    {
      if ( !(unsigned int)MI_PFN_IS_PROTO(v63) )
      {
        v76 = (_QWORD *)qword_140C4ED00;
        if ( !qword_140C4ED00 )
          goto LABEL_177;
        v77 = v113 / 48;
        v119 = v113 / 48;
        while ( v76 )
        {
          v78 = v76[3];
          if ( v77 < v78 )
          {
            v76 = (_QWORD *)*v76;
          }
          else
          {
            if ( v77 - v78 < v76[4] )
              break;
            v76 = (_QWORD *)v76[1];
          }
        }
        if ( v76 )
        {
          ValidAweProtection = (*(_DWORD *)(v63 + 16) >> 5) & 0x1F;
          v15 = (volatile signed __int32 *)BugCheckParameter2;
        }
        else
        {
LABEL_177:
          v80 = v36;
          v15 = (volatile signed __int32 *)BugCheckParameter2;
          ValidAweProtection = MiGetValidAweProtection(BugCheckParameter2, v80);
        }
        v81 = v74 ^ ((unsigned __int16)v74 ^ (unsigned __int16)(16 * MmProtectToValue[ValidAweProtection])) & 0x7FF0;
        if ( (v15[12] & 0x1100000) == 0x1100000 )
          v81 &= 0xFFFFFFF0FFFFFFFFuLL;
        v21 = v81 | 0x400000;
        goto LABEL_97;
      }
      goto LABEL_193;
    }
    if ( (MiGetWsleContents(v73, v102) & 0xF) == 8 )
      v74 |= 0x400000uLL;
    if ( !(unsigned int)MI_PFN_IS_PROTO(v63) )
    {
      v21 = v74 & 0xFFFFFFFFFFFF8001uLL | (16LL * (MmProtectToValue[(*(_DWORD *)(v63 + 16) >> 5) & 0x1F] & 0x7FF));
      v15 = (volatile signed __int32 *)BugCheckParameter2;
      MappedSystemVa = v101;
      v18 = valid;
      v17 = v95;
      v16 = v96;
      v19 = v98;
      v20 = a2;
      if ( (*(_DWORD *)(BugCheckParameter2 + 48) & 0x1100000) == 0x1100000 )
        v21 &= 0xFFFFFFF0FFFFFFFFuLL;
      goto LABEL_204;
    }
    LOBYTE(v84) = v83;
    if ( (*(_QWORD *)(v63 + 24) & 0x3FFFFFFFFFFFFFFFuLL) < v83 )
      v84 = *(_QWORD *)(v63 + 24) & 0x3FFFFFFFFFFFFFFFLL;
    v21 = v74 & 0xFFFFFFFFFFFF8001uLL | (2
                                       * (v84 & 7 | (8LL
                                                   * (MmProtectToValue[(unsigned int)MiGetPfnProtection(
                                                                                       0x3FFFFFFFFFFFFFFFLL,
                                                                                       v82,
                                                                                       v63)] & 0x7FF))));
    v15 = (volatile signed __int32 *)BugCheckParameter2;
    if ( (v6 & 4) != 0 )
    {
      v21 |= 0x40000000uLL;
      goto LABEL_97;
    }
    if ( (*(_DWORD *)(BugCheckParameter2 + 48) & 0x100000) != 0 )
    {
      MappedSystemVa = v101;
      goto LABEL_201;
    }
    v85 = MiGetProtoPteAddress(BugCheckParameter2, v118, 0, &v117);
    MappedSystemVa = v101;
    v18 = valid;
    v17 = v95;
    v16 = v96;
    v19 = v98;
    v86 = v85 == (*(_QWORD *)(v63 + 8) | 0x8000000000000000uLL);
    v87 = v100;
    v20 = a2;
    if ( v86 )
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
    v101 = MappedSystemVa;
    v110 = MappedSystemVa;
    v100 = v87 - 1;
  }
  while ( v87 != 1 );
  v24 = 0;
LABEL_213:
  if ( v95 != 17 )
  {
    if ( valid )
      MiUnlockPageTableInternal(v96);
    MiUnlockWorkingSetShared(v96, v95);
  }
  if ( v98 )
    MiLockProtoPage(0LL, v98, 0x11u);
  if ( v15 )
    MiUnlockAndDereferenceVadShared((char *)v15);
  if ( (v6 & 1) != 0 )
    KiUnstackDetachProcess((__int64)v120, 0);
  v94 = P;
  if ( P )
  {
    MmUnlockPages((PMDL)P);
    ExFreePoolWithTag(v94, 0);
  }
  else
  {
    memmove(v114, Src, ((char *)MappedSystemVa - Src) & 0xFFFFFFFFFFFFFFF0uLL);
  }
  return v24;
}
