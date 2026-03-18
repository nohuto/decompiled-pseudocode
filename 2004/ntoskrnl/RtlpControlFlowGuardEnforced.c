/*
 * XREFs of RtlpControlFlowGuardEnforced @ 0x1402E6A7C
 * Callers:
 *     RtlGuardCheckExceptionHandler @ 0x1402E69A0 (RtlGuardCheckExceptionHandler.c)
 *     RtlGuardCheckLongJumpTarget @ 0x14058A008 (RtlGuardCheckLongJumpTarget.c)
 * Callees:
 *     VslGetNestedPageProtectionFlags @ 0x1402E6AA0 (VslGetNestedPageProtectionFlags.c)
 */

__int64 RtlpControlFlowGuardEnforced()
{
  return ((unsigned int)VslGetNestedPageProtectionFlags() >> 7) & 1;
}
