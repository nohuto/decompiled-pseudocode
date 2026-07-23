/*
 * XREFs of _RtlpLogHeapSubSegmentFree@16 @ 0x4B36F3D2
 * Callers:
 *     @RtlpFreeUserBlock@12 @ 0x4B2C24DB (@RtlpFreeUserBlock@12.c)
 *     _RtlpLowFragHeapFlushCaches@4 @ 0x4B37172A (_RtlpLowFragHeapFlushCaches@4.c)
 * Callees:
 *     _RtlGetCurrentServiceSessionId@0 @ 0x4B2C3BF0 (_RtlGetCurrentServiceSessionId@0.c)
 *     _NtTraceEvent@16 @ 0x4B2F2F60 (_NtTraceEvent@16.c)
 *     @__security_check_cookie@4 @ 0x4B2F4B20 (@__security_check_cookie@4.c)
 *     _memset @ 0x4B2F8F30 (_memset.c)
 */

NTSTATUS __fastcall RtlpLogHeapSubSegmentFree(int a1, int a2, int a3, int a4)
{
  int v6; // eax
  size_t v8; // [esp-4h] [ebp-44h]
  _BYTE Fields[6]; // [esp+8h] [ebp-38h] BYREF
  __int16 v10; // [esp+Eh] [ebp-32h]
  int v11; // [esp+28h] [ebp-18h]
  int v12; // [esp+2Ch] [ebp-14h]
  int v13; // [esp+30h] [ebp-10h]
  int v14; // [esp+34h] [ebp-Ch]

  LODWORD(v8) = 48;
  memset(Fields, 0, v8);
  v11 = a1;
  v10 = 4144;
  v13 = a3;
  v12 = a2;
  v14 = a4;
  if ( RtlGetCurrentServiceSessionId() )
    v6 = (int)NtCurrentPeb()->SharedData + 550;
  else
    v6 = 2147353472;
  return NtTraceEvent((HANDLE)*(unsigned __int8 *)v6, 0x20402u, 0x10u, Fields);
}
