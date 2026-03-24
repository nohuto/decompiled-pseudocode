/*
 * XREFs of CmpSystemHiveHysteresisWorker @ 0x14086B8C0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1404085B0 (_guard_dispatch_icall.c)
 *     ExFreePoolWithTag @ 0x1409B4010 (ExFreePoolWithTag.c)
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
