/*
 * XREFs of MiBuildMappedCluster @ 0x140351CB0
 * Callers:
 *     MiGatherMappedPages @ 0x14035131C (MiGatherMappedPages.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x140244550 (KeYieldProcessorEx.c)
 *     MiWriteCompletePfn @ 0x14028D170 (MiWriteCompletePfn.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140291580 (MI_READ_PTE_LOCK_FREE.c)
 *     MiUnmapPageInHyperSpaceWorker @ 0x1402915F0 (MiUnmapPageInHyperSpaceWorker.c)
 *     MiAllocatePool @ 0x1402A0FB0 (MiAllocatePool.c)
 *     MiLockPageInline @ 0x140346F60 (MiLockPageInline.c)
 *     MiMapPageInHyperSpaceWorker @ 0x140353460 (MiMapPageInHyperSpaceWorker.c)
 *     MiReferencePageForModifiedWrite @ 0x1403536FC (MiReferencePageForModifiedWrite.c)
 *     MiReleaseWriteInProgressCharges @ 0x140354084 (MiReleaseWriteInProgressCharges.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EC9E4 (KiRemoveSystemWorkPriorityKick.c)
 */

unsigned __int64 *__fastcall MiBuildMappedCluster(_QWORD *a1, unsigned __int64 *a2, int a3)
{
  int v3; // r13d
  unsigned __int64 *v4; // r15
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
  _DWORD *SchedulerAssist; // r9
  unsigned __int64 v16; // r10
  unsigned __int64 v17; // r11
  __int64 v18; // rcx
  unsigned __int64 v19; // r14
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
  unsigned __int64 *result; // rax
  __int64 v33; // rbx
  ULONG_PTR v34; // rsi
  __int64 v35; // r9
  __int64 v36; // rax
  int v37; // ecx
  unsigned __int64 v38; // r8
  __int64 v39; // rax
  unsigned __int64 v40; // rcx
  unsigned __int64 v41; // rbx
  char *Pool; // rax
  __int64 v43; // r9
  char *v44; // r14
  unsigned __int64 *v45; // rsi
  __int64 v46; // rdx
  __int64 v47; // r8
  _DWORD *v48; // r9
  unsigned __int64 v49; // r12
  unsigned __int64 v50; // r15
  unsigned __int64 v51; // rbx
  ULONG_PTR v52; // r14
  __int64 v53; // r9
  int v54; // eax
  unsigned __int64 v55; // rax
  char v56; // bl
  unsigned __int64 v57; // r15
  __int64 v58; // r14
  int v59; // eax
  __int64 v60; // rsi
  unsigned __int64 v61; // r13
  unsigned __int64 *v62; // r15
  __int64 v63; // rbx
  unsigned __int64 v64; // r14
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  int v67; // eax
  bool v68; // zf
  unsigned __int64 v69; // r12
  __int64 v70; // rbx
  unsigned __int64 v71; // r15
  unsigned __int8 v72; // al
  struct _KPRCB *v73; // r10
  int v74; // eax
  unsigned __int64 v75; // [rsp+28h] [rbp-59h]
  unsigned __int64 *v76; // [rsp+30h] [rbp-51h]
  unsigned __int64 v77; // [rsp+38h] [rbp-49h]
  unsigned __int64 v78; // [rsp+40h] [rbp-41h]
  unsigned __int64 v79; // [rsp+48h] [rbp-39h]
  unsigned __int64 v80; // [rsp+50h] [rbp-31h]
  unsigned __int64 v81; // [rsp+58h] [rbp-29h]
  unsigned __int64 *v82; // [rsp+58h] [rbp-29h]
  __int64 v83; // [rsp+60h] [rbp-21h]
  unsigned __int64 v84; // [rsp+68h] [rbp-19h]
  int v85; // [rsp+70h] [rbp-11h] BYREF
  int v86; // [rsp+74h] [rbp-Dh] BYREF
  __int64 v87; // [rsp+78h] [rbp-9h]
  __int64 v88; // [rsp+80h] [rbp-1h]
  unsigned __int64 v89; // [rsp+88h] [rbp+7h]
  unsigned __int64 *v90; // [rsp+90h] [rbp+Fh]
  char *v93; // [rsp+F0h] [rbp+6Fh]
  int v95; // [rsp+F8h] [rbp+77h]
  int v96; // [rsp+F8h] [rbp+77h]
  char v97; // [rsp+100h] [rbp+7Fh] BYREF

  v3 = a3;
  v97 = 0;
  v4 = a2;
  v5 = a1[1];
  v6 = a1[2];
  v7 = a1[5];
  v8 = (__int64)((unsigned __int128)((__int64)(a1 + 0xB000000000LL) * (__int128)0x2AAAAAAAAAAAAAABLL) >> 64) >> 3;
  v90 = a2 + 6;
  v76 = a2 + 6;
  v9 = v5 | 0x8000000000000000uLL;
  v88 = (v8 >> 63) + v8;
  v81 = v9;
  v10 = v9 & 0xFFFFFFFFFFFFF000uLL;
  v80 = v9;
  v83 = *(_QWORD *)(qword_140C4E588 + 8 * ((v7 >> 39) & 0x3FF));
  if ( qword_140C4DE80 && (v6 & 0x10) == 0 )
    v6 &= ~qword_140C4DE80;
  v11 = v6 >> 16;
  if ( v10 < *(_QWORD *)(v11 + 8) )
    v10 = *(_QWORD *)(v11 + 8);
  v12 = v10;
  if ( v10 < v9 - 120 )
    v12 = v9 - 120;
  v87 = v7 & 0xFFFFFFFFFLL;
  v77 = MiMapPageInHyperSpaceWorker(v87, &v97, 0x80000000LL, v87);
  LODWORD(v89) = v9;
  v13 = v77 + (v9 & 0xFFF);
  v78 = v9;
  v14 = 0LL;
  SchedulerAssist = (_DWORD *)v9;
  v16 = v77;
  v17 = v9;
  if ( v3 )
    SchedulerAssist = (_DWORD *)v10;
  if ( v9 > (unsigned __int64)SchedulerAssist )
  {
    do
    {
      v13 -= 8LL;
      v38 = v17;
      v39 = *(_QWORD *)v13;
      if ( (*(_QWORD *)v13 & 0xC01LL) != 0x800
        || (*(_QWORD *)(48 * (((v39 & (unsigned __int64)~qword_140C4DE80) >> 12) & 0xFFFFFFFFFLL) - 0x57FFFFFFFD8LL) & 0x4000000000000LL) == 0
        || (*(_BYTE *)(48 * (((v39 & (unsigned __int64)~qword_140C4DE80) >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL + 34) & 0x10) == 0
        || *(_WORD *)(48 * (((v39 & (unsigned __int64)~qword_140C4DE80) >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL + 32)
        || v83 != *(_QWORD *)(qword_140C4E588
                            + 8
                            * ((*(_QWORD *)(48 * (((v39 & (unsigned __int64)~qword_140C4DE80) >> 12) & 0xFFFFFFFFFLL)
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
    while ( v9 > (unsigned __int64)SchedulerAssist );
    v14 = 0LL;
    v4 = a2;
    v3 = a3;
    v16 = v77;
    v78 = v17;
    v81 = v9;
  }
  v18 = *(unsigned int *)(v11 + 44);
  v19 = ((unsigned __int16)v13 ^ (unsigned __int16)v17) & 0xFFF ^ v13;
  v20 = (v17 & 0xFFFFFFFFFFFFF000uLL) + 4096;
  v21 = *(_QWORD *)(v11 + 8) + 8 * v18;
  if ( v20 > v21 )
    v20 = *(_QWORD *)(v11 + 8) + 8 * v18;
  v84 = v20;
  v22 = v20;
  if ( v20 > v17 + 128 )
    v22 = v17 + 128;
  if ( !v3 )
  {
    v20 = v17 + 8;
    v84 = v17 + 8;
  }
  v79 = v17;
  v23 = v17 + 8;
  if ( v3 )
    v23 = v22;
  v24 = v17;
  v75 = v23;
  v25 = 1;
  v95 = 1;
  if ( v17 < v20 )
  {
    v26 = v80;
    v75 = v23;
    while ( v24 == v26 )
    {
      v21 = v88;
      *v76++ = v88;
LABEL_23:
      v24 += 8LL;
      v19 += 8LL;
      v79 = v24;
      if ( v24 >= v20 )
        goto LABEL_24;
    }
    if ( v25 != 3 || (__int64)(((char *)v76 - (char *)v4 - 48) & 0xFFFFFFFFFFFFFFF8uLL) < 128 )
    {
      v33 = *(_QWORD *)v19;
      if ( (*(_QWORD *)v19 & 0xC01LL) == 0x800 )
      {
        v21 = 6 * (((v33 & (unsigned __int64)~qword_140C4DE80) >> 12) & 0xFFFFFFFFFLL);
        if ( (*(_QWORD *)(48 * (((v33 & (unsigned __int64)~qword_140C4DE80) >> 12) & 0xFFFFFFFFFLL) - 0x57FFFFFFFD8LL) & 0x4000000000000LL) == 0 )
        {
          v26 = v80;
          v19 -= 8LL;
          v24 -= 8LL;
          goto LABEL_43;
        }
        v34 = 48 * (((v33 & (unsigned __int64)~qword_140C4DE80) >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL;
        v85 = 0;
        while ( _interlockedbittestandset64((volatile signed __int32 *)(v34 + 24), 0x3FuLL) )
        {
          do
            KeYieldProcessorEx(&v85, v21, v14, (__int64)SchedulerAssist);
          while ( *(__int64 *)(v34 + 24) < 0 );
        }
        if ( v33 != MI_READ_PTE_LOCK_FREE(v19) )
        {
          _InterlockedAnd64((volatile signed __int64 *)(v34 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          v16 = v77;
          v19 -= 8LL;
          v26 = v80;
          v24 -= 8LL;
          v23 = v75;
LABEL_121:
          v14 = 0LL;
          goto LABEL_43;
        }
        if ( (*(_BYTE *)(v34 + 34) & 0x10) != 0
          && (v14 = 0LL, !*(_WORD *)(v34 + 32))
          && v83 == *(_QWORD *)(qword_140C4E588 + 8 * ((*(_QWORD *)(v34 + 40) >> 39) & 0x3FFLL)) )
        {
          if ( v24 >= v75 )
          {
LABEL_42:
            _InterlockedAnd64((volatile signed __int64 *)(v34 + 24), 0x7FFFFFFFFFFFFFFFuLL);
            v16 = v77;
            v26 = v80;
            v23 = v75;
LABEL_43:
            v25 = v95;
            goto LABEL_23;
          }
          if ( v77 )
          {
            LOBYTE(v21) = 2;
            MiUnmapPageInHyperSpaceWorker(v77, v21, 0x80000000);
            v95 = MiReferencePageForModifiedWrite(v34);
            v36 = MiMapPageInHyperSpaceWorker(v87, 0LL, 0x80000000LL, v35);
            v37 = v95;
            v19 = v36 + (v19 & 0xFFF);
            v77 = v36;
            v16 = v36;
          }
          else
          {
            v59 = MiReferencePageForModifiedWrite(v34);
            v16 = 0LL;
            v37 = v59;
            v95 = v59;
          }
          v14 = 0LL;
          if ( v37 )
          {
            *v76++ = ((v33 & (unsigned __int64)~qword_140C4DE80) >> 12) & 0xFFFFFFFFFLL;
            goto LABEL_42;
          }
        }
        else
        {
          v16 = v77;
        }
        _InterlockedAnd64((volatile signed __int64 *)(v34 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        v23 = v75;
      }
    }
    v27 = v97;
    if ( v16 )
    {
      LOBYTE(v21) = v97;
      MiUnmapPageInHyperSpaceWorker(v16, v21, 0x80000000);
      v14 = 0LL;
      v16 = 0LL;
    }
    v40 = v80;
    if ( v24 >= v80 )
      goto LABEL_25;
    v60 = ((char *)v76 - (char *)v4 - 48) >> 3;
    if ( v60 )
    {
      v61 = (unsigned __int64)(v4 + 6);
      if ( v76 > v4 + 6 )
      {
        v62 = v76;
        do
        {
          v63 = 48 * *--v62 - 0x58000000000LL;
          v64 = (unsigned __int8)MiLockPageInline(v63, v21, v14, SchedulerAssist);
          MiWriteCompletePfn(v63, 1);
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
                v67 = ~(unsigned __int16)v21;
                v68 = (v67 & SchedulerAssist[5]) == 0;
                v14 = (unsigned int)v67 & SchedulerAssist[5];
                SchedulerAssist[5] = v14;
                if ( v68 )
                  KiRemoveSystemWorkPriorityKick(CurrentPrcb);
              }
            }
          }
          __writecr8(v64);
        }
        while ( (unsigned __int64)v62 > v61 );
        v20 = v84;
        v76 = v62;
        v4 = a2;
      }
      MiReleaseWriteInProgressCharges(v83, v60, 1LL);
      v40 = v80;
    }
    v23 = v75;
    if ( v75 == v78 + 8 )
    {
      v20 = v40 + 8;
      v84 = v40 + 8;
      v23 = v40 + 8;
    }
    else if ( v20 > v40 + 128 )
    {
      v23 = v40 + 128;
    }
    v78 = v40;
    v75 = v23;
    v16 = MiMapPageInHyperSpaceWorker(v87, &v97, 0x80000000LL, SchedulerAssist);
    v77 = v16;
    v19 = v16 + (v89 & 0xFFF) - 8;
    v26 = v80;
    v24 = v80 - 8;
    goto LABEL_121;
  }
LABEL_24:
  v27 = v97;
LABEL_25:
  if ( v16 )
  {
    LOBYTE(v21) = v27;
    MiUnmapPageInHyperSpaceWorker(v16, v21, 0x80000000);
  }
  if ( v24 <= v75 )
    v23 = v24;
  v28 = (__int64)(v23 - v78) >> 3;
  if ( v95 == 3 )
    goto LABEL_32;
  v29 = v24 <= v75;
  v30 = v81;
  if ( v29 && v81 >= v78 )
    goto LABEL_32;
  v41 = v79;
  Pool = (char *)MiAllocatePool(64, 8 * ((__int64)(v79 - v81) >> 3) + 48, 0x65576D4Du);
  v93 = Pool;
  v44 = Pool;
  if ( !Pool )
    goto LABEL_32;
  v82 = v90;
  v89 = (unsigned __int64)(Pool + 48);
  v45 = (unsigned __int64 *)(Pool + 48);
  v96 = 1;
  v49 = MiMapPageInHyperSpaceWorker(a1[5] & 0xFFFFFFFFFLL, &v97, 0x80000000LL, v43);
  v50 = v49 + (v30 & 0xFFF);
  while ( v30 < v41 )
  {
    if ( v30 < v75 && v30 >= v78 )
    {
      v55 = *v82++;
      *v45 = v55;
      goto LABEL_77;
    }
    if ( v96 == 3 && (__int64)(((char *)v45 - v44 - 48) & 0xFFFFFFFFFFFFFFF8uLL) >= 128 )
      goto LABEL_89;
    v51 = *(_QWORD *)v50;
    if ( (*(_QWORD *)v50 & 0xC01LL) != 0x800 )
      goto LABEL_89;
    v46 = 6 * (((v51 & ~qword_140C4DE80) >> 12) & 0xFFFFFFFFFLL);
    if ( (*(_QWORD *)(48 * (((v51 & ~qword_140C4DE80) >> 12) & 0xFFFFFFFFFLL) - 0x57FFFFFFFD8LL) & 0x4000000000000LL) != 0 )
    {
      v52 = 48 * (((v51 & ~qword_140C4DE80) >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL;
      v86 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v52 + 24), 0x3FuLL) )
      {
        do
          KeYieldProcessorEx(&v86, v46, v47, (__int64)v48);
        while ( *(__int64 *)(v52 + 24) < 0 );
      }
      if ( v51 == MI_READ_PTE_LOCK_FREE(v50) )
      {
        if ( (*(_BYTE *)(v52 + 34) & 0x10) != 0 )
        {
          v46 = 0LL;
          if ( !*(_WORD *)(v52 + 32)
            && v83 == *(_QWORD *)(qword_140C4E588 + 8 * ((*(_QWORD *)(v52 + 40) >> 39) & 0x3FFLL)) )
          {
            if ( v49 )
            {
              LOBYTE(v46) = 2;
              MiUnmapPageInHyperSpaceWorker(v49, v46, 0x80000000);
              v96 = MiReferencePageForModifiedWrite(v52);
              v49 = MiMapPageInHyperSpaceWorker(v87, 0LL, 0x80000000LL, v53);
              v50 = v49 + (v50 & 0xFFF);
              v54 = v96;
            }
            else
            {
              v54 = MiReferencePageForModifiedWrite(v52);
              v96 = v54;
            }
            if ( v54 )
            {
              *v45 = (v51 >> 12) & ((unsigned __int64)~qword_140C4DE80 >> 12) & 0xFFFFFFFFFLL;
              _InterlockedAnd64((volatile signed __int64 *)(v52 + 24), 0x7FFFFFFFFFFFFFFFuLL);
              v41 = v79;
LABEL_77:
              v50 += 8LL;
              v30 += 8LL;
              ++v45;
              goto LABEL_78;
            }
          }
        }
        _InterlockedAnd64((volatile signed __int64 *)(v52 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        v44 = v93;
LABEL_89:
        v56 = v97;
        if ( v49 )
        {
          LOBYTE(v46) = v97;
          MiUnmapPageInHyperSpaceWorker(v49, v46, 0x80000000);
          v49 = 0LL;
        }
        v57 = v78;
        if ( v30 >= v78 )
          goto LABEL_86;
        v58 = ((char *)v45 - v93 - 48) >> 3;
        v88 = v58;
        if ( v58 )
        {
          v69 = v89;
          if ( (unsigned __int64)v45 > v89 )
          {
            do
            {
              v70 = 48 * *--v45 - 0x58000000000LL;
              v71 = (unsigned __int8)MiLockPageInline(v70, v46, v47, v48);
              MiWriteCompletePfn(v70, 1);
              _InterlockedAnd64((volatile signed __int64 *)(v70 + 24), 0x7FFFFFFFFFFFFFFFuLL);
              if ( KiIrqlFlags )
              {
                if ( (KiIrqlFlags & 1) != 0 )
                {
                  v72 = KeGetCurrentIrql();
                  if ( v72 <= 0xFu && (unsigned __int8)v71 <= 0xFu && v72 >= 2u )
                  {
                    v73 = KeGetCurrentPrcb();
                    v46 = -1LL << ((unsigned __int8)v71 + 1);
                    v48 = v73->SchedulerAssist;
                    v74 = ~(unsigned __int16)v46;
                    v68 = (v74 & v48[5]) == 0;
                    v47 = (unsigned int)v74 & v48[5];
                    v48[5] = v47;
                    if ( v68 )
                      KiRemoveSystemWorkPriorityKick(v73);
                  }
                }
              }
              __writecr8(v71);
            }
            while ( (unsigned __int64)v45 > v69 );
            v58 = v88;
            v57 = v78;
          }
          MiReleaseWriteInProgressCharges(v83, v58, 1LL);
        }
        v82 = v90;
        v30 = v57;
        v49 = MiMapPageInHyperSpaceWorker(a1[5] & 0xFFFFFFFFFLL, &v97, 0x80000000LL, v48);
        v50 = v49 + (v57 & 0xFFF);
        goto LABEL_94;
      }
      _InterlockedAnd64((volatile signed __int64 *)(v52 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    }
LABEL_94:
    v41 = v79;
LABEL_78:
    v44 = v93;
  }
  v56 = v97;
LABEL_86:
  if ( v49 )
  {
    LOBYTE(v46) = v56;
    MiUnmapPageInHyperSpaceWorker(v49, v46, 0x80000000);
  }
  v4 = (unsigned __int64 *)v44;
  v28 = ((char *)v45 - v44 - 48) >> 3;
LABEL_32:
  v31 = v28 << 12;
  *v4 = 0LL;
  v4[4] = 0LL;
  *((_WORD *)v4 + 4) = 8 * ((v31 >> 12) + 6);
  *((_WORD *)v4 + 5) = 2;
  result = v4;
  v4[5] = (unsigned int)v31;
  return result;
}
