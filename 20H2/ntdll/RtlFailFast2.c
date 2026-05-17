/*
 * XREFs of RtlFailFast2 @ 0x1800A23C0
 * Callers:
 *     RtlGuardCheckLongJumpTarget @ 0x18006DEC0 (RtlGuardCheckLongJumpTarget.c)
 *     RtlGuardCheckExceptionHandler @ 0x18006DFF0 (RtlGuardCheckExceptionHandler.c)
 *     RtlpHandleInvalidUserCallTarget @ 0x1800FDAB0 (RtlpHandleInvalidUserCallTarget.c)
 * Callees:
 *     <none>
 */

void __fastcall __noreturn RtlFailFast2(unsigned int a1)
{
  __fastfail(a1);
}
