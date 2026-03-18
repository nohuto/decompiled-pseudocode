/*
 * XREFs of MiFinishPlaceholderVadReplacement @ 0x1408D3A38
 * Callers:
 *     MiMapViewOfDataSection @ 0x140632720 (MiMapViewOfDataSection.c)
 *     MiReserveUserMemory @ 0x1406343A0 (MiReserveUserMemory.c)
 * Callees:
 *     MiGetProcessPartition @ 0x14021A6D0 (MiGetProcessPartition.c)
 *     MiDeleteVad @ 0x14026B790 (MiDeleteVad.c)
 *     MiUnlockAndDereferenceVadShared @ 0x1402A45A0 (MiUnlockAndDereferenceVadShared.c)
 *     MiVadDeleted @ 0x1402A4680 (MiVadDeleted.c)
 *     MiLockVadShared @ 0x1402A4694 (MiLockVadShared.c)
 *     MiDecrementVadsBeingDeleted @ 0x140525B54 (MiDecrementVadsBeingDeleted.c)
 *     PerfInfoLogVirtualAlloc @ 0x1409332E8 (PerfInfoLogVirtualAlloc.c)
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
