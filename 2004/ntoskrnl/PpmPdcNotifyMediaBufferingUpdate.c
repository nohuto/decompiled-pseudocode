/*
 * XREFs of PpmPdcNotifyMediaBufferingUpdate @ 0x1408F2A14
 * Callers:
 *     PpmMediaBufferingWorker @ 0x14036A030 (PpmMediaBufferingWorker.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1403FFC70 (_guard_dispatch_icall.c)
 */

__int64 (*PpmPdcNotifyMediaBufferingUpdate())(void)
{
  __int64 (*result)(void); // rax

  result = qword_140C541F8;
  if ( qword_140C541F8 )
    return (__int64 (*)(void))qword_140C541F8();
  return result;
}
