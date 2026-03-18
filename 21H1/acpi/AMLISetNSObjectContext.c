/*
 * XREFs of AMLISetNSObjectContext @ 0x1C00023C0
 * Callers:
 *     ACPIRootInitialize @ 0x1C0097C9C (ACPIRootInitialize.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall AMLISetNSObjectContext(__int64 *a1, __int64 a2)
{
  __int64 result; // rax

  result = *a1;
  *(_QWORD *)(*a1 + 104) = a2;
  return result;
}
