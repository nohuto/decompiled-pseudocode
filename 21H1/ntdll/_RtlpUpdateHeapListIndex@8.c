/*
 * XREFs of _RtlpUpdateHeapListIndex@8 @ 0x4B2AA905
 * Callers:
 *     _RtlpRemoveHeapFromUnprotectedList@4 @ 0x4B2AFAAC (_RtlpRemoveHeapFromUnprotectedList@4.c)
 * Callees:
 *     <none>
 */

__int64 __usercall RtlpUpdateHeapListIndex@<edx:eax>(__int64 result@<edx:eax>, __int16 a2@<cx>)
{
  if ( word_4B3A47C6 == a2 )
    word_4B3A47C6 = WORD2(result);
  if ( HIWORD(dword_4B3A47CC) == a2 )
    HIWORD(dword_4B3A47CC) = WORD2(result);
  if ( HIWORD(dword_4B3A47D4) == a2 )
    HIWORD(dword_4B3A47D4) = WORD2(result);
  return result;
}
