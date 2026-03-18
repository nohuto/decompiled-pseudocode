/*
 * XREFs of VfBugCheckNoStackUsage @ 0x14059BDE8
 * Callers:
 *     IovCallDriver @ 0x1409C1C94 (IovCallDriver.c)
 *     IovpCallDriverWithStackBuffer @ 0x1409C24D4 (IovpCallDriverWithStackBuffer.c)
 *     VfAfterCallDriver @ 0x1409CDE64 (VfAfterCallDriver.c)
 *     VfBeforeCallDriver @ 0x1409CE058 (VfBeforeCallDriver.c)
 * Callees:
 *     KeBugCheckEx @ 0x1403F5E40 (KeBugCheckEx.c)
 */

void __noreturn VfBugCheckNoStackUsage()
{
  KeBugCheckEx(VfBugcheckTmpData, BugCheckParameter1, qword_140D47038, xmmword_140D47040, *(&xmmword_140D47040 + 1));
}
