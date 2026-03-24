/*
 * XREFs of MiFreeExcessSegments @ 0x140314D50
 * Callers:
 *     MiChargeCommit @ 0x14021AAD0 (MiChargeCommit.c)
 *     MiCountSystemPool @ 0x14030B920 (MiCountSystemPool.c)
 *     MiCheckControlArea @ 0x140314AB0 (MiCheckControlArea.c)
 *     MmResourcesAvailable @ 0x14033E660 (MmResourcesAvailable.c)
 * Callees:
 *     PsGetNextPartition @ 0x1402ABF88 (PsGetNextPartition.c)
 *     KeSetEvent @ 0x1403435A0 (KeSetEvent.c)
 *     MiShouldTrimUnusedSegments @ 0x14052AB24 (MiShouldTrimUnusedSegments.c)
 */

unsigned __int64 MiFreeExcessSegments()
{
  unsigned __int64 result; // rax
  void *i; // rbx

  result = 9 * (qword_140C52B28 / 0xAuLL);
  if ( qword_140C52AA8 >= result )
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
