/*
 * XREFs of MiIoSpaceIsConstant @ 0x1402166A4
 * Callers:
 *     MiLookupIoPageNode @ 0x1402137E4 (MiLookupIoPageNode.c)
 *     MiIoSpaceRunIsConstant @ 0x140215D78 (MiIoSpaceRunIsConstant.c)
 *     MiReferenceIoPages @ 0x140215E54 (MiReferenceIoPages.c)
 *     MiMapContiguousMemoryLarge @ 0x1403C6E24 (MiMapContiguousMemoryLarge.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall MiIoSpaceIsConstant(unsigned __int64 a1, __int64 a2)
{
  _QWORD *result; // rax

  result = (_QWORD *)qword_140C53158;
  while ( result )
  {
    if ( a1 + a2 - 1 < result[3] )
    {
      result = (_QWORD *)*result;
    }
    else
    {
      if ( a1 <= result[4] )
        return result;
      result = (_QWORD *)result[1];
    }
  }
  return 0LL;
}
