/*
 * XREFs of MiWriteAwePtes @ 0x140548DC8
 * Callers:
 *     MiDeleteVadAwePtes @ 0x140546664 (MiDeleteVadAwePtes.c)
 *     NtMapUserPhysicalPages @ 0x1408D36E0 (NtMapUserPhysicalPages.c)
 *     NtMapUserPhysicalPagesScatter @ 0x1408D39A0 (NtMapUserPhysicalPagesScatter.c)
 * Callees:
 *     MiMakeValidPte @ 0x1402342E0 (MiMakeValidPte.c)
 *     MiGetLeafVa @ 0x1402374D0 (MiGetLeafVa.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140238530 (MI_READ_PTE_LOCK_FREE.c)
 *     MiFlushTbList @ 0x14023A3C0 (MiFlushTbList.c)
 *     MiLocateAddress @ 0x14024BB30 (MiLocateAddress.c)
 *     MiMakeSystemAddressValid @ 0x1402556E0 (MiMakeSystemAddressValid.c)
 *     MiWorkingSetIsContended @ 0x1402589C0 (MiWorkingSetIsContended.c)
 *     MiPageTableLockIsContended @ 0x14025A290 (MiPageTableLockIsContended.c)
 *     MiUnlockPageTableInternal @ 0x140278B10 (MiUnlockPageTableInternal.c)
 *     KeYieldProcessorEx @ 0x140280C50 (KeYieldProcessorEx.c)
 *     MiUnlockWorkingSetShared @ 0x1402A1770 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x1402AC150 (MiLockWorkingSetShared.c)
 *     MiInsertTbFlushEntry @ 0x1402B0EF0 (MiInsertTbFlushEntry.c)
 *     KeShouldYieldProcessor @ 0x140327BB0 (KeShouldYieldProcessor.c)
 *     MiInsertLargeTbFlushEntry @ 0x1403385B4 (MiInsertLargeTbFlushEntry.c)
 *     __security_check_cookie @ 0x1403CCE60 (__security_check_cookie.c)
 *     MiDeleteEmptyPageTables @ 0x1403EF2E0 (MiDeleteEmptyPageTables.c)
 *     memset @ 0x14040A280 (memset.c)
 *     MiDecrementAweMapCount @ 0x140546518 (MiDecrementAweMapCount.c)
 *     MiGetAweNode @ 0x140546F10 (MiGetAweNode.c)
 *     MiGetAweViewPageSize @ 0x140547008 (MiGetAweViewPageSize.c)
 *     MiUpdateAwePageTable @ 0x140548B64 (MiUpdateAwePageTable.c)
 *     MiWriteAweClusterPte @ 0x140548D14 (MiWriteAweClusterPte.c)
 */

