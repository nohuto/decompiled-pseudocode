/*
 * XREFs of ACPIAnsiStringToWideHelper @ 0x1C000C604
 * Callers:
 *     ACPIGetConvertToHardwareIDWide @ 0x1C000C34C (ACPIGetConvertToHardwareIDWide.c)
 *     ACPIGetProcessorIDWide @ 0x1C0027480 (ACPIGetProcessorIDWide.c)
 *     ACPIGetConvertToCompatibleIDWide @ 0x1C0027AF8 (ACPIGetConvertToCompatibleIDWide.c)
 *     ACPIGetConvertToPnpIDWide @ 0x1C0027F80 (ACPIGetConvertToPnpIDWide.c)
 *     ACPIGetConvertToDeviceIDWide @ 0x1C0028108 (ACPIGetConvertToDeviceIDWide.c)
 *     ACPIGetConvertToInstanceIDWide @ 0x1C002840C (ACPIGetConvertToInstanceIDWide.c)
 *     ACPIGetConvertToStringWide @ 0x1C0055AB8 (ACPIGetConvertToStringWide.c)
 *     ACPIGetConvertToStringWideWithPrepend @ 0x1C0055BAC (ACPIGetConvertToStringWideWithPrepend.c)
 *     ACPIDeviceIdMutiStringMatchCallback @ 0x1C0055F80 (ACPIDeviceIdMutiStringMatchCallback.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ACPIAnsiStringToWideHelper(_WORD *a1, unsigned __int64 a2)
{
  unsigned __int64 i; // rdx
  __int64 result; // rax

  if ( a1 && a2 > 2 )
  {
    for ( i = a2 >> 1; --i; a1[i] = *((char *)a1 + i) )
      ;
    result = (unsigned int)*(char *)a1;
    *a1 = *(char *)a1;
  }
  return result;
}
