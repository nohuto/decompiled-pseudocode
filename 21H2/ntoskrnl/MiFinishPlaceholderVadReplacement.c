/*
 * XREFs of MiFinishPlaceholderVadReplacement @ 0x14097EF10
 * Callers:
 *     MiMapViewOfDataSection @ 0x1406FB4D0 (MiMapViewOfDataSection.c)
 *     MiReserveUserMemory @ 0x1407B8B60 (MiReserveUserMemory.c)
 * Callees:
 *     MiUnlockAndDereferenceVadShared @ 0x14030EA70 (MiUnlockAndDereferenceVadShared.c)
 *     MiVadDeleted @ 0x14030EB80 (MiVadDeleted.c)
 *     MiLockVadShared @ 0x14030EBA0 (MiLockVadShared.c)
 *     MiGetProcessPartition @ 0x14032A72C (MiGetProcessPartition.c)
 *     MiDecrementVadsBeingDeleted @ 0x14057FFF4 (MiDecrementVadsBeingDeleted.c)
 *     MiDeleteVad @ 0x1407BC0B0 (MiDeleteVad.c)
 *     PerfInfoLogVirtualAlloc @ 0x1409E3F78 (PerfInfoLogVirtualAlloc.c)
 */

LONG __fastcall MiFinishPlaceholderVadReplacement(char *P, __int64 a2, int a3)
{
  struct _KTHREAD *CurrentThread; // rcx
  __int64 Process; // rsi
  __int16 *ProcessPartition; // rax

  CurrentThread = KeGetCurrentThread();
  Process = (__int64)CurrentThread->ApcState.Process;
  if ( a3 )
  {
    MiLockVadShared((__int64)CurrentThread, (__int64)P);
    if ( !(unsigned int)MiVadDeleted((__int64)P) && (WORD2(PerfGlobalGroupMask[0]) & 0x8000) != 0 )
    {
      ProcessPartition = (__int16 *)MiGetProcessPartition(Process);
      PerfInfoLogVirtualAlloc(
        *((_DWORD *)P + 6) << 12,
        (*((_DWORD *)P + 7) - *((_DWORD *)P + 6) + 1) << 12,
        Process,
        0x2000,
        *ProcessPartition,
        *ProcessPartition);
    }
    MiUnlockAndDereferenceVadShared(P);
  }
  else
  {
    MiDeleteVad((unsigned __int8 *)P, 0LL, 0);
  }
  return MiDecrementVadsBeingDeleted(a2);
}
