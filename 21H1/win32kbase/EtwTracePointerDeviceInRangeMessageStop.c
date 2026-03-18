/*
 * XREFs of EtwTracePointerDeviceInRangeMessageStop @ 0x1C012E720
 * Callers:
 *     ApiSetPostPointerDeviceInRangeMessage @ 0x1C01D2508 (ApiSetPostPointerDeviceInRangeMessage.c)
 * Callees:
 *     McTemplateK0_EtwWriteTransfer @ 0x1C012F5E0 (McTemplateK0_EtwWriteTransfer.c)
 */

__int64 __fastcall EtwTracePointerDeviceInRangeMessageStop(__int64 a1)
{
  __int64 result; // rax

  if ( (Microsoft_Windows_Win32kEnableBits & 0x4000) != 0 )
    return McTemplateK0_EtwWriteTransfer(a1, &PointerDeviceInRangeMessageStop, &W32kControlGuid);
  return result;
}
