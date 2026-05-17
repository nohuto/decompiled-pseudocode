/*
 * XREFs of _RtlStringCbCopyW@12 @ 0x4B2D5C0F
 * Callers:
 *     _RtlpGetNameFromLangInfoNode@12 @ 0x4B2AC660 (_RtlpGetNameFromLangInfoNode@12.c)
 *     _RtlGetVersion@4 @ 0x4B2AFEF0 (_RtlGetVersion@4.c)
 *     _SwitchedRtlGetVersion@4 @ 0x4B2B0445 (_SwitchedRtlGetVersion@4.c)
 *     _RtlLCIDToCultureName@8 @ 0x4B2D4F10 (_RtlLCIDToCultureName@8.c)
 *     _RtlCreateTagHeap@16 @ 0x4B2EA550 (_RtlCreateTagHeap@16.c)
 *     _RtlQueryProcessHeapInformation@4 @ 0x4B336F80 (_RtlQueryProcessHeapInformation@4.c)
 * Callees:
 *     RtlStringCopyWorkerW_0 @ 0x4B2D5C38 (RtlStringCopyWorkerW_0.c)
 */

int __fastcall RtlStringCbCopyW(int a1, unsigned int a2, int a3)
{
  unsigned int v3; // edx
  int result; // eax

  v3 = a2 >> 1;
  result = v3 != 0 ? 0 : -1073741811;
  if ( v3 )
    return RtlStringCopyWorkerW_0(a1, a3, a1);
  return result;
}
