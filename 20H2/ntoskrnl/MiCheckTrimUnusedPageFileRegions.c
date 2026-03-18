/*
 * XREFs of MiCheckTrimUnusedPageFileRegions @ 0x140266014
 * Callers:
 *     MiWorkingSetManager @ 0x1402662A0 (MiWorkingSetManager.c)
 * Callees:
 *     PsReferencePartitionSafe @ 0x1402636B0 (PsReferencePartitionSafe.c)
 *     KiQueryUnbiasedInterruptTime @ 0x140264D24 (KiQueryUnbiasedInterruptTime.c)
 *     MiNumberWsSwapPagefiles @ 0x1402660B0 (MiNumberWsSwapPagefiles.c)
 *     ExQueueWorkItemToPartition @ 0x1402D4564 (ExQueueWorkItemToPartition.c)
 */

char MiCheckTrimUnusedPageFileRegions()
{
  __int64 UnbiasedInterruptTime; // rax
  __int64 v1; // r11
  __int64 v2; // r11
  _QWORD *v3; // r11
  signed __int32 v5[10]; // [rsp+0h] [rbp-28h] BYREF

  LODWORD(UnbiasedInterruptTime) = MiNumberWsSwapPagefiles();
  if ( (_DWORD)UnbiasedInterruptTime )
  {
    if ( !*(_QWORD *)(v1 + 1072) )
    {
      _InterlockedOr(v5, 0);
      UnbiasedInterruptTime = KiQueryUnbiasedInterruptTime();
      if ( (unsigned __int64)(UnbiasedInterruptTime - *(_QWORD *)(v2 + 1080)) >= 0x861C46800LL )
      {
        if ( byte_140C4E541 )
        {
          UnbiasedInterruptTime -= 33000000000LL;
          *(_QWORD *)(v2 + 1080) = UnbiasedInterruptTime;
        }
        else
        {
          LOBYTE(UnbiasedInterruptTime) = PsReferencePartitionSafe(*(_QWORD *)(v2 + 176));
          if ( (_BYTE)UnbiasedInterruptTime )
          {
            v3[131] = 0LL;
            v3[133] = MiTrimUnusedPageFileRegionsWorker;
            v3[134] = v3;
            LOBYTE(UnbiasedInterruptTime) = ExQueueWorkItemToPartition((ULONG_PTR)(v3 + 131));
          }
        }
      }
    }
  }
  return UnbiasedInterruptTime;
}
