/*
 * XREFs of ACountMCountHardwareFeedback @ 0x1C00020B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall ACountMCountHardwareFeedback(__int64 a1, char a2, unsigned __int64 *a3, _QWORD *a4)
{
  unsigned __int64 result; // rax

  *a4 = __readmsr(0xE8u);
  result = __readmsr(0xE7u);
  *a3 = result;
  if ( a2 == 1 )
  {
    result = 0LL;
    __writemsr(0xE7u, 0LL);
    __writemsr(0xE8u, 0LL);
  }
  return result;
}
