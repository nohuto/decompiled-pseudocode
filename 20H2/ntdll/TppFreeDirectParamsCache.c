/*
 * XREFs of TppFreeDirectParamsCache @ 0x18005472C
 * Callers:
 *     TppWorkerThread @ 0x180052B20 (TppWorkerThread.c)
 * Callees:
 *     RtlFreeHeap @ 0x180024760 (RtlFreeHeap.c)
 */

__int64 __fastcall TppFreeDirectParamsCache(__int64 a1)
{
  __int64 v1; // r8
  __int64 result; // rax

  v1 = *(_QWORD *)(a1 + 336);
  if ( v1 )
  {
    result = (unsigned int)_InterlockedExchangeAdd((volatile signed __int32 *)(v1 + 8), 0xFFFFFFFF);
    if ( (_DWORD)result == 1 )
      return RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, TppHeapTag + 3145728, *(_QWORD *)v1);
  }
  return result;
}
