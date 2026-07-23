/*
 * XREFs of _RtlpLogHeapAffinitySlotAssign@12 @ 0x4B36ED37
 * Callers:
 *     _RtlpSetSegmentInfo@8 @ 0x4B2F2640 (_RtlpSetSegmentInfo@8.c)
 * Callees:
 *     _RtlGetCurrentServiceSessionId@0 @ 0x4B2C3BF0 (_RtlGetCurrentServiceSessionId@0.c)
 *     _NtTraceEvent@16 @ 0x4B2F2F60 (_NtTraceEvent@16.c)
 *     @__security_check_cookie@4 @ 0x4B2F4B20 (@__security_check_cookie@4.c)
 *     _memset @ 0x4B2F8F30 (_memset.c)
 */

NTSTATUS __fastcall RtlpLogHeapAffinitySlotAssign(int a1, int a2, int a3)
{
  int v5; // eax
  size_t v7; // [esp-4h] [ebp-3Ch]
  _BYTE Fields[6]; // [esp+8h] [ebp-30h] BYREF
  __int16 v9; // [esp+Eh] [ebp-2Ah]
  int v10; // [esp+28h] [ebp-10h]
  int v11; // [esp+2Ch] [ebp-Ch]
  int v12; // [esp+30h] [ebp-8h]

  LODWORD(v7) = 44;
  memset(Fields, 0, v7);
  v10 = a1;
  v9 = 4153;
  v11 = a2;
  v12 = a3;
  if ( RtlGetCurrentServiceSessionId() )
    v5 = (int)NtCurrentPeb()->SharedData + 550;
  else
    v5 = 2147353472;
  return NtTraceEvent((HANDLE)*(unsigned __int8 *)v5, 0x20402u, 0xCu, Fields);
}
