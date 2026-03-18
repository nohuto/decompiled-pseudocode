/*
 * XREFs of MiQueueForceTrimRequest @ 0x140373F2C
 * Callers:
 *     MiPreUnlockWorkingSetShared @ 0x140373E1C (MiPreUnlockWorkingSetShared.c)
 * Callees:
 *     KeQueryPriorityThread @ 0x14035D5C0 (KeQueryPriorityThread.c)
 *     MiQueueWorkingSetRequest @ 0x1403867F4 (MiQueueWorkingSetRequest.c)
 */

__int64 __fastcall MiQueueForceTrimRequest(__int64 a1)
{
  __int64 v2; // rcx

  if ( KeQueryPriorityThread(KeGetCurrentThread()) >= 16 )
    return 0LL;
  v2 = *(_QWORD *)(qword_140C51F48 + 8LL * *(unsigned __int16 *)(a1 + 174));
  _InterlockedOr((volatile signed __int32 *)(a1 + 188), 4u);
  return MiQueueWorkingSetRequest(v2, 1024LL);
}
