/*
 * XREFs of ExPreInitializeNls @ 0x140659DD0
 * Callers:
 *     InitBootProcessor @ 0x140AFB264 (InitBootProcessor.c)
 * Callees:
 *     <none>
 */

__int64 ExPreInitializeNls()
{
  if ( InitNlsTableBase )
  {
    _InterlockedExchange64(&qword_140D32A50, InitNlsTableBase + 4);
    _InterlockedExchange64(&qword_140D32A58, InitNlsTableBase + 2 * (*(unsigned __int16 *)(InitNlsTableBase + 2) + 2LL));
    qword_140D32A48 = InitNlsTableBase;
  }
  return 0LL;
}
