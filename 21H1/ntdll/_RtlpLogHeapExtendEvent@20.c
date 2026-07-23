/*
 * XREFs of _RtlpLogHeapExtendEvent@20 @ 0x4B36F013
 * Callers:
 *     @RtlpExtendLowFragHeapSegment@12 @ 0x4B2AE2E8 (@RtlpExtendLowFragHeapSegment@12.c)
 *     @RtlpCreateLowFragHeap@4 @ 0x4B2AEF38 (@RtlpCreateLowFragHeap@4.c)
 *     @RtlpCommitBlock@8 @ 0x4B2AF586 (@RtlpCommitBlock@8.c)
 *     _RtlpExtendHeap@8 @ 0x4B2C0405 (_RtlpExtendHeap@8.c)
 *     _RtlpFindAndCommitPages@8 @ 0x4B2C0640 (_RtlpFindAndCommitPages@8.c)
 *     @RtlpAllocateHeap@24 @ 0x4B2C6F90 (@RtlpAllocateHeap@24.c)
 * Callees:
 *     _NtTraceEvent@16 @ 0x4B2F2F60 (_NtTraceEvent@16.c)
 *     @__security_check_cookie@4 @ 0x4B2F4B20 (@__security_check_cookie@4.c)
 *     _RtlpEstimateAllocatedSize@4 @ 0x4B35D645 (_RtlpEstimateAllocatedSize@4.c)
 *     _GetUCBytes@12 @ 0x4B36D406 (_GetUCBytes@12.c)
 */

NTSTATUS __fastcall RtlpLogHeapExtendEvent(int a1, int a2, int a3, int a4, HANDLE TraceHandle)
{
  int UCBytes; // eax
  int v7; // ecx
  char Fields[6]; // [esp+8h] [ebp-4Ch] BYREF
  __int16 v10; // [esp+Eh] [ebp-46h]
  int v11; // [esp+28h] [ebp-2Ch]
  int v12; // [esp+2Ch] [ebp-28h]
  int v13; // [esp+30h] [ebp-24h]
  int v14; // [esp+34h] [ebp-20h]
  int v15; // [esp+38h] [ebp-1Ch]
  int v16; // [esp+3Ch] [ebp-18h] BYREF
  _DWORD v17[3]; // [esp+40h] [ebp-14h] BYREF

  v12 = a3;
  v14 = a4;
  v11 = a1;
  v13 = a2;
  v16 = 0;
  v15 = 0;
  v17[0] = 0;
  v17[1] = RtlpEstimateAllocatedSize(a1);
  UCBytes = GetUCBytes(a1, &v16, v17);
  v7 = v16 - *(_DWORD *)(a1 + 580) - UCBytes;
  v10 = 4133;
  v15 = v7;
  return NtTraceEvent(TraceHandle, 0x403u, 0x20u, Fields);
}
