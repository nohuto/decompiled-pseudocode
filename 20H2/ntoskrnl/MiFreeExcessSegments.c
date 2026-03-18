/*
 * XREFs of MiFreeExcessSegments @ 0x14029C0C0
 * Callers:
 *     MmResourcesAvailable @ 0x1402144D0 (MmResourcesAvailable.c)
 *     MiChargeCommit @ 0x14027C2B0 (MiChargeCommit.c)
 *     MiCheckControlArea @ 0x14029BE20 (MiCheckControlArea.c)
 *     MiCountSystemPool @ 0x1402CB410 (MiCountSystemPool.c)
 * Callees:
 *     KeSetEvent @ 0x140219280 (KeSetEvent.c)
 *     PsGetNextPartition @ 0x14033B800 (PsGetNextPartition.c)
 *     MiShouldTrimUnusedSegments @ 0x140529024 (MiShouldTrimUnusedSegments.c)
 */

unsigned __int64 MiFreeExcessSegments()
{
  unsigned __int64 result; // rax
  unsigned __int64 i; // rbx

  result = 9 * (qword_140C529A8 / 0xAuLL);
  if ( qword_140C52928 >= result )
  {
    result = MiShouldTrimUnusedSegments();
    if ( (_DWORD)result )
    {
      result = PsGetNextPartition(0LL);
      for ( i = result; result; i = result )
      {
        if ( *(_QWORD *)(*(_QWORD *)i + 1696LL) )
          KeSetEvent((PRKEVENT)(*(_QWORD *)i + 1400LL), 0, 0);
        result = PsGetNextPartition(i);
      }
    }
  }
  return result;
}
