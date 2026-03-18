/*
 * XREFs of MiFreeExcessSegments @ 0x1402A3B70
 * Callers:
 *     MiChargeCommit @ 0x14021A460 (MiChargeCommit.c)
 *     MmResourcesAvailable @ 0x140252360 (MmResourcesAvailable.c)
 *     MiCheckControlArea @ 0x1402A38D0 (MiCheckControlArea.c)
 *     MiCountSystemPool @ 0x1402B1B40 (MiCountSystemPool.c)
 * Callees:
 *     PsGetNextPartition @ 0x140202C94 (PsGetNextPartition.c)
 *     KeSetEvent @ 0x14024A230 (KeSetEvent.c)
 *     MiShouldTrimUnusedSegments @ 0x140525004 (MiShouldTrimUnusedSegments.c)
 */

unsigned __int64 MiFreeExcessSegments()
{
  unsigned __int64 result; // rax
  void *i; // rbx

  result = 9 * (qword_140C52A28 / 0xAuLL);
  if ( qword_140C529A8 >= result )
  {
    result = MiShouldTrimUnusedSegments();
    if ( (_DWORD)result )
    {
      result = (unsigned __int64)PsGetNextPartition(0LL);
      for ( i = (void *)result; result; i = (void *)result )
      {
        if ( *(_QWORD *)(*(_QWORD *)i + 1696LL) )
          KeSetEvent((PRKEVENT)(*(_QWORD *)i + 1400LL), 0, 0);
        result = (unsigned __int64)PsGetNextPartition(i);
      }
    }
  }
  return result;
}
