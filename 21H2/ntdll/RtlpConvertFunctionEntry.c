/*
 * XREFs of RtlpConvertFunctionEntry @ 0x180077EB0
 * Callers:
 *     RtlLookupFunctionEntry @ 0x180032BE0 (RtlLookupFunctionEntry.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlpConvertFunctionEntry(__int64 a1, __int64 a2)
{
  __int64 v2; // rax

  if ( a1 )
  {
    v2 = *(unsigned int *)(a1 + 8);
    if ( (v2 & 1) != 0 )
      return v2 + a2 - 1;
  }
  return a1;
}
