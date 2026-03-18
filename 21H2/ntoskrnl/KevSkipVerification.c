/*
 * XREFs of KevSkipVerification @ 0x1406549F4
 * Callers:
 *     ExFreePoolSanityChecks @ 0x140AA7018 (ExFreePoolSanityChecks.c)
 * Callees:
 *     <none>
 */

_BOOL8 KevSkipVerification()
{
  struct _KPRCB *CurrentPrcb; // rcx
  int v1; // eax
  _BOOL8 result; // rax

  result = 0;
  if ( KeGetCurrentIrql() >= 2u )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    if ( CurrentPrcb->DpcRoutineActive )
    {
      if ( (CurrentPrcb->DpcRequestSummary & 8) != 0 )
      {
        v1 = KiSerializeTimerExpiration
           ? *(_DWORD *)(KiProcessorBlock[0] + 32276)
           : CurrentPrcb->TimerTable.TableState.LastTimerHand[1];
        if ( v1 + 100 < (unsigned int)(MEMORY[0xFFFFF78000000008] >> 18) )
          return 1;
      }
    }
  }
  return result;
}
