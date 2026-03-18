/*
 * XREFs of EtwpCancelPendingStackwalkApcs @ 0x140360568
 * Callers:
 *     EtwpFreeLoggerContext @ 0x140712770 (EtwpFreeLoggerContext.c)
 * Callees:
 *     ExReleaseRundownProtectionCacheAwareEx @ 0x140202D10 (ExReleaseRundownProtectionCacheAwareEx.c)
 *     KeRemoveQueueApc @ 0x1403240DC (KeRemoveQueueApc.c)
 *     KeRemoveQueueDpcEx @ 0x1403605E0 (KeRemoveQueueDpcEx.c)
 *     EtwpFinalizePendingApc @ 0x1405A517C (EtwpFinalizePendingApc.c)
 */

void __fastcall EtwpCancelPendingStackwalkApcs(unsigned int *a1, __int64 a2, __int64 a3, _DWORD *a4)
{
  __int64 i; // rdi
  _BYTE *v6; // rcx

  for ( i = 0LL; (unsigned int)i < a1[238]; i = (unsigned int)(i + 1) )
  {
    v6 = (_BYTE *)(96 * i + *((_QWORD *)a1 + 118));
    if ( *v6 == 18 && KeRemoveQueueApc((__int64)v6, a2, a3, a4) )
      EtwpFinalizePendingApc(a1, 96 * i + *((_QWORD *)a1 + 118));
  }
  if ( (unsigned __int8)KeRemoveQueueDpcEx(a1 + 216, 0LL) )
  {
    ExReleaseRundownProtectionCacheAwareEx(
      *(PEX_RUNDOWN_REF_CACHE_AWARE *)(*(_QWORD *)(*((_QWORD *)a1 + 135) + 448LL) + 8LL * *a1),
      1u);
    _interlockedbittestandreset((volatile signed __int32 *)a1 + 239, 1u);
  }
}
