/*
 * XREFs of MiWriteAwePtes @ 0x140548778
 * Callers:
 *     MiDeleteVadAwePtes @ 0x140546014 (MiDeleteVadAwePtes.c)
 *     NtMapUserPhysicalPages @ 0x1408D2390 (NtMapUserPhysicalPages.c)
 *     NtMapUserPhysicalPagesScatter @ 0x1408D2650 (NtMapUserPhysicalPagesScatter.c)
 * Callees:
 *     MiUnlockWorkingSetShared @ 0x14020EC60 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x140219640 (MiLockWorkingSetShared.c)
 *     MiInsertTbFlushEntry @ 0x14021E270 (MiInsertTbFlushEntry.c)
 *     KeYieldProcessorEx @ 0x140244550 (KeYieldProcessorEx.c)
 *     MiMakeValidPte @ 0x14028D330 (MiMakeValidPte.c)
 *     MiGetLeafVa @ 0x140290520 (MiGetLeafVa.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140291580 (MI_READ_PTE_LOCK_FREE.c)
 *     MiFlushTbList @ 0x140293410 (MiFlushTbList.c)
 *     MiLocateAddress @ 0x1402A4B60 (MiLocateAddress.c)
 *     MiMakeSystemAddressValid @ 0x1402AE710 (MiMakeSystemAddressValid.c)
 *     MiWorkingSetIsContended @ 0x1402B19F0 (MiWorkingSetIsContended.c)
 *     MiPageTableLockIsContended @ 0x1402B32C0 (MiPageTableLockIsContended.c)
 *     MiUnlockPageTableInternal @ 0x1402DB860 (MiUnlockPageTableInternal.c)
 *     KeShouldYieldProcessor @ 0x1402EE280 (KeShouldYieldProcessor.c)
 *     MiInsertLargeTbFlushEntry @ 0x1402FB584 (MiInsertLargeTbFlushEntry.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     MiDeleteEmptyPageTables @ 0x1403EDF80 (MiDeleteEmptyPageTables.c)
 *     memset @ 0x140408F80 (memset.c)
 *     MiDecrementAweMapCount @ 0x140545EC8 (MiDecrementAweMapCount.c)
 *     MiGetAweNode @ 0x1405468C0 (MiGetAweNode.c)
 *     MiGetAweViewPageSize @ 0x1405469B8 (MiGetAweViewPageSize.c)
 *     MiUpdateAwePageTable @ 0x140548514 (MiUpdateAwePageTable.c)
 *     MiWriteAweClusterPte @ 0x1405486C4 (MiWriteAweClusterPte.c)
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
  __int64 v42; // r8
  unsigned __int64 v43; // rax
  unsigned __int64 v44; // r9
  char v45; // r10
  ULONG_PTR v46; // rax
  __int64 v47; // rbx
  int v48; // r9d
  __int64 v49; // rax
  __int64 v50; // rcx
  unsigned __int64 v51; // rdi
  __int64 v52; // r15
  unsigned __int64 v53; // rax
  unsigned __int64 v54; // rax
  __int64 v55; // rax
  __int64 v56; // rbx
  unsigned __int64 v57; // r15
  __int64 v58; // rax
  __int64 v59; // rdx
  unsigned __int64 v60; // r14
  __int64 v61; // r9
  __int64 v62; // r8
  unsigned __int64 v63; // rbx
  __int64 v64; // r15
  int IsContended; // eax
  ULONG_PTR v66; // rdi
  __int64 v67; // rdi
  bool v68; // cf
  int v69; // ebx
  _KPROCESS *v70; // rdx
  __int64 v71; // r8
  ULONG_PTR v72; // rax
  unsigned __int64 v73; // rax
  unsigned __int64 v74; // r9
  char v75; // r10
  _KPROCESS *v76; // rdx
  int v77; // ebx
  __int64 v78; // r8
  unsigned __int64 v79; // rax
  unsigned __int64 v80; // r9
  char v81; // r10
  unsigned __int8 v83; // [rsp+30h] [rbp-D0h]
  int v84; // [rsp+34h] [rbp-CCh]
  __int64 v85; // [rsp+38h] [rbp-C8h]
  __int64 v86; // [rsp+40h] [rbp-C0h]
  unsigned int v87; // [rsp+48h] [rbp-B8h]
  __int64 v88; // [rsp+50h] [rbp-B0h]
  __int64 v89; // [rsp+58h] [rbp-A8h]
  BOOL v90; // [rsp+60h] [rbp-A0h]
  ULONG_PTR v91; // [rsp+68h] [rbp-98h]
  __int64 v92; // [rsp+70h] [rbp-90h]
  unsigned int v93; // [rsp+78h] [rbp-88h]
  _QWORD *v94; // [rsp+80h] [rbp-80h]
  unsigned __int64 ValidPte; // [rsp+88h] [rbp-78h]
  __int64 v96; // [rsp+90h] [rbp-70h]
  int v97; // [rsp+98h] [rbp-68h] BYREF
  ULONG_PTR v98; // [rsp+A0h] [rbp-60h]
  unsigned __int64 v99; // [rsp+A8h] [rbp-58h]
  unsigned __int64 v100; // [rsp+B0h] [rbp-50h]
  __int64 v101; // [rsp+B8h] [rbp-48h]
  _QWORD *v102; // [rsp+C0h] [rbp-40h]
  __int64 v103; // [rsp+C8h] [rbp-38h]
  __int64 v104; // [rsp+D0h] [rbp-30h] BYREF
  __int64 v105; // [rsp+D8h] [rbp-28h]
  __int64 v106; // [rsp+E0h] [rbp-20h] BYREF
  __int64 v107; // [rsp+E8h] [rbp-18h]
  __int64 v108; // [rsp+F0h] [rbp-10h]
  _QWORD v109[24]; // [rsp+100h] [rbp+0h] BYREF

  v6 = a5;
  v100 = a3;
  v102 = a2;
  v103 = a4;
  memset(v109, 0, 0xB8uLL);
  v105 = *(_QWORD *)(a1 + 32);
  v8 = &KeGetCurrentThread()->ApcState.Process[1].ActiveProcessorsPadding[6];
  v92 = (__int64)v8;
  v96 = *(_QWORD *)(v105 + 8);
  AweViewPageSize = MiGetAweViewPageSize(a1);
  LODWORD(v109[1]) = 20;
  v91 = 0LL;
  v89 = 0LL;
  v12 = v10;
  v84 = 0;
  if ( AweViewPageSize )
    v12 = AweViewPageSize;
  v104 = 0LL;
  v88 = v12;
  WORD2(v109[0]) = 0;
  v109[2] = 0LL;
  v93 = v12 == 512;
  LODWORD(v109[0]) = 1;
  v13 = v10;
  v109[3] = 0LL;
  v14 = 0LL;
  if ( v12 == 512 )
    v13 = 1LL;
  v85 = v13;
  if ( (a6 & 1) != 0 )
  {
    v15 = *(_QWORD *)(a1 + 24);
    v86 = v15;
    v16 = (v93 << 26) | 0x80000000;
    v17 = *(_DWORD *)(v15 + 48);
    if ( (v17 & 0x300000) == 0x300000 )
      v16 = v93 << 26;
    if ( (*v11 & 1) != 0 )
      v18 = 4;
    else
      v18 = (v17 >> 7) & 0x1F;
    ValidPte = MiMakeValidPte(0xFFFFF6BFFFFFFF78uLL, 0LL, v18 | v16, (__int64)v11);
    v19 = (v17 >> 12) & 0x3F;
    v20 = ValidPte;
    v87 = v19;
    v21 = MiLockWorkingSetShared((__int64)v8);
    v22 = v85;
    v83 = v21;
    v23 = (v17 & 0x1100000) == 17825792;
  }
  else
  {
    v15 = 0LL;
    v86 = 0LL;
    v20 = 0LL;
    ValidPte = 0LL;
    v19 = 0;
    v87 = 0;
    v83 = 17;
    LeafVa = MiGetLeafVa(a5);
    v23 = ((_DWORD)MiLocateAddress(LeafVa)[6] & 0x1100000) == 17825792;
  }
  v90 = v23;
  v99 = 0LL;
  if ( !v100 )
  {
    v67 = v86;
    goto LABEL_116;
  }
  v25 = v102;
  v26 = v103;
  v27 = v102;
  v107 = 8 * v22;
  v28 = v103 - (_QWORD)v102;
  v101 = 0LL;
  v108 = v103 - (_QWORD)v102;
  v94 = v102;
  while ( 1 )
  {
    if ( v26 )
    {
      v29 = *(_QWORD *)((char *)v27 + v28);
      v30 = v93;
      v6 = ((v29 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      if ( v88 == 512 )
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
        v86 = v15;
        v33 = *(_DWORD *)(v15 + 48);
        if ( ((unsigned __int8)*(_DWORD *)v105 & v34) != 0 )
          v35 = 4;
        else
          v35 = (v33 >> 7) & 0x1F;
        v36 = MiMakeValidPte(0xFFFFF6BFFFFFFF78uLL, 0LL, v35 | v32, v31);
        v27 = v94;
        v20 = v36;
        v19 = (v33 >> 12) & 0x3F;
        ValidPte = v36;
        v87 = v19;
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
          updated = MiUpdateAwePageTable(v14, v89, v84);
          MiFlushTbList((__int64)v109, v41);
          if ( v90 )
            v91 = 0LL;
          MiUnlockPageTableInternal(v92, v14, v42);
          if ( updated )
          {
            MiUnlockWorkingSetShared(v92, v83);
            MiGetLeafVa(v14 + 8);
            v43 = MiGetLeafVa(v14);
            MiDeleteEmptyPageTables(v43, v44, v45);
            v83 = MiLockWorkingSetShared(v92);
          }
          v89 = 0LL;
          v84 = 0;
        }
        MiMakeSystemAddressValid(v6, 0LL, v19, v83, 0);
        v14 = v39;
      }
      v15 = v86;
    }
    else
    {
      v14 = v38 - 0x98000000000LL;
    }
    v46 = v6;
    v47 = *(_QWORD *)v6;
    v48 = 0;
    v106 = *(_QWORD *)v6;
    if ( v91 )
      v46 = v91;
    v91 = v46;
    v98 = v46;
    if ( (v37 & 1) == 0 )
    {
      if ( v47 )
      {
        v84 -= v85;
        v89 -= v85;
        if ( (v47 & 1) == 0 || (v48 = 3, v88 != 512) )
          v48 = 4;
      }
      goto LABEL_57;
    }
    if ( (v47 & 1) != 0 )
    {
      if ( v37 != v47 )
      {
        LOBYTE(v48) = v88 == 512;
        ++v48;
      }
LABEL_57:
      v49 = v85;
      goto LABEL_58;
    }
    v49 = v85;
    v48 = 5;
    if ( (v47 & 0x800) == 0 )
    {
      v89 += v85;
      if ( !v47 )
        v84 += v85;
    }
LABEL_58:
    MiWriteAweClusterPte(v92, (__int64 *)v6, v37, v48, v49);
    if ( v47 )
    {
      if ( (v47 & 1) != 0 )
      {
        if ( v15 )
        {
          if ( v88 == 512 )
          {
            if ( v85 )
            {
              v51 = v6;
              v52 = v85;
              do
              {
                MiInsertLargeTbFlushEntry((__int64)v109, v93, v51);
                v51 += 8LL;
                --v52;
              }
              while ( v52 );
              v19 = v87;
              v20 = ValidPte;
            }
          }
          else
          {
            MiInsertTbFlushEntry((__int64)v109, (__int64)(v6 << 25) >> 16, v85, 0);
          }
        }
        v53 = (unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v106) >> 12;
      }
      else
      {
        v54 = v47;
        if ( qword_140C4DE80 && (v47 & 0x10) == 0 )
          v54 = v47 & ~qword_140C4DE80;
        v53 = v54 >> 12;
      }
      v50 = 0xFFFFFFFFFLL;
      v55 = v53 & 0xFFFFFFFFFLL;
    }
    else
    {
      v55 = -1LL;
    }
    if ( !v47 )
    {
      v59 = v96;
LABEL_90:
      v58 = v88;
      goto LABEL_91;
    }
    v56 = 48 * v55 - 0x58000000000LL;
    v57 = 0LL;
    v58 = v88;
    v59 = v96;
    if ( v88 )
    {
      v60 = v88;
      v61 = 0x3FFFFFFFFFFFFFFFLL;
      v62 = 1LL;
      do
      {
        if ( (*(_QWORD *)(v56 + 24) & 0x3FFFFFFFFFFFFFFFLL) == 1 )
          goto LABEL_86;
        v97 = 0;
        if ( _interlockedbittestandset64((volatile signed __int32 *)(v56 + 24), 0x3FuLL) )
        {
          do
          {
            do
              KeYieldProcessorEx(&v97, v59, v62, v61);
            while ( *(__int64 *)(v56 + 24) < 0 );
          }
          while ( _interlockedbittestandset64((volatile signed __int32 *)(v56 + 24), 0x3FuLL) );
          v60 = v88;
          v61 = 0x3FFFFFFFFFFFFFFFLL;
          v62 = 1LL;
        }
        v50 = *(_QWORD *)(v56 + 24) & 0x3FFFFFFFFFFFFFFFLL;
        if ( v50 == 1 )
          v50 = 1LL;
        else
          *(_QWORD *)(v56 + 24) ^= (*(_QWORD *)(v56 + 24) ^ (v50 - 1)) & 0x3FFFFFFFFFFFFFFFLL;
        _InterlockedAnd64((volatile signed __int64 *)(v56 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        if ( v50 == 1 )
        {
LABEL_86:
          MiDecrementAweMapCount(v50, v56, &v104, 0LL);
          v62 = 1LL;
          v61 = 0x3FFFFFFFFFFFFFFFLL;
        }
        v59 = v96;
        v56 += 48 * v96;
        v57 += v96;
      }
      while ( v57 < v60 );
      v19 = v87;
      v20 = ValidPte;
      goto LABEL_90;
    }
LABEL_91:
    v63 = v99 + 1;
    v27 = v94 + 1;
    v6 += v107;
    ++v99;
    ++v94;
    v101 += v85;
    if ( (v101 & 0x3F) == 0 || v58 != v59 )
      break;
    v67 = v86;
    v64 = v92;
LABEL_98:
    v68 = v63 < v100;
    v25 = v102;
    v28 = v108;
    v26 = v103;
    if ( !v68 )
      goto LABEL_112;
    v15 = v86;
  }
  v64 = v92;
  if ( MiWorkingSetIsContended(v92) )
  {
    v66 = v98;
  }
  else
  {
    IsContended = MiPageTableLockIsContended(v92, v14);
    v66 = v98;
    if ( !IsContended )
    {
      v91 = v98;
      if ( !KeShouldYieldProcessor() )
      {
        v67 = v86;
LABEL_97:
        v27 = v94;
        goto LABEL_98;
      }
    }
  }
  if ( v63 != v100 )
  {
    v69 = MiUpdateAwePageTable(v14, v89, v84);
    MiFlushTbList((__int64)v109, v70);
    v91 = v66;
    if ( v90 )
    {
      v72 = v66;
      if ( v66 )
        v72 = 0LL;
      v91 = v72;
    }
    MiUnlockPageTableInternal(v92, v14, v71);
    MiUnlockWorkingSetShared(v92, v83);
    v67 = v86;
    if ( v69 && v86 )
    {
      MiGetLeafVa(v14 + 8);
      v73 = MiGetLeafVa(v14);
      MiDeleteEmptyPageTables(v73, v74, v75);
    }
    v89 = 0LL;
    v14 = 0LL;
    v84 = 0;
    MiLockWorkingSetShared(v92);
    v63 = v99;
    goto LABEL_97;
  }
  v67 = v86;
LABEL_112:
  if ( v14 )
  {
    v77 = MiUpdateAwePageTable(v14, v89, v84);
    if ( v67 )
    {
      MiFlushTbList((__int64)v109, v76);
      MiUnlockPageTableInternal(v64, v14, v78);
      goto LABEL_117;
    }
    return v104;
  }
LABEL_116:
  v64 = v92;
  v77 = 0;
LABEL_117:
  MiUnlockWorkingSetShared(v64, v83);
  if ( v77 && v67 )
  {
    MiGetLeafVa(v14 + 8);
    v79 = MiGetLeafVa(v14);
    MiDeleteEmptyPageTables(v79, v80, v81);
  }
  return v104;
}
