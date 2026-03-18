/*
 * XREFs of ACPIAnsiStringToWideHelper @ 0x1C001D258
 * Callers:
 *     ACPIGetConvertToPnpIDWide @ 0x1C001C5D8 (ACPIGetConvertToPnpIDWide.c)
 *     ACPIGetConvertToDeviceIDWide @ 0x1C001D038 (ACPIGetConvertToDeviceIDWide.c)
 *     ACPIGetConvertToHardwareIDWide @ 0x1C001D6EC (ACPIGetConvertToHardwareIDWide.c)
 *     ACPIGetConvertToInstanceIDWide @ 0x1C001D9C0 (ACPIGetConvertToInstanceIDWide.c)
 *     ACPIGetConvertToStringWideWithPrepend @ 0x1C001DD7C (ACPIGetConvertToStringWideWithPrepend.c)
 *     ACPIGetConvertToCompatibleIDWide @ 0x1C001DFB4 (ACPIGetConvertToCompatibleIDWide.c)
 *     ACPIGetProcessorIDWide @ 0x1C001E2B0 (ACPIGetProcessorIDWide.c)
 *     ACPIGetConvertToStringWide @ 0x1C0056314 (ACPIGetConvertToStringWide.c)
 *     ACPIDeviceIdMutiStringMatchCallback @ 0x1C0056650 (ACPIDeviceIdMutiStringMatchCallback.c)
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
