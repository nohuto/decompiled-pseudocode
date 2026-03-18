/*
 * XREFs of PrintIndent @ 0x1C0067C48
 * Callers:
 *     ParsePackage @ 0x1C0012D00 (ParsePackage.c)
 *     ParseTerm @ 0x1C0013680 (ParseTerm.c)
 *     ParseScope @ 0x1C0014A90 (ParseScope.c)
 *     ParseField @ 0x1C0015980 (ParseField.c)
 *     ParseFieldList @ 0x1C0015C40 (ParseFieldList.c)
 * Callees:
 *     ConPrintf @ 0x1C00290CC (ConPrintf.c)
 */

ULONG __fastcall PrintIndent(__int64 a1)
{
  ULONG result; // eax
  int i; // ebx

  result = ConPrintf("\n%I64x: ", *(_QWORD *)(a1 + 120));
  for ( i = 0; i < dword_1C00819C4; ++i )
    result = ConPrintf("| ");
  return result;
}
