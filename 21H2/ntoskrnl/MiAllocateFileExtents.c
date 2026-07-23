/*
 * XREFs of MiAllocateFileExtents @ 0x1408CF670
 * Callers:
 *     MiCreatePrototypePtes @ 0x140302B48 (MiCreatePrototypePtes.c)
 *     MiAddViewsForSection @ 0x140320340 (MiAddViewsForSection.c)
 *     MiUpdateActiveSubsection @ 0x14053D120 (MiUpdateActiveSubsection.c)
 *     MiRefillPurgedExtents @ 0x140542290 (MiRefillPurgedExtents.c)
 *     MiFaultGetFileExtents @ 0x140548630 (MiFaultGetFileExtents.c)
 *     MiInitializeImageExtents @ 0x1408D01CC (MiInitializeImageExtents.c)
 * Callees:
 *     MiSetSubsectionBase @ 0x14021EDF4 (MiSetSubsectionBase.c)
 *     MiWritePteShadow @ 0x140234B9C (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140234BFC (MiPteHasShadow.c)
 *     MiAllocatePool @ 0x14027C2E0 (MiAllocatePool.c)
 *     MiGetControlAreaPartition @ 0x14027C914 (MiGetControlAreaPartition.c)
 *     MiUpdateSystemProtoPtesTree @ 0x140302FB0 (MiUpdateSystemProtoPtesTree.c)
 *     MiMakeSubsectionPte @ 0x14030312C (MiMakeSubsectionPte.c)
 *     MiEndingOffset @ 0x140327590 (MiEndingOffset.c)
 *     MiReferenceControlAreaFile @ 0x140327C00 (MiReferenceControlAreaFile.c)
 *     MiStartingOffset @ 0x140329160 (MiStartingOffset.c)
 *     MiPteInShadowRange @ 0x140353840 (MiPteInShadowRange.c)
 *     MiDereferenceControlAreaFile @ 0x140361F34 (MiDereferenceControlAreaFile.c)
 *     FsRtlGetFileExtents @ 0x1404EEF80 (FsRtlGetFileExtents.c)
 *     MiChangingSubsectionProtos @ 0x14053FB58 (MiChangingSubsectionProtos.c)
 *     MiDecrementProtoShareCounts @ 0x1405408E0 (MiDecrementProtoShareCounts.c)
 *     MiEliminateStaleExtents @ 0x140540B08 (MiEliminateStaleExtents.c)
 *     MiSubsectionProtosCreated @ 0x1405426C4 (MiSubsectionProtosCreated.c)
 *     MiUnlinkSubsectionWaitBlock @ 0x140542814 (MiUnlinkSubsectionWaitBlock.c)
 *     MiReplaceSystemProtoPtesNode @ 0x1405580F0 (MiReplaceSystemProtoPtesNode.c)
 *     MiAddPhysicalMemory @ 0x1408C4FF0 (MiAddPhysicalMemory.c)
 *     MiNewPfnsSuitable @ 0x1408C6080 (MiNewPfnsSuitable.c)
 *     MiRemovePhysicalMemory @ 0x1408C60EC (MiRemovePhysicalMemory.c)
 *     MiConvertRunsToPages @ 0x1408CFF84 (MiConvertRunsToPages.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
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
  int v32; // eax
  ULONG_PTR v33; // rbx
  __int64 v34; // rcx
  ULONG_PTR *ControlAreaPartition; // rax
  __int64 v36; // rbx
  void *v37; // rcx
  int FileExtents; // [rsp+38h] [rbp-A1h]
  unsigned int v39; // [rsp+38h] [rbp-A1h]
  int v40; // [rsp+3Ch] [rbp-9Dh]
  int v41; // [rsp+40h] [rbp-99h]
  unsigned int v42; // [rsp+44h] [rbp-95h] BYREF
  ULONG_PTR BugCheckParameter2a; // [rsp+48h] [rbp-91h]
  unsigned __int64 v44; // [rsp+50h] [rbp-89h]
  unsigned __int64 v45; // [rsp+58h] [rbp-81h] BYREF
  __int64 v46; // [rsp+60h] [rbp-79h]
  ULONG_PTR v47; // [rsp+68h] [rbp-71h] BYREF
  ULONG_PTR v48; // [rsp+70h] [rbp-69h] BYREF
  __int128 v49; // [rsp+78h] [rbp-61h] BYREF
  __int128 v50; // [rsp+88h] [rbp-51h]
  __int128 v51; // [rsp+98h] [rbp-41h]
  _OWORD v52[2]; // [rsp+A8h] [rbp-31h] BYREF
  __int64 v53; // [rsp+C8h] [rbp-11h]
  _QWORD v54[2]; // [rsp+D0h] [rbp-9h] BYREF
  int v55; // [rsp+E0h] [rbp+7h]
  int v56; // [rsp+E4h] [rbp+Bh]
  int v57; // [rsp+138h] [rbp+5Fh]
  int v58; // [rsp+138h] [rbp+5Fh]
  unsigned int v59; // [rsp+140h] [rbp+67h]

  v59 = a2;
  v42 = 0;
  v45 = 0LL;
  v44 = 0LL;
  v7 = a3;
  v8 = (unsigned int)(a4 << 12);
  BugCheckParameter2a = (unsigned int)v8;
  memset(v52, 0, sizeof(v52));
  v53 = 0LL;
  v49 = 0LL;
  v50 = 0LL;
  v51 = 0LL;
  while ( 2 )
  {
    v9 = *(_QWORD *)BugCheckParameter2;
    v10 = v8;
    v46 = v9;
    if ( (*(_DWORD *)(v9 + 56) & 0x20) != 0 )
    {
      v41 = 1;
      if ( *(_QWORD *)(BugCheckParameter2 + 8) )
        v11 = MiStartingOffset((__int64 *)BugCheckParameter2, v7, 0);
      else
        v11 = (unsigned __int64)a2 << 12;
      v12 = MiEndingOffset(BugCheckParameter2);
      v44 = v12;
      if ( v11 == v12 && !v11 )
        return 0LL;
      if ( v10 + v11 > v12 )
        v10 = ((unsigned int)(v12 - v11) + 511LL) & 0xFFFFFFFFFFFFFE00uLL;
    }
    else
    {
      v41 = 2;
      v11 = (a2
           + (*(unsigned int *)(BugCheckParameter2 + 36) | ((unsigned __int64)(*(_WORD *)(BugCheckParameter2 + 32) & 0xFFC0) << 26))) << 12;
    }
    v13 = (struct _FILE_OBJECT *)MiReferenceControlAreaFile(v9);
    v40 = 1;
    for ( i = ((__rdtsc() >> 4) & 7) + 8; ; i = v39 )
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
        if ( !v40 )
          goto LABEL_16;
        i >>= 1;
      }
      *Pool = i;
      Pool[1] = 0;
      v40 = 0;
      v57 = 0;
      if ( v41 == 1 )
      {
        if ( v10 + v11 > v44 )
          v10 = (unsigned int)(v44 - v11);
        v16 = *(_QWORD *)(BugCheckParameter2 + 8);
        if ( v16 && (*(_BYTE *)(*(_QWORD *)(v9 + 96) + 48LL) & 1) != 0 )
          v11 = (v16 - *(_QWORD *)(*(_QWORD *)v9 + 64LL)) >> 3 << 12;
      }
      v10 = (v10 + 4095) & 0xFFFFFFFFFFFFF000uLL;
      if ( v41 != 1 || (*(_DWORD *)(v9 + 56) & 2) == 0 )
      {
        v58 = MiChangingSubsectionProtos((_QWORD *)BugCheckParameter2, a5 | 8u, (__int64)v52);
        if ( v58 < 0 )
        {
          MiDereferenceControlAreaFile(v9, (unsigned __int64)v13);
          ExFreePoolWithTag(v17, 0);
          return (unsigned int)v58;
        }
        v57 = 1;
      }
      FileExtents = FsRtlGetFileExtents(v13, v16, v11, v10, v17);
      if ( FileExtents < 0 )
      {
        MiDereferenceControlAreaFile(v9, (unsigned __int64)v13);
        if ( v57 == 1 )
          MiUnlinkSubsectionWaitBlock((__int64 *)BugCheckParameter2, (__int64)v52, 0);
        v37 = v17;
LABEL_127:
        ExFreePoolWithTag(v37, 0);
        return (unsigned int)FileExtents;
      }
      v39 = v17[1];
      if ( v39 <= i )
        break;
      if ( v57 == 1 )
      {
        MiUnlinkSubsectionWaitBlock((__int64 *)BugCheckParameter2, (__int64)v52, 0);
        v39 = v17[1];
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
      if ( v57 == 1 )
        MiUnlinkSubsectionWaitBlock((__int64 *)BugCheckParameter2, (__int64)v52, 0);
      return (unsigned int)v23;
    }
    if ( v17[1] )
    {
      v22 = (_QWORD *)MiConvertRunsToPages(v17, &v45, &v42);
      if ( v22 )
      {
        if ( (a5 & 0x40) == 0 || v42 <= 1 )
        {
          v21 = v45;
          v20 = v41;
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
    if ( (a5 & 0x40) != 0 || (v20 = v41, v41 == 1) )
    {
      v23 = -1073741823;
      goto LABEL_121;
    }
    v42 = -1;
    v21 = 0LL;
    v45 = 0LL;
    v22 = 0LL;
LABEL_41:
    if ( v20 == 1 && (*(_DWORD *)(v9 + 56) & 2) != 0 )
      goto LABEL_54;
    v23 = MiChangingSubsectionProtos((_QWORD *)BugCheckParameter2, a5 | 0x10u, (__int64)v52);
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
        *((_QWORD *)&v51 + 1) = v21;
        *(_QWORD *)&v51 = v24;
        *((_QWORD *)&v50 + 1) = *((_QWORD *)&v50 + 1) & 0xFFFFFFFFFFFFFFF8uLL | 4;
        MiUpdateSystemProtoPtesTree((unsigned __int64 *)&v49, 1);
      }
      v25 = 0;
      v26 = 0LL;
      FileExtents = 0;
      v27 = -1LL;
      v44 = 0LL;
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
          v26 = v44;
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
          SubsectionPte = MiMakeSubsectionPte(BugCheckParameter2);
          v31 = (__int64 *)(a3 + 8 * ((unsigned int)v19 - v28));
          if ( MiPteInShadowRange((unsigned __int64)v31) )
          {
            if ( (unsigned int)MiPteHasShadow() )
            {
              v32 = 1;
              if ( !HIBYTE(word_140C4E048) && (SubsectionPte & 1) != 0 )
                SubsectionPte |= 0x8000000000000000uLL;
LABEL_79:
              *v31 = SubsectionPte;
              if ( v32 )
                MiWritePteShadow((__int64)v31, SubsectionPte);
              if ( (a5 & 2) != 0 )
              {
                v25 = -1073740023;
                FileExtents = -1073740023;
LABEL_83:
                v29 = a5 & 0x40;
LABEL_84:
                if ( v25 < 0 )
                {
                  if ( (_QWORD)v51 )
                    MiUpdateSystemProtoPtesTree((unsigned __int64 *)&v49, 0);
LABEL_113:
                  v36 = v46;
                }
                else
                {
                  if ( (a5 & 1) == 0 )
                    goto LABEL_113;
                  if ( v29 )
                    *(_DWORD *)(BugCheckParameter2 + 108) = 2;
                  MiSetSubsectionBase((__int64 *)BugCheckParameter2, a3, v42);
                  if ( (_QWORD)v51 )
                  {
                    MiReplaceSystemProtoPtesNode((unsigned __int64 *)&v49, (_QWORD *)(BugCheckParameter2 + 112));
                    goto LABEL_113;
                  }
                  v36 = v46;
                  if ( (*(_DWORD *)(v46 + 56) & 0x20) == 0 )
                    MiUpdateSystemProtoPtesTree((unsigned __int64 *)(BugCheckParameter2 + 112), 1);
                }
                if ( v41 != 1 || (*(_DWORD *)(v36 + 56) & 2) == 0 )
                  MiSubsectionProtosCreated(BugCheckParameter2, (__int64)v52, a4, 0);
                if ( v22 )
                {
                  v37 = v22;
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
            v21 = v45;
          }
          v32 = 0;
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
            v26 = v44;
            goto LABEL_107;
          }
          v56 = 0;
          v54[0] = BugCheckParameter2;
          v33 = (unsigned int)v19 - v28;
          v55 = 2 - (v29 != 0);
          v34 = *(_QWORD *)BugCheckParameter2;
          v47 = v28 << 12;
          v54[1] = a3 + 8 * v33;
          v48 = v27 << 12;
          ControlAreaPartition = (ULONG_PTR *)MiGetControlAreaPartition(v34);
          FileExtents = MiAddPhysicalMemory(ControlAreaPartition, &v48, &v47, 2, (__int64)v54);
          v25 = FileExtents;
          if ( FileExtents >= 0 )
            goto LABEL_103;
          v27 = BugCheckParameter2a;
          v26 = (unsigned __int64)&v22[v33];
          v28 = 0LL;
          v44 = v26;
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
      a2 = v59;
      v8 = BugCheckParameter2a;
      v7 = a3;
      continue;
    }
    return (unsigned int)v23;
  }
}
