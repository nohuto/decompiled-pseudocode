/*
 * XREFs of MiFreeExcessSegments @ 0x14031FAA0
 * Callers:
 *     MiChargeCommit @ 0x1402BF3D0 (MiChargeCommit.c)
 *     MiCountSystemPool @ 0x140316670 (MiCountSystemPool.c)
 *     MiCheckControlArea @ 0x14031F800 (MiCheckControlArea.c)
 *     MmResourcesAvailable @ 0x1403493B0 (MmResourcesAvailable.c)
 * Callees:
 *     PsGetNextPartition @ 0x140250E68 (PsGetNextPartition.c)
 *     KeSetEvent @ 0x14034E2F0 (KeSetEvent.c)
 *     MiShouldTrimUnusedSegments @ 0x14052AD64 (MiShouldTrimUnusedSegments.c)
 */

unsigned __int64 MiFreeExcessSegments()
{
  unsigned __int64 result; // rax
  void *i; // rbx

  result = 9 * (qword_140C52B68 / 0xAuLL);
  if ( qword_140C52AE8 >= result )
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
