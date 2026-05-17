/*
 * XREFs of _RtlpHpTagContextFindFreeTag@4 @ 0x4B36FF0B
 * Callers:
 *     _RtlpHpTagContextAllocateTag@16 @ 0x4B36FD50 (_RtlpHpTagContextAllocateTag@16.c)
 * Callees:
 *     <none>
 */

int RtlpHpTagContextFindFreeTag()
{
  int result; // eax
  bool v1; // zf

  if ( word_4B3A46B6 == 1024 )
    return 0;
  LOWORD(result) = word_4B3A46B4;
  do
  {
    if ( (_WORD)result == 1024 )
      LOWORD(result) = 0;
    v1 = *(_DWORD *)(dword_4B3A46B0 + 4 * (unsigned __int16)result) == 0;
    result = (unsigned __int16)(result + 1);
  }
  while ( !v1 );
  return result;
}
