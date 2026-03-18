/*
 * XREFs of RtlpControlFlowGuardEnforced @ 0x14032BBB8
 * Callers:
 *     RtlGuardCheckExceptionHandler @ 0x14032BAD0 (RtlGuardCheckExceptionHandler.c)
 *     RtlGuardCheckLongJumpTarget @ 0x140589918 (RtlGuardCheckLongJumpTarget.c)
 * Callees:
 *     VslGetNestedPageProtectionFlags @ 0x14032BBE0 (VslGetNestedPageProtectionFlags.c)
 */

__int64 RtlpControlFlowGuardEnforced()
{
  return ((unsigned int)VslGetNestedPageProtectionFlags() >> 7) & 1;
}
