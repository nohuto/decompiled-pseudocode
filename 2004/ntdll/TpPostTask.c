/*
 * XREFs of TpPostTask @ 0x180012A98
 * Callers:
 *     RtlQueueWorkItem @ 0x18000B780 (RtlQueueWorkItem.c)
 *     TppWorkPost @ 0x1800129B8 (TppWorkPost.c)
 *     TppWorkCallbackPrologRelease @ 0x18001FEF8 (TppWorkCallbackPrologRelease.c)
 *     TppDirectExecuteCallback @ 0x180078850 (TppDirectExecuteCallback.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180012C70 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x1800290A0 (RtlAcquireSRWLockExclusive.c)
 *     NtReleaseWorkerFactoryWorker @ 0x18009FBE0 (NtReleaseWorkerFactoryWorker.c)
 *     TppAdjustRunningThreadGoalWithLock @ 0x180111C00 (TppAdjustRunningThreadGoalWithLock.c)
 */

signed __int64 __fastcall TpPostTask(__int64 a1, __int64 a2, int a3, __int64 a4)
{
  __int64 v4; // rdi
  __int64 v6; // rcx
  signed __int32 v7; // eax
  __int64 *v8; // rbx
  __int64 v9; // rsi
  __int64 **v10; // rax
  int v11; // eax
  __int64 v12; // r8
  __int64 *ThreadPoolData; // rax
  __int64 v14; // rax
  signed __int64 result; // rax
  __int64 v16; // rdx
  signed __int64 v17; // rtt
  signed __int32 v18; // edx
  signed __int32 v19; // ett
  signed __int64 v20; // [rsp+30h] [rbp+8h]

  v4 = a2;
  if ( !a2 )
  {
    if ( a4 && (*(_BYTE *)(a4 + 56) & 2) != 0 )
    {
      v4 = TppPoolpSerializedPool;
      goto LABEL_35;
    }
    v4 = TppPoolpGlobalPool;
  }
  if ( v4 == TppPoolpSerializedPool )
LABEL_35:
    a3 = 1;
  v6 = *(unsigned int *)(a1 + 8);
  _m_prefetchw((const void *)(v4 + 428));
  v7 = *(_DWORD *)(v4 + 428);
  while ( v7 == -2 )
  {
    v18 = v6;
LABEL_30:
    v19 = v7;
    v7 = _InterlockedCompareExchange((volatile signed __int32 *)(v4 + 428), v18, v7);
    if ( v19 == v7 )
      goto LABEL_6;
  }
  if ( v7 != (_DWORD)v6 && v7 != -1 )
  {
    v18 = -1;
    goto LABEL_30;
  }
LABEL_6:
  v8 = (__int64 *)(a1 + 16);
  v9 = *(_QWORD *)(v4 + 8LL * a3 + 16) + 24 * v6;
  RtlAcquireSRWLockExclusive(v9 + 16);
  v10 = *(__int64 ***)(v9 + 8);
  if ( *v10 != (__int64 *)v9 )
    __fastfail(3u);
  *v8 = v9;
  v8[1] = (__int64)v10;
  *v10 = v8;
  *(_QWORD *)(v9 + 8) = v8;
  RtlReleaseSRWLockExclusive(v9 + 16);
  if ( !v4 || (v11 = *(_DWORD *)(v4 + 440)) == 0 )
    v11 = MEMORY[0x7FFE03C0];
  if ( *(_DWORD *)(v4 + 424) != v11 )
  {
    RtlAcquireSRWLockExclusive(v4 + 72);
    TppAdjustRunningThreadGoalWithLock(v4);
    RtlReleaseSRWLockExclusive(v4 + 72);
  }
  v12 = 0LL;
  ThreadPoolData = (__int64 *)NtCurrentTeb()->ThreadPoolData;
  if ( ThreadPoolData )
  {
    v14 = *ThreadPoolData;
    if ( *(_QWORD *)(v14 + 48) == v4 && *(_DWORD *)(v14 + 128) == 3 )
    {
      *(_DWORD *)(v14 + 128) = 4;
      v12 = 1LL;
    }
  }
  _m_prefetchw((const void *)(v4 + 8));
  result = *(_QWORD *)(v4 + 8);
  LODWORD(v20) = result;
  do
  {
    if ( (v20 & 0xFFFF0000) != 0 || (_DWORD)v12 )
    {
      v16 = 0LL;
    }
    else
    {
      LODWORD(v20) = (unsigned __int16)v20 | ((v20 & 0xFFFF0000) + 0x10000);
      v16 = 1LL;
    }
    v17 = result;
    HIDWORD(v20) = HIDWORD(result) + 1;
    result = _InterlockedCompareExchange64((volatile signed __int64 *)(v4 + 8), v20, result);
    LODWORD(v20) = result;
  }
  while ( v17 != result );
  if ( (_DWORD)v16 )
    return NtReleaseWorkerFactoryWorker(*(_QWORD *)(v4 + 56), v16, v12, 4294901760LL);
  return result;
}
