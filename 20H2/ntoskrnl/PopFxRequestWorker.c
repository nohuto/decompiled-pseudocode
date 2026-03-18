/*
 * XREFs of PopFxRequestWorker @ 0x140320720
 * Callers:
 *     PopPepRequestWork @ 0x1402D4E6C (PopPepRequestWork.c)
 * Callees:
 *     ExTryQueueWorkItem @ 0x1402D4690 (ExTryQueueWorkItem.c)
 *     KeReleaseSemaphoreEx @ 0x1402DCAE0 (KeReleaseSemaphoreEx.c)
 */

__int64 __fastcall PopFxRequestWorker(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  volatile signed __int32 *v4; // rbx
  __int64 result; // rax
  __int64 v7; // rdx
  int v8; // edi

  v4 = (volatile signed __int32 *)&PopFxSystemWorkPool;
  if ( a1 )
    v4 = (volatile signed __int32 *)(a1 + 120);
  result = KeReleaseSemaphoreEx((__int64)(v4 + 16), 0, 1, a4, 0);
  if ( !a1 || (*(_BYTE *)(a1 + 24) & 1) != 0 )
  {
    v7 = 0LL;
    while ( 1 )
    {
      v8 = 1 << v7;
      _m_prefetchw((const void *)(v4 + 24));
      result = (unsigned int)_InterlockedOr(v4 + 24, 1 << v7);
      if ( ((unsigned int)result & (1 << v7)) == 0 )
        break;
      v7 = (unsigned int)(v7 + 1);
      if ( (unsigned int)v7 >= 4 )
        return result;
    }
    result = ExTryQueueWorkItem((__int64)&v4[8 * v7 + 28 + 2 * (unsigned int)v7], 0x30u);
    if ( !(_BYTE)result )
      _InterlockedAnd(v4 + 24, ~v8);
  }
  return result;
}
