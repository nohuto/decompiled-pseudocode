/*
 * XREFs of MiAllocateFileExtents @ 0x1408CBF10
 * Callers:
 *     MiAddViewsForSection @ 0x140248C90 (MiAddViewsForSection.c)
 *     MiCreatePrototypePtes @ 0x14026356C (MiCreatePrototypePtes.c)
 *     MiUpdateActiveSubsection @ 0x140537A10 (MiUpdateActiveSubsection.c)
 *     MiRefillPurgedExtents @ 0x14053CB80 (MiRefillPurgedExtents.c)
 *     MiFaultGetFileExtents @ 0x140542F20 (MiFaultGetFileExtents.c)
 *     MiInitializeImageExtents @ 0x1408CCA6C (MiInitializeImageExtents.c)
 * Callees:
 *     MiEndingOffset @ 0x140224680 (MiEndingOffset.c)
 *     MiDereferenceControlAreaFile @ 0x1402293FC (MiDereferenceControlAreaFile.c)
 *     MiReferenceControlAreaFile @ 0x140229C10 (MiReferenceControlAreaFile.c)
 *     MiPteInShadowRange @ 0x1402386B0 (MiPteInShadowRange.c)
 *     MiStartingOffset @ 0x140245D90 (MiStartingOffset.c)
 *     MiAllocatePool @ 0x140247F80 (MiAllocatePool.c)
 *     MiGetControlAreaPartition @ 0x14024B6C4 (MiGetControlAreaPartition.c)
 *     MiUpdateSystemProtoPtesTree @ 0x1402639D0 (MiUpdateSystemProtoPtesTree.c)
 *     MiMakeSubsectionPte @ 0x140263B4C (MiMakeSubsectionPte.c)
 *     MiWritePteShadow @ 0x14032ECC0 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x14032ED20 (MiPteHasShadow.c)
 *     MiSetSubsectionBase @ 0x14035E63C (MiSetSubsectionBase.c)
 *     FsRtlGetFileExtents @ 0x1404E9BD0 (FsRtlGetFileExtents.c)
 *     MiChangingSubsectionProtos @ 0x14053A448 (MiChangingSubsectionProtos.c)
 *     MiDecrementProtoShareCounts @ 0x14053B1D0 (MiDecrementProtoShareCounts.c)
 *     MiEliminateStaleExtents @ 0x14053B3F8 (MiEliminateStaleExtents.c)
 *     MiSubsectionProtosCreated @ 0x14053CFB4 (MiSubsectionProtosCreated.c)
 *     MiUnlinkSubsectionWaitBlock @ 0x14053D104 (MiUnlinkSubsectionWaitBlock.c)
 *     MiReplaceSystemProtoPtesNode @ 0x140552A10 (MiReplaceSystemProtoPtesNode.c)
 *     MiAddPhysicalMemory @ 0x1408C1890 (MiAddPhysicalMemory.c)
 *     MiNewPfnsSuitable @ 0x1408C2920 (MiNewPfnsSuitable.c)
 *     MiRemovePhysicalMemory @ 0x1408C298C (MiRemovePhysicalMemory.c)
 *     MiConvertRunsToPages @ 0x1408CC824 (MiConvertRunsToPages.c)
 *     ExFreePoolWithTag @ 0x1409B1140 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiAllocateFileExtents(ULONG_PTR BugCheckParameter2, unsigned int a2, ULONG_PTR a3, int a4, char a5)
{
  unsigned __int64 v7; // r9
  ULONG_PTR v8; // rax
  __int64 v9; // r13
  unsigned __int64 v10; // r14
  unsigned __int64 v11; // rbx
  unsigned __int64 v12; // rax
  struct _FILE_OBJECT *v13; // r12
  unsigned int i; // esi
  _DWORD *Pool; // rax
  __int64 v16; // rdx
  _DWORD *v17; // rdi
  __int64 v19; // r12
  int v20; // eax
  unsigned __int64 v21; // r14
  _QWORD *v22; // rsi
  int v23; // ebx
  ULONG_PTR v24; // rbx
  int v25; // ecx
  unsigned __int64 v26; // rdx
  ULONG_PTR v27; // r8
  ULONG_PTR v28; // rdi
  int v29; // eax
  __int64 SubsectionPte; // rbx
  __int64 *v31; // rdi
  __int64 v32; // r8
  int v33; // eax
  ULONG_PTR v34; // rbx
  __int64 v35; // rcx
  ULONG_PTR *ControlAreaPartition; // rax
  __int64 v37; // rbx
  void *v38; // rcx
  int FileExtents; // [rsp+38h] [rbp-A1h]
  unsigned int v40; // [rsp+38h] [rbp-A1h]
  int v41; // [rsp+3Ch] [rbp-9Dh]
  int v42; // [rsp+40h] [rbp-99h]
  unsigned int v43; // [rsp+44h] [rbp-95h] BYREF
  ULONG_PTR BugCheckParameter2a; // [rsp+48h] [rbp-91h]
  unsigned __int64 v45; // [rsp+50h] [rbp-89h]
  unsigned __int64 v46; // [rsp+58h] [rbp-81h] BYREF
  __int64 v47; // [rsp+60h] [rbp-79h]
  ULONG_PTR v48; // [rsp+68h] [rbp-71h] BYREF
  ULONG_PTR v49; // [rsp+70h] [rbp-69h] BYREF
  __int128 v50; // [rsp+78h] [rbp-61h] BYREF
  __int128 v51; // [rsp+88h] [rbp-51h]
  __int128 v52; // [rsp+98h] [rbp-41h]
  _OWORD v53[2]; // [rsp+A8h] [rbp-31h] BYREF
  __int64 v54; // [rsp+C8h] [rbp-11h]
  _QWORD v55[2]; // [rsp+D0h] [rbp-9h] BYREF
  int v56; // [rsp+E0h] [rbp+7h]
  int v57; // [rsp+E4h] [rbp+Bh]
  int v58; // [rsp+138h] [rbp+5Fh]
  int v59; // [rsp+138h] [rbp+5Fh]
  unsigned int v60; // [rsp+140h] [rbp+67h]

  v60 = a2;
  v43 = 0;
  v46 = 0LL;
  v45 = 0LL;
  v7 = a3;
  v8 = (unsigned int)(a4 << 12);
  BugCheckParameter2a = (unsigned int)v8;
  memset(v53, 0, sizeof(v53));
  v54 = 0LL;
  v50 = 0LL;
  v51 = 0LL;
  v52 = 0LL;
  while ( 2 )
  {
    v9 = *(_QWORD *)BugCheckParameter2;
    v10 = v8;
    v47 = v9;
    if ( (*(_DWORD *)(v9 + 56) & 0x20) != 0 )
    {
      v42 = 1;
      if ( *(_QWORD *)(BugCheckParameter2 + 8) )
        v11 = MiStartingOffset((__int64 *)BugCheckParameter2, v7, 0);
      else
        v11 = (unsigned __int64)a2 << 12;
      v12 = MiEndingOffset(BugCheckParameter2);
      v45 = v12;
      if ( v11 == v12 && !v11 )
        return 0LL;
      if ( v10 + v11 > v12 )
        v10 = ((unsigned int)(v12 - v11) + 511LL) & 0xFFFFFFFFFFFFFE00uLL;
    }
    else
    {
      v42 = 2;
      v11 = (a2
           + (*(unsigned int *)(BugCheckParameter2 + 36) | ((unsigned __int64)(*(_WORD *)(BugCheckParameter2 + 32) & 0xFFC0) << 26))) << 12;
    }
    v13 = (struct _FILE_OBJECT *)MiReferenceControlAreaFile(v9);
    v41 = 1;
    for ( i = ((__rdtsc() >> 4) & 7) + 8; ; i = v40 )
    {
      while ( 1 )
      {
        if ( !i )
        {
LABEL_16:
          MiDereferenceControlAreaFile(v9, (unsigned __int64)v13);
          return 3221225626LL;
        }
        Pool = MiAllocatePool(64, 16LL * (i - 1) + 24, 0x6546694Du);
        v17 = Pool;
        if ( Pool )
          break;
        if ( !v41 )
          goto LABEL_16;
        i >>= 1;
      }
      *Pool = i;
      Pool[1] = 0;
      v41 = 0;
      v58 = 0;
      if ( v42 == 1 )
      {
        if ( v10 + v11 > v45 )
          v10 = (unsigned int)(v45 - v11);
        v16 = *(_QWORD *)(BugCheckParameter2 + 8);
        if ( v16 && (*(_BYTE *)(*(_QWORD *)(v9 + 96) + 48LL) & 1) != 0 )
          v11 = (v16 - *(_QWORD *)(*(_QWORD *)v9 + 64LL)) >> 3 << 12;
      }
      v10 = (v10 + 4095) & 0xFFFFFFFFFFFFF000uLL;
      if ( v42 != 1 || (*(_DWORD *)(v9 + 56) & 2) == 0 )
      {
        v59 = MiChangingSubsectionProtos((_QWORD *)BugCheckParameter2, a5 | 8u, (__int64)v53);
        if ( v59 < 0 )
        {
          MiDereferenceControlAreaFile(v9, (unsigned __int64)v13);
          ExFreePoolWithTag(v17, 0);
          return (unsigned int)v59;
        }
        v58 = 1;
      }
      FileExtents = FsRtlGetFileExtents(v13, v16, v11, v10, v17);
      if ( FileExtents < 0 )
      {
        MiDereferenceControlAreaFile(v9, (unsigned __int64)v13);
        if ( v58 == 1 )
          MiUnlinkSubsectionWaitBlock((__int64 *)BugCheckParameter2, (__int64)v53, 0);
        v38 = v17;
LABEL_127:
        ExFreePoolWithTag(v38, 0);
        return (unsigned int)FileExtents;
      }
      v40 = v17[1];
      if ( v40 <= i )
        break;
      if ( v58 == 1 )
      {
        MiUnlinkSubsectionWaitBlock((__int64 *)BugCheckParameter2, (__int64)v53, 0);
        v40 = v17[1];
      }
      v17[1] = i;
      ExFreePoolWithTag(v17, 0);
    }
    MiDereferenceControlAreaFile(v9, (unsigned __int64)v13);
    v19 = 0LL;
    if ( !(unsigned int)MiNewPfnsSuitable((__int64)v17) )
    {
      v23 = -1073740761;
LABEL_121:
      ExFreePoolWithTag(v17, 0);
      if ( v58 == 1 )
        MiUnlinkSubsectionWaitBlock((__int64 *)BugCheckParameter2, (__int64)v53, 0);
      return (unsigned int)v23;
    }
    if ( v17[1] )
    {
      v22 = (_QWORD *)MiConvertRunsToPages(v17, &v46, &v43);
      if ( v22 )
      {
        if ( (a5 & 0x40) == 0 || v43 <= 1 )
        {
          v21 = v46;
          v20 = v42;
          goto LABEL_41;
        }
        v23 = -1073741800;
      }
      else
      {
        v23 = -1073741670;
      }
      goto LABEL_121;
    }
    if ( (a5 & 0x40) != 0 || (v20 = v42, v42 == 1) )
    {
      v23 = -1073741823;
      goto LABEL_121;
    }
    v43 = -1;
    v21 = 0LL;
    v46 = 0LL;
    v22 = 0LL;
LABEL_41:
    if ( v20 == 1 && (*(_DWORD *)(v9 + 56) & 2) != 0 )
      goto LABEL_54;
    v23 = MiChangingSubsectionProtos((_QWORD *)BugCheckParameter2, a5 | 0x10u, (__int64)v53);
    if ( v23 >= 0 )
    {
      if ( v22 )
      {
        v24 = a3;
        if ( (a5 & 1) == 0 )
          MiEliminateStaleExtents(a3, (__int64)v22, v21);
        goto LABEL_55;
      }
LABEL_54:
      v24 = a3;
LABEL_55:
      ExFreePoolWithTag(v17, 0);
      if ( v22 && (*(_BYTE *)(v9 + 56) & 0x20) == 0 && (a5 & 1) != 0 )
      {
        *((_QWORD *)&v52 + 1) = v21;
        *(_QWORD *)&v52 = v24;
        *((_QWORD *)&v51 + 1) = *((_QWORD *)&v51 + 1) & 0xFFFFFFFFFFFFFFF8uLL | 4;
        MiUpdateSystemProtoPtesTree((unsigned __int64 *)&v50, 1);
      }
      v25 = 0;
      v26 = 0LL;
      FileExtents = 0;
      v27 = -1LL;
      v45 = 0LL;
      v28 = 0LL;
      BugCheckParameter2a = -1LL;
      v29 = a5 & 0x40;
      while ( 1 )
      {
        if ( (unsigned int)v19 == v21 )
        {
          if ( !v28 )
            goto LABEL_84;
        }
        else
        {
          if ( !v28 )
          {
            v27 = v22[v19];
            BugCheckParameter2a = v27;
            v28 = 1LL;
            goto LABEL_106;
          }
          v26 = v45;
          if ( v22[v19 - 1] + 1LL == v22[v19] )
          {
            ++v28;
            goto LABEL_107;
          }
          v29 = a5 & 0x40;
        }
        if ( v27 == 0x8000000000000000uLL )
        {
          if ( v25 < 0 )
            goto LABEL_104;
          SubsectionPte = MiMakeSubsectionPte(BugCheckParameter2, v26, 0x8000000000000000uLL, 0x8000000000000000uLL);
          v31 = (__int64 *)(a3 + 8 * ((unsigned int)v19 - v28));
          if ( MiPteInShadowRange((unsigned __int64)v31) )
          {
            if ( (unsigned int)MiPteHasShadow() )
            {
              v33 = 1;
              if ( !HIBYTE(word_140C4DE08) && (SubsectionPte & 1) != 0 )
                SubsectionPte |= 0x8000000000000000uLL;
LABEL_79:
              *v31 = SubsectionPte;
              if ( v33 )
                MiWritePteShadow((__int64)v31, SubsectionPte, v32);
              if ( (a5 & 2) != 0 )
              {
                v25 = -1073740023;
                FileExtents = -1073740023;
LABEL_83:
                v29 = a5 & 0x40;
LABEL_84:
                if ( v25 < 0 )
                {
                  if ( (_QWORD)v52 )
                    MiUpdateSystemProtoPtesTree((unsigned __int64 *)&v50, 0);
LABEL_113:
                  v37 = v47;
                }
                else
                {
                  if ( (a5 & 1) == 0 )
                    goto LABEL_113;
                  if ( v29 )
                    *(_DWORD *)(BugCheckParameter2 + 108) = 2;
                  MiSetSubsectionBase((__int64 *)BugCheckParameter2, a3, v43);
                  if ( (_QWORD)v52 )
                  {
                    MiReplaceSystemProtoPtesNode((unsigned __int64 *)&v50, (_QWORD *)(BugCheckParameter2 + 112));
                    goto LABEL_113;
                  }
                  v37 = v47;
                  if ( (*(_DWORD *)(v47 + 56) & 0x20) == 0 )
                    MiUpdateSystemProtoPtesTree((unsigned __int64 *)(BugCheckParameter2 + 112), 1);
                }
                if ( v42 != 1 || (*(_DWORD *)(v37 + 56) & 2) == 0 )
                  MiSubsectionProtosCreated(BugCheckParameter2, (__int64)v53, a4, 0);
                if ( v22 )
                {
                  v38 = v22;
                  goto LABEL_127;
                }
                return (unsigned int)FileExtents;
              }
              goto LABEL_102;
            }
            if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
              && (SubsectionPte & 1) != 0 )
            {
              SubsectionPte |= 0x8000000000000000uLL;
            }
            v21 = v46;
          }
          v33 = 0;
          goto LABEL_79;
        }
        if ( (v27 & 0x4000000000000000LL) != 0 )
        {
          if ( v25 >= 0 || (unsigned __int64)&v22[v19] > v26 )
            goto LABEL_104;
          if ( (unsigned int)v19 == v21 )
            goto LABEL_83;
          v28 = 0LL;
          LODWORD(v19) = v19 - 1;
        }
        else
        {
          if ( v25 < 0 )
          {
            if ( (unsigned __int64)&v22[v19] <= v26 )
            {
              if ( (a5 & 0x40) != 0 )
                MiDecrementProtoShareCounts(v27, v28, v27, (_DWORD *)0x4000000000000000LL);
              MiRemovePhysicalMemory(BugCheckParameter2a, v28, 0x12u);
LABEL_102:
              v25 = FileExtents;
LABEL_103:
              v27 = BugCheckParameter2a;
            }
LABEL_104:
            if ( (unsigned int)v19 == v21 )
              goto LABEL_83;
            v28 = 0LL;
            LODWORD(v19) = v19 - 1;
LABEL_106:
            v26 = v45;
            goto LABEL_107;
          }
          v57 = 0;
          v55[0] = BugCheckParameter2;
          v34 = (unsigned int)v19 - v28;
          v56 = 2 - (v29 != 0);
          v35 = *(_QWORD *)BugCheckParameter2;
          v48 = v28 << 12;
          v55[1] = a3 + 8 * v34;
          v49 = v27 << 12;
          ControlAreaPartition = (ULONG_PTR *)MiGetControlAreaPartition(v35);
          FileExtents = MiAddPhysicalMemory(ControlAreaPartition, &v49, &v48, 2, (__int64)v55);
          v25 = FileExtents;
          if ( FileExtents >= 0 )
            goto LABEL_103;
          v27 = BugCheckParameter2a;
          v26 = (unsigned __int64)&v22[v34];
          v28 = 0LL;
          v45 = v26;
          LODWORD(v19) = -1;
        }
LABEL_107:
        v19 = (unsigned int)(v19 + 1);
        v29 = a5 & 0x40;
        if ( (unsigned int)v19 > v21 )
          goto LABEL_84;
      }
    }
    ExFreePoolWithTag(v17, 0);
    if ( v22 )
      ExFreePoolWithTag(v22, 0);
    if ( v23 == -1073740748 )
    {
      a2 = v60;
      v8 = BugCheckParameter2a;
      v7 = a3;
      continue;
    }
    return (unsigned int)v23;
  }
}
