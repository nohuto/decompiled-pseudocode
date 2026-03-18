/*
 * XREFs of RtlpCSparseBitmapWaitOnAddress @ 0x140593DD8
 * Callers:
 *     RtlpCSparseBitmapPageDecommit @ 0x140306C70 (RtlpCSparseBitmapPageDecommit.c)
 *     RtlpCSparseBitmapPageCommit @ 0x140307CC4 (RtlpCSparseBitmapPageCommit.c)
 * Callees:
 *     ExBlockOnAddressPushLock @ 0x1402F3810 (ExBlockOnAddressPushLock.c)
 */

__int64 __fastcall RtlpCSparseBitmapWaitOnAddress(_QWORD *a1, _QWORD *a2, __int64 a3, __int64 a4)
{
  if ( !*(_BYTE *)(a4 + 48) )
    return ExBlockOnAddressPushLock(a4 + 40, a1, a2, 8uLL, 0LL);
  while ( a1 == (_QWORD *)*a2 )
    _mm_pause();
  return 0LL;
}
