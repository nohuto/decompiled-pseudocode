/*
 * XREFs of _RtlpFcSectionTypeToBufferType@4 @ 0x4B3A10ED
 * Callers:
 *     _RtlpFcMapBuffers@8 @ 0x4B2E4F70 (_RtlpFcMapBuffers@8.c)
 *     _RtlpFcUpdateLocalConfiguration@16 @ 0x4B2E4FCD (_RtlpFcUpdateLocalConfiguration@16.c)
 * Callees:
 *     @__security_check_cookie@4 @ 0x4B2F4B20 (@__security_check_cookie@4.c)
 */

int __fastcall RtlpFcSectionTypeToBufferType(int a1)
{
  _DWORD v2[3]; // [esp+0h] [ebp-10h]

  v2[0] = 0;
  v2[1] = 1;
  v2[2] = 2;
  return v2[a1];
}
