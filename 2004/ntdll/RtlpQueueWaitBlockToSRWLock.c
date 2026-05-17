/*
 * XREFs of RtlpQueueWaitBlockToSRWLock @ 0x180054BB8
 * Callers:
 *     RtlpWakeConditionVariable @ 0x180054A94 (RtlpWakeConditionVariable.c)
 * Callees:
 *     RtlBackoff @ 0x18005CD68 (RtlBackoff.c)
 *     RtlpOptimizeSRWLockList @ 0x180079ABC (RtlpOptimizeSRWLockList.c)
 */

bool __fastcall RtlpQueueWaitBlockToSRWLock(__int64 a1, unsigned __int64 *a2)
{
  _BOOL8 v2; // r9
  unsigned __int64 v3; // rax
  char v4; // bl
  volatile signed __int64 *v5; // r11
  __int64 v6; // r10
  bool v8; // r8
  __int64 v9; // rdx
  signed __int64 v10; // rdx
  int v11; // [rsp+30h] [rbp+8h] BYREF

  v2 = 0LL;
  v3 = *a2;
  v4 = *(_DWORD *)(a1 + 36) & 1;
  v11 = 0;
  v5 = (volatile signed __int64 *)a2;
  v6 = a1;
  while ( (v3 & 1) != 0 && (v4 || (v3 & 2) != 0 || (v3 & 0xFFFFFFFFFFFFFFF0uLL) == 0) )
  {
    *(_QWORD *)(v6 + 16) = v2;
    v8 = v2;
    if ( (v3 & 2) != 0 )
    {
      *(_DWORD *)(v6 + 32) = -1;
      *(_QWORD *)(v6 + 8) = v2;
      *(_QWORD *)v6 = v3 & 0xFFFFFFFFFFFFFFF0uLL;
      v10 = v6 | v3 & 8 | 7;
      v8 = (v3 & 4) == 0;
    }
    else
    {
      v9 = 11LL;
      *(_QWORD *)(v6 + 8) = v6;
      *(_DWORD *)(v6 + 32) = v3 >> 4;
      if ( (int)(v3 >> 4) <= 1 )
        v9 = 3LL;
      v10 = v6 | v9;
      if ( !(unsigned int)(v3 >> 4) )
        *(_DWORD *)(v6 + 32) = -2;
    }
    if ( v3 == _InterlockedCompareExchange64(v5, v10, v3) )
    {
      if ( v8 )
        RtlpOptimizeSRWLockList(v5);
      LOBYTE(v2) = 1;
      return v2;
    }
    RtlBackoff(&v11);
    _m_prefetchw((const void *)v5);
    v3 = *v5;
  }
  return v2;
}
