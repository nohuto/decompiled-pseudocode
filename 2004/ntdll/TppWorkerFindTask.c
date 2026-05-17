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

__int64 __fastcall TppWorkerFindTask(__int64 a1, unsigned __int64 a2, _QWORD *a3)
{
  int v3; // edi
  unsigned __int64 Number; // r15
  unsigned __int64 v7; // r9
  unsigned int v8; // ebp
  unsigned __int16 Group; // r14
  int v10; // eax
  unsigned int v11; // edx
  __int64 v12; // r8
  __int64 v13; // rax
  unsigned int v14; // r14d
  unsigned __int64 v15; // r8
  unsigned __int64 v16; // r9
  unsigned int v17; // ebp
  unsigned __int64 v18; // rdx
  _QWORD *v19; // rcx
  volatile signed __int64 *v20; // r15
  volatile signed __int64 *v21; // r12
  __int64 v22; // rbx
  volatile signed __int64 v23; // rax
  signed __int64 v24; // rax
  unsigned int v25; // eax
  _QWORD *v27; // rax
  __int64 v28; // r15
  _QWORD *v29; // r12
  signed __int64 v30; // rcx
  __int64 v31; // rdx
  signed __int64 v32; // rdx
  signed __int64 v33; // rtt
  __int64 v34; // [rsp+70h] [rbp+8h]
  __int64 v36; // [rsp+88h] [rbp+20h]

  v3 = 0;
  Number = NtCurrentTeb()->CurrentIdealProcessor.Number;
  v7 = (unsigned int)TppNumberNodes;
  v8 = TppNumberNodes;
  Group = NtCurrentTeb()->CurrentIdealProcessor.Group;
  if ( !a1 || (v10 = *(_DWORD *)(a1 + 440), v7 = (unsigned int)TppNumberNodes, !v10) )
    v10 = MEMORY[0x7FFE03C0];
  if ( *(_DWORD *)(a1 + 424) != v10 )
  {
    RtlAcquireSRWLockExclusive(a1 + 72, a2, (unsigned __int64)a3, v7);
    TppAdjustRunningThreadGoalWithLock(a1);
    RtlReleaseSRWLockExclusive((volatile signed __int64 *)(a1 + 72));
    LODWORD(v7) = TppNumberNodes;
  }
  v11 = 0;
  if ( (_DWORD)v7 )
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
      if ( ++v11 >= (unsigned int)v7 )
        goto LABEL_10;
    }
    v8 = v11;
  }
LABEL_10:
  v14 = v8 < (unsigned int)v7 ? v8 : 0;
  TppWorkerSwitchNode(a1, a2, v14, (unsigned int)Number);
  v17 = v14;
  if ( *(_DWORD *)(a1 + 428) != -1 || *(_DWORD *)(a2 + 348) < 0x10u || (unsigned int)TppAreNodeWorkersSteadyState(a1) )
  {
    v18 = 3LL * v14;
    v34 = 0LL;
    v19 = (_QWORD *)(a1 + 16);
    v36 = a1 + 16;
    while ( 1 )
    {
      v20 = (volatile signed __int64 *)(*v19 + 8 * v18);
      v21 = v20 + 2;
      RtlAcquireSRWLockExclusive((unsigned __int64)(v20 + 2), v18, v15, v16);
      v22 = *v20;
      if ( *(volatile signed __int64 **)(*v20 + 8) != v20
        || (v23 = *(_QWORD *)v22, *(_QWORD *)(*(_QWORD *)v22 + 8LL) != v22) )
      {
        __fastfail(3u);
      }
      *v20 = v23;
      *(_QWORD *)(v23 + 8) = v20;
      v24 = _InterlockedCompareExchange64(v21, 0LL, 1LL);
      if ( v24 != 1 )
      {
        do
        {
          v15 = -1LL;
          v30 = v24 & 6;
          v31 = 3LL;
          if ( v30 != 2 )
            v31 = -1LL;
          v32 = v24 + v31;
          v33 = v24;
          v24 = _InterlockedCompareExchange64(v21, v32, v24);
        }
        while ( v33 != v24 );
        if ( v30 == 2 )
          RtlpWakeSRWLock(v20 + 2, v32, 0);
      }
      if ( (volatile signed __int64 *)v22 == v20 )
        v22 = 0LL;
      if ( v22 )
        break;
      v18 = 3LL * v14;
      v19 = (_QWORD *)(v36 + 8);
      ++v34;
      v36 += 8LL;
      if ( v34 > 2 )
        goto LABEL_30;
    }
  }
  else
  {
LABEL_30:
    if ( *(_BYTE *)(a1 + 377) )
      return 0LL;
    v27 = (_QWORD *)(a1 + 16);
LABEL_32:
    v28 = 0LL;
    v29 = v27;
    while ( 1 )
    {
      v22 = TppQueueRemoveHead(*v29 + 24LL * v17, v18);
      if ( v22 )
        break;
      v17 = v17 + 1 < TppNumberNodes ? v17 + 1 : 0;
      if ( v17 == v14 )
      {
        ++v28;
        ++v29;
        if ( v28 > 2 )
        {
          v27 = (_QWORD *)(a1 + 16);
          if ( !*(_BYTE *)(a1 + 377) )
            goto LABEL_32;
          return 0LL;
        }
      }
    }
  }
  *a3 = v22 - 16;
  TppWorkerSwitchNode(a1, a2, v17, *(unsigned __int8 *)(v22 - 16 + 12));
  if ( v17 == v14 )
  {
    v25 = *(_DWORD *)(a2 + 348);
    v3 = v25 + 1;
    if ( v25 >= 0x10 )
      v3 = 16;
  }
  *(_DWORD *)(a2 + 348) = v3;
  return 1LL;
}
