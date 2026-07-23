/*
 * XREFs of MiBuildMappedCluster @ 0x140277640
 * Callers:
 *     MiGatherMappedPages @ 0x140277138 (MiGatherMappedPages.c)
 * Callees:
 *     MiReleaseWriteInProgressCharges @ 0x140276D94 (MiReleaseWriteInProgressCharges.c)
 *     MiReferencePageForModifiedWrite @ 0x140277E5C (MiReferencePageForModifiedWrite.c)
 *     MiAllocatePool @ 0x14027C2E0 (MiAllocatePool.c)
 *     KeYieldProcessorEx @ 0x1402EFAD0 (KeYieldProcessorEx.c)
 *     MiLockPageInline @ 0x14030AB80 (MiLockPageInline.c)
 *     MiWriteCompletePfn @ 0x1403309D0 (MiWriteCompletePfn.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140338C10 (MI_READ_PTE_LOCK_FREE.c)
 *     MiMapPageInHyperSpaceWorker @ 0x14033C800 (MiMapPageInHyperSpaceWorker.c)
 *     MiUnmapPageInHyperSpaceWorker @ 0x140353660 (MiUnmapPageInHyperSpaceWorker.c)
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
  unsigned __int64 SchedulerAssist; // r9
  __int64 v15; // r10
  unsigned __int64 v16; // r11
  __int64 v17; // rcx
  __int64 *v18; // r14
  unsigned __int64 v19; // r12
  unsigned __int64 v20; // rdx
  unsigned __int64 v21; // rcx
  unsigned __int64 v22; // rsi
  unsigned __int64 v23; // r13
  int v24; // ecx
  unsigned __int64 v25; // rax
  char v26; // bl
  __int64 v27; // rsi
  bool v28; // cc
  unsigned __int64 v29; // r13
  unsigned __int64 v30; // rsi
  __int64 result; // rax
  __int64 v32; // rbx
  ULONG_PTR v33; // rsi
  __int64 v34; // rax
  int v35; // ecx
  unsigned __int64 v36; // r8
  __int64 v37; // rax
  unsigned __int64 v38; // rcx
  unsigned __int64 v39; // rbx
  __int64 Pool; // rax
  __int64 v41; // r14
  unsigned __int64 *v42; // rsi
  unsigned __int64 v43; // rdx
  __int64 v44; // r9
  __int64 v45; // r12
  unsigned __int64 *v46; // r15
  unsigned __int64 v47; // rbx
  ULONG_PTR v48; // r14
  int v49; // eax
  unsigned __int64 v50; // rax
  char v51; // bl
  unsigned __int64 v52; // r15
  unsigned __int64 v53; // r14
  int v54; // eax
  unsigned __int64 v55; // rsi
  unsigned __int64 v56; // r13
  unsigned __int64 *v57; // r15
  __int64 v58; // rbx
  unsigned __int64 v59; // r14
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  int v62; // eax
  bool v63; // zf
  unsigned __int64 v64; // r12
  __int64 v65; // rbx
  unsigned __int64 v66; // r15
  unsigned __int8 v67; // al
  struct _KPRCB *v68; // r10
  int v69; // eax
  unsigned __int64 v70; // [rsp+28h] [rbp-59h]
  unsigned __int64 *v71; // [rsp+30h] [rbp-51h]
  __int64 v72; // [rsp+38h] [rbp-49h]
  unsigned __int64 v73; // [rsp+40h] [rbp-41h]
  unsigned __int64 v74; // [rsp+48h] [rbp-39h]
  unsigned __int64 v75; // [rsp+50h] [rbp-31h]
  unsigned __int64 v76; // [rsp+58h] [rbp-29h]
  unsigned __int64 *v77; // [rsp+58h] [rbp-29h]
  __int64 v78; // [rsp+60h] [rbp-21h]
  unsigned __int64 v79; // [rsp+68h] [rbp-19h]
  int v80; // [rsp+70h] [rbp-11h] BYREF
  int v81; // [rsp+74h] [rbp-Dh] BYREF
  __int64 v82; // [rsp+78h] [rbp-9h]
  unsigned __int64 v83; // [rsp+80h] [rbp-1h]
  unsigned __int64 v84; // [rsp+88h] [rbp+7h]
  unsigned __int64 *v85; // [rsp+90h] [rbp+Fh]
  __int64 v88; // [rsp+F0h] [rbp+6Fh]
  int v90; // [rsp+F8h] [rbp+77h]
  int v91; // [rsp+F8h] [rbp+77h]
  char v92; // [rsp+100h] [rbp+7Fh] BYREF

  v3 = a3;
  v92 = 0;
  v4 = a2;
  v5 = a1[1];
  v6 = a1[2];
  v7 = a1[5];
  v8 = (__int64)((unsigned __int128)((__int64)(a1 + 0xB000000000LL) * (__int128)0x2AAAAAAAAAAAAAABLL) >> 64) >> 3;
  v85 = (unsigned __int64 *)(a2 + 48);
  v71 = (unsigned __int64 *)(a2 + 48);
  v9 = v5 | 0x8000000000000000uLL;
  v83 = (v8 >> 63) + v8;
  v76 = v9;
  v10 = v9 & 0xFFFFFFFFFFFFF000uLL;
  v75 = v9;
  v78 = *(_QWORD *)(qword_140C4E688 + 8 * ((v7 >> 39) & 0x3FF));
  if ( qword_140C4DF80 && (v6 & 0x10) == 0 )
    v6 &= ~qword_140C4DF80;
  v11 = v6 >> 16;
  if ( v10 < *(_QWORD *)(v11 + 8) )
    v10 = *(_QWORD *)(v11 + 8);
  v12 = v10;
  if ( v10 < v9 - 120 )
    v12 = v9 - 120;
  v82 = v7 & 0xFFFFFFFFFLL;
  v72 = MiMapPageInHyperSpaceWorker(v7 & 0xFFFFFFFFFLL, &v92, 0x80000000LL);
  LODWORD(v84) = v9;
  v13 = v72 + (v9 & 0xFFF);
  v73 = v9;
  SchedulerAssist = v9;
  v15 = v72;
  v16 = v9;
  if ( v3 )
    SchedulerAssist = v10;
  if ( v9 > SchedulerAssist )
  {
    do
    {
      v13 -= 8LL;
      v36 = v16;
      v37 = *(_QWORD *)v13;
      if ( (*(_QWORD *)v13 & 0xC01LL) != 0x800
        || (*(_QWORD *)(48 * (((v37 & (unsigned __int64)~qword_140C4DF80) >> 12) & 0xFFFFFFFFFLL) - 0x57FFFFFFFD8LL) & 0x4000000000000LL) == 0
        || (*(_BYTE *)(48 * (((v37 & (unsigned __int64)~qword_140C4DF80) >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL + 34) & 0x10) == 0
        || *(_WORD *)(48 * (((v37 & (unsigned __int64)~qword_140C4DF80) >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL + 32)
        || v78 != *(_QWORD *)(qword_140C4E688
                            + 8
                            * ((*(_QWORD *)(48 * (((v37 & (unsigned __int64)~qword_140C4DF80) >> 12) & 0xFFFFFFFFFLL)
                                          - 0x58000000000LL
                                          + 40) >> 39) & 0x3FFLL)) )
      {
        break;
      }
      v9 -= 8LL;
      v16 = v9;
      if ( v9 < v12 )
        v16 = v36;
    }
    while ( v9 > SchedulerAssist );
    v4 = a2;
    v3 = a3;
    v15 = v72;
    v73 = v16;
    v76 = v9;
  }
  v17 = *(unsigned int *)(v11 + 44);
  v18 = (__int64 *)(((unsigned __int16)v13 ^ (unsigned __int16)v16) & 0xFFF ^ v13);
  v19 = (v16 & 0xFFFFFFFFFFFFF000uLL) + 4096;
  v20 = *(_QWORD *)(v11 + 8) + 8 * v17;
  if ( v19 > v20 )
    v19 = *(_QWORD *)(v11 + 8) + 8 * v17;
  v79 = v19;
  v21 = v19;
  if ( v19 > v16 + 128 )
    v21 = v16 + 128;
  if ( !v3 )
  {
    v19 = v16 + 8;
    v79 = v16 + 8;
  }
  v74 = v16;
  v22 = v16 + 8;
  if ( v3 )
    v22 = v21;
  v23 = v16;
  v70 = v22;
  v24 = 1;
  v90 = 1;
  if ( v16 < v19 )
  {
    v25 = v75;
    v70 = v22;
    while ( v23 == v25 )
    {
      v20 = v83;
      *v71++ = v83;
LABEL_23:
      v23 += 8LL;
      ++v18;
      v74 = v23;
      if ( v23 >= v19 )
        goto LABEL_24;
    }
    if ( v24 != 3 || (__int64)(((unsigned __int64)v71 - v4 - 48) & 0xFFFFFFFFFFFFFFF8uLL) < 128 )
    {
      v32 = *v18;
      if ( (*v18 & 0xC01) == 0x800 )
      {
        v20 = 6 * (((v32 & (unsigned __int64)~qword_140C4DF80) >> 12) & 0xFFFFFFFFFLL);
        if ( (*(_QWORD *)(48 * (((v32 & (unsigned __int64)~qword_140C4DF80) >> 12) & 0xFFFFFFFFFLL) - 0x57FFFFFFFD8LL) & 0x4000000000000LL) == 0 )
        {
          v25 = v75;
          --v18;
          v23 -= 8LL;
          goto LABEL_43;
        }
        v33 = 48 * (((v32 & (unsigned __int64)~qword_140C4DF80) >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL;
        v80 = 0;
        while ( _interlockedbittestandset64((volatile signed __int32 *)(v33 + 24), 0x3FuLL) )
        {
          do
            KeYieldProcessorEx(&v80);
          while ( *(__int64 *)(v33 + 24) < 0 );
        }
        if ( v32 != MI_READ_PTE_LOCK_FREE(v18) )
        {
          _InterlockedAnd64((volatile signed __int64 *)(v33 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          v15 = v72;
          --v18;
          v25 = v75;
          v23 -= 8LL;
          v22 = v70;
          goto LABEL_43;
        }
        if ( (*(_BYTE *)(v33 + 34) & 0x10) != 0
          && !*(_WORD *)(v33 + 32)
          && v78 == *(_QWORD *)(qword_140C4E688 + 8 * ((*(_QWORD *)(v33 + 40) >> 39) & 0x3FFLL)) )
        {
          if ( v23 >= v70 )
          {
LABEL_42:
            _InterlockedAnd64((volatile signed __int64 *)(v33 + 24), 0x7FFFFFFFFFFFFFFFuLL);
            v15 = v72;
            v25 = v75;
            v22 = v70;
LABEL_43:
            v24 = v90;
            goto LABEL_23;
          }
          if ( v72 )
          {
            LOBYTE(v20) = 2;
            MiUnmapPageInHyperSpaceWorker(v72, v20, 0x80000000LL);
            v90 = MiReferencePageForModifiedWrite(v33);
            v34 = MiMapPageInHyperSpaceWorker(v82, 0LL, 0x80000000LL);
            v35 = v90;
            v18 = (__int64 *)(v34 + ((unsigned __int16)v18 & 0xFFF));
            v72 = v34;
            v15 = v34;
          }
          else
          {
            v54 = MiReferencePageForModifiedWrite(v33);
            v15 = 0LL;
            v35 = v54;
            v90 = v54;
          }
          if ( v35 )
          {
            *v71++ = ((v32 & (unsigned __int64)~qword_140C4DF80) >> 12) & 0xFFFFFFFFFLL;
            goto LABEL_42;
          }
        }
        else
        {
          v15 = v72;
        }
        _InterlockedAnd64((volatile signed __int64 *)(v33 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        v22 = v70;
      }
    }
    v26 = v92;
    if ( v15 )
    {
      LOBYTE(v20) = v92;
      MiUnmapPageInHyperSpaceWorker(v15, v20, 0x80000000LL);
      v15 = 0LL;
    }
    v38 = v75;
    if ( v23 >= v75 )
      goto LABEL_25;
    v55 = ((__int64)v71 - v4 - 48) >> 3;
    if ( v55 )
    {
      v56 = v4 + 48;
      if ( (unsigned __int64)v71 > v4 + 48 )
      {
        v57 = v71;
        do
        {
          v58 = 48 * *--v57 - 0x58000000000LL;
          v59 = (unsigned __int8)MiLockPageInline(v58);
          MiWriteCompletePfn(v58, 1LL);
          _InterlockedAnd64((volatile signed __int64 *)(v58 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          if ( KiIrqlFlags )
          {
            if ( (KiIrqlFlags & 1) != 0 )
            {
              CurrentIrql = KeGetCurrentIrql();
              if ( CurrentIrql <= 0xFu && (unsigned __int8)v59 <= 0xFu && CurrentIrql >= 2u )
              {
                CurrentPrcb = KeGetCurrentPrcb();
                SchedulerAssist = (unsigned __int64)CurrentPrcb->SchedulerAssist;
                v62 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v59 + 1));
                v63 = (v62 & *(_DWORD *)(SchedulerAssist + 20)) == 0;
                *(_DWORD *)(SchedulerAssist + 20) &= v62;
                if ( v63 )
                  KiRemoveSystemWorkPriorityKick(CurrentPrcb);
              }
            }
          }
          __writecr8(v59);
        }
        while ( (unsigned __int64)v57 > v56 );
        v19 = v79;
        v71 = v57;
        v4 = a2;
      }
      MiReleaseWriteInProgressCharges(v78, v55, 1LL, SchedulerAssist);
      v38 = v75;
    }
    v22 = v70;
    if ( v70 == v73 + 8 )
    {
      v19 = v38 + 8;
      v79 = v38 + 8;
      v22 = v38 + 8;
    }
    else if ( v19 > v38 + 128 )
    {
      v22 = v38 + 128;
    }
    v73 = v38;
    v70 = v22;
    v15 = MiMapPageInHyperSpaceWorker(v82, &v92, 0x80000000LL);
    v72 = v15;
    v18 = (__int64 *)(v15 + (v84 & 0xFFF) - 8);
    v25 = v75;
    v23 = v75 - 8;
    goto LABEL_43;
  }
LABEL_24:
  v26 = v92;
LABEL_25:
  if ( v15 )
  {
    LOBYTE(v20) = v26;
    MiUnmapPageInHyperSpaceWorker(v15, v20, 0x80000000LL);
  }
  if ( v23 <= v70 )
    v22 = v23;
  v27 = (__int64)(v22 - v73) >> 3;
  if ( v90 == 3 )
    goto LABEL_32;
  v28 = v23 <= v70;
  v29 = v76;
  if ( v28 && v76 >= v73 )
    goto LABEL_32;
  v39 = v74;
  Pool = MiAllocatePool(64LL, 8 * ((__int64)(v74 - v76) >> 3) + 48, 1700228429LL, SchedulerAssist);
  v88 = Pool;
  v41 = Pool;
  if ( !Pool )
    goto LABEL_32;
  v77 = v85;
  v84 = Pool + 48;
  v42 = (unsigned __int64 *)(Pool + 48);
  v91 = 1;
  v45 = MiMapPageInHyperSpaceWorker(a1[5] & 0xFFFFFFFFFLL, &v92, 0x80000000LL);
  v46 = (unsigned __int64 *)(v45 + (v29 & 0xFFF));
  while ( v29 < v39 )
  {
    if ( v29 < v70 && v29 >= v73 )
    {
      v50 = *v77++;
      *v42 = v50;
      goto LABEL_77;
    }
    if ( v91 == 3 && (__int64)(((unsigned __int64)v42 - v41 - 48) & 0xFFFFFFFFFFFFFFF8uLL) >= 128 )
      goto LABEL_89;
    v47 = *v46;
    if ( (*v46 & 0xC01) != 0x800 )
      goto LABEL_89;
    v43 = 6 * (((v47 & ~qword_140C4DF80) >> 12) & 0xFFFFFFFFFLL);
    if ( (*(_QWORD *)(48 * (((v47 & ~qword_140C4DF80) >> 12) & 0xFFFFFFFFFLL) - 0x57FFFFFFFD8LL) & 0x4000000000000LL) != 0 )
    {
      v48 = 48 * (((v47 & ~qword_140C4DF80) >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL;
      v81 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v48 + 24), 0x3FuLL) )
      {
        do
          KeYieldProcessorEx(&v81);
        while ( *(__int64 *)(v48 + 24) < 0 );
      }
      if ( v47 == MI_READ_PTE_LOCK_FREE(v46) )
      {
        if ( (*(_BYTE *)(v48 + 34) & 0x10) != 0 )
        {
          v43 = 0LL;
          if ( !*(_WORD *)(v48 + 32)
            && v78 == *(_QWORD *)(qword_140C4E688 + 8 * ((*(_QWORD *)(v48 + 40) >> 39) & 0x3FFLL)) )
          {
            if ( v45 )
            {
              LOBYTE(v43) = 2;
              MiUnmapPageInHyperSpaceWorker(v45, v43, 0x80000000LL);
              v91 = MiReferencePageForModifiedWrite(v48);
              v45 = MiMapPageInHyperSpaceWorker(v82, 0LL, 0x80000000LL);
              v46 = (unsigned __int64 *)(v45 + ((unsigned __int16)v46 & 0xFFF));
              v49 = v91;
            }
            else
            {
              v49 = MiReferencePageForModifiedWrite(v48);
              v91 = v49;
            }
            if ( v49 )
            {
              *v42 = (v47 >> 12) & ((unsigned __int64)~qword_140C4DF80 >> 12) & 0xFFFFFFFFFLL;
              _InterlockedAnd64((volatile signed __int64 *)(v48 + 24), 0x7FFFFFFFFFFFFFFFuLL);
              v39 = v74;
LABEL_77:
              ++v46;
              v29 += 8LL;
              ++v42;
              goto LABEL_78;
            }
          }
        }
        _InterlockedAnd64((volatile signed __int64 *)(v48 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        v41 = v88;
LABEL_89:
        v51 = v92;
        if ( v45 )
        {
          LOBYTE(v43) = v92;
          MiUnmapPageInHyperSpaceWorker(v45, v43, 0x80000000LL);
          v45 = 0LL;
        }
        v52 = v73;
        if ( v29 >= v73 )
          goto LABEL_86;
        v53 = ((__int64)v42 - v88 - 48) >> 3;
        v83 = v53;
        if ( v53 )
        {
          v64 = v84;
          if ( (unsigned __int64)v42 > v84 )
          {
            do
            {
              v65 = 48 * *--v42 - 0x58000000000LL;
              v66 = (unsigned __int8)MiLockPageInline(v65);
              MiWriteCompletePfn(v65, 1LL);
              _InterlockedAnd64((volatile signed __int64 *)(v65 + 24), 0x7FFFFFFFFFFFFFFFuLL);
              if ( KiIrqlFlags )
              {
                if ( (KiIrqlFlags & 1) != 0 )
                {
                  v67 = KeGetCurrentIrql();
                  if ( v67 <= 0xFu && (unsigned __int8)v66 <= 0xFu && v67 >= 2u )
                  {
                    v68 = KeGetCurrentPrcb();
                    v44 = (__int64)v68->SchedulerAssist;
                    v69 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v66 + 1));
                    v63 = (v69 & *(_DWORD *)(v44 + 20)) == 0;
                    *(_DWORD *)(v44 + 20) &= v69;
                    if ( v63 )
                      KiRemoveSystemWorkPriorityKick(v68);
                  }
                }
              }
              __writecr8(v66);
            }
            while ( (unsigned __int64)v42 > v64 );
            v53 = v83;
            v52 = v73;
          }
          MiReleaseWriteInProgressCharges(v78, v53, 1LL, v44);
        }
        v77 = v85;
        v29 = v52;
        v45 = MiMapPageInHyperSpaceWorker(a1[5] & 0xFFFFFFFFFLL, &v92, 0x80000000LL);
        v46 = (unsigned __int64 *)(v45 + (v52 & 0xFFF));
        goto LABEL_94;
      }
      _InterlockedAnd64((volatile signed __int64 *)(v48 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    }
LABEL_94:
    v39 = v74;
LABEL_78:
    v41 = v88;
  }
  v51 = v92;
LABEL_86:
  if ( v45 )
  {
    LOBYTE(v43) = v51;
    MiUnmapPageInHyperSpaceWorker(v45, v43, 0x80000000LL);
  }
  v4 = v41;
  v27 = ((__int64)v42 - v41 - 48) >> 3;
LABEL_32:
  v30 = v27 << 12;
  *(_QWORD *)v4 = 0LL;
  *(_QWORD *)(v4 + 32) = 0LL;
  *(_WORD *)(v4 + 8) = 8 * ((v30 >> 12) + 6);
  *(_WORD *)(v4 + 10) = 2;
  result = v4;
  *(_QWORD *)(v4 + 40) = (unsigned int)v30;
  return result;
}
