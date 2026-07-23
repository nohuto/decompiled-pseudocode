/*
 * XREFs of ExpWorkQueueInitializeWithMinimumThreads @ 0x1407C2B9C
 * Callers:
 *     ExpPartitionCreatePoolInternal @ 0x1407C2AD0 (ExpPartitionCreatePoolInternal.c)
 * Callees:
 *     ExpCreateWorkerThread @ 0x1406A7208 (ExpCreateWorkerThread.c)
 *     ExpWorkQueueInitialize @ 0x1407C2C08 (ExpWorkQueueInitialize.c)
 */

__int64 __fastcall ExpWorkQueueInitializeWithMinimumThreads(
        __int64 a1,
        int a2,
        int a3,
        int a4,
        __int64 a5,
        int a6,
        __int64 a7)
{
  __int64 v8; // r8
  int v9; // r9d
  int v10; // ebx
  __int64 result; // rax

  ExpWorkQueueInitialize(a1, a2, a3, a4, a5, a6);
  v10 = 0;
  if ( 2 * *(_DWORD *)(a1 + 716) <= 0 )
    return 0LL;
  while ( 1 )
  {
    result = ExpCreateWorkerThread((_QWORD *)a1, a7, v8, v9);
    if ( (int)result < 0 )
      break;
    if ( ++v10 >= (2 * *(_DWORD *)(a1 + 716)) >> 1 )
      return 0LL;
  }
  return result;
}
