/*
 * XREFs of PpmPdcNotifyMediaBufferingUpdate @ 0x1408F8624
 * Callers:
 *     PpmMediaBufferingWorker @ 0x14036C010 (PpmMediaBufferingWorker.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140405F40 (_guard_dispatch_icall.c)
 */

__int64 (*PpmPdcNotifyMediaBufferingUpdate())(void)
{
  __int64 (*result)(void); // rax

  result = qword_140C54278;
  if ( qword_140C54278 )
    return (__int64 (*)(void))qword_140C54278();
  return result;
}
