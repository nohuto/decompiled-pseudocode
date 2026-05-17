/*
 * XREFs of @RtlFailFast2@8 @ 0x4B308720
 * Callers:
 *     @RtlpHandleInvalidUserCallTarget@4 @ 0x4B3638A5 (@RtlpHandleInvalidUserCallTarget@4.c)
 *     _RtlGuardCheckLongJumpTarget@12 @ 0x4B3639C0 (_RtlGuardCheckLongJumpTarget@12.c)
 * Callees:
 *     <none>
 */

void __thiscall __noreturn RtlFailFast2(void *this)
{
  __fastfail((unsigned int)this);
}
