/*
 * XREFs of HamDisconnectForExtendedExecution @ 0x180004680
 * Callers:
 *     <none>
 * Callees:
 *     RmpClientWnfDestroySubscription @ 0x1800022D0 (RmpClientWnfDestroySubscription.c)
 *     HampConnectionCleanup @ 0x180004810 (HampConnectionCleanup.c)
 *     CempListRemoveHeadAndClear @ 0x180011DE0 (CempListRemoveHeadAndClear.c)
 *     HampIpcChannelObjectMakeZombieUnsafe @ 0x180011E14 (HampIpcChannelObjectMakeZombieUnsafe.c)
 */

__int64 __fastcall HamDisconnectForExtendedExecution(_DWORD *P)
{
  int v1; // eax
  DWORD CurrentThreadId; // eax
  __int64 v4; // rax
  _QWORD *i; // rsi
  _DWORD *v6; // rbx
  _QWORD *v7; // rdx
  _DWORD *v9; // rcx
  _QWORD **v10; // rax
  _QWORD *v11; // rcx
  _QWORD *v12; // rcx
  void *v13; // rax
  _QWORD *v14; // [rsp+20h] [rbp-18h] BYREF
  _QWORD *v15; // [rsp+28h] [rbp-10h]

  v1 = P[28];
  if ( v1 == 2 )
    goto LABEL_2;
  if ( v1 < 0 )
    goto LABEL_11;
  if ( v1 <= 3 )
  {
LABEL_2:
    RtlAcquireSRWLockExclusive(P + 6);
    CurrentThreadId = GetCurrentThreadId();
    P[9] |= 1u;
    P[8] = CurrentThreadId;
    v4 = *((_QWORD *)P + 6);
    if ( (v4 & 1) != 0 )
    {
      if ( v4 == 1 )
      {
LABEL_5:
        P[8] = 0;
        RtlReleaseSRWLockExclusive(P + 6);
        v6 = (_DWORD *)*((_QWORD *)P + 2);
        if ( v6 )
        {
          RtlUnsubscribeWnfNotificationWaitForCompletion(*(_QWORD *)v6);
          RtlAcquireSRWLockExclusive(v6 + 8);
          v6[16] |= 4u;
          v7 = (_QWORD *)*((_QWORD *)v6 + 2);
          if ( v7 == (_QWORD *)(v6 + 4) )
          {
            v15 = &v14;
            v14 = &v14;
          }
          else
          {
            v15 = (_QWORD *)*((_QWORD *)v6 + 3);
            v14 = v7;
            v7[1] = &v14;
            *v15 = &v14;
            *((_QWORD *)v6 + 3) = v6 + 4;
            *((_QWORD *)v6 + 2) = v6 + 4;
          }
          RtlReleaseSRWLockExclusive(v6 + 8);
          while ( v14 != &v14 )
          {
            v13 = (void *)CempListRemoveHeadAndClear(&v14);
            RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v13);
          }
          TpWaitForWork(*((_QWORD *)v6 + 7), 0LL);
          TpReleaseWork(*((_QWORD *)v6 + 7));
          RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v6);
        }
        goto LABEL_11;
      }
      i = (_QWORD *)(v4 ^ ((unsigned __int64)(P + 10) | 1));
    }
    else
    {
      i = (_QWORD *)*((_QWORD *)P + 6);
    }
    while ( i )
    {
      HampIpcChannelObjectMakeZombieUnsafe(i, P + 4);
      v10 = (_QWORD **)i[1];
      v11 = i;
      if ( v10 )
      {
        v12 = *v10;
        for ( i = (_QWORD *)i[1]; v12; v12 = (_QWORD *)*v12 )
          i = v12;
      }
      else
      {
        for ( i = (_QWORD *)(i[2] & 0xFFFFFFFFFFFFFFFCuLL); i; i = (_QWORD *)(i[2] & 0xFFFFFFFFFFFFFFFCuLL) )
        {
          if ( (_QWORD *)*i == v11 )
            break;
          v11 = i;
        }
      }
    }
    goto LABEL_5;
  }
  if ( v1 == 6 )
  {
    v9 = (_DWORD *)*((_QWORD *)P + 2);
    if ( v9 )
      RmpClientWnfDestroySubscription(v9);
  }
LABEL_11:
  HampConnectionCleanup(P);
  RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, P);
  return 0LL;
}
