/*
 * XREFs of MiFreeExcessSegments @ 0x1402878F0
 * Callers:
 *     MiCheckControlArea @ 0x140287660 (MiCheckControlArea.c)
 *     MiChargeCommit @ 0x14032A4B0 (MiChargeCommit.c)
 *     MmResourcesAvailable @ 0x14034BAE0 (MmResourcesAvailable.c)
 *     MiCountSystemPool @ 0x140352D90 (MiCountSystemPool.c)
 * Callees:
 *     PsGetNextPartition @ 0x140236710 (PsGetNextPartition.c)
 *     KeSetEvent @ 0x1402AFD30 (KeSetEvent.c)
 *     MiShouldTrimUnusedSegments @ 0x14058C2E4 (MiShouldTrimUnusedSegments.c)
 */

unsigned __int64 MiFreeExcessSegments()
{
  unsigned __int64 result; // rax
  void *i; // rbx

  result = 9 * (qword_140C593D8 / 0xAuLL);
  if ( qword_140C592E8 >= result )
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
