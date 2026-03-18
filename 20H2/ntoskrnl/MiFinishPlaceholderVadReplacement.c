/*
 * XREFs of MiFinishPlaceholderVadReplacement @ 0x1408DABC8
 * Callers:
 *     MiMapViewOfDataSection @ 0x140622CE0 (MiMapViewOfDataSection.c)
 *     MiReserveUserMemory @ 0x140625E30 (MiReserveUserMemory.c)
 * Callees:
 *     MiUnlockAndDereferenceVadShared @ 0x14022C070 (MiUnlockAndDereferenceVadShared.c)
 *     MiVadDeleted @ 0x14022C150 (MiVadDeleted.c)
 *     MiLockVadShared @ 0x14022C164 (MiLockVadShared.c)
 *     MiGetProcessPartition @ 0x14027C520 (MiGetProcessPartition.c)
 *     MiDeleteVad @ 0x14027E4D0 (MiDeleteVad.c)
 *     MiDecrementVadsBeingDeleted @ 0x140529B74 (MiDecrementVadsBeingDeleted.c)
 *     PerfInfoLogVirtualAlloc @ 0x14093A3B8 (PerfInfoLogVirtualAlloc.c)
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
