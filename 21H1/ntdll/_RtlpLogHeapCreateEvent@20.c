/*
 * XREFs of _RtlpLogHeapCreateEvent@20 @ 0x4B36EF35
 * Callers:
 *     _RtlCreateHeap@24 @ 0x4B2C0F40 (_RtlCreateHeap@24.c)
 *     _RtlpHpHeapCreate@20 @ 0x4B378A0E (_RtlpHpHeapCreate@20.c)
 * Callees:
 *     _NtTraceEvent@16 @ 0x4B2F2F60 (_NtTraceEvent@16.c)
 *     @__security_check_cookie@4 @ 0x4B2F4B20 (@__security_check_cookie@4.c)
 *     _RtlpEstimateAllocatedSize@4 @ 0x4B35D645 (_RtlpEstimateAllocatedSize@4.c)
 */

NTSTATUS __fastcall RtlpLogHeapCreateEvent(int a1, int a2, int a3, int a4, HANDLE TraceHandle)
{
  _BYTE Fields[6]; // [esp+4h] [ebp-38h] BYREF
  __int16 v7; // [esp+Ah] [ebp-32h]
  int v8; // [esp+24h] [ebp-18h]
  int v9; // [esp+28h] [ebp-14h]
  int v10; // [esp+2Ch] [ebp-10h]
  int v11; // [esp+30h] [ebp-Ch]
  int v12; // [esp+34h] [ebp-8h]

  v10 = a3;
  v8 = a1;
  v9 = a2;
  v11 = a4;
  v12 = RtlpEstimateAllocatedSize(a1);
  v7 = 4128;
  return NtTraceEvent(TraceHandle, 0x403u, 0x14u, Fields);
}
