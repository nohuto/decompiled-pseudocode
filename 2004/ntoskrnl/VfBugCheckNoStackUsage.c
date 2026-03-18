/*
 * XREFs of VfBugCheckNoStackUsage @ 0x14059C4D8
 * Callers:
 *     IovCallDriver @ 0x1409C1CA4 (IovCallDriver.c)
 *     IovpCallDriverWithStackBuffer @ 0x1409C24E4 (IovpCallDriverWithStackBuffer.c)
 *     VfAfterCallDriver @ 0x1409CDE74 (VfAfterCallDriver.c)
 *     VfBeforeCallDriver @ 0x1409CE068 (VfBeforeCallDriver.c)
 * Callees:
 *     KeBugCheckEx @ 0x1403F70D0 (KeBugCheckEx.c)
 */

void __noreturn VfBugCheckNoStackUsage()
{
  KeBugCheckEx(VfBugcheckTmpData, BugCheckParameter1, qword_140D48038, xmmword_140D48040, *(&xmmword_140D48040 + 1));
}
