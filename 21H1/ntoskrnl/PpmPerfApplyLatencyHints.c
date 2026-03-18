/*
 * XREFs of PpmPerfApplyLatencyHints @ 0x140305880
 * Callers:
 *     <none>
 * Callees:
 *     PpmPerfApplyLatencyHint @ 0x140379854 (PpmPerfApplyLatencyHint.c)
 */

char PpmPerfApplyLatencyHints()
{
  __int64 i; // rbx
  unsigned int j; // edi

  if ( PpmCheckLatencyBoostActive )
  {
    for ( i = PpmPerfDomainHead; (__int64 *)i != &PpmPerfDomainHead; i = *(_QWORD *)i )
    {
      for ( j = 0; j < *(_DWORD *)(i + 200); ++j )
      {
        if ( *(_QWORD *)(136LL * j + *(_QWORD *)(i + 216)) )
          PpmPerfApplyLatencyHint();
      }
    }
  }
  return 1;
}
