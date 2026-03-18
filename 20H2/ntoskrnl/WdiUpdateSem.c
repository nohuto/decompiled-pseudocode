/*
 * XREFs of WdiUpdateSem @ 0x1405A3BC0
 * Callers:
 *     NtTraceControl @ 0x140620910 (NtTraceControl.c)
 * Callees:
 *     WdipAccessCheck @ 0x1405A3BE0 (WdipAccessCheck.c)
 *     WdipSemUpdate @ 0x140932384 (WdipSemUpdate.c)
 */

__int64 WdiUpdateSem()
{
  __int64 result; // rax

  result = WdipAccessCheck();
  if ( (int)result >= 0 )
    return WdipSemUpdate();
  return result;
}
