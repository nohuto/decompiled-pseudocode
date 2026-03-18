/*
 * XREFs of RtlFailFast2 @ 0x140406490
 * Callers:
 *     RtlGuardCheckExceptionHandler @ 0x1402E73C4 (RtlGuardCheckExceptionHandler.c)
 *     RtlGuardCheckLongJumpTarget @ 0x14058DA38 (RtlGuardCheckLongJumpTarget.c)
 * Callees:
 *     <none>
 */

void __fastcall __noreturn RtlFailFast2(unsigned int a1)
{
  __fastfail(a1);
}
