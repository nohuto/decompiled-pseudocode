/*
 * XREFs of ?SafeIntOnOverflow@SafeIntErrorPolicy_SafeIntException@utilities@msl@@SAXXZ @ 0x1800F51B4
 * Callers:
 *     ??F?$SafeInt@KUSafeIntErrorPolicy_SafeIntException@utilities@msl@@@utilities@msl@@QEAA?AV012@H@Z @ 0x1800F4D10 (--F-$SafeInt@KUSafeIntErrorPolicy_SafeIntException@utilities@msl@@@utilities@msl@@QEAA-AV012@H@Z.c)
 * Callees:
 *     _CxxThrowException_0 @ 0x18003C946 (_CxxThrowException_0.c)
 */

void __noreturn msl::utilities::SafeIntErrorPolicy_SafeIntException::SafeIntOnOverflow(void)
{
  int pExceptionObject; // [rsp+30h] [rbp+8h] BYREF

  pExceptionObject = 1;
  throw (msl::utilities::SafeIntException *)&pExceptionObject;
}
