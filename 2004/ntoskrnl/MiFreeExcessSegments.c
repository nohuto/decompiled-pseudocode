/*
 * XREFs of MiFreeExcessSegments @ 0x14024AB40
 * Callers:
 *     MiCheckControlArea @ 0x14024A8A0 (MiCheckControlArea.c)
 *     MiCountSystemPool @ 0x140258B10 (MiCountSystemPool.c)
 *     MmResourcesAvailable @ 0x14028EC00 (MmResourcesAvailable.c)
 *     MiChargeCommit @ 0x1402ACF70 (MiChargeCommit.c)
 * Callees:
 *     KeSetEvent @ 0x140286AD0 (KeSetEvent.c)
 *     PsGetNextPartition @ 0x140343D04 (PsGetNextPartition.c)
 *     MiShouldTrimUnusedSegments @ 0x140525654 (MiShouldTrimUnusedSegments.c)
 */

unsigned __int64 MiFreeExcessSegments()
{
  unsigned __int64 result; // rax
  unsigned __int64 i; // rbx

  result = 9 * (qword_140C52928 / 0xAuLL);
  if ( qword_140C528A8 >= result )
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
