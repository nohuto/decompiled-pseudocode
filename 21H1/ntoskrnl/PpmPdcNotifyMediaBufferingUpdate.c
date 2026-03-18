/*
 * XREFs of PpmPdcNotifyMediaBufferingUpdate @ 0x1408F1724
 * Callers:
 *     PpmMediaBufferingWorker @ 0x140369670 (PpmMediaBufferingWorker.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1403FE9E0 (_guard_dispatch_icall.c)
 */

__int64 (*PpmPdcNotifyMediaBufferingUpdate())(void)
{
  __int64 (*result)(void); // rax

  result = qword_140C542F8;
  if ( qword_140C542F8 )
    return (__int64 (*)(void))qword_140C542F8();
  return result;
}
