/*
 * XREFs of _RtlpLogHeapSubSegmentInitialize@20 @ 0x4B36F4DC
 * Callers:
 *     @RtlpSubSegmentInitialize@24 @ 0x4B2C37B0 (@RtlpSubSegmentInitialize@24.c)
 *     @RtlpSubSegmentDebugInitialize@28 @ 0x4B370CFD (@RtlpSubSegmentDebugInitialize@28.c)
 * Callees:
 *     _RtlGetCurrentServiceSessionId@0 @ 0x4B2C3BF0 (_RtlGetCurrentServiceSessionId@0.c)
 *     _NtTraceEvent@16 @ 0x4B2F2F60 (_NtTraceEvent@16.c)
 *     @__security_check_cookie@4 @ 0x4B2F4B20 (@__security_check_cookie@4.c)
 *     _memset @ 0x4B2F8F30 (_memset.c)
 */

NTSTATUS __fastcall RtlpLogHeapSubSegmentInitialize(int a1, int a2, int a3, int a4, int a5)
{
  int v7; // eax
  size_t v9; // [esp-4h] [ebp-44h]
  _BYTE Fields[6]; // [esp+8h] [ebp-38h] BYREF
  __int16 v11; // [esp+Eh] [ebp-32h]
  int v12; // [esp+28h] [ebp-18h]
  int v13; // [esp+2Ch] [ebp-14h]
  int v14; // [esp+30h] [ebp-10h]
  int v15; // [esp+34h] [ebp-Ch]
  int v16; // [esp+38h] [ebp-8h]

  LODWORD(v9) = 52;
  memset(Fields, 0, v9);
  v12 = a1;
  v11 = 4149;
  v14 = a3;
  v15 = a4;
  v13 = a2;
  v16 = a5;
  if ( RtlGetCurrentServiceSessionId() )
    v7 = (int)NtCurrentPeb()->SharedData + 550;
  else
    v7 = 2147353472;
  return NtTraceEvent((HANDLE)*(unsigned __int8 *)v7, 0x20402u, 0x14u, Fields);
}
