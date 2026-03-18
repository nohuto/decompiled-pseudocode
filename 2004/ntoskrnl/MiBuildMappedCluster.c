/*
 * XREFs of MiBuildMappedCluster @ 0x1402F5CD0
 * Callers:
 *     MiGatherMappedPages @ 0x1402F5340 (MiGatherMappedPages.c)
 * Callees:
 *     MiWriteCompletePfn @ 0x140234120 (MiWriteCompletePfn.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140238530 (MI_READ_PTE_LOCK_FREE.c)
 *     MiUnmapPageInHyperSpaceWorker @ 0x1402385A0 (MiUnmapPageInHyperSpaceWorker.c)
 *     MiAllocatePool @ 0x140247F80 (MiAllocatePool.c)
 *     KeYieldProcessorEx @ 0x140280C50 (KeYieldProcessorEx.c)
 *     MiMapPageInHyperSpaceWorker @ 0x1402F7480 (MiMapPageInHyperSpaceWorker.c)
 *     MiReferencePageForModifiedWrite @ 0x1402F771C (MiReferencePageForModifiedWrite.c)
 *     MiReleaseWriteInProgressCharges @ 0x1402F80A4 (MiReleaseWriteInProgressCharges.c)
 *     MiLockPageInline @ 0x140317C20 (MiLockPageInline.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EDAA4 (KiRemoveSystemWorkPriorityKick.c)
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
  unsigned __int64 v15; // r9
  unsigned __int64 v16; // r10
  unsigned __int64 v17; // r11
  __int64 v18; // rcx
  unsigned __int64 v19; // r14
  unsigned __int64 v20; // r12
  unsigned __int64 v21; // rcx
  unsigned __int64 v22; // rsi
  unsigned __int64 v23; // r13
  int v24; // ecx
  unsigned __int64 v25; // rax
  unsigned __int8 v26; // bl
  __int64 v27; // rsi
  bool v28; // cc
  unsigned __int64 v29; // r13
  unsigned __int64 v30; // rsi
  unsigned __int64 *result; // rax
  __int64 v32; // rbx
  __int64 v33; // rdx
  ULONG_PTR v34; // rsi
  __int64 v35; // rax
  int v36; // ecx
  unsigned __int64 v37; // r8
  __int64 v38; // rax
  unsigned __int64 v39; // rcx
  unsigned __int64 v40; // rbx
  char *Pool; // rax
  char *v42; // r14
  unsigned __int64 *v43; // rsi
  __int64 v44; // r8
  __int64 v45; // r9
  unsigned __int64 v46; // r12
  unsigned __int64 v47; // r15
  unsigned __int64 v48; // rbx
  __int64 v49; // rdx
  ULONG_PTR v50; // r14
  int v51; // eax
  unsigned __int64 v52; // rax
  unsigned __int8 v53; // bl
  unsigned __int64 v54; // r15
  __int64 v55; // r14
  int v56; // eax
  __int64 v57; // rsi
  unsigned __int64 v58; // r13
  unsigned __int64 *v59; // r15
  ULONG_PTR v60; // rbx
  unsigned __int64 v61; // r14
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v65; // eax
  bool v66; // zf
  unsigned __int64 v67; // r12
  ULONG_PTR v68; // rbx
  unsigned __int64 v69; // r15
  unsigned __int8 v70; // al
  struct _KPRCB *v71; // r10
  _DWORD *v72; // r9
  int v73; // eax
  unsigned __int64 v74; // [rsp+28h] [rbp-59h]
  unsigned __int64 *v75; // [rsp+30h] [rbp-51h]
  unsigned __int64 v76; // [rsp+38h] [rbp-49h]
  unsigned __int64 v77; // [rsp+40h] [rbp-41h]
  unsigned __int64 v78; // [rsp+48h] [rbp-39h]
  unsigned __int64 v79; // [rsp+50h] [rbp-31h]
  unsigned __int64 v80; // [rsp+58h] [rbp-29h]
  unsigned __int64 *v81; // [rsp+58h] [rbp-29h]
  __int64 v82; // [rsp+60h] [rbp-21h]
  unsigned __int64 v83; // [rsp+68h] [rbp-19h]
  int v84; // [rsp+70h] [rbp-11h] BYREF
  int v85; // [rsp+74h] [rbp-Dh] BYREF
  __int64 v86; // [rsp+78h] [rbp-9h]
  unsigned __int64 v87; // [rsp+80h] [rbp-1h]
  unsigned __int64 v88; // [rsp+88h] [rbp+7h]
  unsigned __int64 *v89; // [rsp+90h] [rbp+Fh]
  char *v92; // [rsp+F0h] [rbp+6Fh]
  int v94; // [rsp+F8h] [rbp+77h]
  int v95; // [rsp+F8h] [rbp+77h]
  unsigned __int8 v96; // [rsp+100h] [rbp+7Fh] BYREF

  v3 = a3;
  v96 = 0;
  v4 = a2;
  v5 = a1[1];
  v6 = a1[2];
  v7 = a1[5];
  v8 = (__int64)((unsigned __int128)((__int64)(a1 + 0xB000000000LL) * (__int128)0x2AAAAAAAAAAAAAABLL) >> 64) >> 3;
  v89 = a2 + 6;
  v75 = a2 + 6;
  v9 = v5 | 0x8000000000000000uLL;
  v87 = (v8 >> 63) + v8;
  v80 = v9;
  v10 = v9 & 0xFFFFFFFFFFFFF000uLL;
  v79 = v9;
  v82 = *(_QWORD *)(qword_140C4E448 + 8 * ((v7 >> 39) & 0x3FF));
  if ( qword_140C4DD40 && (v6 & 0x10) == 0 )
    v6 &= ~qword_140C4DD40;
  v11 = v6 >> 16;
  if ( v10 < *(_QWORD *)(v11 + 8) )
    v10 = *(_QWORD *)(v11 + 8);
  v12 = v10;
  if ( v10 < v9 - 120 )
    v12 = v9 - 120;
  v86 = v7 & 0xFFFFFFFFFLL;
  v76 = MiMapPageInHyperSpaceWorker(v7 & 0xFFFFFFFFFLL, &v96, 0x80000000LL);
  LODWORD(v88) = v9;
  v13 = v76 + (v9 & 0xFFF);
  v77 = v9;
  v14 = 0LL;
  v15 = v9;
  v16 = v76;
  v17 = v9;
  if ( v3 )
    v15 = v10;
  if ( v9 > v15 )
  {
    do
    {
      v13 -= 8LL;
      v37 = v17;
      v38 = *(_QWORD *)v13;
      if ( (*(_QWORD *)v13 & 0xC01LL) != 0x800
        || (*(_QWORD *)(48 * (((v38 & (unsigned __int64)~qword_140C4DD40) >> 12) & 0xFFFFFFFFFLL) - 0x57FFFFFFFD8LL) & 0x4000000000000LL) == 0
        || (*(_BYTE *)(48 * (((v38 & (unsigned __int64)~qword_140C4DD40) >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL + 34) & 0x10) == 0
        || *(_WORD *)(48 * (((v38 & (unsigned __int64)~qword_140C4DD40) >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL + 32)
        || v82 != *(_QWORD *)(qword_140C4E448
                            + 8
                            * ((*(_QWORD *)(48 * (((v38 & (unsigned __int64)~qword_140C4DD40) >> 12) & 0xFFFFFFFFFLL)
                                          - 0x58000000000LL
                                          + 40) >> 39) & 0x3FFLL)) )
      {
        break;
      }
      v9 -= 8LL;
      v17 = v9;
      if ( v9 < v12 )
        v17 = v37;
    }
    while ( v9 > v15 );
    v14 = 0LL;
    v4 = a2;
    v3 = a3;
    v16 = v76;
    v77 = v17;
    v80 = v9;
  }
  v18 = *(unsigned int *)(v11 + 44);
  v19 = ((unsigned __int16)v13 ^ (unsigned __int16)v17) & 0xFFF ^ v13;
  v20 = (v17 & 0xFFFFFFFFFFFFF000uLL) + 4096;
  if ( v20 > *(_QWORD *)(v11 + 8) + 8 * v18 )
    v20 = *(_QWORD *)(v11 + 8) + 8 * v18;
  v83 = v20;
  v21 = v20;
  if ( v20 > v17 + 128 )
    v21 = v17 + 128;
  if ( !v3 )
  {
    v20 = v17 + 8;
    v83 = v17 + 8;
  }
  v78 = v17;
  v22 = v17 + 8;
  if ( v3 )
    v22 = v21;
  v23 = v17;
  v74 = v22;
  v24 = 1;
  v94 = 1;
  if ( v17 < v20 )
  {
    v25 = v79;
    v74 = v22;
    while ( v23 == v25 )
    {
      *v75++ = v87;
LABEL_23:
      v23 += 8LL;
      v19 += 8LL;
      v78 = v23;
      if ( v23 >= v20 )
        goto LABEL_24;
    }
    if ( v24 != 3 || (__int64)(((char *)v75 - (char *)v4 - 48) & 0xFFFFFFFFFFFFFFF8uLL) < 128 )
    {
      v32 = *(_QWORD *)v19;
      if ( (*(_QWORD *)v19 & 0xC01LL) == 0x800 )
      {
        v33 = 6 * (((v32 & (unsigned __int64)~qword_140C4DD40) >> 12) & 0xFFFFFFFFFLL);
        if ( (*(_QWORD *)(48 * (((v32 & (unsigned __int64)~qword_140C4DD40) >> 12) & 0xFFFFFFFFFLL) - 0x57FFFFFFFD8LL) & 0x4000000000000LL) == 0 )
        {
          v25 = v79;
          v19 -= 8LL;
          v23 -= 8LL;
          goto LABEL_43;
        }
        v34 = 48 * (((v32 & (unsigned __int64)~qword_140C4DD40) >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL;
        v84 = 0;
        while ( _interlockedbittestandset64((volatile signed __int32 *)(v34 + 24), 0x3FuLL) )
        {
          do
            KeYieldProcessorEx(&v84, v33, v14, v15);
          while ( *(__int64 *)(v34 + 24) < 0 );
        }
        if ( v32 != MI_READ_PTE_LOCK_FREE(v19) )
        {
          _InterlockedAnd64((volatile signed __int64 *)(v34 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          v16 = v76;
          v19 -= 8LL;
          v25 = v79;
          v23 -= 8LL;
          v22 = v74;
LABEL_121:
          v14 = 0LL;
          goto LABEL_43;
        }
        if ( (*(_BYTE *)(v34 + 34) & 0x10) != 0
          && (v14 = 0LL, !*(_WORD *)(v34 + 32))
          && v82 == *(_QWORD *)(qword_140C4E448 + 8 * ((*(_QWORD *)(v34 + 40) >> 39) & 0x3FFLL)) )
        {
          if ( v23 >= v74 )
          {
LABEL_42:
            _InterlockedAnd64((volatile signed __int64 *)(v34 + 24), 0x7FFFFFFFFFFFFFFFuLL);
            v16 = v76;
            v25 = v79;
            v22 = v74;
LABEL_43:
            v24 = v94;
            goto LABEL_23;
          }
          if ( v76 )
          {
            MiUnmapPageInHyperSpaceWorker(v76, 2u, 0x80000000);
            v94 = MiReferencePageForModifiedWrite(v34);
            v35 = MiMapPageInHyperSpaceWorker(v86, 0LL, 0x80000000LL);
            v36 = v94;
            v19 = v35 + (v19 & 0xFFF);
            v76 = v35;
            v16 = v35;
          }
          else
          {
            v56 = MiReferencePageForModifiedWrite(v34);
            v16 = 0LL;
            v36 = v56;
            v94 = v56;
          }
          v14 = 0LL;
          if ( v36 )
          {
            *v75++ = ((v32 & (unsigned __int64)~qword_140C4DD40) >> 12) & 0xFFFFFFFFFLL;
            goto LABEL_42;
          }
        }
        else
        {
          v16 = v76;
        }
        _InterlockedAnd64((volatile signed __int64 *)(v34 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        v22 = v74;
      }
    }
    v26 = v96;
    if ( v16 )
    {
      MiUnmapPageInHyperSpaceWorker(v16, v96, 0x80000000);
      v16 = 0LL;
    }
    v39 = v79;
    if ( v23 >= v79 )
      goto LABEL_25;
    v57 = ((char *)v75 - (char *)v4 - 48) >> 3;
    if ( v57 )
    {
      v58 = (unsigned __int64)(v4 + 6);
      if ( v75 > v4 + 6 )
      {
        v59 = v75;
        do
        {
          v60 = 48 * *--v59 - 0x58000000000LL;
          v61 = (unsigned __int8)MiLockPageInline(v60);
          MiWriteCompletePfn(v60, 1);
          _InterlockedAnd64((volatile signed __int64 *)(v60 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          if ( KiIrqlFlags )
          {
            if ( (KiIrqlFlags & 1) != 0 )
            {
              CurrentIrql = KeGetCurrentIrql();
              if ( CurrentIrql <= 0xFu && (unsigned __int8)v61 <= 0xFu && CurrentIrql >= 2u )
              {
                CurrentPrcb = KeGetCurrentPrcb();
                SchedulerAssist = CurrentPrcb->SchedulerAssist;
                v65 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v61 + 1));
                v66 = (v65 & SchedulerAssist[5]) == 0;
                SchedulerAssist[5] &= v65;
                if ( v66 )
                  KiRemoveSystemWorkPriorityKick(CurrentPrcb);
              }
            }
          }
          __writecr8(v61);
        }
        while ( (unsigned __int64)v59 > v58 );
        v20 = v83;
        v75 = v59;
        v4 = a2;
      }
      MiReleaseWriteInProgressCharges(v82, v57, 1LL);
      v39 = v79;
    }
    v22 = v74;
    if ( v74 == v77 + 8 )
    {
      v20 = v39 + 8;
      v83 = v39 + 8;
      v22 = v39 + 8;
    }
    else if ( v20 > v39 + 128 )
    {
      v22 = v39 + 128;
    }
    v77 = v39;
    v74 = v22;
    v16 = MiMapPageInHyperSpaceWorker(v86, &v96, 0x80000000LL);
    v76 = v16;
    v19 = v16 + (v88 & 0xFFF) - 8;
    v25 = v79;
    v23 = v79 - 8;
    goto LABEL_121;
  }
LABEL_24:
  v26 = v96;
LABEL_25:
  if ( v16 )
    MiUnmapPageInHyperSpaceWorker(v16, v26, 0x80000000);
  if ( v23 <= v74 )
    v22 = v23;
  v27 = (__int64)(v22 - v77) >> 3;
  if ( v94 == 3 )
    goto LABEL_32;
  v28 = v23 <= v74;
  v29 = v80;
  if ( v28 && v80 >= v77 )
    goto LABEL_32;
  v40 = v78;
  Pool = (char *)MiAllocatePool(64, 8 * ((__int64)(v78 - v80) >> 3) + 48, 0x65576D4Du);
  v92 = Pool;
  v42 = Pool;
  if ( !Pool )
    goto LABEL_32;
  v81 = v89;
  v88 = (unsigned __int64)(Pool + 48);
  v43 = (unsigned __int64 *)(Pool + 48);
  v95 = 1;
  v46 = MiMapPageInHyperSpaceWorker(a1[5] & 0xFFFFFFFFFLL, &v96, 0x80000000LL);
  v47 = v46 + (v29 & 0xFFF);
  while ( v29 < v40 )
  {
    if ( v29 < v74 && v29 >= v77 )
    {
      v52 = *v81++;
      *v43 = v52;
      goto LABEL_77;
    }
    if ( v95 == 3 && (__int64)(((char *)v43 - v42 - 48) & 0xFFFFFFFFFFFFFFF8uLL) >= 128 )
      goto LABEL_89;
    v48 = *(_QWORD *)v47;
    if ( (*(_QWORD *)v47 & 0xC01LL) != 0x800 )
      goto LABEL_89;
    v49 = 6 * (((v48 & ~qword_140C4DD40) >> 12) & 0xFFFFFFFFFLL);
    if ( (*(_QWORD *)(48 * (((v48 & ~qword_140C4DD40) >> 12) & 0xFFFFFFFFFLL) - 0x57FFFFFFFD8LL) & 0x4000000000000LL) != 0 )
    {
      v50 = 48 * (((v48 & ~qword_140C4DD40) >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL;
      v85 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v50 + 24), 0x3FuLL) )
      {
        do
          KeYieldProcessorEx(&v85, v49, v44, v45);
        while ( *(__int64 *)(v50 + 24) < 0 );
      }
      if ( v48 == MI_READ_PTE_LOCK_FREE(v47) )
      {
        if ( (*(_BYTE *)(v50 + 34) & 0x10) != 0
          && !*(_WORD *)(v50 + 32)
          && v82 == *(_QWORD *)(qword_140C4E448 + 8 * ((*(_QWORD *)(v50 + 40) >> 39) & 0x3FFLL)) )
        {
          if ( v46 )
          {
            MiUnmapPageInHyperSpaceWorker(v46, 2u, 0x80000000);
            v95 = MiReferencePageForModifiedWrite(v50);
            v46 = MiMapPageInHyperSpaceWorker(v86, 0LL, 0x80000000LL);
            v47 = v46 + (v47 & 0xFFF);
            v51 = v95;
          }
          else
          {
            v51 = MiReferencePageForModifiedWrite(v50);
            v95 = v51;
          }
          if ( v51 )
          {
            *v43 = (v48 >> 12) & ((unsigned __int64)~qword_140C4DD40 >> 12) & 0xFFFFFFFFFLL;
            _InterlockedAnd64((volatile signed __int64 *)(v50 + 24), 0x7FFFFFFFFFFFFFFFuLL);
            v40 = v78;
LABEL_77:
            v47 += 8LL;
            v29 += 8LL;
            ++v43;
            goto LABEL_78;
          }
        }
        _InterlockedAnd64((volatile signed __int64 *)(v50 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        v42 = v92;
LABEL_89:
        v53 = v96;
        if ( v46 )
        {
          MiUnmapPageInHyperSpaceWorker(v46, v96, 0x80000000);
          v46 = 0LL;
        }
        v54 = v77;
        if ( v29 >= v77 )
          goto LABEL_86;
        v55 = ((char *)v43 - v92 - 48) >> 3;
        v87 = v55;
        if ( v55 )
        {
          v67 = v88;
          if ( (unsigned __int64)v43 > v88 )
          {
            do
            {
              v68 = 48 * *--v43 - 0x58000000000LL;
              v69 = (unsigned __int8)MiLockPageInline(v68);
              MiWriteCompletePfn(v68, 1);
              _InterlockedAnd64((volatile signed __int64 *)(v68 + 24), 0x7FFFFFFFFFFFFFFFuLL);
              if ( KiIrqlFlags )
              {
                if ( (KiIrqlFlags & 1) != 0 )
                {
                  v70 = KeGetCurrentIrql();
                  if ( v70 <= 0xFu && (unsigned __int8)v69 <= 0xFu && v70 >= 2u )
                  {
                    v71 = KeGetCurrentPrcb();
                    v72 = v71->SchedulerAssist;
                    v73 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v69 + 1));
                    v66 = (v73 & v72[5]) == 0;
                    v72[5] &= v73;
                    if ( v66 )
                      KiRemoveSystemWorkPriorityKick(v71);
                  }
                }
              }
              __writecr8(v69);
            }
            while ( (unsigned __int64)v43 > v67 );
            v55 = v87;
            v54 = v77;
          }
          MiReleaseWriteInProgressCharges(v82, v55, 1LL);
        }
        v81 = v89;
        v29 = v54;
        v46 = MiMapPageInHyperSpaceWorker(a1[5] & 0xFFFFFFFFFLL, &v96, 0x80000000LL);
        v47 = v46 + (v54 & 0xFFF);
        goto LABEL_94;
      }
      _InterlockedAnd64((volatile signed __int64 *)(v50 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    }
LABEL_94:
    v40 = v78;
LABEL_78:
    v42 = v92;
  }
  v53 = v96;
LABEL_86:
  if ( v46 )
    MiUnmapPageInHyperSpaceWorker(v46, v53, 0x80000000);
  v4 = (unsigned __int64 *)v42;
  v27 = ((char *)v43 - v42 - 48) >> 3;
LABEL_32:
  v30 = v27 << 12;
  *v4 = 0LL;
  v4[4] = 0LL;
  *((_WORD *)v4 + 4) = 8 * ((v30 >> 12) + 6);
  *((_WORD *)v4 + 5) = 2;
  result = v4;
  v4[5] = (unsigned int)v30;
  return result;
}
