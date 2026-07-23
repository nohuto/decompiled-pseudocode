/*
 * XREFs of RtlpWakeConditionVariable @ 0x180054A94
 * Callers:
 *     RtlWakeConditionVariable @ 0x180054A60 (RtlWakeConditionVariable.c)
 *     RtlpWakeSingle @ 0x1800640C0 (RtlpWakeSingle.c)
 *     RtlpOptimizeConditionVariableWaitList @ 0x1800642F8 (RtlpOptimizeConditionVariableWaitList.c)
 * Callees:
 *     RtlpQueueWaitBlockToSRWLock @ 0x180054BB8 (RtlpQueueWaitBlockToSRWLock.c)
 *     ZwAlertThreadByThreadId @ 0x18009DC00 (ZwAlertThreadByThreadId.c)
 */

int __fastcall RtlpWakeConditionVariable(volatile signed __int64 *a1, unsigned __int64 a2, int a3)
{
  unsigned __int64 *v3; // rbx
  unsigned __int64 v4; // rax
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
  unsigned __int64 v18; // rtt
  _QWORD *v19; // rcx
  volatile signed __int32 *v21; // [rsp+48h] [rbp+10h] BYREF

  v3 = (unsigned __int64 *)&v21;
  v4 = a2;
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
    v12 = a3 + (v4 & 7);
    if ( !*(_QWORD *)(v6 + 8) )
    {
      do
      {
        v19 = v11;
        v11 = (_QWORD *)*v11;
        v11[2] = v19;
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
      v18 = v4;
      v4 = _InterlockedCompareExchange64(a1, v6, v4);
      if ( v18 == v4 )
        goto LABEL_9;
    }
    else
    {
      v15 = v4;
      v4 = _InterlockedCompareExchange64(a1, 0LL, v4);
      if ( v15 == v4 )
      {
        *v3 = (unsigned __int64)v13;
        *v13 = 0LL;
        goto LABEL_9;
      }
    }
    v6 = v4 & 0xFFFFFFFFFFFFFFF0uLL;
    v8 = (v4 & 7) == 7;
  }
  v4 = _InterlockedExchange64(a1, 0LL) & 0xFFFFFFFFFFFFFFF0uLL;
  *v3 = v4;
LABEL_9:
  v16 = v21;
  if ( v21 )
  {
    do
    {
      v17 = *(volatile signed __int32 **)v16;
      if ( !_interlockedbittestandreset(v16 + 9, 1u) )
      {
        if ( !*((_QWORD *)v21 + 5) || (LODWORD(v4) = RtlpQueueWaitBlockToSRWLock(), !(_BYTE)v4) )
        {
          _InterlockedOr(v16 + 9, 4u);
          LODWORD(v4) = ZwAlertThreadByThreadId(*((HANDLE *)v21 + 3));
        }
      }
      v16 = v17;
      v21 = v17;
    }
    while ( v17 );
  }
  return v4;
}
