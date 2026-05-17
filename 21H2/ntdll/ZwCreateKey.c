/*
 * XREFs of ZwCreateKey @ 0x18009D9E0
 * Callers:
 *     RtlpGetRegistryHandle @ 0x18004591C (RtlpGetRegistryHandle.c)
 *     RtlpOpenImageFileOptionsKeyEx @ 0x18007630C (RtlpOpenImageFileOptionsKeyEx.c)
 *     RtlpOpenBaseImageFileOptionsKeyEx @ 0x1800764C8 (RtlpOpenBaseImageFileOptionsKeyEx.c)
 *     RXactpOpenTargetKey @ 0x18008ACB4 (RXactpOpenTargetKey.c)
 *     RtlInitializeRXact @ 0x18008BB70 (RtlInitializeRXact.c)
 *     RtlpCreateIFEOKeyFilterKey @ 0x1800E373C (RtlpCreateIFEOKeyFilterKey.c)
 *     RtlpSetMachineUILanguagesImmediate @ 0x1800F10A8 (RtlpSetMachineUILanguagesImmediate.c)
 *     RtlpSetPreferredUILanguages @ 0x1800F1270 (RtlpSetPreferredUILanguages.c)
 *     RtlpNtCreateKey @ 0x180107D90 (RtlpNtCreateKey.c)
 * Callees:
 *     <none>
 */

__int64 ZwCreateKey()
{
  __int64 result; // rax

  result = 29LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
