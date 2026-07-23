/*
 * XREFs of EtwpCancelPendingStackwalkApcs @ 0x1402467E8
 * Callers:
 *     EtwpFreeLoggerContext @ 0x1406146D4 (EtwpFreeLoggerContext.c)
 * Callees:
 *     KeRemoveQueueApc @ 0x1402432CC (KeRemoveQueueApc.c)
 *     KeRemoveQueueDpcEx @ 0x140246860 (KeRemoveQueueDpcEx.c)
 *     ExReleaseRundownProtectionCacheAwareEx @ 0x1402A5670 (ExReleaseRundownProtectionCacheAwareEx.c)
 *     EtwpFinalizePendingApc @ 0x1405A6DDC (EtwpFinalizePendingApc.c)
 */

void __fastcall EtwpCancelPendingStackwalkApcs(unsigned int *a1)
{
  __int64 i; // rdi
  _BYTE *v3; // rcx

  for ( i = 0LL; (unsigned int)i < a1[238]; i = (unsigned int)(i + 1) )
  {
    v3 = (_BYTE *)(96 * i + *((_QWORD *)a1 + 118));
    if ( *v3 == 18 && KeRemoveQueueApc((__int64)v3) )
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
