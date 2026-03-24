/*
 * XREFs of MiBuildMappedCluster @ 0x1402560D0
 * Callers:
 *     MiGatherMappedPages @ 0x140255BC8 (MiGatherMappedPages.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x14024B280 (KeYieldProcessorEx.c)
 *     MiReleaseWriteInProgressCharges @ 0x140255824 (MiReleaseWriteInProgressCharges.c)
 *     MiReferencePageForModifiedWrite @ 0x1402568EC (MiReferencePageForModifiedWrite.c)
 *     MiAllocatePool @ 0x14025AD70 (MiAllocatePool.c)
 *     MiLockPageInline @ 0x1402FFE30 (MiLockPageInline.c)
 *     MiWriteCompletePfn @ 0x140325C80 (MiWriteCompletePfn.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14032DEC0 (MI_READ_PTE_LOCK_FREE.c)
 *     MiMapPageInHyperSpaceWorker @ 0x140331AB0 (MiMapPageInHyperSpaceWorker.c)
 *     MiUnmapPageInHyperSpaceWorker @ 0x140348910 (MiUnmapPageInHyperSpaceWorker.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiBuildMappedCluster(_QWORD *a1, __int64 a2, int a3)
{
  int v3; // r13d
  __int64 v4; // r15
  __int64 v5; // r12
  __int64 v6; // rbx
  unsigned __int64 v7; // r9
  unsigned __int64 v8; // rcx
  unsigned __int64 v9; // r12
  unsigned __int64 v10; // rdi
  __int64 v11; // rbx
  unsigned __int64 v12; // rsi
  unsigned __int64 v13; // r14
  __int64 v14; // r8
  unsigned __int64 v15; // r9
  __int64 v16; // r10
  unsigned __int64 v17; // r11
  __int64 v18; // rcx
  __int64 *v19; // r14
  unsigned __int64 v20; // r12
  unsigned __int64 v21; // rdx
  unsigned __int64 v22; // rcx
  unsigned __int64 v23; // rsi
  unsigned __int64 v24; // r13
  int v25; // ecx
  unsigned __int64 v26; // rax
  char v27; // bl
  __int64 v28; // rsi
  bool v29; // cc
  unsigned __int64 v30; // r13
  unsigned __int64 v31; // rsi
  __int64 result; // rax
  __int64 v33; // rbx
  ULONG_PTR v34; // rsi
  __int64 v35; // r9
  __int64 v36; // rax
  int v37; // ecx
  unsigned __int64 v38; // r8
  __int64 v39; // rax
  unsigned __int64 v40; // rcx
  unsigned __int64 v41; // rbx
  __int64 Pool; // rax
  __int64 v43; // r9
  __int64 v44; // r14
  unsigned __int64 *v45; // rsi
  __int64 v46; // rdx
  __int64 v47; // r8
  __int64 v48; // r9
  __int64 v49; // r12
  unsigned __int64 *v50; // r15
  unsigned __int64 v51; // rbx
  ULONG_PTR v52; // r14
  __int64 v53; // r9
  int v54; // eax
  unsigned __int64 v55; // rax
  char v56; // bl
  unsigned __int64 v57; // r15
  unsigned __int64 v58; // r14
  int v59; // eax
  unsigned __int64 v60; // rsi
  unsigned __int64 v61; // r13
  unsigned __int64 *v62; // r15
  ULONG_PTR v63; // rbx
  unsigned __int64 v64; // r14
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v68; // eax
  bool v69; // zf
  unsigned __int64 v70; // r12
  ULONG_PTR v71; // rbx
  unsigned __int64 v72; // r15
  unsigned __int8 v73; // al
  struct _KPRCB *v74; // r10
  _DWORD *v75; // r9
  int v76; // eax
  unsigned __int64 v77; // [rsp+28h] [rbp-59h]
  unsigned __int64 *v78; // [rsp+30h] [rbp-51h]
  __int64 v79; // [rsp+38h] [rbp-49h]
  unsigned __int64 v80; // [rsp+40h] [rbp-41h]
  unsigned __int64 v81; // [rsp+48h] [rbp-39h]
  unsigned __int64 v82; // [rsp+50h] [rbp-31h]
  unsigned __int64 v83; // [rsp+58h] [rbp-29h]
  unsigned __int64 *v84; // [rsp+58h] [rbp-29h]
  __int64 v85; // [rsp+60h] [rbp-21h]
  unsigned __int64 v86; // [rsp+68h] [rbp-19h]
  int v87; // [rsp+70h] [rbp-11h] BYREF
  int v88; // [rsp+74h] [rbp-Dh] BYREF
  __int64 v89; // [rsp+78h] [rbp-9h]
  unsigned __int64 v90; // [rsp+80h] [rbp-1h]
  unsigned __int64 v91; // [rsp+88h] [rbp+7h]
  unsigned __int64 *v92; // [rsp+90h] [rbp+Fh]
  __int64 v95; // [rsp+F0h] [rbp+6Fh]
  int v97; // [rsp+F8h] [rbp+77h]
  int v98; // [rsp+F8h] [rbp+77h]
  char v99; // [rsp+100h] [rbp+7Fh] BYREF

  v3 = a3;
  v99 = 0;
  v4 = a2;
  v5 = a1[1];
  v6 = a1[2];
  v7 = a1[5];
  v8 = (__int64)((unsigned __int128)((__int64)(a1 + 0xB000000000LL) * (__int128)0x2AAAAAAAAAAAAAABLL) >> 64) >> 3;
  v92 = (unsigned __int64 *)(a2 + 48);
  v78 = (unsigned __int64 *)(a2 + 48);
  v9 = v5 | 0x8000000000000000uLL;
  v90 = (v8 >> 63) + v8;
  v83 = v9;
  v10 = v9 & 0xFFFFFFFFFFFFF000uLL;
  v82 = v9;
  v85 = *(_QWORD *)(qword_140C4E648 + 8 * ((v7 >> 39) & 0x3FF));
  if ( qword_140C4DF40 && (v6 & 0x10) == 0 )
    v6 &= ~qword_140C4DF40;
  v11 = v6 >> 16;
  if ( v10 < *(_QWORD *)(v11 + 8) )
    v10 = *(_QWORD *)(v11 + 8);
  v12 = v10;
  if ( v10 < v9 - 120 )
    v12 = v9 - 120;
  v89 = v7 & 0xFFFFFFFFFLL;
  v79 = MiMapPageInHyperSpaceWorker(v89, &v99, 0x80000000LL, v89);
  LODWORD(v91) = v9;
  v13 = v79 + (v9 & 0xFFF);
  v80 = v9;
  v14 = 0LL;
  v15 = v9;
  v16 = v79;
  v17 = v9;
  if ( v3 )
    v15 = v10;
  if ( v9 > v15 )
  {
    do
    {
      v13 -= 8LL;
      v38 = v17;
      v39 = *(_QWORD *)v13;
      if ( (*(_QWORD *)v13 & 0xC01LL) != 0x800
        || (*(_QWORD *)(48 * (((v39 & (unsigned __int64)~qword_140C4DF40) >> 12) & 0xFFFFFFFFFLL) - 0x57FFFFFFFD8LL) & 0x4000000000000LL) == 0
        || (*(_BYTE *)(48 * (((v39 & (unsigned __int64)~qword_140C4DF40) >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL + 34) & 0x10) == 0
        || *(_WORD *)(48 * (((v39 & (unsigned __int64)~qword_140C4DF40) >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL + 32)
        || v85 != *(_QWORD *)(qword_140C4E648
                            + 8
                            * ((*(_QWORD *)(48 * (((v39 & (unsigned __int64)~qword_140C4DF40) >> 12) & 0xFFFFFFFFFLL)
                                          - 0x58000000000LL
                                          + 40) >> 39) & 0x3FFLL)) )
      {
        break;
      }
      v9 -= 8LL;
      v17 = v9;
      if ( v9 < v12 )
        v17 = v38;
    }
    while ( v9 > v15 );
    v14 = 0LL;
    v4 = a2;
    v3 = a3;
    v16 = v79;
    v80 = v17;
    v83 = v9;
  }
  v18 = *(unsigned int *)(v11 + 44);
  v19 = (__int64 *)(((unsigned __int16)v13 ^ (unsigned __int16)v17) & 0xFFF ^ v13);
  v20 = (v17 & 0xFFFFFFFFFFFFF000uLL) + 4096;
  v21 = *(_QWORD *)(v11 + 8) + 8 * v18;
  if ( v20 > v21 )
    v20 = *(_QWORD *)(v11 + 8) + 8 * v18;
  v86 = v20;
  v22 = v20;
  if ( v20 > v17 + 128 )
    v22 = v17 + 128;
  if ( !v3 )
  {
    v20 = v17 + 8;
    v86 = v17 + 8;
  }
  v81 = v17;
  v23 = v17 + 8;
  if ( v3 )
    v23 = v22;
  v24 = v17;
  v77 = v23;
  v25 = 1;
  v97 = 1;
  if ( v17 < v20 )
  {
    v26 = v82;
    v77 = v23;
    while ( v24 == v26 )
    {
      v21 = v90;
      *v78++ = v90;
LABEL_23:
      v24 += 8LL;
      ++v19;
      v81 = v24;
      if ( v24 >= v20 )
        goto LABEL_24;
    }
    if ( v25 != 3 || (__int64)(((unsigned __int64)v78 - v4 - 48) & 0xFFFFFFFFFFFFFFF8uLL) < 128 )
    {
      v33 = *v19;
      if ( (*v19 & 0xC01) == 0x800 )
      {
        v21 = 6 * (((v33 & (unsigned __int64)~qword_140C4DF40) >> 12) & 0xFFFFFFFFFLL);
        if ( (*(_QWORD *)(48 * (((v33 & (unsigned __int64)~qword_140C4DF40) >> 12) & 0xFFFFFFFFFLL) - 0x57FFFFFFFD8LL) & 0x4000000000000LL) == 0 )
        {
          v26 = v82;
          --v19;
          v24 -= 8LL;
          goto LABEL_43;
        }
        v34 = 48 * (((v33 & (unsigned __int64)~qword_140C4DF40) >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL;
        v87 = 0;
        while ( _interlockedbittestandset64((volatile signed __int32 *)(v34 + 24), 0x3FuLL) )
        {
          do
            KeYieldProcessorEx(&v87, v21, v14, v15);
          while ( *(__int64 *)(v34 + 24) < 0 );
        }
        if ( v33 != MI_READ_PTE_LOCK_FREE(v19) )
        {
          _InterlockedAnd64((volatile signed __int64 *)(v34 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          v16 = v79;
          --v19;
          v26 = v82;
          v24 -= 8LL;
          v23 = v77;
LABEL_121:
          v14 = 0LL;
          goto LABEL_43;
        }
        if ( (*(_BYTE *)(v34 + 34) & 0x10) != 0
          && (v14 = 0LL, !*(_WORD *)(v34 + 32))
          && v85 == *(_QWORD *)(qword_140C4E648 + 8 * ((*(_QWORD *)(v34 + 40) >> 39) & 0x3FFLL)) )
        {
          if ( v24 >= v77 )
          {
LABEL_42:
            _InterlockedAnd64((volatile signed __int64 *)(v34 + 24), 0x7FFFFFFFFFFFFFFFuLL);
            v16 = v79;
            v26 = v82;
            v23 = v77;
LABEL_43:
            v25 = v97;
            goto LABEL_23;
          }
          if ( v79 )
          {
            LOBYTE(v21) = 2;
            MiUnmapPageInHyperSpaceWorker(v79, v21, 0x80000000LL);
            v97 = MiReferencePageForModifiedWrite(v34);
            v36 = MiMapPageInHyperSpaceWorker(v89, 0LL, 0x80000000LL, v35);
            v37 = v97;
            v19 = (__int64 *)(v36 + ((unsigned __int16)v19 & 0xFFF));
            v79 = v36;
            v16 = v36;
          }
          else
          {
            v59 = MiReferencePageForModifiedWrite(v34);
            v16 = 0LL;
            v37 = v59;
            v97 = v59;
          }
          v14 = 0LL;
          if ( v37 )
          {
            *v78++ = ((v33 & (unsigned __int64)~qword_140C4DF40) >> 12) & 0xFFFFFFFFFLL;
            goto LABEL_42;
          }
        }
        else
        {
          v16 = v79;
        }
        _InterlockedAnd64((volatile signed __int64 *)(v34 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        v23 = v77;
      }
    }
    v27 = v99;
    if ( v16 )
    {
      LOBYTE(v21) = v99;
      MiUnmapPageInHyperSpaceWorker(v16, v21, 0x80000000LL);
      v14 = 0LL;
      v16 = 0LL;
    }
    v40 = v82;
    if ( v24 >= v82 )
      goto LABEL_25;
    v60 = ((__int64)v78 - v4 - 48) >> 3;
    if ( v60 )
    {
      v61 = v4 + 48;
      if ( (unsigned __int64)v78 > v4 + 48 )
      {
        v62 = v78;
        do
        {
          v63 = 48 * *--v62 - 0x58000000000LL;
          v64 = (unsigned __int8)MiLockPageInline(v63, v21, v14);
          MiWriteCompletePfn(v63);
          _InterlockedAnd64((volatile signed __int64 *)(v63 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          if ( KiIrqlFlags )
          {
            if ( (KiIrqlFlags & 1) != 0 )
            {
              CurrentIrql = KeGetCurrentIrql();
              if ( CurrentIrql <= 0xFu && (unsigned __int8)v64 <= 0xFu && CurrentIrql >= 2u )
              {
                CurrentPrcb = KeGetCurrentPrcb();
                v21 = -1LL << ((unsigned __int8)v64 + 1);
                SchedulerAssist = CurrentPrcb->SchedulerAssist;
                v68 = ~(unsigned __int16)v21;
                v69 = (v68 & SchedulerAssist[5]) == 0;
                v14 = (unsigned int)v68 & SchedulerAssist[5];
                SchedulerAssist[5] = v14;
                if ( v69 )
                  KiRemoveSystemWorkPriorityKick(CurrentPrcb);
              }
            }
          }
          __writecr8(v64);
        }
        while ( (unsigned __int64)v62 > v61 );
        v20 = v86;
        v78 = v62;
        v4 = a2;
      }
      MiReleaseWriteInProgressCharges(v85, v60, 1);
      v40 = v82;
    }
    v23 = v77;
    if ( v77 == v80 + 8 )
    {
      v20 = v40 + 8;
      v86 = v40 + 8;
      v23 = v40 + 8;
    }
    else if ( v20 > v40 + 128 )
    {
      v23 = v40 + 128;
    }
    v80 = v40;
    v77 = v23;
    v16 = MiMapPageInHyperSpaceWorker(v89, &v99, 0x80000000LL, v15);
    v79 = v16;
    v19 = (__int64 *)(v16 + (v91 & 0xFFF) - 8);
    v26 = v82;
    v24 = v82 - 8;
    goto LABEL_121;
  }
LABEL_24:
  v27 = v99;
LABEL_25:
  if ( v16 )
  {
    LOBYTE(v21) = v27;
    MiUnmapPageInHyperSpaceWorker(v16, v21, 0x80000000LL);
  }
  if ( v24 <= v77 )
    v23 = v24;
  v28 = (__int64)(v23 - v80) >> 3;
  if ( v97 == 3 )
    goto LABEL_32;
  v29 = v24 <= v77;
  v30 = v83;
  if ( v29 && v83 >= v80 )
    goto LABEL_32;
  v41 = v81;
  Pool = MiAllocatePool(64LL, 8 * ((__int64)(v81 - v83) >> 3) + 48, 1700228429LL, v15);
  v95 = Pool;
  v44 = Pool;
  if ( !Pool )
    goto LABEL_32;
  v84 = v92;
  v91 = Pool + 48;
  v45 = (unsigned __int64 *)(Pool + 48);
  v98 = 1;
  v49 = MiMapPageInHyperSpaceWorker(a1[5] & 0xFFFFFFFFFLL, &v99, 0x80000000LL, v43);
  v50 = (unsigned __int64 *)(v49 + (v30 & 0xFFF));
  while ( v30 < v41 )
  {
    if ( v30 < v77 && v30 >= v80 )
    {
      v55 = *v84++;
      *v45 = v55;
      goto LABEL_77;
    }
    if ( v98 == 3 && (__int64)(((unsigned __int64)v45 - v44 - 48) & 0xFFFFFFFFFFFFFFF8uLL) >= 128 )
      goto LABEL_89;
    v51 = *v50;
    if ( (*v50 & 0xC01) != 0x800 )
      goto LABEL_89;
    v46 = 6 * (((v51 & ~qword_140C4DF40) >> 12) & 0xFFFFFFFFFLL);
    if ( (*(_QWORD *)(48 * (((v51 & ~qword_140C4DF40) >> 12) & 0xFFFFFFFFFLL) - 0x57FFFFFFFD8LL) & 0x4000000000000LL) != 0 )
    {
      v52 = 48 * (((v51 & ~qword_140C4DF40) >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL;
      v88 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v52 + 24), 0x3FuLL) )
      {
        do
          KeYieldProcessorEx(&v88, v46, v47, v48);
        while ( *(__int64 *)(v52 + 24) < 0 );
      }
      if ( v51 == MI_READ_PTE_LOCK_FREE(v50) )
      {
        if ( (*(_BYTE *)(v52 + 34) & 0x10) != 0 )
        {
          v46 = 0LL;
          if ( !*(_WORD *)(v52 + 32)
            && v85 == *(_QWORD *)(qword_140C4E648 + 8 * ((*(_QWORD *)(v52 + 40) >> 39) & 0x3FFLL)) )
          {
            if ( v49 )
            {
              LOBYTE(v46) = 2;
              MiUnmapPageInHyperSpaceWorker(v49, v46, 0x80000000LL);
              v98 = MiReferencePageForModifiedWrite(v52);
              v49 = MiMapPageInHyperSpaceWorker(v89, 0LL, 0x80000000LL, v53);
              v50 = (unsigned __int64 *)(v49 + ((unsigned __int16)v50 & 0xFFF));
              v54 = v98;
            }
            else
            {
              v54 = MiReferencePageForModifiedWrite(v52);
              v98 = v54;
            }
            if ( v54 )
            {
              *v45 = (v51 >> 12) & ((unsigned __int64)~qword_140C4DF40 >> 12) & 0xFFFFFFFFFLL;
              _InterlockedAnd64((volatile signed __int64 *)(v52 + 24), 0x7FFFFFFFFFFFFFFFuLL);
              v41 = v81;
LABEL_77:
              ++v50;
              v30 += 8LL;
              ++v45;
              goto LABEL_78;
            }
          }
        }
        _InterlockedAnd64((volatile signed __int64 *)(v52 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        v44 = v95;
LABEL_89:
        v56 = v99;
        if ( v49 )
        {
          LOBYTE(v46) = v99;
          MiUnmapPageInHyperSpaceWorker(v49, v46, 0x80000000LL);
          v49 = 0LL;
        }
        v57 = v80;
        if ( v30 >= v80 )
          goto LABEL_86;
        v58 = ((__int64)v45 - v95 - 48) >> 3;
        v90 = v58;
        if ( v58 )
        {
          v70 = v91;
          if ( (unsigned __int64)v45 > v91 )
          {
            do
            {
              v71 = 48 * *--v45 - 0x58000000000LL;
              v72 = (unsigned __int8)MiLockPageInline(v71, v46, v47);
              MiWriteCompletePfn(v71);
              _InterlockedAnd64((volatile signed __int64 *)(v71 + 24), 0x7FFFFFFFFFFFFFFFuLL);
              if ( KiIrqlFlags )
              {
                if ( (KiIrqlFlags & 1) != 0 )
                {
                  v73 = KeGetCurrentIrql();
                  if ( v73 <= 0xFu && (unsigned __int8)v72 <= 0xFu && v73 >= 2u )
                  {
                    v74 = KeGetCurrentPrcb();
                    v46 = -1LL << ((unsigned __int8)v72 + 1);
                    v75 = v74->SchedulerAssist;
                    v76 = ~(unsigned __int16)v46;
                    v69 = (v76 & v75[5]) == 0;
                    v47 = (unsigned int)v76 & v75[5];
                    v75[5] = v47;
                    if ( v69 )
                      KiRemoveSystemWorkPriorityKick(v74);
                  }
                }
              }
              __writecr8(v72);
            }
            while ( (unsigned __int64)v45 > v70 );
            v58 = v90;
            v57 = v80;
          }
          MiReleaseWriteInProgressCharges(v85, v58, 1);
        }
        v84 = v92;
        v30 = v57;
        v49 = MiMapPageInHyperSpaceWorker(a1[5] & 0xFFFFFFFFFLL, &v99, 0x80000000LL, v48);
        v50 = (unsigned __int64 *)(v49 + (v57 & 0xFFF));
        goto LABEL_94;
      }
      _InterlockedAnd64((volatile signed __int64 *)(v52 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    }
LABEL_94:
    v41 = v81;
LABEL_78:
    v44 = v95;
  }
  v56 = v99;
LABEL_86:
  if ( v49 )
  {
    LOBYTE(v46) = v56;
    MiUnmapPageInHyperSpaceWorker(v49, v46, 0x80000000LL);
  }
  v4 = v44;
  v28 = ((__int64)v45 - v44 - 48) >> 3;
LABEL_32:
  v31 = v28 << 12;
  *(_QWORD *)v4 = 0LL;
  *(_QWORD *)(v4 + 32) = 0LL;
  *(_WORD *)(v4 + 8) = 8 * ((v31 >> 12) + 6);
  *(_WORD *)(v4 + 10) = 2;
  result = v4;
  *(_QWORD *)(v4 + 40) = (unsigned int)v31;
  return result;
}
