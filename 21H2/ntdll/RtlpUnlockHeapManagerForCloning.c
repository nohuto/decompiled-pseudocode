/*
 * XREFs of RtlpUnlockHeapManagerForCloning @ 0x1800F4B84
 * Callers:
 *     RtlLockHeapManagerForCloning @ 0x1800F2854 (RtlLockHeapManagerForCloning.c)
 *     RtlUnlockHeapManagerForCloning @ 0x1800F31D8 (RtlUnlockHeapManagerForCloning.c)
 * Callees:
 *     RtlpCSparseBitmapUnlock @ 0x18000643C (RtlpCSparseBitmapUnlock.c)
 *     RtlReleaseSRWLockExclusive @ 0x180012C70 (RtlReleaseSRWLockExclusive.c)
 *     RtlLeaveCriticalSection @ 0x18002F230 (RtlLeaveCriticalSection.c)
 *     RtlpHpUnlockHeapForCloning @ 0x18010E640 (RtlpHpUnlockHeapForCloning.c)
 */

NTSTATUS __fastcall RtlpUnlockHeapManagerForCloning(unsigned int a1, unsigned int a2)
{
  struct _PEB *v2; // r14
  __int64 v4; // rsi
  __int64 v5; // rbp
  void **ProcessHeaps; // rax
  void *v7; // rbx
  _RTL_SRWLOCK *v8; // rcx
  __int64 v9; // rdx
  void *UniqueThread; // rcx
  int v12; // [rsp+20h] [rbp-28h] BYREF
  char v13; // [rsp+24h] [rbp-24h]
  PVOID *v14; // [rsp+28h] [rbp-20h]

  v2 = NtCurrentPeb();
  if ( a2 )
  {
    v4 = 0LL;
    v5 = a2;
    do
    {
      ProcessHeaps = v2->ProcessHeaps;
      v7 = ProcessHeaps[v4];
      if ( *((_DWORD *)v7 + 4) == -571548178 )
      {
        if ( (*((_BYTE *)v7 + 20) & 1) == 0 )
          RtlpHpUnlockHeapForCloning(ProcessHeaps[v4], a1);
      }
      else if ( (*((_BYTE *)v7 + 112) & 1) == 0 )
      {
        if ( *((_BYTE *)v7 + 418) == 2 )
          v8 = (_RTL_SRWLOCK *)*((_QWORD *)v7 + 51);
        else
          v8 = 0LL;
        if ( v8 )
        {
          if ( a1 )
            v8->Value = 1LL;
          RtlReleaseSRWLockExclusive(v8);
        }
        if ( a1 )
        {
          v9 = *((_QWORD *)v7 + 44);
          *((_WORD *)v7 + 208) = 0;
          *(_QWORD *)(v9 + 16) = NtCurrentTeb()->ClientId.UniqueThread;
          *(_DWORD *)(v9 + 8) = -2;
          *(_DWORD *)(v9 + 12) = 1;
          *(_QWORD *)(v9 + 24) = 0LL;
        }
        RtlLeaveCriticalSection(*((PRTL_CRITICAL_SECTION *)v7 + 44));
      }
      ++v4;
      --v5;
    }
    while ( v5 );
  }
  if ( a1 )
  {
    UniqueThread = NtCurrentTeb()->ClientId.UniqueThread;
    qword_18016DC70 = -1LL;
    RtlpProcessHeapsListLock.OwningThread = UniqueThread;
    RtlpProcessHeapsListLock.LockCount = -2;
    RtlpProcessHeapsListLock.RecursionCount = 1;
    RtlpProcessHeapsListLock.LockSemaphore = 0LL;
    qword_18016DC68 = 1LL;
  }
  v12 = 1;
  v14 = BaseAddress;
  v13 = -1;
  RtlpCSparseBitmapUnlock((__int64)&v12);
  return RtlLeaveCriticalSection(&RtlpProcessHeapsListLock);
}
