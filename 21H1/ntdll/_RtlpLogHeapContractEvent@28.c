/*
 * XREFs of _RtlpLogHeapContractEvent@28 @ 0x4B36EEA8
 * Callers:
 *     _RtlpDeCommitFreeBlock@16 @ 0x4B2AF0D2 (_RtlpDeCommitFreeBlock@16.c)
 *     @RtlpDecommitBlock@8 @ 0x4B2AF71A (@RtlpDecommitBlock@8.c)
 *     @RtlpFreeHeap@16 @ 0x4B2C3C10 (@RtlpFreeHeap@16.c)
 * Callees:
 *     _NtTraceEvent@16 @ 0x4B2F2F60 (_NtTraceEvent@16.c)
 *     @__security_check_cookie@4 @ 0x4B2F4B20 (@__security_check_cookie@4.c)
 *     _RtlpEstimateAllocatedSize@4 @ 0x4B35D645 (_RtlpEstimateAllocatedSize@4.c)
 *     _GetUCBytes@12 @ 0x4B36D406 (_GetUCBytes@12.c)
 */

NTSTATUS __fastcall RtlpLogHeapContractEvent(int a1, int a2, int a3, int a4, char a5, int a6, HANDLE TraceHandle)
{
  int v8; // eax
  int UCBytes; // eax
  int v10; // ecx
  char Fields[6]; // [esp+8h] [ebp-4Ch] BYREF
  __int16 v13; // [esp+Eh] [ebp-46h]
  int v14; // [esp+28h] [ebp-2Ch]
  int v15; // [esp+2Ch] [ebp-28h]
  int v16; // [esp+30h] [ebp-24h]
  int v17; // [esp+34h] [ebp-20h]
  int v18; // [esp+38h] [ebp-1Ch]
  int v19; // [esp+3Ch] [ebp-18h] BYREF
  _DWORD v20[3]; // [esp+40h] [ebp-14h] BYREF

  v17 = a4;
  v14 = a1;
  v16 = a2;
  v19 = 0;
  v18 = 0;
  v20[0] = 0;
  v20[1] = RtlpEstimateAllocatedSize(a1);
  v8 = a3;
  if ( a5 )
    v8 = a3 - a6;
  v15 = v8;
  UCBytes = GetUCBytes(a1, &v19, v20);
  v10 = v19 - *(_DWORD *)(a1 + 580) - UCBytes;
  v13 = 4138;
  v18 = v10;
  return NtTraceEvent(TraceHandle, 0x403u, 0x20u, Fields);
}
