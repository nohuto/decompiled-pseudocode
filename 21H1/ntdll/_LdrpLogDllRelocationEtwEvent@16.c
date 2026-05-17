/*
 * XREFs of _LdrpLogDllRelocationEtwEvent@16 @ 0x4B32FD0F
 * Callers:
 *     _LdrpRelocateImage@16 @ 0x4B2ED3BF (_LdrpRelocateImage@16.c)
 * Callees:
 *     _RtlFreeHeap@12 @ 0x4B2C3B70 (_RtlFreeHeap@12.c)
 *     _RtlGetCurrentServiceSessionId@0 @ 0x4B2C3BF0 (_RtlGetCurrentServiceSessionId@0.c)
 *     _RtlAllocateHeap@12 @ 0x4B2C5D40 (_RtlAllocateHeap@12.c)
 *     _NtTraceEvent@16 @ 0x4B2F2F60 (_NtTraceEvent@16.c)
 *     _memcpy @ 0x4B2F88B0 (_memcpy.c)
 */

int __fastcall LdrpLogDllRelocationEtwEvent(unsigned __int16 *a1, int a2, int a3, int a4)
{
  int v5; // esi
  int result; // eax
  int v7; // ebx
  int v8; // edi

  v5 = 2147353476;
  if ( RtlGetCurrentServiceSessionId() )
    result = (int)NtCurrentPeb()->SharedData + 554;
  else
    result = 2147353476;
  if ( *(_BYTE *)result )
  {
    v7 = *a1 + 48;
    result = RtlAllocateHeap((int)NtCurrentPeb()->ProcessHeap, NtdllBaseTag + 1572864, v7);
    v8 = result;
    if ( result )
    {
      *(_DWORD *)(result + 36) = a3;
      *(_DWORD *)(result + 40) = a4;
      *(_WORD *)(result + 6) = 5152;
      *(_DWORD *)(result + 32) = a2;
      memcpy((void *)(result + 44), *((const void **)a1 + 1), *a1);
      *(_WORD *)(v8 + 2 * (*a1 >> 1) + 44) = 0;
      if ( RtlGetCurrentServiceSessionId() )
        v5 = (int)NtCurrentPeb()->SharedData + 554;
      NtTraceEvent(*(unsigned __int8 *)v5, 1026, v7 - 32, v8);
      return RtlFreeHeap((int)NtCurrentPeb()->ProcessHeap, 0, v8);
    }
  }
  return result;
}
