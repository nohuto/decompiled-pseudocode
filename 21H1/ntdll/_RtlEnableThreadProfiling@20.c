/*
 * XREFs of _RtlEnableThreadProfiling@20 @ 0x4B32CC20
 * Callers:
 *     <none>
 * Callees:
 *     _RtlFreeHeap@12 @ 0x4B2C3B70 (_RtlFreeHeap@12.c)
 *     _RtlAllocateHeap@12 @ 0x4B2C5D40 (_RtlAllocateHeap@12.c)
 *     _ZwSetInformationThread@16 @ 0x4B2F2A30 (_ZwSetInformationThread@16.c)
 *     _memset @ 0x4B2F8F30 (_memset.c)
 */

NTSTATUS __cdecl RtlEnableThreadProfiling(
        HANDLE ThreadHandle,
        ULONG Flags,
        ULONG64 HardwareCounters,
        PVOID *PerformanceDataHandle)
{
  _DWORD *Heap; // eax
  _DWORD *v6; // esi
  int v7; // edi
  SIZE_T v8; // [esp-4h] [ebp-2Ch]
  size_t v9; // [esp-4h] [ebp-2Ch]
  ULONG64 ThreadInformation; // [esp+10h] [ebp-18h] BYREF
  ULONG v11; // [esp+18h] [ebp-10h]
  int v12; // [esp+1Ch] [ebp-Ch]
  _DWORD *v13; // [esp+20h] [ebp-8h]

  if ( (Flags & 0xFFFFFFFE) != 0 )
    return -1073741584;
  if ( HIDWORD(HardwareCounters) | HardwareCounters & 0xFFFF0000 )
    return -1073741583;
  LODWORD(v8) = 448;
  Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, v8);
  v6 = Heap;
  if ( !Heap )
    return -1073741801;
  LODWORD(v9) = 448;
  memset(Heap, 0, v9);
  v6[8] = HardwareCounters;
  *(_WORD *)v6 = 448;
  v6[9] = HIDWORD(HardwareCounters);
  *((_WORD *)v6 + 1) = 1;
  v12 = 1;
  v11 = Flags;
  ThreadInformation = HardwareCounters;
  v13 = v6;
  v7 = ZwSetInformationThread(ThreadHandle, ThreadCounterProfiling, &ThreadInformation, 0x18u);
  if ( v7 < 0 )
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v6);
  else
    *PerformanceDataHandle = v6;
  return v7;
}
