/*
 * XREFs of MiWriteAwePtes @ 0x14054E4D8
 * Callers:
 *     MiDeleteVadAwePtes @ 0x14054BD74 (MiDeleteVadAwePtes.c)
 *     NtMapUserPhysicalPages @ 0x1408D6E40 (NtMapUserPhysicalPages.c)
 *     NtMapUserPhysicalPagesScatter @ 0x1408D7100 (NtMapUserPhysicalPagesScatter.c)
 * Callees:
 *     MiUnlockPageTableInternal @ 0x140202790 (MiUnlockPageTableInternal.c)
 *     KeShouldYieldProcessor @ 0x140211F40 (KeShouldYieldProcessor.c)
 *     MiInsertLargeTbFlushEntry @ 0x1402199E0 (MiInsertLargeTbFlushEntry.c)
 *     MiLocateAddress @ 0x14027CD80 (MiLocateAddress.c)
 *     MiUnlockWorkingSetShared @ 0x1402B4090 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x1402BE5B0 (MiLockWorkingSetShared.c)
 *     KeYieldProcessorEx @ 0x1402EFAD0 (KeYieldProcessorEx.c)
 *     MiPageTableLockIsContended @ 0x1403131B0 (MiPageTableLockIsContended.c)
 *     MiWorkingSetIsContended @ 0x140316520 (MiWorkingSetIsContended.c)
 *     MiMakeSystemAddressValid @ 0x1403190E0 (MiMakeSystemAddressValid.c)
 *     MiGetLeafVa @ 0x140337BB0 (MiGetLeafVa.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140338C10 (MI_READ_PTE_LOCK_FREE.c)
 *     MiMakeValidPte @ 0x140339480 (MiMakeValidPte.c)
 *     MiInsertTbFlushEntry @ 0x140340AC0 (MiInsertTbFlushEntry.c)
 *     MiFlushTbList @ 0x140346270 (MiFlushTbList.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     MiDeleteEmptyPageTables @ 0x1403F4F90 (MiDeleteEmptyPageTables.c)
 *     memset @ 0x140414300 (memset.c)
 *     MiDecrementAweMapCount @ 0x14054BC28 (MiDecrementAweMapCount.c)
 *     MiGetAweNode @ 0x14054C620 (MiGetAweNode.c)
 *     MiGetAweViewPageSize @ 0x14054C718 (MiGetAweViewPageSize.c)
 *     MiUpdateAwePageTable @ 0x14054E274 (MiUpdateAwePageTable.c)
 *     MiWriteAweClusterPte @ 0x14054E424 (MiWriteAweClusterPte.c)
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
  __int64 v21; // rdx
  __int64 v22; // r8
  _DWORD *v23; // r9
  unsigned __int8 v24; // al
  __int64 v25; // r10
  BOOL v26; // eax
  unsigned __int64 LeafVa; // rax
  _QWORD *v28; // rbx
  __int64 v29; // rcx
  _QWORD *v30; // r9
  __int64 v31; // rax
  unsigned __int64 v32; // r8
  unsigned int v33; // ecx
  unsigned int v34; // r11d
  unsigned int v35; // esi
  unsigned __int8 v36; // r10
  int v37; // eax
  unsigned __int64 v38; // rax
  __int64 v39; // rdi
  __int64 v40; // rcx
  unsigned __int64 v41; // r15
  int updated; // ebx
  _KPROCESS *v43; // rdx
  unsigned __int64 v44; // rax
  unsigned __int64 v45; // r9
  char v46; // r10
  __int64 v47; // rdx
  __int64 v48; // r8
  _DWORD *v49; // r9
  ULONG_PTR v50; // rax
  __int64 v51; // rbx
  int v52; // r9d
  __int64 v53; // rax
  __int64 v54; // rcx
  __int64 v55; // rdi
  __int64 v56; // r15
  unsigned __int64 v57; // rax
  unsigned __int64 v58; // rax
  __int64 v59; // rax
  __int64 v60; // rbx
  unsigned __int64 v61; // r15
  __int64 v62; // rax
  __int64 v63; // rdx
  unsigned __int64 v64; // r14
  __int64 v65; // r9
  __int64 v66; // r8
  unsigned __int64 v67; // rbx
  __int64 v68; // r15
  int IsContended; // eax
  ULONG_PTR v70; // rdi
  __int64 v71; // rdi
  bool v72; // cf
  int v73; // ebx
  _KPROCESS *v74; // rdx
  ULONG_PTR v75; // rax
  __int64 v76; // rdx
  __int64 v77; // r8
  _DWORD *v78; // r9
  unsigned __int64 v79; // rax
  unsigned __int64 v80; // r9
  char v81; // r10
  _KPROCESS *v82; // rdx
  int v83; // ebx
  unsigned __int64 v84; // rax
  unsigned __int64 v85; // r9
  char v86; // r10
  unsigned __int8 v88; // [rsp+30h] [rbp-D0h]
  int v89; // [rsp+34h] [rbp-CCh]
  __int64 v90; // [rsp+38h] [rbp-C8h]
  __int64 v91; // [rsp+40h] [rbp-C0h]
  unsigned int v92; // [rsp+48h] [rbp-B8h]
  __int64 v93; // [rsp+50h] [rbp-B0h]
  __int64 v94; // [rsp+58h] [rbp-A8h]
  BOOL v95; // [rsp+60h] [rbp-A0h]
  ULONG_PTR v96; // [rsp+68h] [rbp-98h]
  __int64 v97; // [rsp+70h] [rbp-90h]
  unsigned int v98; // [rsp+78h] [rbp-88h]
  _QWORD *v99; // [rsp+80h] [rbp-80h]
  unsigned __int64 ValidPte; // [rsp+88h] [rbp-78h]
  __int64 v101; // [rsp+90h] [rbp-70h]
  int v102; // [rsp+98h] [rbp-68h] BYREF
  ULONG_PTR v103; // [rsp+A0h] [rbp-60h]
  unsigned __int64 v104; // [rsp+A8h] [rbp-58h]
  unsigned __int64 v105; // [rsp+B0h] [rbp-50h]
  __int64 v106; // [rsp+B8h] [rbp-48h]
  _QWORD *v107; // [rsp+C0h] [rbp-40h]
  __int64 v108; // [rsp+C8h] [rbp-38h]
  __int64 v109; // [rsp+D0h] [rbp-30h] BYREF
  __int64 v110; // [rsp+D8h] [rbp-28h]
  __int64 v111; // [rsp+E0h] [rbp-20h] BYREF
  __int64 v112; // [rsp+E8h] [rbp-18h]
  __int64 v113; // [rsp+F0h] [rbp-10h]
  _QWORD v114[24]; // [rsp+100h] [rbp+0h] BYREF

  v6 = a5;
  v105 = a3;
  v107 = a2;
  v108 = a4;
  memset(v114, 0, 0xB8uLL);
  v110 = *(_QWORD *)(a1 + 32);
  v8 = &KeGetCurrentThread()->ApcState.Process[1].ActiveProcessorsPadding[6];
  v97 = (__int64)v8;
  v101 = *(_QWORD *)(v110 + 8);
  AweViewPageSize = MiGetAweViewPageSize(a1);
  LODWORD(v114[1]) = 20;
  v96 = 0LL;
  v94 = 0LL;
  v12 = v10;
  v89 = 0;
  if ( AweViewPageSize )
    v12 = AweViewPageSize;
  v109 = 0LL;
  v93 = v12;
  WORD2(v114[0]) = 0;
  v114[2] = 0LL;
  v98 = v12 == 512;
  LODWORD(v114[0]) = 1;
  v13 = v10;
  v114[3] = 0LL;
  v14 = 0LL;
  if ( v12 == 512 )
    v13 = 1LL;
  v90 = v13;
  if ( (a6 & 1) != 0 )
  {
    v15 = *(_QWORD *)(a1 + 24);
    v91 = v15;
    v16 = (v98 << 26) | 0x80000000;
    v17 = *(_DWORD *)(v15 + 48);
    if ( (v17 & 0x300000) == 0x300000 )
      v16 = v98 << 26;
    if ( (*v11 & 1) != 0 )
      v18 = 4;
    else
      v18 = (v17 >> 7) & 0x1F;
    ValidPte = MiMakeValidPte(0xFFFFF6BFFFFFFF78uLL, 0LL, v18 | v16);
    v19 = (v17 >> 12) & 0x3F;
    v20 = ValidPte;
    v92 = v19;
    v24 = MiLockWorkingSetShared((__int64)v8, v21, v22, v23);
    v25 = v90;
    v88 = v24;
    v26 = (v17 & 0x1100000) == 17825792;
  }
  else
  {
    v15 = 0LL;
    v91 = 0LL;
    v20 = 0LL;
    ValidPte = 0LL;
    v19 = 0;
    v92 = 0;
    v88 = 17;
    LeafVa = MiGetLeafVa(a5);
    v26 = ((_DWORD)MiLocateAddress(LeafVa)[6] & 0x1100000) == 17825792;
  }
  v95 = v26;
  v104 = 0LL;
  if ( !v105 )
  {
    v71 = v91;
    goto LABEL_116;
  }
  v28 = v107;
  v29 = v108;
  v30 = v107;
  v112 = 8 * v25;
  v31 = v108 - (_QWORD)v107;
  v106 = 0LL;
  v113 = v108 - (_QWORD)v107;
  v99 = v107;
  while ( 1 )
  {
    if ( v29 )
    {
      v32 = *(_QWORD *)((char *)v30 + v31);
      v33 = v98;
      v6 = ((v32 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      if ( v93 == 512 )
      {
        do
        {
          v6 = ((v6 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
          --v33;
        }
        while ( v33 );
      }
      if ( v32 < (*(unsigned int *)(v15 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v15 + 32) << 32)) << 12
        || v32 > (((*(unsigned int *)(v15 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v15 + 33) << 32)) << 12) | 0xFFF) )
      {
        v15 = MiGetAweNode(v32)[3];
        v91 = v15;
        v35 = *(_DWORD *)(v15 + 48);
        if ( ((unsigned __int8)*(_DWORD *)v110 & v36) != 0 )
          v37 = 4;
        else
          v37 = (v35 >> 7) & 0x1F;
        v38 = MiMakeValidPte(0xFFFFF6BFFFFFFF78uLL, 0LL, v37 | v34);
        v30 = v99;
        v20 = v38;
        v19 = (v35 >> 12) & 0x3F;
        ValidPte = v38;
        v92 = v19;
      }
      if ( !v28 || (v39 = v20, !*v30) )
        v39 = ZeroPte;
    }
    else
    {
      v39 = ZeroPte;
      if ( v28 )
        v39 = v20;
    }
    if ( (v39 & 1) != 0 )
      v39 ^= (v39 ^ (*v30 << 12)) & 0xFFFFFFFFF000LL;
    v40 = (v6 >> 9) & 0x7FFFFFFFF8LL;
    if ( v15 )
    {
      v41 = v40 - 0x98000000000LL;
      if ( v14 != v40 - 0x98000000000LL )
      {
        if ( v14 )
        {
          updated = MiUpdateAwePageTable(v14, v94, v89);
          MiFlushTbList((__int64)v114, v43);
          if ( v95 )
            v96 = 0LL;
          MiUnlockPageTableInternal(v97, v14);
          if ( updated )
          {
            MiUnlockWorkingSetShared(v97, v88);
            MiGetLeafVa(v14 + 8);
            v44 = MiGetLeafVa(v14);
            MiDeleteEmptyPageTables(v44, v45, v46);
            v88 = MiLockWorkingSetShared(v97, v47, v48, v49);
          }
          v94 = 0LL;
          v89 = 0;
        }
        MiMakeSystemAddressValid(v6, 0LL, v19, v88, 0);
        v14 = v41;
      }
      v15 = v91;
    }
    else
    {
      v14 = v40 - 0x98000000000LL;
    }
    v50 = v6;
    v51 = *(_QWORD *)v6;
    v52 = 0;
    v111 = *(_QWORD *)v6;
    if ( v96 )
      v50 = v96;
    v96 = v50;
    v103 = v50;
    if ( (v39 & 1) == 0 )
    {
      if ( v51 )
      {
        v89 -= v90;
        v94 -= v90;
        if ( (v51 & 1) == 0 || (v52 = 3, v93 != 512) )
          v52 = 4;
      }
      goto LABEL_57;
    }
    if ( (v51 & 1) != 0 )
    {
      if ( v39 != v51 )
      {
        LOBYTE(v52) = v93 == 512;
        ++v52;
      }
LABEL_57:
      v53 = v90;
      goto LABEL_58;
    }
    v53 = v90;
    v52 = 5;
    if ( (v51 & 0x800) == 0 )
    {
      v94 += v90;
      if ( !v51 )
        v89 += v90;
    }
LABEL_58:
    MiWriteAweClusterPte(v97, (__int64 *)v6, v39, v52, v53);
    if ( v51 )
    {
      if ( (v51 & 1) != 0 )
      {
        if ( v15 )
        {
          if ( v93 == 512 )
          {
            if ( v90 )
            {
              v55 = v6;
              v56 = v90;
              do
              {
                MiInsertLargeTbFlushEntry((__int64)v114, v98, v55);
                v55 += 8LL;
                --v56;
              }
              while ( v56 );
              v19 = v92;
              v20 = ValidPte;
            }
          }
          else
          {
            MiInsertTbFlushEntry((__int64)v114, (__int64)(v6 << 25) >> 16, v90, 0);
          }
        }
        v57 = (unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v111) >> 12;
      }
      else
      {
        v58 = v51;
        if ( qword_140C4DF80 && (v51 & 0x10) == 0 )
          v58 = v51 & ~qword_140C4DF80;
        v57 = v58 >> 12;
      }
      v54 = 0xFFFFFFFFFLL;
      v59 = v57 & 0xFFFFFFFFFLL;
    }
    else
    {
      v59 = -1LL;
    }
    if ( !v51 )
    {
      v63 = v101;
LABEL_90:
      v62 = v93;
      goto LABEL_91;
    }
    v60 = 48 * v59 - 0x58000000000LL;
    v61 = 0LL;
    v62 = v93;
    v63 = v101;
    if ( v93 )
    {
      v64 = v93;
      v65 = 0x3FFFFFFFFFFFFFFFLL;
      v66 = 1LL;
      do
      {
        if ( (*(_QWORD *)(v60 + 24) & 0x3FFFFFFFFFFFFFFFLL) == 1 )
          goto LABEL_86;
        v102 = 0;
        if ( _interlockedbittestandset64((volatile signed __int32 *)(v60 + 24), 0x3FuLL) )
        {
          do
          {
            do
              KeYieldProcessorEx(&v102, v63, v66, v65);
            while ( *(__int64 *)(v60 + 24) < 0 );
          }
          while ( _interlockedbittestandset64((volatile signed __int32 *)(v60 + 24), 0x3FuLL) );
          v64 = v93;
          v65 = 0x3FFFFFFFFFFFFFFFLL;
          v66 = 1LL;
        }
        v54 = *(_QWORD *)(v60 + 24) & 0x3FFFFFFFFFFFFFFFLL;
        if ( v54 == 1 )
          v54 = 1LL;
        else
          *(_QWORD *)(v60 + 24) ^= (*(_QWORD *)(v60 + 24) ^ (v54 - 1)) & 0x3FFFFFFFFFFFFFFFLL;
        _InterlockedAnd64((volatile signed __int64 *)(v60 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        if ( v54 == 1 )
        {
LABEL_86:
          MiDecrementAweMapCount(v54, v60, &v109, 0LL);
          v66 = 1LL;
          v65 = 0x3FFFFFFFFFFFFFFFLL;
        }
        v63 = v101;
        v60 += 48 * v101;
        v61 += v101;
      }
      while ( v61 < v64 );
      v19 = v92;
      v20 = ValidPte;
      goto LABEL_90;
    }
LABEL_91:
    v67 = v104 + 1;
    v30 = v99 + 1;
    v6 += v112;
    ++v104;
    ++v99;
    v106 += v90;
    if ( (v106 & 0x3F) == 0 || v62 != v63 )
      break;
    v71 = v91;
    v68 = v97;
LABEL_98:
    v72 = v67 < v105;
    v28 = v107;
    v31 = v113;
    v29 = v108;
    if ( !v72 )
      goto LABEL_112;
    v15 = v91;
  }
  v68 = v97;
  if ( MiWorkingSetIsContended(v97) )
  {
    v70 = v103;
  }
  else
  {
    IsContended = MiPageTableLockIsContended(v97, v14);
    v70 = v103;
    if ( !IsContended )
    {
      v96 = v103;
      if ( !KeShouldYieldProcessor() )
      {
        v71 = v91;
LABEL_97:
        v30 = v99;
        goto LABEL_98;
      }
    }
  }
  if ( v67 != v105 )
  {
    v73 = MiUpdateAwePageTable(v14, v94, v89);
    MiFlushTbList((__int64)v114, v74);
    v96 = v70;
    if ( v95 )
    {
      v75 = v70;
      if ( v70 )
        v75 = 0LL;
      v96 = v75;
    }
    MiUnlockPageTableInternal(v97, v14);
    MiUnlockWorkingSetShared(v97, v88);
    v71 = v91;
    if ( v73 && v91 )
    {
      MiGetLeafVa(v14 + 8);
      v79 = MiGetLeafVa(v14);
      MiDeleteEmptyPageTables(v79, v80, v81);
    }
    v94 = 0LL;
    v14 = 0LL;
    v89 = 0;
    MiLockWorkingSetShared(v97, v76, v77, v78);
    v67 = v104;
    goto LABEL_97;
  }
  v71 = v91;
LABEL_112:
  if ( v14 )
  {
    v83 = MiUpdateAwePageTable(v14, v94, v89);
    if ( v71 )
    {
      MiFlushTbList((__int64)v114, v82);
      MiUnlockPageTableInternal(v68, v14);
      goto LABEL_117;
    }
    return v109;
  }
LABEL_116:
  v68 = v97;
  v83 = 0;
LABEL_117:
  MiUnlockWorkingSetShared(v68, v88);
  if ( v83 && v71 )
  {
    MiGetLeafVa(v14 + 8);
    v84 = MiGetLeafVa(v14);
    MiDeleteEmptyPageTables(v84, v85, v86);
  }
  return v109;
}
