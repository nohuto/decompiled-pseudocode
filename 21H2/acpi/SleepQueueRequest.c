/*
 * XREFs of SleepQueueRequest @ 0x1C0068970
 * Callers:
 *     SleepStall @ 0x1C0069CD0 (SleepStall.c)
 * Callees:
 *     PushFrame @ 0x1C0018660 (PushFrame.c)
 */

__int64 __fastcall SleepQueueRequest(struct _SLIST_ENTRY *a1, unsigned int a2)
{
  __int64 v2; // rsi
  int v4; // edi
  __int64 *v5; // r9
  __int64 v6; // r10
  _SLIST_ENTRY *v7; // r8
  _SLIST_ENTRY *v8; // rdx
  __int64 *i; // rax
  __int64 v10; // rdx
  _QWORD *p_Next; // rcx
  __int64 v12; // rcx
  _SLIST_ENTRY *v13; // rax
  _SLIST_ENTRY *v15; // [rsp+50h] [rbp+18h] BYREF

  v15 = 0LL;
  v2 = a2;
  v4 = PushFrame(a1, 1346718803, 0x40u, (__int64)ProcessSleep, &v15);
  if ( v4 >= 0 )
  {
    byte_1C0082878 = KeAcquireSpinLockRaiseToDpc(&gmutSleep);
    v5 = &SleepQueue;
    v6 = MEMORY[0xFFFFF78000000008];
    v7 = v15;
    v8 = (_SLIST_ENTRY *)(MEMORY[0xFFFFF78000000008] + 10000 * v2);
    v15[3].Next = v8;
    *((_QWORD *)&v7[3].Next + 1) = a1;
    for ( i = (__int64 *)qword_1C0082858; ; i = (__int64 *)i[1] )
    {
      if ( i == &SleepQueue )
        goto LABEL_9;
      if ( (__int64)v8 >= i[2] )
        break;
      v5 = i;
    }
    v10 = *i;
    p_Next = &v7[2].Next;
    if ( *(__int64 **)(*i + 8) != i )
LABEL_11:
      __fastfail(3u);
    *p_Next = v10;
    *((_QWORD *)&v7[2].Next + 1) = i;
    *(_QWORD *)(v10 + 8) = p_Next;
    *i = (__int64)p_Next;
LABEL_9:
    if ( (__int64 *)v5[1] == &SleepQueue )
    {
      v12 = SleepQueue;
      v13 = v7 + 2;
      if ( *(__int64 **)(SleepQueue + 8) != &SleepQueue )
        goto LABEL_11;
      v13->Next = (_SLIST_ENTRY *)SleepQueue;
      *((_QWORD *)&v7[2].Next + 1) = &SleepQueue;
      *(_QWORD *)(v12 + 8) = v13;
      SleepQueue = (__int64)&v7[2];
      ExSetTimer(SleepTimer, v6 - (unsigned __int64)v7[3].Next, 0LL, 0LL);
    }
    KeReleaseSpinLock(&gmutSleep, byte_1C0082878);
  }
  return (unsigned int)v4;
}
