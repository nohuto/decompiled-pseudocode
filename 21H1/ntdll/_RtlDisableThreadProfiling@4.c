/*
 * XREFs of _RtlDisableThreadProfiling@4 @ 0x4B32CBD0
 * Callers:
 *     <none>
 * Callees:
 *     _RtlFreeHeap@12 @ 0x4B2C3B70 (_RtlFreeHeap@12.c)
 *     _ZwSetInformationThread@16 @ 0x4B2F2A30 (_ZwSetInformationThread@16.c)
 */

NTSTATUS __cdecl RtlDisableThreadProfiling(PVOID PerformanceDataHandle)
{
  int v1; // esi
  _BYTE ThreadInformation[12]; // [esp+8h] [ebp-18h] BYREF
  int v4; // [esp+14h] [ebp-Ch]
  PVOID v5; // [esp+18h] [ebp-8h]

  v4 = 0;
  v5 = PerformanceDataHandle;
  v1 = ZwSetInformationThread((HANDLE)0xFFFFFFFE, ThreadCounterProfiling, ThreadInformation, 0x18u);
  if ( v1 >= 0 )
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, PerformanceDataHandle);
  return v1;
}
