/*
 * XREFs of PpvUtilTestStartedPdoStack @ 0x14036DAF8
 * Callers:
 *     PipProcessStartPhase3 @ 0x140739750 (PipProcessStartPhase3.c)
 * Callees:
 *     VfMajorTestStartedPdoStack @ 0x1409DAC04 (VfMajorTestStartedPdoStack.c)
 */

__int64 PpvUtilTestStartedPdoStack()
{
  __int64 result; // rax

  if ( PpvUtilVerifierEnabled )
    return VfMajorTestStartedPdoStack();
  return result;
}
