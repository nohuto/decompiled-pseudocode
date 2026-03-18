/*
 * XREFs of PopPowerAggregatorIsAtTargetState @ 0x140772414
 * Callers:
 *     PopPowerAggregatorHandleIntentUnsafe @ 0x140771E64 (PopPowerAggregatorHandleIntentUnsafe.c)
 * Callees:
 *     <none>
 */

bool PopPowerAggregatorIsAtTargetState()
{
  char v0; // dl

  v0 = 0;
  if ( !(_DWORD)xmmword_140C21658 )
    return (xmmword_140C21688 & 0xFFFFFFFD) == 0;
  if ( (_DWORD)xmmword_140C21658 != 1 )
  {
    if ( (_DWORD)xmmword_140C21658 != 2 )
    {
      if ( (_DWORD)xmmword_140C21658 == 3 )
        return (_DWORD)xmmword_140C21688 == 5;
      return v0;
    }
    return (xmmword_140C21688 & 0xFFFFFFFD) == 0;
  }
  if ( (_DWORD)xmmword_140C21688 == 1 )
    return *((_QWORD *)&xmmword_140C21688 + 1) == *(_QWORD *)ymmword_140C21668.m256_f32;
  return v0;
}
