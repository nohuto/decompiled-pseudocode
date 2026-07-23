/*
 * XREFs of MiCheckTrimUnusedPageFileRegions @ 0x14026112C
 * Callers:
 *     MiWorkingSetManager @ 0x140260C00 (MiWorkingSetManager.c)
 * Callees:
 *     MiNumberWsSwapPagefiles @ 0x1402611C8 (MiNumberWsSwapPagefiles.c)
 *     PsReferencePartitionSafe @ 0x1402745B0 (PsReferencePartitionSafe.c)
 *     KiQueryUnbiasedInterruptTime @ 0x140275C64 (KiQueryUnbiasedInterruptTime.c)
 *     ExQueueWorkItemToPartition @ 0x1403025FC (ExQueueWorkItemToPartition.c)
 */

__int64 MiCheckTrimUnusedPageFileRegions()
{
  __int64 result; // rax
  __int64 v1; // rcx
  __int64 v2; // r11
  __int64 v3; // r11
  _QWORD *v4; // r11
  signed __int32 v5[10]; // [rsp+0h] [rbp-28h] BYREF

  result = MiNumberWsSwapPagefiles();
  if ( (_DWORD)result )
  {
    if ( !*(_QWORD *)(v2 + 1072) )
    {
      _InterlockedOr(v5, 0);
      LOBYTE(v1) = 1;
      result = KiQueryUnbiasedInterruptTime(v1);
      if ( (unsigned __int64)(result - *(_QWORD *)(v3 + 1080)) >= 0x861C46800LL )
      {
        if ( byte_140C4E701 )
        {
          result -= 33000000000LL;
          *(_QWORD *)(v3 + 1080) = result;
        }
        else
        {
          result = PsReferencePartitionSafe(*(_QWORD *)(v3 + 176));
          if ( (_BYTE)result )
          {
            v4[131] = 0LL;
            v4[133] = MiTrimUnusedPageFileRegionsWorker;
            v4[134] = v4;
            return ExQueueWorkItemToPartition((ULONG_PTR)(v4 + 131));
          }
        }
      }
    }
  }
  return result;
}
