/*
 * XREFs of FsRtlFindFirstOverlappingExclusiveNode @ 0x14022C01C
 * Callers:
 *     FsRtlPrivateCheckForExclusiveLockAccess @ 0x14022BEB4 (FsRtlPrivateCheckForExclusiveLockAccess.c)
 *     FsRtlPrivateInsertExclusiveLock @ 0x14022BF94 (FsRtlPrivateInsertExclusiveLock.c)
 *     FsRtlFastUnlockSingleExclusive @ 0x140363A3C (FsRtlFastUnlockSingleExclusive.c)
 *     FsRtlPrivateCheckForSharedLockAccess @ 0x1403643BC (FsRtlPrivateCheckForSharedLockAccess.c)
 *     FsRtlCheckNoExclusiveConflict @ 0x14036BE48 (FsRtlCheckNoExclusiveConflict.c)
 *     FsRtlGetNextFileLock @ 0x1404EF980 (FsRtlGetNextFileLock.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall FsRtlFindFirstOverlappingExclusiveNode(
        _QWORD *a1,
        unsigned __int64 *a2,
        unsigned __int64 *a3,
        _QWORD *a4,
        _BYTE *a5)
{
  _QWORD *v5; // rbx
  _QWORD *v8; // r8
  unsigned __int64 v9; // r11
  unsigned __int64 v10; // rdx
  unsigned __int64 v11; // r10

  v5 = 0LL;
  if ( a4 )
    *a4 = 0LL;
  if ( a5 )
    *a5 = 0;
  v8 = 0LL;
  while ( a1 )
  {
    v9 = a1[8];
    v5 = a1;
    v10 = *a2;
    if ( v9 >= *a2 && ((v11 = a1[3]) != 0 || a1[4]) )
    {
      if ( v11 <= *a3 && (*a3 != -1LL || v10) )
      {
        if ( v11 <= v10 )
          break;
        v8 = a1;
      }
      if ( a4 )
        *a4 = a1;
      if ( a5 )
        *a5 = 1;
LABEL_25:
      a1 = (_QWORD *)a1[1];
    }
    else
    {
      if ( v9 == *a3 && a1[3] == v10 )
      {
        v8 = a1;
        if ( a4 )
          *a4 = a1;
        if ( a5 )
          *a5 = 0;
        goto LABEL_25;
      }
      if ( a4 )
        *a4 = a1;
      if ( a5 )
        *a5 = 0;
      a1 = (_QWORD *)a1[2];
    }
  }
  if ( a1 )
    return v5;
  return v8;
}
