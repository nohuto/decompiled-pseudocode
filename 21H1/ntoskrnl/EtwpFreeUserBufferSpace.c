/*
 * XREFs of EtwpFreeUserBufferSpace @ 0x14093D3CC
 * Callers:
 *     EtwpRealtimeInjectEtwBuffer @ 0x140704A9C (EtwpRealtimeInjectEtwBuffer.c)
 * Callees:
 *     RtlInterlockedClearBitRun @ 0x1403BB5D0 (RtlInterlockedClearBitRun.c)
 *     ZwFreeVirtualMemory @ 0x1403F26F0 (ZwFreeVirtualMemory.c)
 */

void __fastcall EtwpFreeUserBufferSpace(__int64 a1, ULONG_PTR a2, void *a3)
{
  unsigned __int64 v3; // r9
  ULONG_PTR RegionSize; // [rsp+38h] [rbp+10h] BYREF
  PVOID BaseAddress; // [rsp+40h] [rbp+18h] BYREF

  BaseAddress = a3;
  RegionSize = a2;
  v3 = *(_QWORD *)(a1 + 112);
  if ( (unsigned __int64)a3 < v3 || (unsigned __int64)a3 >= v3 + *(unsigned int *)(a1 + 120) )
    ZwFreeVirtualMemory(*(HANDLE *)(a1 + 16), &BaseAddress, &RegionSize, 0x8000u);
  else
    RtlInterlockedClearBitRun(
      (PRTL_BITMAP)(a1 + 96),
      (__int64)((__int64)a3 - v3) / 4096,
      (((_DWORD)a2 + 4095) & 0xFFFFF000) >> 12);
}
