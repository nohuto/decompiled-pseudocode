/*
 * XREFs of PrintIndent @ 0x1C0066760
 * Callers:
 *     ParseTerm @ 0x1C00070C0 (ParseTerm.c)
 *     ParseScope @ 0x1C00084D0 (ParseScope.c)
 *     ParseFieldList @ 0x1C00219D8 (ParseFieldList.c)
 *     ParseField @ 0x1C0021AD0 (ParseField.c)
 *     ParsePackage @ 0x1C0021EA0 (ParsePackage.c)
 * Callees:
 *     ConPrintf @ 0x1C0065BD0 (ConPrintf.c)
 */

ULONG __fastcall PrintIndent(__int64 a1)
{
  ULONG result; // eax
  int i; // ebx

  result = ConPrintf("\n%I64x: ", *(_QWORD *)(a1 + 120));
  for ( i = 0; i < dword_1C0082804; ++i )
    result = ConPrintf("| ");
  return result;
}
