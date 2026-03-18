/*
 * XREFs of DDCCICleanUpWrap @ 0x1C0129A60
 * Callers:
 *     <none>
 * Callees:
 *     ??_GCMonitorAPI@@QEAAPEAXI@Z @ 0x1C0129A8C (--_GCMonitorAPI@@QEAAPEAXI@Z.c)
 */

void *__fastcall DDCCICleanUpWrap(__int64 a1, unsigned int a2)
{
  void *result; // rax

  if ( qword_1C033B048 )
    result = CMonitorAPI::`scalar deleting destructor'(qword_1C033B048, a2);
  qword_1C033B048 = 0LL;
  return result;
}
