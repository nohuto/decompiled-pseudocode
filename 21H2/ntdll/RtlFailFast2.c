/*
 * XREFs of RtlFailFast2 @ 0x1800A2980
 * Callers:
 *     RtlGuardCheckLongJumpTarget @ 0x18006EEF0 (RtlGuardCheckLongJumpTarget.c)
 *     RtlGuardCheckExceptionHandler @ 0x18006F020 (RtlGuardCheckExceptionHandler.c)
 *     RtlpHandleInvalidUserCallTarget @ 0x1800FD910 (RtlpHandleInvalidUserCallTarget.c)
 * Callees:
 *     <none>
 */

void __fastcall __noreturn RtlFailFast2(unsigned int a1)
{
  __fastfail(a1);
}