__int64 __fastcall MiWriteAwePtes(
        __int64 a1,
        _QWORD *a2,
        unsigned __int64 a3,
        __int64 a4,
        unsigned __int64 a5,
        char a6)
{
  ULONG_PTR v6; // r12
  unsigned __int64 *v8; // rdi
  __int64 AweViewPageSize; // rax
  __int64 v10; // r8
  _DWORD *v11; // r9
  __int64 v12; // rdx
  __int64 v13; // r10
  unsigned __int64 v14; // r13
  __int64 v15; // r15
  unsigned int v16; // edx
  unsigned int v17; // ebx
  int v18; // eax
  unsigned int v19; // esi
  unsigned __int64 v20; // r14
  unsigned __int8 v21; // al
  __int64 v22; // r10
  BOOL v23; // eax
  unsigned __int64 LeafVa; // rax
  _QWORD *v25; // rbx
  __int64 v26; // rcx
  _QWORD *v27; // r9
  __int64 v28; // rax
  unsigned __int64 v29; // r8
  unsigned int v30; // ecx
  __int64 v31; // r9
  unsigned int v32; // r11d
  unsigned int v33; // esi
  unsigned __int8 v34; // r10
  int v35; // eax
  unsigned __int64 v36; // rax
  __int64 v37; // rdi
  __int64 v38; // rcx
  unsigned __int64 v39; // r15
  int updated; // ebx
  _KPROCESS *v41; // rdx
  unsigned __int64 v42; // rax
  unsigned __int64 v43; // r9
  char v44; // r10
  ULONG_PTR v45; // rax
  __int64 v46; // rbx
  int v47; // r9d
  __int64 v48; // rax
  __int64 v49; // rcx
  unsigned __int64 v50; // rdi
  __int64 v51; // r15
  unsigned __int64 v52; // rax
  unsigned __int64 v53; // rax
  __int64 v54; // rax
  __int64 v55; // rbx
  unsigned __int64 v56; // r15
  __int64 v57; // rax
  __int64 v58; // rdx
  unsigned __int64 v59; // r14
  __int64 v60; // r9
  __int64 v61; // r8
  unsigned __int64 v62; // rbx
  __int64 v63; // r15
  int IsContended; // eax
  ULONG_PTR v65; // rdi
  __int64 v66; // rdi
  bool v67; // cf
  int v68; // ebx
  _KPROCESS *v69; // rdx
  ULONG_PTR v70; // rax
  unsigned __int64 v71; // rax
  unsigned __int64 v72; // r9
  char v73; // r10
  _KPROCESS *v74; // rdx
  int v75; // ebx
  unsigned __int64 v76; // rax
  unsigned __int64 v77; // r9
  char v78; // r10
  unsigned __int8 v80; // [rsp+30h] [rbp-D0h]
  int v81; // [rsp+34h] [rbp-CCh]
  __int64 v82; // [rsp+38h] [rbp-C8h]
  __int64 v83; // [rsp+40h] [rbp-C0h]
  unsigned int v84; // [rsp+48h] [rbp-B8h]
  __int64 v85; // [rsp+50h] [rbp-B0h]
  __int64 v86; // [rsp+58h] [rbp-A8h]
  BOOL v87; // [rsp+60h] [rbp-A0h]
  ULONG_PTR v88; // [rsp+68h] [rbp-98h]
  __int64 v89; // [rsp+70h] [rbp-90h]
  unsigned int v90; // [rsp+78h] [rbp-88h]
  _QWORD *v91; // [rsp+80h] [rbp-80h]
  unsigned __int64 ValidPte; // [rsp+88h] [rbp-78h]
  __int64 v93; // [rsp+90h] [rbp-70h]
  int v94; // [rsp+98h] [rbp-68h] BYREF
  ULONG_PTR v95; // [rsp+A0h] [rbp-60h]
  unsigned __int64 v96; // [rsp+A8h] [rbp-58h]
  unsigned __int64 v97; // [rsp+B0h] [rbp-50h]
  __int64 v98; // [rsp+B8h] [rbp-48h]
  _QWORD *v99; // [rsp+C0h] [rbp-40h]
  __int64 v100; // [rsp+C8h] [rbp-38h]
  __int64 v101; // [rsp+D0h] [rbp-30h] BYREF
  __int64 v102; // [rsp+D8h] [rbp-28h]
  __int64 v103; // [rsp+E0h] [rbp-20h] BYREF
  __int64 v104; // [rsp+E8h] [rbp-18h]
  __int64 v105; // [rsp+F0h] [rbp-10h]
  _QWORD v106[24]; // [rsp+100h] [rbp+0h] BYREF

  v6 = a5;
  v97 = a3;
  v99 = a2;
  v100 = a4;
  memset(v106, 0, 0xB8uLL);
  v102 = *(_QWORD *)(a1 + 32);
  v8 = &KeGetCurrentThread()->ApcState.Process[1].ActiveProcessorsPadding[6];
  v89 = (__int64)v8;
  v93 = *(_QWORD *)(v102 + 8);
  AweViewPageSize = MiGetAweViewPageSize(a1);
  LODWORD(v106[1]) = 20;
  v88 = 0LL;
  v86 = 0LL;
  v12 = v10;
  v81 = 0;
  if ( AweViewPageSize )
    v12 = AweViewPageSize;
  v101 = 0LL;
  v85 = v12;
  WORD2(v106[0]) = 0;
  v106[2] = 0LL;
  v90 = v12 == 512;
  LODWORD(v106[0]) = 1;
  v13 = v10;
  v106[3] = 0LL;
  v14 = 0LL;
  if ( v12 == 512 )
    v13 = 1LL;
  v82 = v13;
  if ( (a6 & 1) != 0 )
  {
    v15 = *(_QWORD *)(a1 + 24);
    v83 = v15;
    v16 = (v90 << 26) | 0x80000000;
    v17 = *(_DWORD *)(v15 + 48);
    if ( (v17 & 0x300000) == 0x300000 )
      v16 = v90 << 26;
    if ( (*v11 & 1) != 0 )
      v18 = 4;
    else
      v18 = (v17 >> 7) & 0x1F;
    ValidPte = MiMakeValidPte(0xFFFFF6BFFFFFFF78uLL, 0LL, v18 | v16, (__int64)v11);
    v19 = (v17 >> 12) & 0x3F;
    v20 = ValidPte;
    v84 = v19;
    v21 = MiLockWorkingSetShared((__int64)v8);
    v22 = v82;
    v80 = v21;
    v23 = (v17 & 0x1100000) == 17825792;
  }
  else
  {
    v15 = 0LL;
    v83 = 0LL;
    v20 = 0LL;
    ValidPte = 0LL;
    v19 = 0;
    v84 = 0;
    v80 = 17;
    LeafVa = MiGetLeafVa(a5);
    v23 = ((_DWORD)MiLocateAddress(LeafVa)[6] & 0x1100000) == 17825792;
  }
  v87 = v23;
  v96 = 0LL;
  if ( !v97 )
  {
    v66 = v83;
    goto LABEL_116;
  }
  v25 = v99;
  v26 = v100;
  v27 = v99;
  v104 = 8 * v22;
  v28 = v100 - (_QWORD)v99;
  v98 = 0LL;
  v105 = v100 - (_QWORD)v99;
  v91 = v99;
  while ( 1 )
  {
    if ( v26 )
    {
      v29 = *(_QWORD *)((char *)v27 + v28);
      v30 = v90;
      v6 = ((v29 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      if ( v85 == 512 )
      {
        do
        {
          v6 = ((v6 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
          --v30;
        }
        while ( v30 );
      }
      if ( v29 < (*(unsigned int *)(v15 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v15 + 32) << 32)) << 12
        || v29 > (((*(unsigned int *)(v15 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v15 + 33) << 32)) << 12) | 0xFFF) )
      {
        v15 = MiGetAweNode(v29)[3];
        v83 = v15;
        v33 = *(_DWORD *)(v15 + 48);
        if ( ((unsigned __int8)*(_DWORD *)v102 & v34) != 0 )
          v35 = 4;
        else
          v35 = (v33 >> 7) & 0x1F;
        v36 = MiMakeValidPte(0xFFFFF6BFFFFFFF78uLL, 0LL, v35 | v32, v31);
        v27 = v91;
        v20 = v36;
        v19 = (v33 >> 12) & 0x3F;
        ValidPte = v36;
        v84 = v19;
      }
      if ( !v25 || (v37 = v20, !*v27) )
        v37 = ZeroPte;
    }
    else
    {
      v37 = ZeroPte;
      if ( v25 )
        v37 = v20;
    }
    if ( (v37 & 1) != 0 )
      v37 ^= (v37 ^ (*v27 << 12)) & 0xFFFFFFFFF000LL;
    v38 = (v6 >> 9) & 0x7FFFFFFFF8LL;
    if ( v15 )
    {
      v39 = v38 - 0x98000000000LL;
      if ( v14 != v38 - 0x98000000000LL )
      {
        if ( v14 )
        {
          updated = MiUpdateAwePageTable(v14, v86, v81);
          MiFlushTbList((__int64)v106, v41);
          if ( v87 )
            v88 = 0LL;
          MiUnlockPageTableInternal(v89, v14);
          if ( updated )
          {
            MiUnlockWorkingSetShared(v89, v80);
            MiGetLeafVa(v14 + 8);
            v42 = MiGetLeafVa(v14);
            MiDeleteEmptyPageTables(v42, v43, v44);
            v80 = MiLockWorkingSetShared(v89);
          }
          v86 = 0LL;
          v81 = 0;
        }
        MiMakeSystemAddressValid(v6, 0LL, v19, v80, 0);
        v14 = v39;
      }
      v15 = v83;
    }
    else
    {
      v14 = v38 - 0x98000000000LL;
    }
    v45 = v6;
    v46 = *(_QWORD *)v6;
    v47 = 0;
    v103 = *(_QWORD *)v6;
    if ( v88 )
      v45 = v88;
    v88 = v45;
    v95 = v45;
    if ( (v37 & 1) == 0 )
    {
      if ( v46 )
      {
        v81 -= v82;
        v86 -= v82;
        if ( (v46 & 1) == 0 || (v47 = 3, v85 != 512) )
          v47 = 4;
      }
      goto LABEL_57;
    }
    if ( (v46 & 1) != 0 )
    {
      if ( v37 != v46 )
      {
        LOBYTE(v47) = v85 == 512;
        ++v47;
      }
LABEL_57:
      v48 = v82;
      goto LABEL_58;
    }
    v48 = v82;
    v47 = 5;
    if ( (v46 & 0x800) == 0 )
    {
      v86 += v82;
      if ( !v46 )
        v81 += v82;
    }
LABEL_58:
    MiWriteAweClusterPte(v89, (__int64 *)v6, v37, v47, v48);
    if ( v46 )
    {
      if ( (v46 & 1) != 0 )
      {
        if ( v15 )
        {
          if ( v85 == 512 )
          {
            if ( v82 )
            {
              v50 = v6;
              v51 = v82;
              do
              {
                MiInsertLargeTbFlushEntry((__int64)v106, v90, v50);
                v50 += 8LL;
                --v51;
              }
              while ( v51 );
              v19 = v84;
              v20 = ValidPte;
            }
          }
          else
          {
            MiInsertTbFlushEntry((__int64)v106, (__int64)(v6 << 25) >> 16, v82, 0);
          }
        }
        v52 = (unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v103) >> 12;
      }
      else
      {
        v53 = v46;
        if ( qword_140C4DD40 && (v46 & 0x10) == 0 )
          v53 = v46 & ~qword_140C4DD40;
        v52 = v53 >> 12;
      }
      v49 = 0xFFFFFFFFFLL;
      v54 = v52 & 0xFFFFFFFFFLL;
    }
    else
    {
      v54 = -1LL;
    }
    if ( !v46 )
    {
      v58 = v93;
LABEL_90:
      v57 = v85;
      goto LABEL_91;
    }
    v55 = 48 * v54 - 0x58000000000LL;
    v56 = 0LL;
    v57 = v85;
    v58 = v93;
    if ( v85 )
    {
      v59 = v85;
      v60 = 0x3FFFFFFFFFFFFFFFLL;
      v61 = 1LL;
      do
      {
        if ( (*(_QWORD *)(v55 + 24) & 0x3FFFFFFFFFFFFFFFLL) == 1 )
          goto LABEL_86;
        v94 = 0;
        if ( _interlockedbittestandset64((volatile signed __int32 *)(v55 + 24), 0x3FuLL) )
        {
          do
          {
            do
              KeYieldProcessorEx(&v94, v58, v61, v60);
            while ( *(__int64 *)(v55 + 24) < 0 );
          }
          while ( _interlockedbittestandset64((volatile signed __int32 *)(v55 + 24), 0x3FuLL) );
          v59 = v85;
          v60 = 0x3FFFFFFFFFFFFFFFLL;
          v61 = 1LL;
        }
        v49 = *(_QWORD *)(v55 + 24) & 0x3FFFFFFFFFFFFFFFLL;
        if ( v49 == 1 )
          v49 = 1LL;
        else
          *(_QWORD *)(v55 + 24) ^= (*(_QWORD *)(v55 + 24) ^ (v49 - 1)) & 0x3FFFFFFFFFFFFFFFLL;
        _InterlockedAnd64((volatile signed __int64 *)(v55 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        if ( v49 == 1 )
        {
LABEL_86:
          MiDecrementAweMapCount(v49, v55, &v101, 0LL);
          v61 = 1LL;
          v60 = 0x3FFFFFFFFFFFFFFFLL;
        }
        v58 = v93;
        v55 += 48 * v93;
        v56 += v93;
      }
      while ( v56 < v59 );
      v19 = v84;
      v20 = ValidPte;
      goto LABEL_90;
    }
LABEL_91:
    v62 = v96 + 1;
    v27 = v91 + 1;
    v6 += v104;
    ++v96;
    ++v91;
    v98 += v82;
    if ( (v98 & 0x3F) == 0 || v57 != v58 )
      break;
    v66 = v83;
    v63 = v89;
LABEL_98:
    v67 = v62 < v97;
    v25 = v99;
    v28 = v105;
    v26 = v100;
    if ( !v67 )
      goto LABEL_112;
    v15 = v83;
  }
  v63 = v89;
  if ( MiWorkingSetIsContended(v89) )
  {
    v65 = v95;
  }
  else
  {
    IsContended = MiPageTableLockIsContended(v89, v14);
    v65 = v95;
    if ( !IsContended )
    {
      v88 = v95;
      if ( !KeShouldYieldProcessor() )
      {
        v66 = v83;
LABEL_97:
        v27 = v91;
        goto LABEL_98;
      }
    }
  }
  if ( v62 != v97 )
  {
    v68 = MiUpdateAwePageTable(v14, v86, v81);
    MiFlushTbList((__int64)v106, v69);
    v88 = v65;
    if ( v87 )
    {
      v70 = v65;
      if ( v65 )
        v70 = 0LL;
      v88 = v70;
    }
    MiUnlockPageTableInternal(v89, v14);
    MiUnlockWorkingSetShared(v89, v80);
    v66 = v83;
    if ( v68 && v83 )
    {
      MiGetLeafVa(v14 + 8);
      v71 = MiGetLeafVa(v14);
      MiDeleteEmptyPageTables(v71, v72, v73);
    }
    v86 = 0LL;
    v14 = 0LL;
    v81 = 0;
    MiLockWorkingSetShared(v89);
    v62 = v96;
    goto LABEL_97;
  }
  v66 = v83;
LABEL_112:
  if ( v14 )
  {
    v75 = MiUpdateAwePageTable(v14, v86, v81);
    if ( v66 )
    {
      MiFlushTbList((__int64)v106, v74);
      MiUnlockPageTableInternal(v63, v14);
      goto LABEL_117;
    }
    return v101;
  }
LABEL_116:
  v63 = v89;
  v75 = 0;
LABEL_117:
  MiUnlockWorkingSetShared(v63, v80);
  if ( v75 && v66 )
  {
    MiGetLeafVa(v14 + 8);
    v76 = MiGetLeafVa(v14);
    MiDeleteEmptyPageTables(v76, v77, v78);
  }
  return v101;
}
