/*
 * XREFs of PopPowerAggregatorIsAtTargetState @ 0x140762524
 * Callers:
 *     PopPowerAggregatorHandleIntentUnsafe @ 0x140761F74 (PopPowerAggregatorHandleIntentUnsafe.c)
 * Callees:
 *     <none>
 */

bool PopPowerAggregatorIsAtTargetState()
{
  char v0; // dl

  v0 = 0;
  if ( !(_DWORD)xmmword_140C21778 )
    return (xmmword_140C217A8 & 0xFFFFFFFD) == 0;
  if ( (_DWORD)xmmword_140C21778 != 1 )
  {
    if ( (_DWORD)xmmword_140C21778 != 2 )
    {
      if ( (_DWORD)xmmword_140C21778 == 3 )
        return (_DWORD)xmmword_140C217A8 == 5;
      return v0;
    }
    return (xmmword_140C217A8 & 0xFFFFFFFD) == 0;
  }
  if ( (_DWORD)xmmword_140C217A8 == 1 )
    return *((_QWORD *)&xmmword_140C217A8 + 1) == *(_QWORD *)ymmword_140C21788.m256_f32;
  return v0;
}
