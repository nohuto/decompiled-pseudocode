/*
 * XREFs of CmpSystemHiveHysteresisWorker @ 0x140868270
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1403FFC70 (_guard_dispatch_icall.c)
 *     ExFreePoolWithTag @ 0x1409B1140 (ExFreePoolWithTag.c)
 */

__int64 (__fastcall *__fastcall CmpSystemHiveHysteresisWorker(void *a1))(_QWORD, _QWORD)
{
  __int64 (__fastcall *result)(_QWORD, _QWORD); // rax

  ExFreePoolWithTag(a1, 0);
  result = CmpSystemHiveHysteresisCallback;
  if ( CmpSystemHiveHysteresisCallback )
    return (__int64 (__fastcall *)(_QWORD, _QWORD))CmpSystemHiveHysteresisCallback(
                                                     CmpSystemHiveHysteresisContext,
                                                     (unsigned int)CmpSystemHiveHysteresisHitRatio);
  return result;
}
