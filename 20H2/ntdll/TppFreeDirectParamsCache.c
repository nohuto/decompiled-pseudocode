/*
 * XREFs of TppFreeDirectParamsCache @ 0x18005472C
 * Callers:
 *     TppWorkerThread @ 0x180052B20 (TppWorkerThread.c)
 * Callees:
 *     RtlFreeHeap @ 0x180024760 (RtlFreeHeap.c)
 */

LOGICAL __fastcall TppFreeDirectParamsCache(__int64 a1)
{
  __int64 v1; // r8
  LOGICAL result; // eax

  v1 = *(_QWORD *)(a1 + 336);
  if ( v1 )
  {
    result = _InterlockedExchangeAdd((volatile signed __int32 *)(v1 + 8), 0xFFFFFFFF);
    if ( result == 1 )
      return RtlFreeHeap(NtCurrentPeb()->ProcessHeap, TppHeapTag + 3145728, *(PVOID *)v1);
  }
  return result;
}
