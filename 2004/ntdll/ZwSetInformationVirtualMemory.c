/*
 * XREFs of ZwSetInformationVirtualMemory @ 0x1800A01C0
 * Callers:
 *     RtlpGuardGrantSuppressedCallAccess @ 0x1800475A8 (RtlpGuardGrantSuppressedCallAccess.c)
 *     LdrpInitializeNode @ 0x18006C014 (LdrpInitializeNode.c)
 *     LdrpInitializeProcess @ 0x1800D1D20 (LdrpInitializeProcess.c)
 * Callees:
 *     <none>
 */

__int64 ZwSetInformationVirtualMemory()
{
  __int64 result; // rax

  result = 414LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
