/*
 * XREFs of MiGetWorkingSetInfoList @ 0x14025C83C
 * Callers:
 *     MmQueryVirtualMemory @ 0x1406885A0 (MmQueryVirtualMemory.c)
 * Callees:
 *     MiUnlockPageTableInternal @ 0x140202790 (MiUnlockPageTableInternal.c)
 *     MiIsPrototypePteVadLookup @ 0x14020A670 (MiIsPrototypePteVadLookup.c)
 *     KeShouldYieldProcessor @ 0x140211F40 (KeShouldYieldProcessor.c)
 *     MiLockTransitionLeafPage @ 0x140224B74 (MiLockTransitionLeafPage.c)
 *     MiRotatedToFrameBuffer @ 0x14022E898 (MiRotatedToFrameBuffer.c)
 *     MiLockProtoPage @ 0x1402428E4 (MiLockProtoPage.c)
 *     MiQueryPfn @ 0x140247F88 (MiQueryPfn.c)
 *     MiLockLeafPage @ 0x140257C70 (MiLockLeafPage.c)
 *     MiGetPfnProtection @ 0x14025EC28 (MiGetPfnProtection.c)
 *     MiGetWsleContents @ 0x14025ECE0 (MiGetWsleContents.c)
 *     MiGetPagingFileOffset @ 0x14025F240 (MiGetPagingFileOffset.c)
 *     MiAllocatePool @ 0x14027C2E0 (MiAllocatePool.c)
 *     MiUnlockAndDereferenceVadShared @ 0x14027C7C0 (MiUnlockAndDereferenceVadShared.c)
 *     KiStackAttachProcess @ 0x14027D850 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x1402AB900 (KiUnstackDetachProcess.c)
 *     MiProbeAndLockPages @ 0x1402AF160 (MiProbeAndLockPages.c)
 *     MiUnlockWorkingSetShared @ 0x1402B4090 (MiUnlockWorkingSetShared.c)
 *     MiGetPfnPriority @ 0x1402BCED0 (MiGetPfnPriority.c)
 *     MiLockWorkingSetShared @ 0x1402BE5B0 (MiLockWorkingSetShared.c)
 *     MiObtainReferencedVadEx @ 0x1402BFBA0 (MiObtainReferencedVadEx.c)
 *     MmMapLockedPagesSpecifyCache @ 0x1402CB5C0 (MmMapLockedPagesSpecifyCache.c)
 *     MiInvalidPteConforms @ 0x1402DFD90 (MiInvalidPteConforms.c)
 *     MmUnlockPages @ 0x1402E92C0 (MmUnlockPages.c)
 *     MiIsPageOnBadList @ 0x14030E2BC (MiIsPageOnBadList.c)
 *     MiLockLowestValidPageTable @ 0x140310310 (MiLockLowestValidPageTable.c)
 *     MiWorkingSetIsContended @ 0x140316520 (MiWorkingSetIsContended.c)
 *     MiSearchNumaNodeTable @ 0x1403364E0 (MiSearchNumaNodeTable.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140338C10 (MI_READ_PTE_LOCK_FREE.c)
 *     MiGetProtoPteAddress @ 0x14033B890 (MiGetProtoPteAddress.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     MiGetProtectionFromPte @ 0x1403F4550 (MiGetProtectionFromPte.c)
 *     MI_PFN_IS_PROTO @ 0x1403F48C8 (MI_PFN_IS_PROTO.c)
 *     memmove @ 0x140414040 (memmove.c)
 *     MiWorkingSetInfoCheckPageTable @ 0x140547A30 (MiWorkingSetInfoCheckPageTable.c)
 *     MiGetValidAweProtection @ 0x14054C868 (MiGetValidAweProtection.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiGetWorkingSetInfoList(ULONG_PTR a1, int a2, unsigned __int64 a3, unsigned __int64 a4)
{
  int v6; // edi
  unsigned __int64 v8; // rcx
  struct _KTHREAD *CurrentThread; // rsi
  struct _MDL *Pool; // rax
  struct _MDL *v11; // r15
  __int64 v12; // rdx
  unsigned __int64 ProtoPteAddress; // rdx
  _QWORD *MappedSystemVa; // r12
  ULONG_PTR v15; // r9
  __int64 v16; // r15
  __int64 v17; // r8
  unsigned __int64 v18; // rbx
  unsigned __int64 v19; // r10
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
  char v30; // dl
  __int64 v31; // rdx
  __int64 v32; // r15
  unsigned __int64 v33; // r12
  unsigned __int64 v34; // rbx
  __int64 v35; // rax
  unsigned __int64 v36; // r15
  __int64 v37; // rbx
  int v38; // eax
  int i; // r8d
  unsigned __int64 j; // rcx
  unsigned __int64 v41; // r8
  __int64 v42; // rax
  __int64 v43; // rdx
  __int64 v44; // r8
  __int64 v45; // r11
  __int64 v46; // r11
  ULONG_PTR v47; // rcx
  __int64 v48; // rbx
  __int64 v49; // r15
  __int64 v50; // rax
  __int64 v51; // rbx
  __int64 v52; // r8
  int PagingFileOffset; // eax
  int v54; // r13d
  unsigned __int64 v55; // rax
  __int64 v56; // rbx
  __int64 v57; // r12
  __int16 v58; // r8
  int v59; // r8d
  int v60; // eax
  char PfnPriority; // si
  __int64 v62; // rsi
  __int64 v63; // rax
  __int64 v64; // r13
  __int64 v65; // rdx
  unsigned __int64 v66; // r12
  char v67; // bl
  __int64 v68; // rcx
  char v69; // r12
  __int64 v70; // rdx
  __int64 v71; // r9
  __int64 v72; // rax
  char v73; // r11
  __int64 v74; // rcx
  unsigned __int64 v75; // r12
  unsigned __int64 v76; // rdx
  _QWORD *v77; // rcx
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
  __int64 v91; // rcx
  char v92; // si
  unsigned __int64 v93; // rdx
  PVOID v94; // r15
  char v95; // [rsp+30h] [rbp-1C8h]
  __int64 v96; // [rsp+38h] [rbp-1C0h]
  unsigned __int64 valid; // [rsp+40h] [rbp-1B8h]
  ULONG_PTR v98; // [rsp+48h] [rbp-1B0h]
  ULONG_PTR BugCheckParameter2; // [rsp+50h] [rbp-1A8h]
  unsigned __int64 v100; // [rsp+58h] [rbp-1A0h]
  _BYTE *v101; // [rsp+60h] [rbp-198h]
  unsigned __int64 v102; // [rsp+68h] [rbp-190h]
  __int64 v103; // [rsp+78h] [rbp-180h]
  unsigned int v104; // [rsp+80h] [rbp-178h] BYREF
  __int64 v105; // [rsp+88h] [rbp-170h] BYREF
  __int64 v106; // [rsp+90h] [rbp-168h]
  __int64 v107; // [rsp+98h] [rbp-160h] BYREF
  __int64 v108; // [rsp+A0h] [rbp-158h]
  ULONG_PTR BugCheckParameter1; // [rsp+A8h] [rbp-150h]
  _BYTE *v110; // [rsp+B0h] [rbp-148h]
  ULONG_PTR v111; // [rsp+B8h] [rbp-140h] BYREF
  PVOID P; // [rsp+C0h] [rbp-138h]
  signed __int64 v113; // [rsp+C8h] [rbp-130h]
  void *v114; // [rsp+D0h] [rbp-128h]
  ULONG_PTR v115; // [rsp+D8h] [rbp-120h]
  unsigned __int64 v116; // [rsp+E0h] [rbp-118h]
  char v117[8]; // [rsp+E8h] [rbp-110h] BYREF
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
    MappedSystemVa = Src;
    v101 = Src;
    v110 = Src;
  }
  else
  {
    Pool = (struct _MDL *)MiAllocatePool(
                            64LL,
                            8 * ((a4 >> 12) + 7 - ((unsigned __int128)-(__int128)(a4 & 0xFFF) >> 64)),
                            538996045LL,
                            a4);
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
    v12 = (unsigned __int8)CurrentThread->$6BEBF485330D18E60173AA6D991B35AC::gap0[10];
    if ( CurrentThread->PreviousMode )
      v12 = 1LL;
    MiProbeAndLockPages(Pool, v12, 1LL);
    if ( (v11->MdlFlags & 5) != 0 )
      MappedSystemVa = v11->MappedSystemVa;
    else
      MappedSystemVa = MmMapLockedPagesSpecifyCache(v11, 0, MmCached, 0LL, 0, 0x40000010u);
    v110 = MappedSystemVa;
    v101 = MappedSystemVa;
    if ( !MappedSystemVa )
    {
      MmUnlockPages(v11);
      ExFreePoolWithTag(v11, 0);
      return 3221225626LL;
    }
  }
  v15 = BugCheckParameter1;
  if ( CurrentThread->ApcState.Process != (_KPROCESS *)BugCheckParameter1 )
  {
    KiStackAttachProcess(BugCheckParameter1);
    v6 = 1;
    v15 = BugCheckParameter1;
  }
  v16 = 0LL;
  BugCheckParameter2 = 0LL;
  v17 = v15 + 1664;
  v96 = v15 + 1664;
  LOBYTE(ProtoPteAddress) = 17;
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
    if ( *MappedSystemVa > 0x7FFFFFFEFFFFuLL )
      goto LABEL_206;
    v23 = v22 >> 12;
    v118 = v22 >> 12;
    if ( !v16 )
      goto LABEL_232;
    if ( v23 < (*(unsigned int *)(v16 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v16 + 32) << 32))
      || v23 > (*(unsigned int *)(v16 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v16 + 33) << 32)) )
    {
      if ( v19 )
      {
        MiLockProtoPage(0LL, v19, ProtoPteAddress);
        v98 = 0LL;
        LOBYTE(ProtoPteAddress) = v95;
        v17 = v96;
      }
      if ( (_BYTE)ProtoPteAddress != 17 )
      {
        if ( v18 )
        {
          MiUnlockPageTableInternal(v17, v18);
          v18 = 0LL;
          valid = 0LL;
          LOBYTE(ProtoPteAddress) = v95;
        }
        MiUnlockWorkingSetShared(v96, ProtoPteAddress);
        v95 = 17;
      }
      MiUnlockAndDereferenceVadShared((PVOID)v16);
      v16 = 0LL;
      BugCheckParameter2 = 0LL;
    }
    v22 = v102;
    if ( !v16 )
    {
LABEL_232:
      v16 = MiObtainReferencedVadEx(v22, 2LL, &v104);
      BugCheckParameter2 = v16;
      if ( !v16 )
      {
        v24 = v104;
        if ( v104 == -1073741558 )
          goto LABEL_215;
LABEL_203:
        v18 = valid;
        goto LABEL_204;
      }
    }
    v25 = v102;
    if ( ((v102 & 0xFFFFFFFFFFFFF000uLL) == 0x7FFE0000
       || (v102 & 0xFFFFFFFFFFFFF000uLL) == qword_140C4DE88 && qword_140C4DE88)
      && (*(_DWORD *)(BugCheckParameter1 + 2172) & 1) == 0 )
    {
      v6 |= 4u;
    }
    if ( (*(_DWORD *)(v16 + 48) & 0x70) == 0x10 )
    {
      v21 = (16LL * (MmProtectToValue[((unsigned __int64)*(unsigned int *)(v16 + 48) >> 7) & 0x1F] & 0x7FF)) | 0x400001;
LABEL_204:
      v19 = v98;
      v17 = v96;
LABEL_205:
      LOBYTE(ProtoPteAddress) = v95;
      v20 = a2;
LABEL_206:
      v87 = v100;
      goto LABEL_207;
    }
LABEL_43:
    v6 &= ~2u;
    v26 = *(_DWORD *)(v16 + 48);
    v27 = v26 & 0x100000;
    if ( (v26 & 0x100000) != 0 && ((v28 = (v26 >> 18) & 3, (v26 & 0x400000) != 0) || v28 >= 2) && v28 >= 2
      || !(_DWORD)v27 && (*(_DWORD *)(v16 + 64) & 0x1000000) != 0 )
    {
      v6 |= 2u;
    }
    if ( (v6 & 2) != 0 && v95 != 17 )
    {
      if ( v18 )
      {
        MiUnlockPageTableInternal(v96, v18);
        v18 = 0LL;
        valid = 0LL;
      }
      LOBYTE(v27) = v95;
      MiUnlockWorkingSetShared(v96, v27);
      v95 = 17;
      v25 = v102;
    }
    v29 = ((v25 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v113 = v29;
    v30 = v95;
    if ( v95 != 17 )
    {
      if ( (((_BYTE)v29 + 8) & 0x78) == 0 && (unsigned int)MiWorkingSetIsContended(v96) || KeShouldYieldProcessor() )
      {
        if ( v18 )
        {
          MiUnlockPageTableInternal(v96, v18);
          v18 = 0LL;
          valid = 0LL;
        }
        LOBYTE(v31) = v95;
        MiUnlockWorkingSetShared(v96, v31);
        v30 = 17;
        v95 = 17;
      }
      else
      {
        v30 = v95;
      }
    }
    v32 = ((v29 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v103 = v32;
    while ( 1 )
    {
      if ( v30 == 17 )
        v95 = MiLockWorkingSetShared(v96);
      v33 = -1LL;
      v106 = -1LL;
      v21 = 0LL;
      v108 = 0LL;
      if ( v18 == v32 )
      {
        v34 = v29;
        v111 = v29;
      }
      else
      {
        if ( v18 )
          MiUnlockPageTableInternal(v96, v18);
        valid = MiLockLowestValidPageTable(v96, v29, &v111);
        v34 = v111;
      }
      v35 = MI_READ_PTE_LOCK_FREE(v34);
      v36 = v35;
      v105 = v35;
      if ( !v35 )
      {
        v37 = 0LL;
        v38 = v6 & 2;
        if ( (v6 & 2) == 0 )
          goto LABEL_103;
        goto LABEL_88;
      }
      if ( (v35 & 1) == 0 || (v35 & 0x80u) == 0LL )
      {
        ProtoPteAddress = valid;
        if ( valid != v103 )
        {
          if ( (unsigned int)MiWorkingSetInfoCheckPageTable(v96, v34, (unsigned int)&v107, a2, v95) == 1 )
          {
            v18 = 0LL;
            valid = 0LL;
            goto LABEL_85;
          }
          v21 = v108;
        }
        v38 = v6 & 2;
LABEL_88:
        v25 = v102;
        goto LABEL_89;
      }
      v33 = ((unsigned __int64)MI_READ_PTE_LOCK_FREE(&v105) >> 12) & 0xFFFFFFFFFLL;
      v106 = v33;
      for ( i = -1; v34 >= 0xFFFFF68000000000uLL; ++i )
      {
        if ( v34 > 0xFFFFF6FFFFFFFFFFuLL )
          break;
        v34 = (__int64)(v34 << 25) >> 16;
      }
      ProtoPteAddress = 1LL;
      v25 = v102;
      for ( j = v102 >> 12; i; --i )
      {
        v33 += ProtoPteAddress * (j & 0x1FF);
        j >>= 9;
        ProtoPteAddress <<= 9;
      }
      v21 = 8388609LL;
      v108 = 8388609LL;
      v38 = v6 & 2;
LABEL_89:
      v41 = v106;
      if ( v106 != -1 )
        goto LABEL_158;
      if ( v38 )
      {
        v16 = BugCheckParameter2;
        v18 = valid;
        goto LABEL_43;
      }
      v18 = valid;
      if ( valid != ((v25 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL )
      {
        v16 = BugCheckParameter2;
        goto LABEL_100;
      }
      v42 = MI_READ_PTE_LOCK_FREE(v29);
      v36 = v42;
      v105 = v42;
      if ( (v42 & 1) != 0 )
        break;
      v37 = v42;
      if ( (v42 & 0x400) != 0 )
      {
        v47 = BugCheckParameter2;
        goto LABEL_107;
      }
      if ( (v42 & 0x800) == 0 )
      {
        if ( (unsigned int)MiGetPagingFileOffset(&v105, v43, v44) )
        {
          v21 = v21 & 0xFFFFFFFFFF3FFFFFuLL | 0x800000;
          goto LABEL_98;
        }
        if ( v36 )
          goto LABEL_98;
LABEL_103:
        v47 = BugCheckParameter2;
        if ( (v6 & 4) == 0 && (*(_DWORD *)(BugCheckParameter2 + 48) & 0x100000) != 0 )
        {
          v16 = BugCheckParameter2;
          goto LABEL_99;
        }
LABEL_107:
        ProtoPteAddress = 0LL;
        if ( (v6 & 4) != 0 )
        {
          ProtoPteAddress = qword_140C4DE80;
          if ( (v102 & 0xFFFFFFFFFFFFF000uLL) == 0x7FFE0000 )
            ProtoPteAddress = qword_140C4DE78;
          goto LABEL_110;
        }
        if ( (*(_DWORD *)(v47 + 48) & 0x100000) != 0 )
        {
          if ( !qword_140C4DF80 )
            goto LABEL_121;
          if ( (v37 & 0x10) == 0 )
          {
            v37 &= ~qword_140C4DF80;
            goto LABEL_121;
          }
        }
        else
        {
          ProtoPteAddress = MiGetProtoPteAddress(v47, v102 >> 12, 0LL, v117);
          if ( !v37 || MiIsPrototypePteVadLookup(v36) )
          {
LABEL_110:
            v48 = ProtoPteAddress;
LABEL_122:
            if ( !v48 )
              goto LABEL_98;
            v21 |= 0x8000uLL;
            v108 = v21;
            if ( v48 == ProtoPteAddress )
            {
              v21 |= 0x40000000uLL;
              v108 = v21;
            }
            if ( ((v48 ^ v98) & 0xFFFFFFFFFFFFF000uLL) == 0 )
            {
              v49 = MiLockLeafPage((unsigned __int64 *)v48, 0LL);
              v50 = MI_READ_PTE_LOCK_FREE(v48);
              v51 = v50;
              v105 = v50;
              if ( v49 )
              {
                MiQueryPfn((v49 + 0x58000000000LL) / 48, (__int64)&v107);
                _InterlockedAnd64((volatile signed __int64 *)(v49 + 24), 0x7FFFFFFFFFFFFFFFuLL);
LABEL_97:
                v21 = v108;
LABEL_98:
                v16 = BugCheckParameter2;
LABEL_99:
                v18 = valid;
LABEL_100:
                MappedSystemVa = v101;
                goto LABEL_204;
              }
              if ( (v50 & 0x400) != 0 || (v50 & 0x800) != 0 || !(unsigned int)MiInvalidPteConforms(v50, ProtoPteAddress) )
                goto LABEL_98;
              PagingFileOffset = MiGetPagingFileOffset(&v105, ProtoPteAddress, v52);
              MappedSystemVa = v101;
              v16 = BugCheckParameter2;
              LOBYTE(ProtoPteAddress) = v95;
              v17 = v96;
              v19 = v98;
              v20 = a2;
              if ( PagingFileOffset )
                v21 = v21 & 0xFFFFFFFFFF3FFFFFuLL | 0x800000;
              else
                v21 &= -(__int64)(v51 != 0);
              v18 = valid;
              goto LABEL_206;
            }
            if ( valid )
            {
              MiUnlockPageTableInternal(v96, valid);
              valid = 0LL;
            }
            v98 = MiLockProtoPage(v48, v98, v95);
            goto LABEL_129;
          }
          if ( !qword_140C4DF80 )
          {
LABEL_121:
            v48 = v37 >> 16;
            goto LABEL_122;
          }
          if ( (v37 & 0x10) == 0 )
          {
            v37 &= ~qword_140C4DF80;
            goto LABEL_121;
          }
        }
        v37 &= ~0x10uLL;
        goto LABEL_121;
      }
      v45 = MiLockTransitionLeafPage(v29, 0LL);
      if ( v45 )
      {
        MiQueryPfn((v45 + 0x58000000000LL) / 48, (__int64)&v107);
        _InterlockedAnd64((volatile signed __int64 *)(v46 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        goto LABEL_97;
      }
LABEL_129:
      v18 = valid;
LABEL_85:
      v32 = v103;
      v30 = v95;
    }
    v21 |= 1uLL;
    v54 = *(_DWORD *)(BugCheckParameter2 + 48);
    if ( (v54 & 0x70) == 0x40 )
    {
      v55 = MI_READ_PTE_LOCK_FREE(&v105);
      v56 = 48 * ((v55 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL;
      v57 = v21;
      if ( ((*(_QWORD *)(48 * ((v55 >> 12) & 0xFFFFFFFFFLL) - 0x57FFFFFFFD8LL) >> 50) & 1) != 0 )
      {
        v58 = v36;
        if ( (*(_BYTE *)(v56 + 35) & 0x40) != 0 || (unsigned int)MiIsPageOnBadList(v56) )
        {
          v21 |= 0x80000000uLL;
          LOWORD(v36) = v58;
          v57 = v21;
        }
      }
      if ( MiRotatedToFrameBuffer(v113) )
      {
        v59 = (v36 & 0x800) != 0 ? 4 : 1;
        v60 = v54 & 0xC00;
        if ( v60 == 3072 && (v54 & 0x380) != 0 )
        {
          v59 |= 0x18u;
        }
        else if ( v60 == 1024 )
        {
          v59 |= 8u;
        }
      }
      else
      {
        PfnPriority = MiGetPfnPriority(v56);
        v21 = v57 & 0xFFFFFFFFF8C0FFFFuLL | ((*(_DWORD *)(MiSearchNumaNodeTable((v56 + 0x58000000000LL) / 48) + 8) & 0x3F | ((unsigned __int64)(PfnPriority & 7) << 8)) << 16);
        v59 = (*(_DWORD *)(v56 + 16) >> 5) & 0x1F;
        if ( (*(_QWORD *)(v56 + 40) & 0x1000000000LL) == 0 && *(__int64 *)(v56 + 8) > 0 )
        {
          v62 = v21 | 0x8000;
          ProtoPteAddress = v62;
          LOBYTE(v63) = 7;
          if ( (*(_QWORD *)(v56 + 24) & 0x3FFFFFFFFFFFFFFFuLL) < 7 )
            v63 = *(_QWORD *)(v56 + 24) & 0x3FFFFFFFFFFFFFFFLL;
          v21 = v62 ^ ((unsigned __int8)v62 ^ (unsigned __int8)(2 * v63)) & 0xE;
          v59 = MmMakeProtectNotWriteCopy[v59];
        }
      }
      v21 = ((unsigned __int16)v21 ^ (unsigned __int16)(16 * MmProtectToValue[v59])) & 0x7FF0 ^ (unsigned __int64)v21;
      goto LABEL_98;
    }
    v33 = ((unsigned __int64)MI_READ_PTE_LOCK_FREE(&v105) >> 12) & 0xFFFFFFFFFLL;
    v41 = v106;
LABEL_158:
    v113 = 48 * v33;
    v64 = 48 * v33 - 0x58000000000LL;
    v65 = v64;
    v106 = v64;
    if ( (*(_QWORD *)(v64 + 40) & 0x1000000000LL) != 0 )
    {
      v66 = v33 & 0xFFFFFFFFFFFFFFF0uLL;
      if ( v41 != -1LL )
        v66 = v41;
      v65 = 48 * v66 - 0x58000000000LL;
      v106 = v65;
    }
    v67 = MI_PFN_IS_PROTO(v65);
    v69 = MiGetPfnPriority(v68);
    v72 = MiSearchNumaNodeTable((v70 - v71) / 48);
    v73 = 7;
    v74 = *(_DWORD *)(v72 + 8) & 0x3F;
    v75 = v21 & 0xFFFFFFFFF8C07FFFuLL | ((v67 & 1 | (2 * (v74 | ((unsigned __int64)(v69 & 7) << 8)))) << 15);
    if ( (*(_BYTE *)(v64 + 35) & 0x40) != 0 || (unsigned int)MiIsPageOnBadList(v64) )
      v75 |= 0x80000000uLL;
    if ( (v75 & 0x800000) != 0 || (v76 = *(_QWORD *)(v64 + 40), (v76 & 0x1000000000LL) != 0) )
    {
LABEL_195:
      v88 = v36;
      v16 = BugCheckParameter2;
      v89 = v75 ^ ((unsigned __int16)v75 ^ (unsigned __int16)(16
                                                            * MmProtectToValue[(unsigned int)MiGetProtectionFromPte(
                                                                                               BugCheckParameter2,
                                                                                               v88)])) & 0x7FF0;
      if ( (*(_DWORD *)(BugCheckParameter2 + 48) & 0x1100000) == 0x1100000 )
        v89 &= 0xFFFFFFF0FFFFFFFFuLL;
      v21 = v89 | 0x400000;
      v90 = MI_PFN_IS_PROTO(v106);
      MappedSystemVa = v101;
      v18 = valid;
      v17 = v96;
      v19 = v98;
      if ( v90 )
      {
        v92 = 7;
        if ( (*(_QWORD *)(v91 + 24) & 0x3FFFFFFFFFFFFFFFuLL) < 7 )
          v92 = *(_BYTE *)(v91 + 24);
        ProtoPteAddress &= 0xFFFFFFFFFFFFFFF1uLL;
        v21 = ProtoPteAddress | (2 * (v92 & 7 | 0x20000000LL));
      }
      goto LABEL_205;
    }
    if ( (*(_QWORD *)&v73 & (v76 >> 60)) == 1 )
    {
      if ( !(unsigned int)MI_PFN_IS_PROTO(v64) )
      {
        v77 = (_QWORD *)qword_140C4EEC0;
        if ( !qword_140C4EEC0 )
          goto LABEL_179;
        ProtoPteAddress = v113 / 48;
        v119 = v113 / 48;
        while ( v77 )
        {
          v78 = v77[3];
          if ( ProtoPteAddress < v78 )
          {
            v77 = (_QWORD *)*v77;
          }
          else
          {
            if ( ProtoPteAddress - v78 < v77[4] )
              break;
            v77 = (_QWORD *)v77[1];
          }
        }
        if ( v77 )
        {
          ValidAweProtection = (*(_DWORD *)(v64 + 16) >> 5) & 0x1F;
          v16 = BugCheckParameter2;
        }
        else
        {
LABEL_179:
          v80 = v36;
          v16 = BugCheckParameter2;
          ValidAweProtection = MiGetValidAweProtection(BugCheckParameter2, v80);
        }
        v81 = v75 ^ ((unsigned __int16)v75 ^ (unsigned __int16)(16 * MmProtectToValue[ValidAweProtection])) & 0x7FF0;
        if ( (*(_DWORD *)(v16 + 48) & 0x1100000) == 0x1100000 )
          v81 &= 0xFFFFFFF0FFFFFFFFuLL;
        v21 = v81 | 0x400000;
        goto LABEL_99;
      }
      goto LABEL_195;
    }
    if ( (MiGetWsleContents(v74, v102) & 0xF) == 8 )
      v75 |= 0x400000uLL;
    if ( !(unsigned int)MI_PFN_IS_PROTO(v64) )
    {
      v21 = v75 & 0xFFFFFFFFFFFF8001uLL | (16LL * (MmProtectToValue[(*(_DWORD *)(v64 + 16) >> 5) & 0x1F] & 0x7FF));
      v16 = BugCheckParameter2;
      MappedSystemVa = v101;
      v18 = valid;
      LOBYTE(ProtoPteAddress) = v95;
      v17 = v96;
      v19 = v98;
      v20 = a2;
      if ( (*(_DWORD *)(BugCheckParameter2 + 48) & 0x1100000) == 0x1100000 )
        v21 &= 0xFFFFFFF0FFFFFFFFuLL;
      goto LABEL_206;
    }
    LOBYTE(v84) = v83;
    if ( (*(_QWORD *)(v64 + 24) & 0x3FFFFFFFFFFFFFFFuLL) < v83 )
      v84 = *(_QWORD *)(v64 + 24) & 0x3FFFFFFFFFFFFFFFLL;
    v21 = v75 & 0xFFFFFFFFFFFF8001uLL | (2
                                       * (v84 & 7 | (8LL
                                                   * (MmProtectToValue[(unsigned int)MiGetPfnProtection(
                                                                                       0x3FFFFFFFFFFFFFFFLL,
                                                                                       v82,
                                                                                       v64)] & 0x7FF))));
    v16 = BugCheckParameter2;
    if ( (v6 & 4) != 0 )
    {
      v21 |= 0x40000000uLL;
      goto LABEL_99;
    }
    if ( (*(_DWORD *)(BugCheckParameter2 + 48) & 0x100000) != 0 )
    {
      MappedSystemVa = v101;
      goto LABEL_203;
    }
    v85 = MiGetProtoPteAddress(BugCheckParameter2, v118, 0LL, v117);
    ProtoPteAddress = 0x8000000000000000uLL;
    MappedSystemVa = v101;
    v18 = valid;
    LOBYTE(ProtoPteAddress) = v95;
    v17 = v96;
    v19 = v98;
    v86 = v85 == (*(_QWORD *)(v64 + 8) | 0x8000000000000000uLL);
    v87 = v100;
    v20 = a2;
    if ( v86 )
      v21 |= 0x40000000uLL;
LABEL_207:
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
LABEL_215:
  if ( v95 != 17 )
  {
    v93 = valid;
    if ( valid )
      MiUnlockPageTableInternal(v96, valid);
    LOBYTE(v93) = v95;
    MiUnlockWorkingSetShared(v96, v93);
  }
  if ( v98 )
    MiLockProtoPage(0LL, v98, 17);
  if ( v16 )
    MiUnlockAndDereferenceVadShared((PVOID)v16);
  if ( (v6 & 1) != 0 )
    KiUnstackDetachProcess(v120, 0LL);
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
