/*
 * XREFs of MiGetWorkingSetInfoList @ 0x1403186FC
 * Callers:
 *     MmQueryVirtualMemory @ 0x1405FF9D0 (MmQueryVirtualMemory.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x140205370 (KiUnstackDetachProcess.c)
 *     MiObtainReferencedVadEx @ 0x14020E520 (MiObtainReferencedVadEx.c)
 *     MmMapLockedPagesSpecifyCache @ 0x14021BA60 (MmMapLockedPagesSpecifyCache.c)
 *     MiInvalidPteConforms @ 0x14022A870 (MiInvalidPteConforms.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140238530 (MI_READ_PTE_LOCK_FREE.c)
 *     MiSearchNumaNodeTable @ 0x14023A180 (MiSearchNumaNodeTable.c)
 *     MiAllocatePool @ 0x140247F80 (MiAllocatePool.c)
 *     MiUnlockAndDereferenceVadShared @ 0x14024B570 (MiUnlockAndDereferenceVadShared.c)
 *     MiProbeAndLockPages @ 0x14024D8E0 (MiProbeAndLockPages.c)
 *     KiStackAttachProcess @ 0x14024F890 (KiStackAttachProcess.c)
 *     MiGetPfnProtection @ 0x140253B70 (MiGetPfnProtection.c)
 *     MiLockTransitionLeafPage @ 0x140253D18 (MiLockTransitionLeafPage.c)
 *     MiLockLowestValidPageTable @ 0x140253FC0 (MiLockLowestValidPageTable.c)
 *     MiGetWsleContents @ 0x140256CF0 (MiGetWsleContents.c)
 *     MiWorkingSetIsContended @ 0x1402589C0 (MiWorkingSetIsContended.c)
 *     MiUnlockPageTableInternal @ 0x140278B10 (MiUnlockPageTableInternal.c)
 *     MmUnlockPages @ 0x140283990 (MmUnlockPages.c)
 *     MiGetProtoPteAddress @ 0x14029A830 (MiGetProtoPteAddress.c)
 *     MiUnlockWorkingSetShared @ 0x1402A1770 (MiUnlockWorkingSetShared.c)
 *     MiGetPfnPriority @ 0x1402AAA70 (MiGetPfnPriority.c)
 *     MiLockWorkingSetShared @ 0x1402AC150 (MiLockWorkingSetShared.c)
 *     MiLockLeafPage @ 0x1402F6AF0 (MiLockLeafPage.c)
 *     MiGetPagingFileOffset @ 0x140315B24 (MiGetPagingFileOffset.c)
 *     MiIsPrototypePteVadLookup @ 0x140315EC0 (MiIsPrototypePteVadLookup.c)
 *     MiIsPageOnBadList @ 0x140319D2C (MiIsPageOnBadList.c)
 *     KeShouldYieldProcessor @ 0x140327BB0 (KeShouldYieldProcessor.c)
 *     MiRotatedToFrameBuffer @ 0x14033CD08 (MiRotatedToFrameBuffer.c)
 *     MiLockProtoPage @ 0x140352790 (MiLockProtoPage.c)
 *     MiQueryPfn @ 0x140357C78 (MiQueryPfn.c)
 *     __security_check_cookie @ 0x1403CCE60 (__security_check_cookie.c)
 *     MiGetProtectionFromPte @ 0x1403EE8A0 (MiGetProtectionFromPte.c)
 *     MI_PFN_IS_PROTO @ 0x1403EEC18 (MI_PFN_IS_PROTO.c)
 *     memmove @ 0x140409FC0 (memmove.c)
 *     MiWorkingSetInfoCheckPageTable @ 0x140542320 (MiWorkingSetInfoCheckPageTable.c)
 *     MiGetValidAweProtection @ 0x140547158 (MiGetValidAweProtection.c)
 *     ExFreePoolWithTag @ 0x1409B1140 (ExFreePoolWithTag.c)
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
  __int64 v19; // r10
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
  __int64 v55; // rdx
  __int64 v56; // r9
  __int64 v57; // rbx
  __int64 v58; // r12
  __int16 v59; // r8
  int v60; // r8d
  int v61; // eax
  char PfnPriority; // si
  __int64 v63; // rsi
  __int64 v64; // rax
  __int64 v65; // r13
  __int64 v66; // rdx
  unsigned __int64 v67; // r12
  char v68; // bl
  __int64 v69; // rcx
  char v70; // r12
  __int64 v71; // rdx
  __int64 v72; // r9
  _QWORD *v73; // rax
  __int64 v74; // rdx
  __int64 v75; // r8
  __int64 v76; // r9
  char v77; // r11
  __int64 v78; // rcx
  unsigned __int64 v79; // r12
  unsigned __int64 v80; // rdx
  _QWORD *v81; // rcx
  unsigned __int64 v82; // rdx
  unsigned __int64 v83; // r8
  int ValidAweProtection; // eax
  unsigned __int64 v85; // rdx
  unsigned __int64 v86; // rsi
  __int64 v87; // r9
  unsigned __int64 v88; // r11
  __int64 v89; // rbx
  __int64 v90; // rax
  bool v91; // zf
  unsigned __int64 v92; // rax
  ULONG_PTR v93; // rdx
  unsigned __int64 v94; // rsi
  int v95; // eax
  __int64 v96; // rdx
  __int64 v97; // rcx
  char v98; // si
  PVOID v99; // r15
  char v100; // [rsp+30h] [rbp-1C8h]
  __int64 v101; // [rsp+38h] [rbp-1C0h]
  unsigned __int64 valid; // [rsp+40h] [rbp-1B8h]
  __int64 v103; // [rsp+48h] [rbp-1B0h]
  ULONG_PTR BugCheckParameter2; // [rsp+50h] [rbp-1A8h]
  unsigned __int64 v105; // [rsp+58h] [rbp-1A0h]
  unsigned __int64 *v106; // [rsp+60h] [rbp-198h]
  unsigned __int64 v107; // [rsp+68h] [rbp-190h]
  __int64 v108; // [rsp+78h] [rbp-180h]
  unsigned int v109; // [rsp+80h] [rbp-178h] BYREF
  __int64 v110; // [rsp+88h] [rbp-170h] BYREF
  __int64 v111; // [rsp+90h] [rbp-168h]
  __int64 v112; // [rsp+98h] [rbp-160h] BYREF
  __int64 v113; // [rsp+A0h] [rbp-158h]
  ULONG_PTR BugCheckParameter1; // [rsp+A8h] [rbp-150h]
  unsigned __int64 *v115; // [rsp+B0h] [rbp-148h]
  unsigned __int64 v116; // [rsp+B8h] [rbp-140h] BYREF
  PVOID P; // [rsp+C0h] [rbp-138h]
  __int64 v118; // [rsp+C8h] [rbp-130h]
  void *v119; // [rsp+D0h] [rbp-128h]
  ULONG_PTR v120; // [rsp+D8h] [rbp-120h]
  unsigned __int64 v121; // [rsp+E0h] [rbp-118h]
  __int64 v122; // [rsp+E8h] [rbp-110h] BYREF
  unsigned __int64 v123; // [rsp+F0h] [rbp-108h]
  __int64 v124; // [rsp+F8h] [rbp-100h]
  _OWORD v125[3]; // [rsp+100h] [rbp-F8h] BYREF
  _BYTE Src[128]; // [rsp+130h] [rbp-C8h] BYREF

  v119 = (void *)a3;
  BugCheckParameter1 = a1;
  v120 = a1;
  v121 = a3;
  v112 = 0LL;
  v116 = 0LL;
  memset(v125, 0, sizeof(v125));
  v6 = 0;
  if ( a4 > 0xFFFFFFFF )
    return 3221225990LL;
  v8 = a4 >> 4;
  v105 = a4 >> 4;
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
    v106 = (unsigned __int64 *)Src;
    v115 = (unsigned __int64 *)Src;
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
    v115 = MappedSystemVa;
    v106 = MappedSystemVa;
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
    KiStackAttachProcess((_KPROCESS *)BugCheckParameter1, 0LL, (__int64)v125);
    v6 = 1;
    v14 = BugCheckParameter1;
  }
  v15 = 0LL;
  BugCheckParameter2 = 0LL;
  v16 = v14 + 1664;
  v101 = v14 + 1664;
  v17 = 17;
  v100 = 17;
  v18 = 0LL;
  valid = 0LL;
  v19 = 0LL;
  v103 = 0LL;
  v109 = 0;
  v20 = a2;
  do
  {
    v21 = 0LL;
    v113 = 0LL;
    v6 &= ~4u;
    v22 = *MappedSystemVa;
    v107 = *MappedSystemVa;
    if ( *MappedSystemVa > 0x7FFFFFFEFFFFLL )
      goto LABEL_204;
    v23 = v22 >> 12;
    v123 = v22 >> 12;
    if ( !v15 )
      goto LABEL_230;
    if ( v23 < (*((unsigned int *)v15 + 6) | ((unsigned __int64)*((unsigned __int8 *)v15 + 32) << 32))
      || v23 > (*((unsigned int *)v15 + 7) | ((unsigned __int64)*((unsigned __int8 *)v15 + 33) << 32)) )
    {
      if ( v19 )
      {
        MiLockProtoPage(0LL);
        v103 = 0LL;
        v17 = v100;
        v16 = v101;
      }
      if ( v17 != 17 )
      {
        if ( v18 )
        {
          MiUnlockPageTableInternal(v16, v18);
          v18 = 0LL;
          valid = 0LL;
          v17 = v100;
        }
        MiUnlockWorkingSetShared(v101, v17);
        v100 = 17;
      }
      MiUnlockAndDereferenceVadShared((char *)v15);
      v15 = 0LL;
      BugCheckParameter2 = 0LL;
    }
    v22 = v107;
    if ( !v15 )
    {
LABEL_230:
      v15 = MiObtainReferencedVadEx(v22, 2, (int *)&v109);
      BugCheckParameter2 = (ULONG_PTR)v15;
      if ( !v15 )
      {
        v24 = v109;
        if ( v109 == -1073741558 )
          goto LABEL_213;
LABEL_201:
        v18 = valid;
        goto LABEL_202;
      }
    }
    v25 = v107;
    if ( ((v107 & 0xFFFFFFFFFFFFF000uLL) == 0x7FFE0000
       || (v107 & 0xFFFFFFFFFFFFF000uLL) == qword_140C4DC48 && qword_140C4DC48)
      && (*(_DWORD *)(BugCheckParameter1 + 2172) & 1) == 0 )
    {
      v6 |= 4u;
    }
    if ( (v15[12] & 0x70) == 0x10 )
    {
      v21 = (16LL * (MmProtectToValue[((unsigned __int64)*((unsigned int *)v15 + 12) >> 7) & 0x1F] & 0x7FF)) | 0x400001;
LABEL_202:
      v19 = v103;
      v16 = v101;
LABEL_203:
      v17 = v100;
      v20 = a2;
LABEL_204:
      v92 = v105;
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
    if ( (v6 & 2) != 0 && v100 != 17 )
    {
      if ( v18 )
      {
        MiUnlockPageTableInternal(v101, v18);
        v18 = 0LL;
        valid = 0LL;
      }
      MiUnlockWorkingSetShared(v101, v100);
      v100 = 17;
      v25 = v107;
    }
    v28 = ((v25 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v118 = v28;
    v29 = v100;
    if ( v100 != 17 )
    {
      if ( (((_BYTE)v28 + 8) & 0x78) == 0 && MiWorkingSetIsContended(v101) || KeShouldYieldProcessor() )
      {
        if ( v18 )
        {
          MiUnlockPageTableInternal(v101, v18);
          v18 = 0LL;
          valid = 0LL;
        }
        MiUnlockWorkingSetShared(v101, v100);
        v29 = 17;
        v100 = 17;
      }
      else
      {
        v29 = v100;
      }
    }
    v30 = ((v28 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v108 = v30;
    while ( 1 )
    {
      if ( v29 == 17 )
        v100 = MiLockWorkingSetShared(v101);
      v31 = -1LL;
      v111 = -1LL;
      v21 = 0LL;
      v113 = 0LL;
      if ( v18 == v30 )
      {
        v32 = v28;
        v116 = v28;
      }
      else
      {
        if ( v18 )
          MiUnlockPageTableInternal(v101, v18);
        valid = MiLockLowestValidPageTable(v101, v28, &v116);
        v32 = v116;
      }
      v33 = MI_READ_PTE_LOCK_FREE(v32);
      v36 = v33;
      v110 = v33;
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
        if ( valid != v108 )
        {
          if ( (unsigned int)MiWorkingSetInfoCheckPageTable(v101, v32, (unsigned int)&v112, a2, v100) == 1 )
          {
            v18 = 0LL;
            valid = 0LL;
            goto LABEL_83;
          }
          v21 = v113;
        }
        v38 = v6 & 2;
LABEL_86:
        v25 = v107;
        goto LABEL_87;
      }
      v31 = ((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v110) >> 12) & 0xFFFFFFFFFLL;
      v111 = v31;
      for ( i = -1; v32 >= 0xFFFFF68000000000uLL; ++i )
      {
        if ( v32 > 0xFFFFF6FFFFFFFFFFuLL )
          break;
        v32 = (__int64)(v32 << 25) >> 16;
      }
      v40 = 1LL;
      v25 = v107;
      for ( j = v107 >> 12; i; --i )
      {
        v31 += v40 * (j & 0x1FF);
        j >>= 9;
        v40 <<= 9;
      }
      v21 = 8388609LL;
      v113 = 8388609LL;
      v38 = v6 & 2;
LABEL_87:
      v42 = v111;
      if ( v111 != -1 )
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
      v110 = v43;
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
        if ( (unsigned int)MiGetPagingFileOffset((unsigned __int64)&v110) )
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
          ProtoPteAddress = qword_140C4DC40;
          if ( (v107 & 0xFFFFFFFFFFFFF000uLL) == 0x7FFE0000 )
            ProtoPteAddress = qword_140C4DC38;
          goto LABEL_108;
        }
        if ( (*(_DWORD *)(v46 + 48) & 0x100000) != 0 )
        {
          if ( !qword_140C4DD40 )
            goto LABEL_119;
          if ( (v37 & 0x10) == 0 )
          {
            v37 &= ~qword_140C4DD40;
            goto LABEL_119;
          }
        }
        else
        {
          ProtoPteAddress = MiGetProtoPteAddress(v46, v107 >> 12, 0, &v122);
          if ( !v37 || MiIsPrototypePteVadLookup(v36) )
          {
LABEL_108:
            v48 = ProtoPteAddress;
LABEL_120:
            if ( !v48 )
              goto LABEL_96;
            v21 |= 0x8000uLL;
            v113 = v21;
            if ( v48 == ProtoPteAddress )
            {
              v21 |= 0x40000000uLL;
              v113 = v21;
            }
            if ( ((v48 ^ v103) & 0xFFFFFFFFFFFFF000uLL) == 0 )
            {
              v49 = MiLockLeafPage((__int64 *)v48, 0, v34, v35);
              v50 = MI_READ_PTE_LOCK_FREE(v48);
              v51 = v50;
              v110 = v50;
              if ( v49 )
              {
                MiQueryPfn((v49 + 0x58000000000LL) / 48, &v112);
                _InterlockedAnd64((volatile signed __int64 *)(v49 + 24), 0x7FFFFFFFFFFFFFFFuLL);
LABEL_95:
                v21 = v113;
LABEL_96:
                v15 = (volatile signed __int32 *)BugCheckParameter2;
LABEL_97:
                v18 = valid;
LABEL_98:
                MappedSystemVa = v106;
                goto LABEL_202;
              }
              if ( (v50 & 0x400) != 0 || (v50 & 0x800) != 0 || !MiInvalidPteConforms(v50) )
                goto LABEL_96;
              PagingFileOffset = MiGetPagingFileOffset((unsigned __int64)&v110);
              MappedSystemVa = v106;
              v15 = (volatile signed __int32 *)BugCheckParameter2;
              v17 = v100;
              v16 = v101;
              v19 = v103;
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
              MiUnlockPageTableInternal(v101, valid);
              valid = 0LL;
            }
            v103 = MiLockProtoPage(v48);
            goto LABEL_127;
          }
          if ( !qword_140C4DD40 )
          {
LABEL_119:
            v48 = v37 >> 16;
            goto LABEL_120;
          }
          if ( (v37 & 0x10) == 0 )
          {
            v37 &= ~qword_140C4DD40;
            goto LABEL_119;
          }
        }
        v37 &= ~0x10uLL;
        goto LABEL_119;
      }
      v44 = MiLockTransitionLeafPage(v28, 0LL);
      if ( v44 )
      {
        MiQueryPfn((v44 + 0x58000000000LL) / 48, &v112);
        _InterlockedAnd64((volatile signed __int64 *)(v45 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        goto LABEL_95;
      }
LABEL_127:
      v18 = valid;
LABEL_83:
      v30 = v108;
      v29 = v100;
    }
    v21 |= 1uLL;
    v53 = *(_DWORD *)(BugCheckParameter2 + 48);
    if ( (v53 & 0x70) == 0x40 )
    {
      v54 = MI_READ_PTE_LOCK_FREE((unsigned __int64)&v110);
      v57 = 48 * ((v54 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL;
      v58 = v21;
      if ( ((*(_QWORD *)(48 * ((v54 >> 12) & 0xFFFFFFFFFLL) - 0x57FFFFFFFD8LL) >> 50) & 1) != 0 )
      {
        v59 = v36;
        if ( (*(_BYTE *)(v57 + 35) & 0x40) != 0 || (unsigned int)MiIsPageOnBadList(v57, v55, v36, v56) )
        {
          v21 |= 0x80000000uLL;
          LOWORD(v36) = v59;
          v58 = v21;
        }
      }
      if ( (unsigned int)MiRotatedToFrameBuffer(v118) )
      {
        v60 = (v36 & 0x800) != 0 ? 4 : 1;
        v61 = v53 & 0xC00;
        if ( v61 == 3072 && (v53 & 0x380) != 0 )
        {
          v60 |= 0x18u;
        }
        else if ( v61 == 1024 )
        {
          v60 |= 8u;
        }
      }
      else
      {
        PfnPriority = MiGetPfnPriority(v57);
        v21 = v58 & 0xFFFFFFFFF8C0FFFFuLL | ((MiSearchNumaNodeTable((v57 + 0x58000000000LL) / 48)[1] & 0x3F | ((unsigned __int64)(PfnPriority & 7) << 8)) << 16);
        v60 = (*(_DWORD *)(v57 + 16) >> 5) & 0x1F;
        if ( (*(_QWORD *)(v57 + 40) & 0x1000000000LL) == 0 && *(__int64 *)(v57 + 8) > 0 )
        {
          v63 = v21 | 0x8000;
          LOBYTE(v64) = 7;
          if ( (*(_QWORD *)(v57 + 24) & 0x3FFFFFFFFFFFFFFFuLL) < 7 )
            v64 = *(_QWORD *)(v57 + 24) & 0x3FFFFFFFFFFFFFFFLL;
          v21 = v63 ^ ((unsigned __int8)v63 ^ (unsigned __int8)(2 * v64)) & 0xE;
          v60 = MmMakeProtectNotWriteCopy[v60];
        }
      }
      v21 = ((unsigned __int16)v21 ^ (unsigned __int16)(16 * MmProtectToValue[v60])) & 0x7FF0 ^ (unsigned __int64)v21;
      goto LABEL_96;
    }
    v31 = ((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v110) >> 12) & 0xFFFFFFFFFLL;
    v42 = v111;
LABEL_156:
    v118 = 48 * v31;
    v65 = 48 * v31 - 0x58000000000LL;
    v66 = v65;
    v111 = v65;
    if ( (*(_QWORD *)(v65 + 40) & 0x1000000000LL) != 0 )
    {
      v67 = v31 & 0xFFFFFFFFFFFFFFF0uLL;
      if ( v42 != -1LL )
        v67 = v42;
      v66 = 48 * v67 - 0x58000000000LL;
      v111 = v66;
    }
    v68 = MI_PFN_IS_PROTO(v66);
    v70 = MiGetPfnPriority(v69);
    v73 = MiSearchNumaNodeTable((v71 - v72) / 48);
    v77 = 7;
    v78 = v73[1] & 0x3F;
    v79 = v21 & 0xFFFFFFFFF8C07FFFuLL | ((v68 & 1 | (2 * (v78 | ((unsigned __int64)(v70 & 7) << 8)))) << 15);
    if ( (*(_BYTE *)(v65 + 35) & 0x40) != 0 || (unsigned int)MiIsPageOnBadList(v65, v74, v75, v76) )
      v79 |= 0x80000000uLL;
    if ( (v79 & 0x800000) != 0 || (v80 = *(_QWORD *)(v65 + 40), (v80 & 0x1000000000LL) != 0) )
    {
LABEL_193:
      v93 = v36;
      v15 = (volatile signed __int32 *)BugCheckParameter2;
      v94 = v79 ^ ((unsigned __int16)v79 ^ (unsigned __int16)(16
                                                            * MmProtectToValue[(unsigned int)MiGetProtectionFromPte(
                                                                                               BugCheckParameter2,
                                                                                               v93)])) & 0x7FF0;
      if ( (*(_DWORD *)(BugCheckParameter2 + 48) & 0x1100000) == 0x1100000 )
        v94 &= 0xFFFFFFF0FFFFFFFFuLL;
      v21 = v94 | 0x400000;
      v95 = MI_PFN_IS_PROTO(v111);
      MappedSystemVa = v106;
      v18 = valid;
      v16 = v101;
      v19 = v103;
      if ( v95 )
      {
        v98 = 7;
        if ( (*(_QWORD *)(v97 + 24) & 0x3FFFFFFFFFFFFFFFuLL) < 7 )
          v98 = *(_BYTE *)(v97 + 24);
        v21 = v96 & 0xFFFFFFFFFFFFFFF1uLL | (2 * (v98 & 7 | 0x20000000LL));
      }
      goto LABEL_203;
    }
    if ( (*(_QWORD *)&v77 & (v80 >> 60)) == 1 )
    {
      if ( !(unsigned int)MI_PFN_IS_PROTO(v65) )
      {
        v81 = (_QWORD *)qword_140C4EC80;
        if ( !qword_140C4EC80 )
          goto LABEL_177;
        v82 = v118 / 48;
        v124 = v118 / 48;
        while ( v81 )
        {
          v83 = v81[3];
          if ( v82 < v83 )
          {
            v81 = (_QWORD *)*v81;
          }
          else
          {
            if ( v82 - v83 < v81[4] )
              break;
            v81 = (_QWORD *)v81[1];
          }
        }
        if ( v81 )
        {
          ValidAweProtection = (*(_DWORD *)(v65 + 16) >> 5) & 0x1F;
          v15 = (volatile signed __int32 *)BugCheckParameter2;
        }
        else
        {
LABEL_177:
          v85 = v36;
          v15 = (volatile signed __int32 *)BugCheckParameter2;
          ValidAweProtection = MiGetValidAweProtection(BugCheckParameter2, v85);
        }
        v86 = v79 ^ ((unsigned __int16)v79 ^ (unsigned __int16)(16 * MmProtectToValue[ValidAweProtection])) & 0x7FF0;
        if ( (v15[12] & 0x1100000) == 0x1100000 )
          v86 &= 0xFFFFFFF0FFFFFFFFuLL;
        v21 = v86 | 0x400000;
        goto LABEL_97;
      }
      goto LABEL_193;
    }
    if ( (MiGetWsleContents(v78, v107) & 0xF) == 8 )
      v79 |= 0x400000uLL;
    if ( !(unsigned int)MI_PFN_IS_PROTO(v65) )
    {
      v21 = v79 & 0xFFFFFFFFFFFF8001uLL | (16LL * (MmProtectToValue[(*(_DWORD *)(v65 + 16) >> 5) & 0x1F] & 0x7FF));
      v15 = (volatile signed __int32 *)BugCheckParameter2;
      MappedSystemVa = v106;
      v18 = valid;
      v17 = v100;
      v16 = v101;
      v19 = v103;
      v20 = a2;
      if ( (*(_DWORD *)(BugCheckParameter2 + 48) & 0x1100000) == 0x1100000 )
        v21 &= 0xFFFFFFF0FFFFFFFFuLL;
      goto LABEL_204;
    }
    LOBYTE(v89) = v88;
    if ( (*(_QWORD *)(v65 + 24) & 0x3FFFFFFFFFFFFFFFuLL) < v88 )
      v89 = *(_QWORD *)(v65 + 24) & 0x3FFFFFFFFFFFFFFFLL;
    v21 = v79 & 0xFFFFFFFFFFFF8001uLL | (2
                                       * (v89 & 7 | (8LL
                                                   * (MmProtectToValue[(unsigned int)MiGetPfnProtection(
                                                                                       0x3FFFFFFFFFFFFFFFLL,
                                                                                       v87,
                                                                                       v65)] & 0x7FF))));
    v15 = (volatile signed __int32 *)BugCheckParameter2;
    if ( (v6 & 4) != 0 )
    {
      v21 |= 0x40000000uLL;
      goto LABEL_97;
    }
    if ( (*(_DWORD *)(BugCheckParameter2 + 48) & 0x100000) != 0 )
    {
      MappedSystemVa = v106;
      goto LABEL_201;
    }
    v90 = MiGetProtoPteAddress(BugCheckParameter2, v123, 0, &v122);
    MappedSystemVa = v106;
    v18 = valid;
    v17 = v100;
    v16 = v101;
    v19 = v103;
    v91 = v90 == (*(_QWORD *)(v65 + 8) | 0x8000000000000000uLL);
    v92 = v105;
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
    v106 = MappedSystemVa;
    v115 = MappedSystemVa;
    v105 = v92 - 1;
  }
  while ( v92 != 1 );
  v24 = 0;
LABEL_213:
  if ( v100 != 17 )
  {
    if ( valid )
      MiUnlockPageTableInternal(v101, valid);
    MiUnlockWorkingSetShared(v101, v100);
  }
  if ( v103 )
    MiLockProtoPage(0LL);
  if ( v15 )
    MiUnlockAndDereferenceVadShared((char *)v15);
  if ( (v6 & 1) != 0 )
    KiUnstackDetachProcess((__int64)v125, 0LL);
  v99 = P;
  if ( P )
  {
    MmUnlockPages((PMDL)P);
    ExFreePoolWithTag(v99, 0);
  }
  else
  {
    memmove(v119, Src, ((char *)MappedSystemVa - Src) & 0xFFFFFFFFFFFFFFF0uLL);
  }
  return v24;
}
