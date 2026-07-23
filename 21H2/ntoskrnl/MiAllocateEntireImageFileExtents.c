/*
 * XREFs of MiAllocateEntireImageFileExtents @ 0x1408CF404
 * Callers:
 *     MiCreateImageFileMap @ 0x1406AA6D4 (MiCreateImageFileMap.c)
 * Callees:
 *     MiAllocatePool @ 0x14027C2E0 (MiAllocatePool.c)
 *     RtlAvlRemoveNode @ 0x1402D9370 (RtlAvlRemoveNode.c)
 *     RtlAvlInsertNodeEx @ 0x1403212A0 (RtlAvlInsertNodeEx.c)
 *     KeBugCheckEx @ 0x1403FE0D0 (KeBugCheckEx.c)
 *     FsRtlGetFileExtents @ 0x1404EEF80 (FsRtlGetFileExtents.c)
 *     MiNewPfnsSuitable @ 0x1408C6080 (MiNewPfnsSuitable.c)
 *     MiLockImageExtentsExclusive @ 0x1408D03E4 (MiLockImageExtentsExclusive.c)
 *     MiUnlockImageExtentsExclusive @ 0x1408D0414 (MiUnlockImageExtentsExclusive.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiAllocateEntireImageFileExtents(
        struct _FILE_OBJECT *a1,
        unsigned __int64 a2,
        _DWORD *a3,
        unsigned int **a4)
{
  __int64 v8; // r15
  unsigned int i; // ebx
  _DWORD *Pool; // rax
  __int64 v11; // rdx
  _DWORD *v12; // rdi
  int FileExtents; // esi
  unsigned int v15; // esi
  unsigned int v16; // ebx
  unsigned int *v17; // rsi
  __int64 j; // rbx
  unsigned int v19; // r14d
  _DWORD *v20; // rbx
  bool v21; // r8
  unsigned __int64 v22; // r9
  char v23; // al
  _QWORD *BugCheckParameter4; // rdx
  unsigned __int64 v25; // rcx
  _QWORD *v26; // rax

  *a4 = 0LL;
  LODWORD(v8) = 1;
  for ( i = ((__rdtsc() >> 4) & 7) + 8; ; i = v15 )
  {
    while ( 1 )
    {
      if ( !i )
        return 3221225626LL;
      Pool = MiAllocatePool(64, 16LL * (i - 1) + 24, 0x6546694Du);
      v12 = Pool;
      if ( Pool )
        break;
      if ( !(_DWORD)v8 )
        return 3221225626LL;
      i >>= 1;
    }
    Pool[1] = 0;
    a2 = (a2 + 4095) & 0xFFFFFFFFFFFFF000uLL;
    *Pool = i;
    v8 = 0LL;
    FileExtents = FsRtlGetFileExtents(a1, v11, 0LL, a2, Pool);
    if ( FileExtents < 0 )
    {
      ExFreePoolWithTag(v12, 0);
      return (unsigned int)FileExtents;
    }
    v15 = v12[1];
    if ( v15 <= i )
      break;
    v12[1] = i;
    ExFreePoolWithTag(v12, 0);
  }
  if ( !(unsigned int)MiNewPfnsSuitable((__int64)v12) )
  {
    v16 = -1073740761;
LABEL_16:
    ExFreePoolWithTag(v12, 0);
    return v16;
  }
  if ( !v15 )
  {
    v16 = -1073741823;
    goto LABEL_16;
  }
  v17 = (unsigned int *)MiAllocatePool(64, 48LL * (v15 - 1) + 56, 0x6546694Du);
  if ( !v17 )
  {
    v16 = -1073741670;
    goto LABEL_16;
  }
  *v17 = v12[1];
  MiLockImageExtentsExclusive();
  if ( a3 )
  {
    for ( j = 0LL; (unsigned int)j < *a3; j = (unsigned int)(j + 1) )
      RtlAvlRemoveNode(&qword_140C4CCE0, (unsigned __int64 *)&a3[12 * j + 2]);
  }
  v19 = 0;
  v20 = v17 + 2;
  if ( !*v17 )
    goto LABEL_31;
  do
  {
    v21 = 0;
    v22 = *(_QWORD *)&v12[4 * v19 + 2];
    *((_QWORD *)v20 + 4) = v22;
    *((_QWORD *)v20 + 5) = *(_QWORD *)&v12[4 * v19 + 4];
    v23 = 0;
    v20[6] = v8;
    BugCheckParameter4 = (_QWORD *)qword_140C4CCE0;
    if ( !qword_140C4CCE0 )
      goto LABEL_29;
    while ( 1 )
    {
      v25 = BugCheckParameter4[4];
      if ( v22 + *((_QWORD *)v20 + 5) <= v25 )
      {
        v26 = (_QWORD *)*BugCheckParameter4;
        if ( !*BugCheckParameter4 )
          goto LABEL_30;
        goto LABEL_27;
      }
      if ( v22 < BugCheckParameter4[5] + v25 )
        break;
      v26 = (_QWORD *)BugCheckParameter4[1];
      if ( !v26 )
      {
        v21 = 1;
        goto LABEL_30;
      }
LABEL_27:
      BugCheckParameter4 = v26;
    }
    v23 = 1;
LABEL_29:
    if ( v23 )
      KeBugCheckEx(0x1Au, 0x13003uLL, *((_QWORD *)v20 + 4), *((_QWORD *)v20 + 5), (ULONG_PTR)BugCheckParameter4);
LABEL_30:
    RtlAvlInsertNodeEx(&qword_140C4CCE0, (unsigned __int64)BugCheckParameter4, v21, v20);
    v8 += *((_QWORD *)v20 + 5);
    ++v19;
    v20 += 12;
  }
  while ( v19 < *v17 );
LABEL_31:
  MiUnlockImageExtentsExclusive();
  *a4 = v17;
  ExFreePoolWithTag(v12, 0);
  if ( a3 )
    ExFreePoolWithTag(a3, 0);
  return 0LL;
}
