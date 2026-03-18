/*
 * XREFs of RtlEnoughStackSpaceForStackCapture @ 0x140580954
 * Callers:
 *     IovpLogStackTrace @ 0x1409C2968 (IovpLogStackTrace.c)
 *     ViPoolLogStackTrace @ 0x1409DD388 (ViPoolLogStackTrace.c)
 * Callees:
 *     RtlpGetStackLimits @ 0x14029AE20 (RtlpGetStackLimits.c)
 *     KeGetCurrentStackPointer @ 0x1403F77B0 (KeGetCurrentStackPointer.c)
 */

__int64 RtlEnoughStackSpaceForStackCapture()
{
  unsigned int v0; // ebx
  __int64 v2; // [rsp+30h] [rbp+8h] BYREF
  __int64 v3; // [rsp+38h] [rbp+10h] BYREF

  v0 = 0;
  v3 = 0LL;
  v2 = 0LL;
  if ( !(unsigned __int8)RtlpGetStackLimits((__int64)&v2, (__int64)&v3) )
    return 0LL;
  LOBYTE(v0) = (unsigned __int64)&KeGetCurrentStackPointer()[-v2] >= 0xE30;
  return v0;
}
