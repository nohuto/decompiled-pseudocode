/*
 * XREFs of TppWorkerFindTask @ 0x180054024
 * Callers:
 *     TppWorkerThread @ 0x180052AD0 (TppWorkerThread.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180012C70 (RtlReleaseSRWLockExclusive.c)
 *     RtlpWakeSRWLock @ 0x180015200 (RtlpWakeSRWLock.c)
 *     RtlAcquireSRWLockExclusive @ 0x1800290A0 (RtlAcquireSRWLockExclusive.c)
 *     TppWorkerSwitchNode @ 0x1800542C4 (TppWorkerSwitchNode.c)
 *     TppQueueRemoveHead @ 0x18008A36C (TppQueueRemoveHead.c)
 *     TppAreNodeWorkersSteadyState @ 0x18008A3D0 (TppAreNodeWorkersSteadyState.c)
 *     TppAdjustRunningThreadGoalWithLock @ 0x180111C00 (TppAdjustRunningThreadGoalWithLock.c)
 */

__int64 __fastcall TppWorkerFindTask(__int64 a1, __int64 a2, _QWORD *a3)
{
  int v3; // edi
  unsigned __int64 Number; // r15
  unsigned int v7; // r9d
  unsigned int v8; // ebp
  unsigned __int16 Group; // r14
  int v10; // eax
  unsigned int v11; // edx
  __int64 v12; // r8
  __int64 v13; // rax
  unsigned int v14; // r14d
  unsigned int v15; // ebp
  __int64 v16; // rdx
  _QWORD *v17; // rcx
  _RTL_SRWLOCK *v18; // r15
  volatile signed __int64 *v19; // r12
  __int64 Value; // rbx
  unsigned __int64 v21; // rax
  signed __int64 v22; // rax
  unsigned int v23; // eax
  _QWORD *v25; // rax
  __int64 v26; // r15
  _QWORD *v27; // r12
  signed __int64 v28; // rcx
  __int64 v29; // rdx
  signed __int64 v30; // rdx
  signed __int64 v31; // rtt
  __int64 v32; // [rsp+70h] [rbp+8h]
  __int64 v34; // [rsp+88h] [rbp+20h]

  v3 = 0;
  Number = NtCurrentTeb()->CurrentIdealProcessor.Number;
  v7 = TppNumberNodes;
  v8 = TppNumberNodes;
  Group = NtCurrentTeb()->CurrentIdealProcessor.Group;
  if ( !a1 || (v10 = *(_DWORD *)(a1 + 440), v7 = TppNumberNodes, !v10) )
    v10 = MEMORY[0x7FFE03C0];
  if ( *(_DWORD *)(a1 + 424) != v10 )
  {
    RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)(a1 + 72));
    TppAdjustRunningThreadGoalWithLock(a1);
    RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)(a1 + 72));
    v7 = TppNumberNodes;
  }
  v11 = 0;
  if ( v7 )
  {
    v12 = *(_QWORD *)(a1 + 48);
    while ( 1 )
    {
      if ( *(_WORD *)(v12 + 16LL * v11 + 8) == Group )
      {
        v13 = *(_QWORD *)(v12 + 16LL * v11);
        if ( _bittest64(&v13, Number) )
          break;
      }
      if ( ++v11 >= v7 )
        goto LABEL_10;
    }
    v8 = v11;
  }
LABEL_10:
  v14 = v8 < v7 ? v8 : 0;
  TppWorkerSwitchNode(a1, a2, v14, (unsigned int)Number);
  v15 = v14;
  if ( *(_DWORD *)(a1 + 428) != -1 || *(_DWORD *)(a2 + 348) < 0x10u || (unsigned int)TppAreNodeWorkersSteadyState(a1) )
  {
    v16 = 3LL * v14;
    v32 = 0LL;
    v17 = (_QWORD *)(a1 + 16);
    v34 = a1 + 16;
    while ( 1 )
    {
      v18 = (_RTL_SRWLOCK *)(*v17 + 8 * v16);
      v19 = (volatile signed __int64 *)&v18[2];
      RtlAcquireSRWLockExclusive(v18 + 2);
      Value = v18->Value;
      if ( *(_RTL_SRWLOCK **)(v18->Value + 8) != v18
        || (v21 = *(_QWORD *)Value, *(_QWORD *)(*(_QWORD *)Value + 8LL) != Value) )
      {
        __fastfail(3u);
      }
      v18->Value = v21;
      *(_QWORD *)(v21 + 8) = v18;
      v22 = _InterlockedCompareExchange64(v19, 0LL, 1LL);
      if ( v22 != 1 )
      {
        do
        {
          v28 = v22 & 6;
          v29 = 3LL;
          if ( v28 != 2 )
            v29 = -1LL;
          v30 = v22 + v29;
          v31 = v22;
          v22 = _InterlockedCompareExchange64(v19, v30, v22);
        }
        while ( v31 != v22 );
        if ( v28 == 2 )
          RtlpWakeSRWLock((volatile signed __int64 *)&v18[2], v30, 0);
      }
      if ( (_RTL_SRWLOCK *)Value == v18 )
        Value = 0LL;
      if ( Value )
        break;
      v16 = 3LL * v14;
      v17 = (_QWORD *)(v34 + 8);
      ++v32;
      v34 += 8LL;
      if ( v32 > 2 )
        goto LABEL_30;
    }
  }
  else
  {
LABEL_30:
    if ( *(_BYTE *)(a1 + 377) )
      return 0LL;
    v25 = (_QWORD *)(a1 + 16);
LABEL_32:
    v26 = 0LL;
    v27 = v25;
    while ( 1 )
    {
      Value = TppQueueRemoveHead(*v27 + 24LL * v15, v16);
      if ( Value )
        break;
      v15 = v15 + 1 < TppNumberNodes ? v15 + 1 : 0;
      if ( v15 == v14 )
      {
        ++v26;
        ++v27;
        if ( v26 > 2 )
        {
          v25 = (_QWORD *)(a1 + 16);
          if ( !*(_BYTE *)(a1 + 377) )
            goto LABEL_32;
          return 0LL;
        }
      }
    }
  }
  *a3 = Value - 16;
  TppWorkerSwitchNode(a1, a2, v15, *(unsigned __int8 *)(Value - 16 + 12));
  if ( v15 == v14 )
  {
    v23 = *(_DWORD *)(a2 + 348);
    v3 = v23 + 1;
    if ( v23 >= 0x10 )
      v3 = 16;
  }
  *(_DWORD *)(a2 + 348) = v3;
  return 1LL;
}
