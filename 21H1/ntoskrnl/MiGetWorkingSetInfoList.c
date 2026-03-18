/*
 * XREFs of MiGetWorkingSetInfoList @ 0x140347A3C
 * Callers:
 *     MmQueryVirtualMemory @ 0x140634A10 (MmQueryVirtualMemory.c)
 * Callees:
 *     MiGetProtoPteAddress @ 0x140207D20 (MiGetProtoPteAddress.c)
 *     MiUnlockWorkingSetShared @ 0x14020EC60 (MiUnlockWorkingSetShared.c)
 *     MiGetPfnPriority @ 0x140217F60 (MiGetPfnPriority.c)
 *     MiLockWorkingSetShared @ 0x140219640 (MiLockWorkingSetShared.c)
 *     MmUnlockPages @ 0x1402471B0 (MmUnlockPages.c)
 *     KiUnstackDetachProcess @ 0x14025E290 (KiUnstackDetachProcess.c)
 *     MiObtainReferencedVadEx @ 0x140267570 (MiObtainReferencedVadEx.c)
 *     MmMapLockedPagesSpecifyCache @ 0x140274AB0 (MmMapLockedPagesSpecifyCache.c)
 *     MiInvalidPteConforms @ 0x1402838C0 (MiInvalidPteConforms.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140291580 (MI_READ_PTE_LOCK_FREE.c)
 *     MiSearchNumaNodeTable @ 0x1402931D0 (MiSearchNumaNodeTable.c)
 *     MiAllocatePool @ 0x1402A0FB0 (MiAllocatePool.c)
 *     MiUnlockAndDereferenceVadShared @ 0x1402A45A0 (MiUnlockAndDereferenceVadShared.c)
 *     MiProbeAndLockPages @ 0x1402A6910 (MiProbeAndLockPages.c)
 *     KiStackAttachProcess @ 0x1402A88C0 (KiStackAttachProcess.c)
 *     MiGetPfnProtection @ 0x1402ACBA0 (MiGetPfnProtection.c)
 *     MiLockTransitionLeafPage @ 0x1402ACD48 (MiLockTransitionLeafPage.c)
 *     MiLockLowestValidPageTable @ 0x1402ACFF0 (MiLockLowestValidPageTable.c)
 *     MiGetWsleContents @ 0x1402AFD20 (MiGetWsleContents.c)
 *     MiWorkingSetIsContended @ 0x1402B19F0 (MiWorkingSetIsContended.c)
 *     MiUnlockPageTableInternal @ 0x1402DB860 (MiUnlockPageTableInternal.c)
 *     KeShouldYieldProcessor @ 0x1402EE280 (KeShouldYieldProcessor.c)
 *     MiRotatedToFrameBuffer @ 0x140300408 (MiRotatedToFrameBuffer.c)
 *     MiLockProtoPage @ 0x140314A40 (MiLockProtoPage.c)
 *     MiQueryPfn @ 0x14031A158 (MiQueryPfn.c)
 *     MiGetPagingFileOffset @ 0x140344E64 (MiGetPagingFileOffset.c)
 *     MiIsPrototypePteVadLookup @ 0x140345200 (MiIsPrototypePteVadLookup.c)
 *     MiIsPageOnBadList @ 0x14034906C (MiIsPageOnBadList.c)
 *     MiLockLeafPage @ 0x140352AD0 (MiLockLeafPage.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     MiGetProtectionFromPte @ 0x1403ED7E0 (MiGetProtectionFromPte.c)
 *     MI_PFN_IS_PROTO @ 0x1403ED8B8 (MI_PFN_IS_PROTO.c)
 *     memmove @ 0x140408CC0 (memmove.c)
 *     MiWorkingSetInfoCheckPageTable @ 0x140541CD0 (MiWorkingSetInfoCheckPageTable.c)
 *     MiGetValidAweProtection @ 0x140546B08 (MiGetValidAweProtection.c)
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
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
  unsigned __int64 v24; // r9
  unsigned int v25; // ebx
  unsigned int v26; // ecx
  unsigned int v27; // eax
  unsigned __int64 v28; // r13
  char v29; // dl
  __int64 v30; // r15
  unsigned __int64 v31; // r12
  unsigned __int64 v32; // rbx
  __int64 v33; // rax
  __int64 v34; // r8
  unsigned __int64 v35; // r15
  __int64 v36; // rbx
  int v37; // eax
  int i; // r8d
  __int64 v39; // rdx
  unsigned __int64 j; // rcx
  __int64 v41; // rax
  __int64 v42; // r11
  __int64 v43; // r11
  __int64 v44; // rcx
  __int64 ProtoPteAddress; // rdx
  unsigned __int64 v46; // rbx
  __int64 v47; // r15
  __int64 v48; // rax
  __int64 v49; // rbx
  int PagingFileOffset; // eax
  int v51; // r13d
  unsigned __int64 v52; // rax
  __int64 v53; // rdx
  __int64 v54; // r9
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
  __int64 v72; // rdx
  __int64 v73; // r8
  __int64 v74; // r9
  char v75; // r11
  __int64 v76; // rcx
  unsigned __int64 v77; // r12
  unsigned __int64 v78; // rdx
  _QWORD *v79; // rcx
  unsigned __int64 v80; // rdx
  unsigned __int64 v81; // r8
  int ValidAweProtection; // eax
  unsigned __int64 v83; // rdx
  unsigned __int64 v84; // rsi
  __int64 v85; // rdx
  __int64 v86; // r8
  __int64 v87; // r9
  unsigned __int64 v88; // r11
  __int64 v89; // rbx
  __int64 v90; // rax
  bool v91; // zf
  unsigned __int64 v92; // rax
  ULONG_PTR v93; // rdx
  unsigned __int64 v94; // rsi
  __int64 v95; // r8
  int v96; // eax
  __int64 v97; // rdx
  __int64 v98; // rcx
  char v99; // si
  PVOID v100; // r15
  char v101; // [rsp+30h] [rbp-1C8h]
  __int64 v102; // [rsp+38h] [rbp-1C0h]
  unsigned __int64 valid; // [rsp+40h] [rbp-1B8h]
  ULONG_PTR v104; // [rsp+48h] [rbp-1B0h]
  ULONG_PTR BugCheckParameter2; // [rsp+50h] [rbp-1A8h]
  unsigned __int64 v106; // [rsp+58h] [rbp-1A0h]
  unsigned __int64 *v107; // [rsp+60h] [rbp-198h]
  unsigned __int64 v108; // [rsp+68h] [rbp-190h]
  __int64 v109; // [rsp+78h] [rbp-180h]
  unsigned int v110; // [rsp+80h] [rbp-178h] BYREF
  __int64 v111; // [rsp+88h] [rbp-170h] BYREF
  __int64 v112; // [rsp+90h] [rbp-168h]
  __int64 v113; // [rsp+98h] [rbp-160h] BYREF
  __int64 v114; // [rsp+A0h] [rbp-158h]
  ULONG_PTR BugCheckParameter1; // [rsp+A8h] [rbp-150h]
  unsigned __int64 *v116; // [rsp+B0h] [rbp-148h]
  unsigned __int64 v117; // [rsp+B8h] [rbp-140h] BYREF
  PVOID P; // [rsp+C0h] [rbp-138h]
  signed __int64 v119; // [rsp+C8h] [rbp-130h]
  void *v120; // [rsp+D0h] [rbp-128h]
  ULONG_PTR v121; // [rsp+D8h] [rbp-120h]
  unsigned __int64 v122; // [rsp+E0h] [rbp-118h]
  __int64 v123; // [rsp+E8h] [rbp-110h] BYREF
  unsigned __int64 v124; // [rsp+F0h] [rbp-108h]
  __int64 v125; // [rsp+F8h] [rbp-100h]
  _OWORD v126[3]; // [rsp+100h] [rbp-F8h] BYREF
  _BYTE Src[128]; // [rsp+130h] [rbp-C8h] BYREF

  v120 = (void *)a3;
  BugCheckParameter1 = a1;
  v121 = a1;
  v122 = a3;
  v113 = 0LL;
  v117 = 0LL;
  memset(v126, 0, sizeof(v126));
  v6 = 0;
  if ( a4 > 0xFFFFFFFF )
    return 3221225990LL;
  v8 = a4 >> 4;
  v106 = a4 >> 4;
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
    v107 = (unsigned __int64 *)Src;
    v116 = (unsigned __int64 *)Src;
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
    MiProbeAndLockPages(Pool, PreviousMode != 0, 1);
    if ( (v11->MdlFlags & 5) != 0 )
      MappedSystemVa = (unsigned __int64 *)v11->MappedSystemVa;
    else
      MappedSystemVa = (unsigned __int64 *)MmMapLockedPagesSpecifyCache(v11, 0, MmCached, 0LL, 0, 0x40000010u);
    v116 = MappedSystemVa;
    v107 = MappedSystemVa;
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
    KiStackAttachProcess((_KPROCESS *)BugCheckParameter1, 0LL, (__int64)v126, (_DWORD *)BugCheckParameter1);
    v6 = 1;
    v14 = BugCheckParameter1;
  }
  v15 = 0LL;
  BugCheckParameter2 = 0LL;
  v16 = v14 + 1664;
  v102 = v14 + 1664;
  v17 = 17;
  v101 = 17;
  v18 = 0LL;
  valid = 0LL;
  v19 = 0LL;
  v104 = 0LL;
  v110 = 0;
  v20 = a2;
  do
  {
    v21 = 0LL;
    v114 = 0LL;
    v6 &= ~4u;
    v22 = *MappedSystemVa;
    v108 = *MappedSystemVa;
    v23 = 0x7FFFFFFEFFFFLL;
    if ( *MappedSystemVa > 0x7FFFFFFEFFFFLL )
      goto LABEL_204;
    v24 = v22 >> 12;
    v124 = v22 >> 12;
    if ( !v15 )
      goto LABEL_230;
    if ( v24 < (*((unsigned int *)v15 + 6) | ((unsigned __int64)*((unsigned __int8 *)v15 + 32) << 32))
      || v24 > (*((unsigned int *)v15 + 7) | ((unsigned __int64)*((unsigned __int8 *)v15 + 33) << 32)) )
    {
      if ( v19 )
      {
        MiLockProtoPage(0LL, v19, v17);
        v104 = 0LL;
        v17 = v101;
        v16 = v102;
      }
      if ( v17 != 17 )
      {
        if ( v18 )
        {
          MiUnlockPageTableInternal(v16, v18, v16);
          v18 = 0LL;
          valid = 0LL;
          v17 = v101;
        }
        MiUnlockWorkingSetShared(v102, v17);
        v101 = 17;
      }
      MiUnlockAndDereferenceVadShared((char *)v15);
      v15 = 0LL;
      BugCheckParameter2 = 0LL;
    }
    v22 = v108;
    if ( !v15 )
    {
LABEL_230:
      v15 = MiObtainReferencedVadEx(v22, 2, (int *)&v110);
      BugCheckParameter2 = (ULONG_PTR)v15;
      if ( !v15 )
      {
        v25 = v110;
        if ( v110 == -1073741558 )
          goto LABEL_213;
LABEL_201:
        v18 = valid;
        goto LABEL_202;
      }
    }
    v23 = v108;
    if ( ((v108 & 0xFFFFFFFFFFFFF000uLL) == 0x7FFE0000
       || (v108 & 0xFFFFFFFFFFFFF000uLL) == qword_140C4DD88 && qword_140C4DD88)
      && (*(_DWORD *)(BugCheckParameter1 + 2172) & 1) == 0 )
    {
      v6 |= 4u;
    }
    if ( (v15[12] & 0x70) == 0x10 )
    {
      v21 = (16LL * (MmProtectToValue[((unsigned __int64)*((unsigned int *)v15 + 12) >> 7) & 0x1F] & 0x7FF)) | 0x400001;
LABEL_202:
      v19 = v104;
      v16 = v102;
LABEL_203:
      v17 = v101;
      v20 = a2;
LABEL_204:
      v92 = v106;
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
    if ( (v6 & 2) != 0 && v101 != 17 )
    {
      if ( v18 )
      {
        MiUnlockPageTableInternal(v102, v18, v16);
        v18 = 0LL;
        valid = 0LL;
      }
      MiUnlockWorkingSetShared(v102, v101);
      v101 = 17;
      v23 = v108;
    }
    v28 = ((v23 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v119 = v28;
    v29 = v101;
    if ( v101 != 17 )
    {
      if ( (((_BYTE)v28 + 8) & 0x78) == 0 && MiWorkingSetIsContended(v102) || KeShouldYieldProcessor() )
      {
        if ( v18 )
        {
          MiUnlockPageTableInternal(v102, v18, v16);
          v18 = 0LL;
          valid = 0LL;
        }
        MiUnlockWorkingSetShared(v102, v101);
        v29 = 17;
        v101 = 17;
      }
      else
      {
        v29 = v101;
      }
    }
    v30 = ((v28 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v109 = v30;
    while ( 1 )
    {
      if ( v29 == 17 )
        v101 = MiLockWorkingSetShared(v102);
      v31 = -1LL;
      v112 = -1LL;
      v21 = 0LL;
      v114 = 0LL;
      if ( v18 == v30 )
      {
        v32 = v28;
        v117 = v28;
      }
      else
      {
        if ( v18 )
          MiUnlockPageTableInternal(v102, v18, v16);
        valid = MiLockLowestValidPageTable(v102, v28, &v117);
        v32 = v117;
      }
      v33 = MI_READ_PTE_LOCK_FREE(v32);
      v35 = v33;
      v111 = v33;
      if ( !v33 )
      {
        v36 = 0LL;
        v37 = v6 & 2;
        if ( (v6 & 2) == 0 )
          goto LABEL_101;
        goto LABEL_86;
      }
      if ( (v33 & 1) == 0 || (v33 & 0x80u) == 0LL )
      {
        if ( valid != v109 )
        {
          if ( (unsigned int)MiWorkingSetInfoCheckPageTable(v102, v32, (unsigned int)&v113, a2, v101) == 1 )
          {
            v18 = 0LL;
            valid = 0LL;
            goto LABEL_83;
          }
          v21 = v114;
        }
        v37 = v6 & 2;
LABEL_86:
        v23 = v108;
        goto LABEL_87;
      }
      v31 = ((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v111) >> 12) & 0xFFFFFFFFFLL;
      v112 = v31;
      for ( i = -1; v32 >= 0xFFFFF68000000000uLL; ++i )
      {
        if ( v32 > 0xFFFFF6FFFFFFFFFFuLL )
          break;
        v32 = (__int64)(v32 << 25) >> 16;
      }
      v39 = 1LL;
      v23 = v108;
      for ( j = v108 >> 12; i; --i )
      {
        v31 += v39 * (j & 0x1FF);
        j >>= 9;
        v39 <<= 9;
      }
      v21 = 8388609LL;
      v114 = 8388609LL;
      v37 = v6 & 2;
LABEL_87:
      v16 = v112;
      if ( v112 != -1 )
        goto LABEL_156;
      if ( v37 )
      {
        v15 = (volatile signed __int32 *)BugCheckParameter2;
        v18 = valid;
        goto LABEL_41;
      }
      v18 = valid;
      if ( valid != ((v23 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL )
      {
        v15 = (volatile signed __int32 *)BugCheckParameter2;
        goto LABEL_98;
      }
      v41 = MI_READ_PTE_LOCK_FREE(v28);
      v35 = v41;
      v111 = v41;
      if ( (v41 & 1) != 0 )
        break;
      v36 = v41;
      if ( (v41 & 0x400) != 0 )
      {
        v44 = BugCheckParameter2;
        goto LABEL_105;
      }
      if ( (v41 & 0x800) == 0 )
      {
        if ( (unsigned int)MiGetPagingFileOffset((unsigned __int64)&v111) )
        {
          v21 = v21 & 0xFFFFFFFFFF3FFFFFuLL | 0x800000;
          goto LABEL_96;
        }
        if ( v35 )
          goto LABEL_96;
LABEL_101:
        v44 = BugCheckParameter2;
        if ( (v6 & 4) == 0 && (*(_DWORD *)(BugCheckParameter2 + 48) & 0x100000) != 0 )
        {
          v15 = (volatile signed __int32 *)BugCheckParameter2;
          goto LABEL_97;
        }
LABEL_105:
        ProtoPteAddress = 0LL;
        if ( (v6 & 4) != 0 )
        {
          ProtoPteAddress = qword_140C4DD80;
          if ( (v108 & 0xFFFFFFFFFFFFF000uLL) == 0x7FFE0000 )
            ProtoPteAddress = qword_140C4DD78;
          goto LABEL_108;
        }
        if ( (*(_DWORD *)(v44 + 48) & 0x100000) != 0 )
        {
          if ( !qword_140C4DE80 )
            goto LABEL_119;
          if ( (v36 & 0x10) == 0 )
          {
            v36 &= ~qword_140C4DE80;
            goto LABEL_119;
          }
        }
        else
        {
          ProtoPteAddress = MiGetProtoPteAddress(v44, v108 >> 12, 0, &v123);
          if ( !v36 || MiIsPrototypePteVadLookup(v35) )
          {
LABEL_108:
            v46 = ProtoPteAddress;
LABEL_120:
            if ( !v46 )
              goto LABEL_96;
            v21 |= 0x8000uLL;
            v114 = v21;
            if ( v46 == ProtoPteAddress )
            {
              v21 |= 0x40000000uLL;
              v114 = v21;
            }
            if ( ((v46 ^ v104) & 0xFFFFFFFFFFFFF000uLL) == 0 )
            {
              v47 = MiLockLeafPage(v46, 0LL);
              v48 = MI_READ_PTE_LOCK_FREE(v46);
              v49 = v48;
              v111 = v48;
              if ( v47 )
              {
                MiQueryPfn((v47 + 0x58000000000LL) / 48, (__int64)&v113);
                _InterlockedAnd64((volatile signed __int64 *)(v47 + 24), 0x7FFFFFFFFFFFFFFFuLL);
LABEL_95:
                v21 = v114;
LABEL_96:
                v15 = (volatile signed __int32 *)BugCheckParameter2;
LABEL_97:
                v18 = valid;
LABEL_98:
                MappedSystemVa = v107;
                goto LABEL_202;
              }
              if ( (v48 & 0x400) != 0 || (v48 & 0x800) != 0 || !MiInvalidPteConforms(v48) )
                goto LABEL_96;
              PagingFileOffset = MiGetPagingFileOffset((unsigned __int64)&v111);
              MappedSystemVa = v107;
              v15 = (volatile signed __int32 *)BugCheckParameter2;
              v17 = v101;
              v16 = v102;
              v19 = v104;
              v20 = a2;
              if ( PagingFileOffset )
                v21 = v21 & 0xFFFFFFFFFF3FFFFFuLL | 0x800000;
              else
                v21 &= -(__int64)(v49 != 0);
              v18 = valid;
              goto LABEL_204;
            }
            if ( valid )
            {
              MiUnlockPageTableInternal(v102, valid, v34);
              valid = 0LL;
            }
            v104 = MiLockProtoPage(v46, v104, v101);
            goto LABEL_127;
          }
          if ( !qword_140C4DE80 )
          {
LABEL_119:
            v46 = v36 >> 16;
            goto LABEL_120;
          }
          if ( (v36 & 0x10) == 0 )
          {
            v36 &= ~qword_140C4DE80;
            goto LABEL_119;
          }
        }
        v36 &= ~0x10uLL;
        goto LABEL_119;
      }
      v42 = MiLockTransitionLeafPage(v28, 0LL);
      if ( v42 )
      {
        MiQueryPfn((v42 + 0x58000000000LL) / 48, (__int64)&v113);
        _InterlockedAnd64((volatile signed __int64 *)(v43 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        goto LABEL_95;
      }
LABEL_127:
      v18 = valid;
LABEL_83:
      v30 = v109;
      v29 = v101;
    }
    v21 |= 1uLL;
    v51 = *(_DWORD *)(BugCheckParameter2 + 48);
    if ( (v51 & 0x70) == 0x40 )
    {
      v52 = MI_READ_PTE_LOCK_FREE((unsigned __int64)&v111);
      v55 = 48 * ((v52 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL;
      v56 = v21;
      if ( ((*(_QWORD *)(48 * ((v52 >> 12) & 0xFFFFFFFFFLL) - 0x57FFFFFFFD8LL) >> 50) & 1) != 0 )
      {
        v57 = v35;
        if ( (*(_BYTE *)(v55 + 35) & 0x40) != 0 || (unsigned int)MiIsPageOnBadList(v55, v53, v35, v54) )
        {
          v21 |= 0x80000000uLL;
          LOWORD(v35) = v57;
          v56 = v21;
        }
      }
      if ( MiRotatedToFrameBuffer(v119) )
      {
        v58 = (v35 & 0x800) != 0 ? 4 : 1;
        v59 = v51 & 0xC00;
        if ( v59 == 3072 && (v51 & 0x380) != 0 )
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
    v31 = ((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v111) >> 12) & 0xFFFFFFFFFLL;
    v16 = v112;
LABEL_156:
    v119 = 48 * v31;
    v63 = 48 * v31 - 0x58000000000LL;
    v64 = v63;
    v112 = v63;
    if ( (*(_QWORD *)(v63 + 40) & 0x1000000000LL) != 0 )
    {
      v65 = v31 & 0xFFFFFFFFFFFFFFF0uLL;
      if ( v16 != -1 )
        v65 = v16;
      v64 = 48 * v65 - 0x58000000000LL;
      v112 = v64;
    }
    v66 = MI_PFN_IS_PROTO(v64, v64, v16);
    v68 = MiGetPfnPriority(v67);
    v71 = MiSearchNumaNodeTable((v69 - v70) / 48);
    v75 = 7;
    v76 = v71[1] & 0x3F;
    v77 = v21 & 0xFFFFFFFFF8C07FFFuLL | ((v66 & 1 | (2 * (v76 | ((unsigned __int64)(v68 & 7) << 8)))) << 15);
    if ( (*(_BYTE *)(v63 + 35) & 0x40) != 0 || (unsigned int)MiIsPageOnBadList(v63, v72, v73, v74) )
      v77 |= 0x80000000uLL;
    if ( (v77 & 0x800000) != 0 || (v78 = *(_QWORD *)(v63 + 40), (v78 & 0x1000000000LL) != 0) )
    {
LABEL_193:
      v93 = v35;
      v15 = (volatile signed __int32 *)BugCheckParameter2;
      v94 = v77 ^ ((unsigned __int16)v77 ^ (unsigned __int16)(16
                                                            * MmProtectToValue[(unsigned int)MiGetProtectionFromPte(
                                                                                               BugCheckParameter2,
                                                                                               v93)])) & 0x7FF0;
      if ( (*(_DWORD *)(BugCheckParameter2 + 48) & 0x1100000) == 0x1100000 )
        v94 &= 0xFFFFFFF0FFFFFFFFuLL;
      v21 = v94 | 0x400000;
      v96 = MI_PFN_IS_PROTO(v112, v21, v95);
      MappedSystemVa = v107;
      v18 = valid;
      v16 = v102;
      v19 = v104;
      if ( v96 )
      {
        v99 = 7;
        if ( (*(_QWORD *)(v98 + 24) & 0x3FFFFFFFFFFFFFFFuLL) < 7 )
          v99 = *(_BYTE *)(v98 + 24);
        v21 = v97 & 0xFFFFFFFFFFFFFFF1uLL | (2 * (v99 & 7 | 0x20000000LL));
      }
      goto LABEL_203;
    }
    if ( (*(_QWORD *)&v75 & (v78 >> 60)) == 1 )
    {
      if ( !(unsigned int)MI_PFN_IS_PROTO(v63, 1LL, v73) )
      {
        v79 = (_QWORD *)qword_140C4EDC0;
        if ( !qword_140C4EDC0 )
          goto LABEL_177;
        v80 = v119 / 48;
        v125 = v119 / 48;
        while ( v79 )
        {
          v81 = v79[3];
          if ( v80 < v81 )
          {
            v79 = (_QWORD *)*v79;
          }
          else
          {
            if ( v80 - v81 < v79[4] )
              break;
            v79 = (_QWORD *)v79[1];
          }
        }
        if ( v79 )
        {
          ValidAweProtection = (*(_DWORD *)(v63 + 16) >> 5) & 0x1F;
          v15 = (volatile signed __int32 *)BugCheckParameter2;
        }
        else
        {
LABEL_177:
          v83 = v35;
          v15 = (volatile signed __int32 *)BugCheckParameter2;
          ValidAweProtection = MiGetValidAweProtection(BugCheckParameter2, v83);
        }
        v84 = v77 ^ ((unsigned __int16)v77 ^ (unsigned __int16)(16 * MmProtectToValue[ValidAweProtection])) & 0x7FF0;
        v23 = 17825792LL;
        if ( (v15[12] & 0x1100000) == 0x1100000 )
          v84 &= 0xFFFFFFF0FFFFFFFFuLL;
        v21 = v84 | 0x400000;
        goto LABEL_97;
      }
      goto LABEL_193;
    }
    if ( (MiGetWsleContents(v76, v108) & 0xF) == 8 )
      v77 |= 0x400000uLL;
    if ( !(unsigned int)MI_PFN_IS_PROTO(v63, v85, v86) )
    {
      v21 = v77 & 0xFFFFFFFFFFFF8001uLL | (16LL * (MmProtectToValue[(*(_DWORD *)(v63 + 16) >> 5) & 0x1F] & 0x7FF));
      v15 = (volatile signed __int32 *)BugCheckParameter2;
      v23 = 17825792LL;
      MappedSystemVa = v107;
      v18 = valid;
      v17 = v101;
      v16 = v102;
      v19 = v104;
      v20 = a2;
      if ( (*(_DWORD *)(BugCheckParameter2 + 48) & 0x1100000) == 0x1100000 )
        v21 &= 0xFFFFFFF0FFFFFFFFuLL;
      goto LABEL_204;
    }
    LOBYTE(v89) = v88;
    if ( (*(_QWORD *)(v63 + 24) & 0x3FFFFFFFFFFFFFFFuLL) < v88 )
      v89 = *(_QWORD *)(v63 + 24) & 0x3FFFFFFFFFFFFFFFLL;
    v21 = v77 & 0xFFFFFFFFFFFF8001uLL | (2
                                       * (v89 & 7 | (8LL
                                                   * (MmProtectToValue[(unsigned int)MiGetPfnProtection(
                                                                                       0x3FFFFFFFFFFFFFFFLL,
                                                                                       v87,
                                                                                       v63)] & 0x7FF))));
    v15 = (volatile signed __int32 *)BugCheckParameter2;
    if ( (v6 & 4) != 0 )
    {
      v21 |= 0x40000000uLL;
      goto LABEL_97;
    }
    if ( (*(_DWORD *)(BugCheckParameter2 + 48) & 0x100000) != 0 )
    {
      MappedSystemVa = v107;
      goto LABEL_201;
    }
    v90 = MiGetProtoPteAddress(BugCheckParameter2, v124, 0, &v123);
    MappedSystemVa = v107;
    v18 = valid;
    v17 = v101;
    v16 = v102;
    v19 = v104;
    v91 = v90 == (*(_QWORD *)(v63 + 8) | 0x8000000000000000uLL);
    v92 = v106;
    v20 = a2;
    if ( v91 )
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
    v107 = MappedSystemVa;
    v116 = MappedSystemVa;
    v106 = v92 - 1;
  }
  while ( v92 != 1 );
  v25 = 0;
LABEL_213:
  if ( v101 != 17 )
  {
    if ( valid )
      MiUnlockPageTableInternal(v102, valid, v16);
    MiUnlockWorkingSetShared(v102, v101);
  }
  if ( v104 )
    MiLockProtoPage(0LL, v104, 0x11u);
  if ( v15 )
    MiUnlockAndDereferenceVadShared((char *)v15);
  if ( (v6 & 1) != 0 )
    KiUnstackDetachProcess((__int64)v126, 0LL, v16, (_DWORD *)v23);
  v100 = P;
  if ( P )
  {
    MmUnlockPages((PMDL)P);
    ExFreePoolWithTag(v100, 0);
  }
  else
  {
    memmove(v120, Src, ((char *)MappedSystemVa - Src) & 0xFFFFFFFFFFFFFFF0uLL);
  }
  return v25;
}
