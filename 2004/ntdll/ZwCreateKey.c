/*
 * XREFs of ZwCreateKey @ 0x18009D1B0
 * Callers:
 *     RtlpGetRegistryHandle @ 0x18004590C (RtlpGetRegistryHandle.c)
 *     RtlpOpenImageFileOptionsKeyEx @ 0x1800751DC (RtlpOpenImageFileOptionsKeyEx.c)
 *     RtlpOpenBaseImageFileOptionsKeyEx @ 0x180075398 (RtlpOpenBaseImageFileOptionsKeyEx.c)
 *     RXactpOpenTargetKey @ 0x18008A5B4 (RXactpOpenTargetKey.c)
 *     RtlInitializeRXact @ 0x18008B470 (RtlInitializeRXact.c)
 *     RtlpCreateIFEOKeyFilterKey @ 0x1800E345C (RtlpCreateIFEOKeyFilterKey.c)
 *     RtlpSetMachineUILanguagesImmediate @ 0x1800F0D08 (RtlpSetMachineUILanguagesImmediate.c)
 *     RtlpSetPreferredUILanguages @ 0x1800F0ED0 (RtlpSetPreferredUILanguages.c)
 *     RtlpNtCreateKey @ 0x1801079E0 (RtlpNtCreateKey.c)
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
