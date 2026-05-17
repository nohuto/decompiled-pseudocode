/*
 * XREFs of RtlFailFast2 @ 0x1800A2120
 * Callers:
 *     RtlGuardCheckLongJumpTarget @ 0x18006DDB0 (RtlGuardCheckLongJumpTarget.c)
 *     RtlGuardCheckExceptionHandler @ 0x18006DEE0 (RtlGuardCheckExceptionHandler.c)
 *     RtlpHandleInvalidUserCallTarget @ 0x1800FD5A0 (RtlpHandleInvalidUserCallTarget.c)
 * Callees:
 *     <none>
 */

void __fastcall __noreturn RtlFailFast2(unsigned int a1)
{
  __fastfail(a1);
}
