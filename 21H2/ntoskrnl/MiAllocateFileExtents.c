/*
 * XREFs of MiAllocateFileExtents @ 0x14096F8CC
 * Callers:
 *     MiCreatePrototypePtes @ 0x14026E564 (MiCreatePrototypePtes.c)
 *     MiAddViewsForSection @ 0x140311CC0 (MiAddViewsForSection.c)
 *     MiUpdateActiveSubsection @ 0x140597C48 (MiUpdateActiveSubsection.c)
 *     MiInitializeCachedExtentWalker @ 0x14059F4C4 (MiInitializeCachedExtentWalker.c)
 *     MiRefillPurgedExtents @ 0x1405A0A20 (MiRefillPurgedExtents.c)
 *     MiFaultGetFileExtents @ 0x1405A7158 (MiFaultGetFileExtents.c)
 *     MiInitializeImageExtents @ 0x1409706E4 (MiInitializeImageExtents.c)
 * Callees:
 *     MiSetSubsectionBase @ 0x14022CD50 (MiSetSubsectionBase.c)
 *     MiUpdateSystemProtoPtesTree @ 0x14026EA80 (MiUpdateSystemProtoPtesTree.c)
 *     MiDereferenceControlAreaFile @ 0x140280D08 (MiDereferenceControlAreaFile.c)
 *     MiReferenceControlAreaFile @ 0x140281750 (MiReferenceControlAreaFile.c)
 *     MiAllocatePool @ 0x1402828F0 (MiAllocatePool.c)
 *     MiStartingOffset @ 0x1403342D0 (MiStartingOffset.c)
 *     MiEndingOffset @ 0x14033E0D4 (MiEndingOffset.c)
 *     FsRtlGetFileExtents @ 0x140540EA0 (FsRtlGetFileExtents.c)
 *     MiChangingSubsectionProtos @ 0x14059D69C (MiChangingSubsectionProtos.c)
 *     MiEliminateStaleExtents @ 0x14059E3E8 (MiEliminateStaleExtents.c)
 *     MiInsertCopyExtents @ 0x14059F6F4 (MiInsertCopyExtents.c)
 *     MiMergeCopyExtents @ 0x14059FC8C (MiMergeCopyExtents.c)
 *     MiSubsectionProtosCreated @ 0x1405A0FD8 (MiSubsectionProtosCreated.c)
 *     MiUnlinkSubsectionWaitBlock @ 0x1405A19E0 (MiUnlinkSubsectionWaitBlock.c)
 *     MiReplaceSystemProtoPtesNode @ 0x1405C350C (MiReplaceSystemProtoPtesNode.c)
 *     MiNewPfnsSuitable @ 0x1409697E4 (MiNewPfnsSuitable.c)
 *     MiConvertRunsToPages @ 0x140970054 (MiConvertRunsToPages.c)
 *     MiCreateFileOnlyPfns @ 0x1409704A0 (MiCreateFileOnlyPfns.c)
 *     MiDeleteFileExtentList @ 0x140970668 (MiDeleteFileExtentList.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiAllocateFileExtents(
        ULONG_PTR BugCheckParameter2,
        unsigned int a2,
        ULONG_PTR a3,
        int a4,
        int a5,
        unsigned int a6)
{
  unsigned __int64 v7; // r9
  unsigned __int64 v9; // rax
  unsigned int *inserted; // r15
  __int64 v11; // rsi
  unsigned __int64 v12; // r13
  unsigned __int64 v13; // rbx
  unsigned __int64 v14; // rax
  unsigned int i; // r12d
  _DWORD *Pool; // rax
  _DWORD *v17; // rdi
  __int64 v19; // rdx
  __int64 v20; // rdx
  struct _FILE_OBJECT *v21; // r13
  void *v22; // r12
  int FileOnlyPfns; // ebx
  __int64 v24; // r8
  __int64 v25; // r13
  int v26; // eax
  __int128 *v27; // rcx
  int v28; // edx
  __int64 v29; // [rsp+28h] [rbp-99h]
  unsigned int v30; // [rsp+38h] [rbp-89h] BYREF
  int FileExtents; // [rsp+3Ch] [rbp-85h]
  int v32; // [rsp+40h] [rbp-81h]
  struct _FILE_OBJECT *v33; // [rsp+48h] [rbp-79h] BYREF
  unsigned int *v34; // [rsp+50h] [rbp-71h] BYREF
  unsigned __int64 v35; // [rsp+58h] [rbp-69h]
  unsigned __int64 v36; // [rsp+60h] [rbp-61h]
  _OWORD v37[2]; // [rsp+68h] [rbp-59h] BYREF
  __int64 v38; // [rsp+88h] [rbp-39h]
  __int128 v39; // [rsp+90h] [rbp-31h] BYREF
  __int128 v40; // [rsp+A0h] [rbp-21h]
  __int128 v41; // [rsp+B0h] [rbp-11h]
  int v42; // [rsp+118h] [rbp+57h]
  unsigned int v43; // [rsp+120h] [rbp+5Fh]

  v43 = a2;
  v7 = a3;
  v35 = 0LL;
  v9 = (unsigned int)(a4 << 12);
  inserted = 0LL;
  v36 = (unsigned int)v9;
  memset(v37, 0, sizeof(v37));
  v38 = 0LL;
  v34 = 0LL;
  v39 = 0LL;
  v40 = 0LL;
  v41 = 0LL;
LABEL_2:
  v11 = *(_QWORD *)BugCheckParameter2;
  v12 = v9;
  if ( (*(_DWORD *)(*(_QWORD *)BugCheckParameter2 + 56LL) & 0x20) != 0 )
  {
    v42 = 1;
    if ( *(_QWORD *)(BugCheckParameter2 + 8) )
      v13 = MiStartingOffset(BugCheckParameter2, v7, a6);
    else
      v13 = (unsigned __int64)a2 << 12;
    v14 = MiEndingOffset(BugCheckParameter2);
    v35 = v14;
    if ( v13 == v14 && !v13 )
      return 0LL;
    if ( v13 + v12 > v14 )
      v12 = ((unsigned int)(v14 - v13) + 511LL) & 0xFFFFFFFFFFFFFE00uLL;
  }
  else
  {
    v42 = 2;
    v13 = (a2
         + (*(unsigned int *)(BugCheckParameter2 + 36) | ((unsigned __int64)(*(_WORD *)(BugCheckParameter2 + 32) & 0xFFC0) << 26))) << 12;
  }
  v33 = (struct _FILE_OBJECT *)MiReferenceControlAreaFile(v11);
  v30 = 1;
  for ( i = ((__rdtsc() >> 4) & 7) + 8; ; i = FileExtents )
  {
    while ( 1 )
    {
      if ( !i )
      {
LABEL_16:
        MiDereferenceControlAreaFile(v11, (unsigned __int64)v33);
        return 3221225626LL;
      }
      Pool = MiAllocatePool(64, 16LL * (i - 1) + 24, 0x3446694Du);
      v17 = Pool;
      if ( Pool )
        break;
      if ( !v30 )
        goto LABEL_16;
      i >>= 1;
    }
    *Pool = i;
    Pool[1] = 0;
    v30 = 0;
    v32 = 0;
    if ( v42 == 1 )
    {
      if ( v13 + v12 > v35 )
        v12 = (unsigned int)(v35 - v13);
      v19 = *(_QWORD *)(BugCheckParameter2 + 8);
      if ( v19 && (*(_BYTE *)(*(_QWORD *)(v11 + 96) + 48LL) & 1) != 0 )
        v13 = (v19 - *(_QWORD *)(*(_QWORD *)v11 + 64LL)) >> 3 << 12;
    }
    v12 = (v12 + 4095) & 0xFFFFFFFFFFFFF000uLL;
    if ( v42 != 1 || (*(_DWORD *)(v11 + 56) & 2) == 0 )
    {
      FileExtents = MiChangingSubsectionProtos((_QWORD *)BugCheckParameter2, a5 | 8u, (__int64)v37);
      if ( FileExtents < 0 )
      {
        MiDereferenceControlAreaFile(v11, (unsigned __int64)v33);
        goto LABEL_98;
      }
      v32 = 1;
    }
    FileExtents = FsRtlGetFileExtents(v33, v42, v13, v12, v17);
    if ( FileExtents < 0 )
      break;
    FileExtents = v17[1];
    if ( FileExtents <= i )
    {
      MiDereferenceControlAreaFile(v11, (unsigned __int64)v33);
      if ( (unsigned int)MiNewPfnsSuitable((__int64)v17) )
      {
        v30 = -1;
        v21 = 0LL;
        v22 = 0LL;
        v33 = 0LL;
        if ( v17[1] )
        {
          v22 = (void *)MiConvertRunsToPages(v17, v20, &v33, &v30);
          if ( v22 )
          {
            if ( (a5 & 0x40) == 0 || v30 <= 1 )
            {
              if ( v42 != 1 || (*(_DWORD *)(v11 + 56) & 2) == 0 )
              {
                v21 = v33;
                goto LABEL_44;
              }
              v21 = v33;
              goto LABEL_53;
            }
            FileOnlyPfns = -1073741800;
          }
          else
          {
LABEL_37:
            FileOnlyPfns = -1073741670;
          }
        }
        else
        {
          if ( (a5 & 0x40) == 0 && v42 != 1 )
          {
            if ( (*(_BYTE *)(v11 + 62) & 0xC) == 8 )
              goto LABEL_37;
LABEL_44:
            FileOnlyPfns = MiChangingSubsectionProtos((_QWORD *)BugCheckParameter2, a5 | 0x10u, (__int64)v37);
            if ( FileOnlyPfns < 0 )
            {
              ExFreePoolWithTag(v17, 0);
              if ( v22 )
                ExFreePoolWithTag(v22, 0);
              if ( FileOnlyPfns == -1073740748 )
              {
                v7 = a3;
                a2 = v43;
                v9 = v36;
                goto LABEL_2;
              }
              return (unsigned int)FileOnlyPfns;
            }
            if ( v22 && (*(_BYTE *)(v11 + 62) & 0xC) == 4 && (a5 & 1) == 0 )
              MiEliminateStaleExtents(a3, (__int64)v22, (unsigned __int64)v21);
            if ( v42 == 1 || (*(_BYTE *)(v11 + 62) & 0xC) != 8 )
              goto LABEL_53;
            if ( (a5 & 1) != 0 )
            {
              inserted = MiInsertCopyExtents((__int64)v17, 0LL, 1);
              if ( !inserted )
              {
                FileOnlyPfns = -1073741670;
                goto LABEL_67;
              }
LABEL_53:
              ExFreePoolWithTag(v17, 0);
              if ( inserted )
              {
                v25 = a3;
                FileOnlyPfns = 0;
                goto LABEL_73;
              }
              if ( v22 && (*(_BYTE *)(v11 + 56) & 0x20) == 0 && (a5 & 1) != 0 && (*(_BYTE *)(v11 + 62) & 0xC) == 4 )
              {
                *((_QWORD *)&v41 + 1) = v21;
                *((_QWORD *)&v40 + 1) = *((_QWORD *)&v40 + 1) & 0xFFFFFFFFFFFFFFF8uLL | 4;
                *(_QWORD *)&v41 = a3;
                MiUpdateSystemProtoPtesTree((__int64)&v39, 1);
              }
              v29 = (__int64)v21;
              v25 = a3;
              FileOnlyPfns = MiCreateFileOnlyPfns(BugCheckParameter2, a3, a5, (_DWORD)v22, v29);
              if ( FileOnlyPfns < 0 )
              {
                if ( !(_QWORD)v41 )
                  goto LABEL_84;
                v28 = 0;
                v27 = &v39;
              }
              else
              {
LABEL_73:
                if ( (a5 & 1) == 0 )
                  goto LABEL_84;
                if ( (a5 & 0x40) != 0 )
                  *(_DWORD *)(BugCheckParameter2 + 108) = 2;
                MiSetSubsectionBase((__int64 *)BugCheckParameter2, v25, v30, (__int64)inserted);
                v27 = (__int128 *)(BugCheckParameter2 + 120);
                if ( (_QWORD)v41 )
                {
                  MiReplaceSystemProtoPtesNode((unsigned __int64 *)&v39, (_QWORD *)(BugCheckParameter2 + 120));
LABEL_84:
                  if ( v42 != 1 || (*(_DWORD *)(v11 + 56) & 2) == 0 )
                    MiSubsectionProtosCreated(BugCheckParameter2, (__int64)v37, a4, 0);
                  if ( v22 )
                    ExFreePoolWithTag(v22, 0);
                  return (unsigned int)FileOnlyPfns;
                }
                if ( (*(_DWORD *)(v11 + 56) & 0x20) != 0 )
                  goto LABEL_84;
                v28 = 1;
              }
              MiUpdateSystemProtoPtesTree((__int64)v27, v28);
              goto LABEL_84;
            }
            v26 = MiMergeCopyExtents((_QWORD *)BugCheckParameter2, (__int64)v17, v24, &v34);
            inserted = v34;
            FileOnlyPfns = v26;
            if ( v26 >= 0 )
              goto LABEL_53;
            if ( v26 == -1073741302 )
              FileOnlyPfns = 0;
LABEL_67:
            MiSubsectionProtosCreated(BugCheckParameter2, (__int64)v37, 0, 0);
LABEL_93:
            ExFreePoolWithTag(v17, 0);
            if ( inserted )
              MiDeleteFileExtentList(inserted);
            return (unsigned int)FileOnlyPfns;
          }
          FileOnlyPfns = -1073741823;
        }
      }
      else
      {
        FileOnlyPfns = -1073740761;
      }
      if ( v32 )
        MiUnlinkSubsectionWaitBlock((__int64 *)BugCheckParameter2, (__int64)v37, 0);
      goto LABEL_93;
    }
    if ( v32 )
    {
      MiUnlinkSubsectionWaitBlock((__int64 *)BugCheckParameter2, (__int64)v37, 0);
      FileExtents = v17[1];
    }
    v17[1] = i;
    ExFreePoolWithTag(v17, 0);
  }
  MiDereferenceControlAreaFile(v11, (unsigned __int64)v33);
  if ( v32 )
    MiUnlinkSubsectionWaitBlock((__int64 *)BugCheckParameter2, (__int64)v37, 0);
LABEL_98:
  ExFreePoolWithTag(v17, 0);
  return (unsigned int)FileExtents;
}
