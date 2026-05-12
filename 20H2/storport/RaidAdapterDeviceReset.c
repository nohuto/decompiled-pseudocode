/*
 * XREFs of RaidAdapterDeviceReset @ 0x1C002C3B0
 * Callers:
 *     RaidAdapterStorageDeviceResetIoctl @ 0x1C00301C8 (RaidAdapterStorageDeviceResetIoctl.c)
 * Callees:
 *     RaidPauseAdapterQueue @ 0x1C001393C (RaidPauseAdapterQueue.c)
 *     __security_check_cookie @ 0x1C001CB10 (__security_check_cookie.c)
 *     RaidResumeAndRestartAdapterQueues @ 0x1C0032B38 (RaidResumeAndRestartAdapterQueues.c)
 *     StorReset @ 0x1C003A390 (StorReset.c)
 */

__int64 __fastcall RaidAdapterDeviceReset(__int64 a1, unsigned __int16 a2)
{
  unsigned int v2; // r15d
  __int64 result; // rax
  int v5; // ebp
  unsigned int v6; // ebx
  __int64 v7; // rsi
  __int64 v8; // r14
  struct _SLIST_ENTRY *v9; // rax
  unsigned int v10; // ebp
  int v11; // esi
  unsigned int v12; // ebx
  PSLIST_ENTRY v13; // rax
  KIRQL v14; // bl
  union _SLIST_HEADER SListHead; // [rsp+40h] [rbp-48h] BYREF

  v2 = a2;
  SListHead = 0LL;
  if ( !*(_QWORD *)(a1 + 5504) )
    return 3221225488LL;
  if ( _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 272), 1, 0) == 1 )
    return 3221226614LL;
  RaidPauseAdapterQueue(a1);
  if ( *(int *)(a1 + 4808) > 1 )
  {
    v5 = 0;
    v6 = KeQueryHighestNodeNumber() + 1;
    InitializeSListHead(&SListHead);
    do
    {
      if ( v6 )
      {
        v7 = 0LL;
        v8 = v6;
        do
        {
          v9 = ExpInterlockedPopEntrySList((PSLIST_HEADER)(v7 + *(_QWORD *)(a1 + 4816)));
          if ( v9 )
          {
            ExpInterlockedPushEntrySList(&SListHead, v9);
            ++v5;
          }
          else
          {
            _mm_pause();
          }
          v7 += 64LL;
          --v8;
        }
        while ( v8 );
      }
    }
    while ( v5 < *(_DWORD *)(a1 + 4808) );
  }
  v10 = StorReset(*(_QWORD *)(a1 + 560) + 16LL, v2);
  if ( *(int *)(a1 + 4808) > 1 )
  {
    v11 = 0;
    v12 = KeQueryHighestNodeNumber() + 1;
    do
    {
      v13 = ExpInterlockedPopEntrySList(&SListHead);
      if ( v13 )
      {
        ExpInterlockedPushEntrySList(
          (PSLIST_HEADER)(*(_QWORD *)(a1 + 4816) + ((unsigned __int64)(HIDWORD(v13[1].Next) % v12) << 6)),
          v13);
        ++v11;
      }
    }
    while ( v11 < *(_DWORD *)(a1 + 4808) );
  }
  v14 = KfRaiseIrql(2u);
  RaidResumeAndRestartAdapterQueues(a1);
  KeLowerIrql(v14);
  result = v10;
  *(_DWORD *)(a1 + 272) = 0;
  return result;
}
