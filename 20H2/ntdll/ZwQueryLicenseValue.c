/*
 * XREFs of ZwQueryLicenseValue @ 0x18009FB00
 * Callers:
 *     SwitchedRtlGetVersion @ 0x18003C9CC (SwitchedRtlGetVersion.c)
 *     RtlGetVersion @ 0x18003E520 (RtlGetVersion.c)
 *     RtlpGetDeviceFamilyInfoEnum @ 0x18003F8A0 (RtlpGetDeviceFamilyInfoEnum.c)
 *     RtlpGetPolicyValueForSystemCapability @ 0x1800793F8 (RtlpGetPolicyValueForSystemCapability.c)
 *     RtlGetProductInfo @ 0x18007DE30 (RtlGetProductInfo.c)
 *     RtlpGetWindowsPolicy @ 0x180103D24 (RtlpGetWindowsPolicy.c)
 * Callees:
 *     <none>
 */

__int64 ZwQueryLicenseValue()
{
  __int64 result; // rax

  result = 339LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
