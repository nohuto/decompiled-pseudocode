/*
 * XREFs of RtlpFcSectionTypeToBufferType @ 0x18011A15C
 * Callers:
 *     RtlpFcUpdateLocalConfiguration @ 0x18005C7DC (RtlpFcUpdateLocalConfiguration.c)
 *     RtlpFcMapBuffers @ 0x18005C9B0 (RtlpFcMapBuffers.c)
 * Callees:
 *     __security_check_cookie @ 0x18008C240 (__security_check_cookie.c)
 */

__int64 __fastcall RtlpFcSectionTypeToBufferType(int a1)
{
  _DWORD v2[4]; // [rsp+0h] [rbp-28h]

  v2[0] = 0;
  v2[1] = 1;
  v2[2] = 2;
  return (unsigned int)v2[a1];
}
