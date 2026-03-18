/*
 * XREFs of FsRtlCheckNotifyForDeleteLite @ 0x14092FF10
 * Callers:
 *     FsRtlNotifyFilterChangeDirectoryLite @ 0x1406ABE00 (FsRtlNotifyFilterChangeDirectoryLite.c)
 * Callees:
 *     FsRtlNotifyCompleteIrpList @ 0x1406ABBF4 (FsRtlNotifyCompleteIrpList.c)
 */

_QWORD *__fastcall FsRtlCheckNotifyForDeleteLite(_QWORD **a1)
{
  _QWORD *i; // rbx
  _QWORD *result; // rax

  for ( i = *a1; i != a1; i = (_QWORD *)*i )
  {
    *((_WORD *)i + 20) |= 0x20u;
    result = i + 2;
    if ( (_QWORD *)*result != result )
      result = FsRtlNotifyCompleteIrpList((__int64)(i - 4), -1073741738);
  }
  return result;
}
