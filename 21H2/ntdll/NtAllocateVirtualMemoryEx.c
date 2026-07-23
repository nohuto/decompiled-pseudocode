/*
 * XREFs of NtAllocateVirtualMemoryEx @ 0x18009E4B0
 * Callers:
 *     RtlpHpEnvAllocVA @ 0x1800067A0 (RtlpHpEnvAllocVA.c)
 *     RtlpHpAllocVA @ 0x180022BAC (RtlpHpAllocVA.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl NtAllocateVirtualMemoryEx(
        HANDLE ProcessHandle,
        PVOID *BaseAddress,
        PSIZE_T RegionSize,
        ULONG AllocationType,
        ULONG PageProtection,
        PMEM_EXTENDED_PARAMETER ExtendedParameters,
        ULONG ExtendedParameterCount)
{
  NTSTATUS result; // eax

  result = 118;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
