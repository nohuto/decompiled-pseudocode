/*
 * XREFs of MiFinishPlaceholderVadReplacement @ 0x1408D4D88
 * Callers:
 *     MiMapViewOfDataSection @ 0x1405FD6E0 (MiMapViewOfDataSection.c)
 *     MiReserveUserMemory @ 0x1405FF360 (MiReserveUserMemory.c)
 * Callees:
 *     MiDeleteVad @ 0x140212740 (MiDeleteVad.c)
 *     MiUnlockAndDereferenceVadShared @ 0x14024B570 (MiUnlockAndDereferenceVadShared.c)
 *     MiVadDeleted @ 0x14024B650 (MiVadDeleted.c)
 *     MiLockVadShared @ 0x14024B664 (MiLockVadShared.c)
 *     MiGetProcessPartition @ 0x1402AD1E0 (MiGetProcessPartition.c)
 *     MiDecrementVadsBeingDeleted @ 0x1405261A4 (MiDecrementVadsBeingDeleted.c)
 *     PerfInfoLogVirtualAlloc @ 0x140934588 (PerfInfoLogVirtualAlloc.c)
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
    MiDeleteVad(P, 0LL, 0);
  }
  return MiDecrementVadsBeingDeleted(a2);
}
