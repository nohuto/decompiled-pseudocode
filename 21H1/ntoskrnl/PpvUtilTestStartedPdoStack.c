/*
 * XREFs of PpvUtilTestStartedPdoStack @ 0x14036BA00
 * Callers:
 *     PipProcessStartPhase3 @ 0x14073045C (PipProcessStartPhase3.c)
 * Callees:
 *     VfMajorTestStartedPdoStack @ 0x1409D4B84 (VfMajorTestStartedPdoStack.c)
 */

__int64 PpvUtilTestStartedPdoStack()
{
  __int64 result; // rax

  if ( PpvUtilVerifierEnabled )
    return VfMajorTestStartedPdoStack();
  return result;
}
