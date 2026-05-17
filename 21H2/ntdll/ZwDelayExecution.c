/*
 * XREFs of ZwDelayExecution @ 0x18009DCC0
 * Callers:
 *     LdrpInitializeThread @ 0x180017738 (LdrpInitializeThread.c)
 *     LdrpInitMuiCrits @ 0x180033B68 (LdrpInitMuiCrits.c)
 *     EtwpWaitForBufferReferenceCount @ 0x18004CC38 (EtwpWaitForBufferReferenceCount.c)
 *     EtwpFreeLoggerContext @ 0x18004F614 (EtwpFreeLoggerContext.c)
 *     RtlpInitMuiCriticalSection @ 0x1800709D8 (RtlpInitMuiCriticalSection.c)
 *     _LdrpInitialize @ 0x180075CBC (_LdrpInitialize.c)
 *     InitSecurityCookie @ 0x1800D0534 (InitSecurityCookie.c)
 *     GetShipAssertBuffer @ 0x1800DDDD4 (GetShipAssertBuffer.c)
 *     RtlLockHeapManagerForCloning @ 0x1800F2894 (RtlLockHeapManagerForCloning.c)
 * Callees:
 *     <none>
 */

__int64 ZwDelayExecution()
{
  __int64 result; // rax

  result = 52LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
