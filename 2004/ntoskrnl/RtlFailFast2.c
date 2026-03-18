/*
 * XREFs of RtlFailFast2 @ 0x140400090
 * Callers:
 *     RtlGuardCheckExceptionHandler @ 0x1402E69A0 (RtlGuardCheckExceptionHandler.c)
 *     RtlGuardCheckLongJumpTarget @ 0x14058A008 (RtlGuardCheckLongJumpTarget.c)
 * Callees:
 *     <none>
 */

void __fastcall __noreturn RtlFailFast2(unsigned int a1)
{
  __fastfail(a1);
}
