/*
 * XREFs of PopFxRequestWorker @ 0x1403122C0
 * Callers:
 *     PopPepRequestWork @ 0x14023C234 (PopPepRequestWork.c)
 * Callees:
 *     ExTryQueueWorkItem @ 0x14022A0E0 (ExTryQueueWorkItem.c)
 *     KeReleaseSemaphoreEx @ 0x140330D70 (KeReleaseSemaphoreEx.c)
 */

char __fastcall PopFxRequestWorker(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  volatile signed __int32 *v4; // rbx
  signed __int32 v6; // eax
  __int64 v7; // rdx
  int v8; // edi

  v4 = (volatile signed __int32 *)&PopFxSystemWorkPool;
  if ( a1 )
    v4 = (volatile signed __int32 *)(a1 + 120);
  LOBYTE(v6) = KeReleaseSemaphoreEx((int)v4 + 64, 0, 1, a4, 0);
  if ( !a1 || (*(_BYTE *)(a1 + 24) & 1) != 0 )
  {
    v7 = 0LL;
    while ( 1 )
    {
      v8 = 1 << v7;
      _m_prefetchw((const void *)(v4 + 24));
      v6 = _InterlockedOr(v4 + 24, 1 << v7);
      if ( (v6 & (1 << v7)) == 0 )
        break;
      v7 = (unsigned int)(v7 + 1);
      if ( (unsigned int)v7 >= 4 )
        return v6;
    }
    LOBYTE(v6) = ExTryQueueWorkItem(&v4[8 * v7 + 28 + 2 * (unsigned int)v7], 0x30u);
    if ( !(_BYTE)v6 )
      _InterlockedAnd(v4 + 24, ~v8);
  }
  return v6;
}
