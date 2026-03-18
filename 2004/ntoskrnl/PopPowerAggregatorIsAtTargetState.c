/*
 * XREFs of PopPowerAggregatorIsAtTargetState @ 0x140763E04
 * Callers:
 *     PopPowerAggregatorHandleIntentUnsafe @ 0x140763854 (PopPowerAggregatorHandleIntentUnsafe.c)
 * Callees:
 *     <none>
 */

bool PopPowerAggregatorIsAtTargetState()
{
  char v0; // dl

  v0 = 0;
  if ( !(_DWORD)xmmword_140C21538 )
    return (xmmword_140C21568 & 0xFFFFFFFD) == 0;
  if ( (_DWORD)xmmword_140C21538 != 1 )
  {
    if ( (_DWORD)xmmword_140C21538 != 2 )
    {
      if ( (_DWORD)xmmword_140C21538 == 3 )
        return (_DWORD)xmmword_140C21568 == 5;
      return v0;
    }
    return (xmmword_140C21568 & 0xFFFFFFFD) == 0;
  }
  if ( (_DWORD)xmmword_140C21568 == 1 )
    return *((_QWORD *)&xmmword_140C21568 + 1) == *(_QWORD *)ymmword_140C21548.m256_f32;
  return v0;
}
