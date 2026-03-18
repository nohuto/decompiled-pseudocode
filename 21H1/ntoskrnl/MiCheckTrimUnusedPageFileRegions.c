/*
 * XREFs of MiCheckTrimUnusedPageFileRegions @ 0x140240374
 * Callers:
 *     MiWorkingSetManager @ 0x140240450 (MiWorkingSetManager.c)
 * Callees:
 *     ExQueueWorkItemToPartition @ 0x14023505C (ExQueueWorkItemToPartition.c)
 *     KiQueryUnbiasedInterruptTime @ 0x14023F4A4 (KiQueryUnbiasedInterruptTime.c)
 *     MiNumberWsSwapPagefiles @ 0x140240410 (MiNumberWsSwapPagefiles.c)
 *     PsReferencePartitionSafe @ 0x1402D4758 (PsReferencePartitionSafe.c)
 */

__int64 MiCheckTrimUnusedPageFileRegions()
{
  __int64 result; // rax
  __int64 v1; // r11
  __int64 v2; // r8
  __int64 v3; // r11
  __int64 *v4; // r11
  signed __int32 v5[10]; // [rsp+0h] [rbp-28h] BYREF

  result = MiNumberWsSwapPagefiles();
  if ( (_DWORD)result )
  {
    if ( !*(_QWORD *)(v1 + 1072) )
    {
      _InterlockedOr(v5, 0);
      result = KiQueryUnbiasedInterruptTime();
      if ( (unsigned __int64)(result - *(_QWORD *)(v3 + 1080)) >= 0x861C46800LL )
      {
        if ( byte_140C4E601 )
        {
          result -= 33000000000LL;
          *(_QWORD *)(v3 + 1080) = result;
        }
        else
        {
          result = PsReferencePartitionSafe(*(_QWORD *)(v3 + 176), 36000000000LL, v2);
          if ( (_BYTE)result )
          {
            v4[131] = 0LL;
            v4[133] = (__int64)MiTrimUnusedPageFileRegionsWorker;
            v4[134] = (__int64)v4;
            return ExQueueWorkItemToPartition(v4 + 131, 3, 0xFFFFFFFF, v4[22]);
          }
        }
      }
    }
  }
  return result;
}
