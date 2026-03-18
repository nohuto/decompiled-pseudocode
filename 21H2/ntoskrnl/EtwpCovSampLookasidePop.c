/*
 * XREFs of EtwpCovSampLookasidePop @ 0x140460E30
 * Callers:
 *     EtwpCovSampCaptureBufferGet @ 0x140460BDC (EtwpCovSampCaptureBufferGet.c)
 *     EtwpCovSampCaptureQueueApc @ 0x1406362D0 (EtwpCovSampCaptureQueueApc.c)
 *     EtwpCovSampSampleBufferReserve @ 0x140636A64 (EtwpCovSampSampleBufferReserve.c)
 * Callees:
 *     KeInsertQueueDpc @ 0x140345170 (KeInsertQueueDpc.c)
 *     RtlpInterlockedPopEntrySList @ 0x140429880 (RtlpInterlockedPopEntrySList.c)
 *     EtwpCovSampCaptureReleaseToLookaside @ 0x140460DBA (EtwpCovSampCaptureReleaseToLookaside.c)
 */

PSLIST_ENTRY __fastcall EtwpCovSampLookasidePop(__int64 a1, __int64 a2)
{
  PSLIST_ENTRY result; // rax

  if ( *(_WORD *)a2 && (result = RtlpInterlockedPopEntrySList((PSLIST_HEADER)a2)) != 0LL )
  {
    if ( *(_DWORD *)(a2 + 40) )
    {
      result->Next = (_SLIST_ENTRY *)6941;
      return result;
    }
    EtwpCovSampCaptureReleaseToLookaside(a1, a2, result);
  }
  else if ( *(_DWORD *)(a2 + 52) < *(_DWORD *)(a2 + 56) )
  {
    _InterlockedIncrement((volatile signed __int32 *)(a2 + 48));
    if ( (unsigned int)(MEMORY[0xFFFFF78000000320] - *(_DWORD *)(a1 + 812)) >= 0x40 )
    {
      *(_DWORD *)(a1 + 812) = MEMORY[0xFFFFF78000000320];
      KeInsertQueueDpc((PRKDPC)(a1 + 720), 0LL, 0LL);
    }
  }
  return 0LL;
}
