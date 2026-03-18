/*
 * XREFs of VfBugCheckNoStackUsage @ 0x14059FF78
 * Callers:
 *     IovCallDriver @ 0x1409C7CC4 (IovCallDriver.c)
 *     IovpCallDriverWithStackBuffer @ 0x1409C8504 (IovpCallDriverWithStackBuffer.c)
 *     VfAfterCallDriver @ 0x1409D3E94 (VfAfterCallDriver.c)
 *     VfBeforeCallDriver @ 0x1409D4088 (VfBeforeCallDriver.c)
 * Callees:
 *     KeBugCheckEx @ 0x1403FBCA0 (KeBugCheckEx.c)
 */

void __noreturn VfBugCheckNoStackUsage()
{
  KeBugCheckEx(VfBugcheckTmpData, BugCheckParameter1, qword_140D4A038, xmmword_140D4A040, *(&xmmword_140D4A040 + 1));
}
