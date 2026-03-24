/*
 * XREFs of MiCheckTrimUnusedPageFileRegions @ 0x14027318C
 * Callers:
 *     MiWorkingSetManager @ 0x140272C60 (MiWorkingSetManager.c)
 * Callees:
 *     KiQueryUnbiasedInterruptTime @ 0x1402546F4 (KiQueryUnbiasedInterruptTime.c)
 *     MiNumberWsSwapPagefiles @ 0x140273228 (MiNumberWsSwapPagefiles.c)
 *     PsReferencePartitionSafe @ 0x1402AC004 (PsReferencePartitionSafe.c)
 *     ExQueueWorkItemToPartition @ 0x1402F78AC (ExQueueWorkItemToPartition.c)
 */

__int64 MiCheckTrimUnusedPageFileRegions()
{
  __int64 result; // rax
  __int64 v1; // r11
  __int64 v2; // r11
  _QWORD *v3; // r11
  signed __int32 v4[10]; // [rsp+0h] [rbp-28h] BYREF

  result = MiNumberWsSwapPagefiles();
  if ( (_DWORD)result )
  {
    if ( !*(_QWORD *)(v1 + 1072) )
    {
      _InterlockedOr(v4, 0);
      result = KiQueryUnbiasedInterruptTime();
      if ( (unsigned __int64)(result - *(_QWORD *)(v2 + 1080)) >= 0x861C46800LL )
      {
        if ( byte_140C4E6C1 )
        {
          result -= 33000000000LL;
          *(_QWORD *)(v2 + 1080) = result;
        }
        else
        {
          result = PsReferencePartitionSafe(*(_QWORD *)(v2 + 176));
          if ( (_BYTE)result )
          {
            v3[131] = 0LL;
            v3[133] = MiTrimUnusedPageFileRegionsWorker;
            v3[134] = v3;
            return ExQueueWorkItemToPartition((ULONG_PTR)(v3 + 131));
          }
        }
      }
    }
  }
  return result;
}
