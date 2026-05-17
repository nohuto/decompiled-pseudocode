/*
 * XREFs of LdrpQueueWork @ 0x18000F420
 * Callers:
 *     LdrpSignalModuleMapped @ 0x18001088C (LdrpSignalModuleMapped.c)
 *     LdrpMapAndSnapDependency @ 0x180017990 (LdrpMapAndSnapDependency.c)
 *     LdrpLoadDependentModule @ 0x180017BE0 (LdrpLoadDependentModule.c)
 *     LdrpLoadContextReplaceModule @ 0x1800601EC (LdrpLoadContextReplaceModule.c)
 * Callees:
 *     TpPostWork @ 0x1800128C0 (TpPostWork.c)
 *     RtlLeaveCriticalSection @ 0x18002F230 (RtlLeaveCriticalSection.c)
 *     RtlEnterCriticalSection @ 0x18002FAA0 (RtlEnterCriticalSection.c)
 */

struct _PEB *__fastcall LdrpQueueWork(__int64 a1)
{
  struct _PEB *result; // rax
  _QWORD *v3; // rcx
  _QWORD *v4; // rax

  result = *(struct _PEB **)(a1 + 40);
  if ( *(int *)&result->InheritedAddressSpace >= 0 )
  {
    RtlEnterCriticalSection(&LdrpWorkQueueLock);
    v3 = (_QWORD *)qword_18016A3F8;
    v4 = (_QWORD *)(a1 + 64);
    if ( *(__int64 **)qword_18016A3F8 != &LdrpWorkQueue )
      __fastfail(3u);
    *(_QWORD *)(a1 + 72) = qword_18016A3F8;
    *v4 = &LdrpWorkQueue;
    *v3 = v4;
    qword_18016A3F8 = a1 + 64;
    result = (struct _PEB *)RtlLeaveCriticalSection(&LdrpWorkQueueLock);
    if ( LdrpMapAndSnapWork )
    {
      result = NtCurrentPeb();
      if ( !result->Ldr->ShutdownInProgress )
        return (struct _PEB *)TpPostWork(LdrpMapAndSnapWork);
    }
  }
  return result;
}
