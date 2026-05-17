/*
 * XREFs of RtlpWakeConditionVariable @ 0x18004F0D4
 * Callers:
 *     RtlWakeConditionVariable @ 0x18004F0A0 (RtlWakeConditionVariable.c)
 *     RtlpWakeSingle @ 0x1800656C0 (RtlpWakeSingle.c)
 *     RtlpOptimizeConditionVariableWaitList @ 0x1800658F8 (RtlpOptimizeConditionVariableWaitList.c)
 * Callees:
 *     RtlpQueueWaitBlockToSRWLock @ 0x18004F1F8 (RtlpQueueWaitBlockToSRWLock.c)
 *     ZwAlertThreadByThreadId @ 0x18009E430 (ZwAlertThreadByThreadId.c)
 */

unsigned __int64 __fastcall RtlpWakeConditionVariable(volatile signed __int64 *a1, unsigned __int64 a2, int a3)
{
  unsigned __int64 *v3; // rbx
  unsigned __int64 result; // rax
  char v5; // r9
  unsigned __int64 v6; // rdx
  bool v8; // zf
  unsigned int v10; // edi
  _QWORD *v11; // r10
  unsigned int v12; // r8d
  unsigned __int64 *v13; // rcx
  unsigned __int64 *v14; // r9
  unsigned __int64 v15; // rtt
  volatile signed __int32 *v16; // rbx
  volatile signed __int32 *v17; // rdi
  __int64 v18; // rdx
  unsigned __int64 v19; // rtt
  _QWORD *v20; // rcx
  volatile signed __int32 *v21; // [rsp+48h] [rbp+10h] BYREF

  v3 = (unsigned __int64 *)&v21;
  result = a2;
  v21 = 0LL;
  v5 = a2;
  v6 = a2 & 0xFFFFFFFFFFFFFFF0uLL;
  v8 = (v5 & 7) == 7;
  v10 = 0;
  while ( 1 )
  {
    v11 = (_QWORD *)v6;
    if ( v8 )
      break;
    v12 = a3 + (result & 7);
    if ( !*(_QWORD *)(v6 + 8) )
    {
      do
      {
        v20 = v11;
        v11 = (_QWORD *)*v11;
        v11[2] = v20;
      }
      while ( !v11[1] );
    }
    v13 = (unsigned __int64 *)v11[1];
    if ( v12 <= v10 )
      goto LABEL_18;
    do
    {
      v14 = (unsigned __int64 *)v13[2];
      if ( !v14 )
        break;
      *v3 = (unsigned __int64)v13;
      ++v10;
      *v13 = 0LL;
      v3 = v13;
      *(_QWORD *)(v6 + 8) = v14;
      v13 = v14;
      *v14 = 0LL;
    }
    while ( v12 > v10 );
    if ( v12 <= v10 )
    {
LABEL_18:
      v19 = result;
      result = _InterlockedCompareExchange64(a1, v6, result);
      if ( v19 == result )
        goto LABEL_9;
    }
    else
    {
      v15 = result;
      result = _InterlockedCompareExchange64(a1, 0LL, result);
      if ( v15 == result )
      {
        *v3 = (unsigned __int64)v13;
        *v13 = 0LL;
        goto LABEL_9;
      }
    }
    v6 = result & 0xFFFFFFFFFFFFFFF0uLL;
    v8 = (result & 7) == 7;
  }
  result = _InterlockedExchange64(a1, 0LL) & 0xFFFFFFFFFFFFFFF0uLL;
  *v3 = result;
LABEL_9:
  v16 = v21;
  if ( v21 )
  {
    do
    {
      v17 = *(volatile signed __int32 **)v16;
      if ( !_interlockedbittestandreset(v16 + 9, 1u) )
      {
        v18 = *((_QWORD *)v21 + 5);
        if ( !v18 || (result = RtlpQueueWaitBlockToSRWLock(), !(_BYTE)result) )
        {
          _InterlockedOr(v16 + 9, 4u);
          result = ZwAlertThreadByThreadId(*((_QWORD *)v21 + 3), v18);
        }
      }
      v16 = v17;
      v21 = v17;
    }
    while ( v17 );
  }
  return result;
}
