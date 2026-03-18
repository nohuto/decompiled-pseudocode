/*
 * XREFs of MiCheckTrimUnusedPageFileRegions @ 0x1402F3674
 * Callers:
 *     MiWorkingSetManager @ 0x1402F3750 (MiWorkingSetManager.c)
 * Callees:
 *     PsReferencePartitionSafe @ 0x14026ADB8 (PsReferencePartitionSafe.c)
 *     ExQueueWorkItemToPartition @ 0x1402C7E8C (ExQueueWorkItemToPartition.c)
 *     KiQueryUnbiasedInterruptTime @ 0x1402D233C (KiQueryUnbiasedInterruptTime.c)
 *     MiNumberWsSwapPagefiles @ 0x1402F3710 (MiNumberWsSwapPagefiles.c)
 */

char MiCheckTrimUnusedPageFileRegions()
{
  __int64 UnbiasedInterruptTime; // rax
  __int64 v1; // r11
  __int64 v2; // r11
  __int64 *v3; // r11
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
        if ( byte_140C4E4C1 )
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
            v3[133] = (__int64)MiTrimUnusedPageFileRegionsWorker;
            v3[134] = (__int64)v3;
            LOBYTE(UnbiasedInterruptTime) = ExQueueWorkItemToPartition(v3 + 131, 3, 0xFFFFFFFF, v3[22]);
          }
        }
      }
    }
  }
  return UnbiasedInterruptTime;
}
