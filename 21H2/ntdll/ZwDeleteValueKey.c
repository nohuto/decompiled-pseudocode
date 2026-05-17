/*
 * XREFs of ZwDeleteValueKey @ 0x18009F110
 * Callers:
 *     RtlpQueryRegistryValues @ 0x180045B3C (RtlpQueryRegistryValues.c)
 *     RtlInitializeRXact @ 0x18008BB70 (RtlInitializeRXact.c)
 *     RtlDeleteRegistryValue @ 0x18008C530 (RtlDeleteRegistryValue.c)
 *     RtlSetImageMitigationPolicy @ 0x1800E2620 (RtlSetImageMitigationPolicy.c)
 *     RtlApplyRXact @ 0x1800E63E0 (RtlApplyRXact.c)
 *     RtlpSetInstallLanguage @ 0x1800F0BC0 (RtlpSetInstallLanguage.c)
 * Callees:
 *     <none>
 */

__int64 ZwDeleteValueKey()
{
  __int64 result; // rax

  result = 215LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
