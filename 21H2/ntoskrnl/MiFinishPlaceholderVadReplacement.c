/*
 * XREFs of MiFinishPlaceholderVadReplacement @ 0x1408D84E8
 * Callers:
 *     MiReserveUserMemory @ 0x1407018B0 (MiReserveUserMemory.c)
 *     MiMapViewOfDataSection @ 0x1407034E0 (MiMapViewOfDataSection.c)
 * Callees:
 *     MiUnlockAndDereferenceVadShared @ 0x14027C7C0 (MiUnlockAndDereferenceVadShared.c)
 *     MiVadDeleted @ 0x14027C8A0 (MiVadDeleted.c)
 *     MiLockVadShared @ 0x14027C8B4 (MiLockVadShared.c)
 *     MiGetProcessPartition @ 0x1402BF640 (MiGetProcessPartition.c)
 *     MiDeleteVad @ 0x1402C08F0 (MiDeleteVad.c)
 *     MiDecrementVadsBeingDeleted @ 0x14052B8B4 (MiDecrementVadsBeingDeleted.c)
 *     PerfInfoLogVirtualAlloc @ 0x140937D58 (PerfInfoLogVirtualAlloc.c)
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
