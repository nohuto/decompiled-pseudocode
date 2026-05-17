/*
 * XREFs of RtlpGetCriticalSectionContentionCount @ 0x1800E9268
 * Callers:
 *     RtlpWaitOnCriticalSection @ 0x180063480 (RtlpWaitOnCriticalSection.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlpGetCriticalSectionContentionCount(__int64 a1)
{
  if ( *(_QWORD *)a1 == -1LL )
    return 0LL;
  else
    return *(unsigned int *)(*(_QWORD *)a1 + 36LL);
}
