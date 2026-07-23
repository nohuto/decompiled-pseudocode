/*
 * XREFs of _TppETWPoolClose@4 @ 0x4B384B9B
 * Callers:
 *     _TpReleasePool@4 @ 0x4B2AAE00 (_TpReleasePool@4.c)
 * Callees:
 *     _RtlGetCurrentServiceSessionId@0 @ 0x4B2C3BF0 (_RtlGetCurrentServiceSessionId@0.c)
 *     _NtTraceEvent@16 @ 0x4B2F2F60 (_NtTraceEvent@16.c)
 *     @__security_check_cookie@4 @ 0x4B2F4B20 (@__security_check_cookie@4.c)
 */

NTSTATUS __thiscall TppETWPoolClose(void *this)
{
  int v1; // eax
  _BYTE Fields[6]; // [esp+0h] [ebp-30h] BYREF
  __int16 v4; // [esp+6h] [ebp-2Ah]
  void *v5; // [esp+20h] [ebp-10h]

  v5 = this;
  v4 = 7206;
  if ( RtlGetCurrentServiceSessionId() )
    v1 = (int)NtCurrentPeb()->SharedData + 556;
  else
    v1 = 2147353478;
  return NtTraceEvent((HANDLE)*(unsigned __int8 *)v1, 0x402u, 4u, Fields);
}
