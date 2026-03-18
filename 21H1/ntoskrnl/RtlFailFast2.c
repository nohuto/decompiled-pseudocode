/*
 * XREFs of RtlFailFast2 @ 0x1403FEE00
 * Callers:
 *     RtlGuardCheckExceptionHandler @ 0x14032BAD0 (RtlGuardCheckExceptionHandler.c)
 *     RtlGuardCheckLongJumpTarget @ 0x140589918 (RtlGuardCheckLongJumpTarget.c)
 * Callees:
 *     <none>
 */

void __fastcall __noreturn RtlFailFast2(unsigned int a1)
{
  __fastfail(a1);
}
