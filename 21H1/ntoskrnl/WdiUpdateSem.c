/*
 * XREFs of WdiUpdateSem @ 0x14059FA30
 * Callers:
 *     NtTraceControl @ 0x1405F56E0 (NtTraceControl.c)
 * Callees:
 *     WdipAccessCheck @ 0x14059FA50 (WdipAccessCheck.c)
 *     WdipSemUpdate @ 0x14092B2A4 (WdipSemUpdate.c)
 */

__int64 WdiUpdateSem()
{
  __int64 result; // rax

  result = WdipAccessCheck();
  if ( (int)result >= 0 )
    return WdipSemUpdate();
  return result;
}
