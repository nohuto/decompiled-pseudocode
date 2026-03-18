/*
 * XREFs of FsRtlIsNotifyOnList @ 0x1406C0EA4
 * Callers:
 *     FsRtlNotifyFilterChangeDirectory @ 0x1406C0000 (FsRtlNotifyFilterChangeDirectory.c)
 *     FsRtlNotifyCleanup @ 0x1406C0AF0 (FsRtlNotifyCleanup.c)
 *     FsRtlNotifyFilterChangeDirectoryLite @ 0x1406C0B80 (FsRtlNotifyFilterChangeDirectoryLite.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall FsRtlIsNotifyOnList(_QWORD **a1, __int64 a2)
{
  _QWORD *v2; // rax
  __int64 v3; // r8

  v2 = *a1;
  v3 = 0LL;
  while ( v2 != a1 )
  {
    if ( *(v2 - 3) == a2 )
      return v2 - 4;
    v2 = (_QWORD *)*v2;
  }
  return (_QWORD *)v3;
}
