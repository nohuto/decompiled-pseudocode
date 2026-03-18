/*
 * XREFs of RtlpControlFlowGuardEnforced @ 0x1402E74A0
 * Callers:
 *     RtlGuardCheckExceptionHandler @ 0x1402E73C4 (RtlGuardCheckExceptionHandler.c)
 *     RtlGuardCheckLongJumpTarget @ 0x14058DA38 (RtlGuardCheckLongJumpTarget.c)
 * Callees:
 *     VslGetNestedPageProtectionFlags @ 0x1402E74C0 (VslGetNestedPageProtectionFlags.c)
 */

__int64 RtlpControlFlowGuardEnforced()
{
  return ((unsigned int)VslGetNestedPageProtectionFlags() >> 7) & 1;
}
