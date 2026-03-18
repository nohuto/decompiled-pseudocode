/*
 * XREFs of WdiUpdateSem @ 0x1405A0120
 * Callers:
 *     NtTraceControl @ 0x14068D910 (NtTraceControl.c)
 * Callees:
 *     WdipAccessCheck @ 0x1405A0140 (WdipAccessCheck.c)
 *     WdipSemUpdate @ 0x14092C554 (WdipSemUpdate.c)
 */

__int64 WdiUpdateSem()
{
  __int64 result; // rax

  result = WdipAccessCheck();
  if ( (int)result >= 0 )
    return WdipSemUpdate();
  return result;
}
