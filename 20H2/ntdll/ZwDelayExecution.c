/*
 * XREFs of ZwDelayExecution @ 0x18009D730
 * Callers:
 *     LdrpInitializeThread @ 0x180017738 (LdrpInitializeThread.c)
 *     LdrpInitMuiCrits @ 0x180033B68 (LdrpInitMuiCrits.c)
 *     EtwpWaitForBufferReferenceCount @ 0x180055688 (EtwpWaitForBufferReferenceCount.c)
 *     EtwpFreeLoggerContext @ 0x180058314 (EtwpFreeLoggerContext.c)
 *     RtlpInitMuiCriticalSection @ 0x18006F9A8 (RtlpInitMuiCriticalSection.c)
 *     _LdrpInitialize @ 0x180074C8C (_LdrpInitialize.c)
 *     InitSecurityCookie @ 0x1800D0574 (InitSecurityCookie.c)
 *     GetShipAssertBuffer @ 0x1800DE024 (GetShipAssertBuffer.c)
 *     RtlLockHeapManagerForCloning @ 0x1800F2A04 (RtlLockHeapManagerForCloning.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwDelayExecution(BOOLEAN Alertable, PLARGE_INTEGER DelayInterval)
{
  NTSTATUS result; // eax

  result = 52;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
