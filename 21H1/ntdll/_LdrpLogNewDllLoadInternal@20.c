/*
 * XREFs of _LdrpLogNewDllLoadInternal@20 @ 0x4B3309EF
 * Callers:
 *     _LdrLogNewDataDllLoad@8 @ 0x4B2B8C39 (_LdrLogNewDataDllLoad@8.c)
 *     _LdrpLogNewDllLoad@8 @ 0x4B2D1499 (_LdrpLogNewDllLoad@8.c)
 * Callees:
 *     _RtlFreeHeap@12 @ 0x4B2C3B70 (_RtlFreeHeap@12.c)
 *     _RtlGetCurrentServiceSessionId@0 @ 0x4B2C3BF0 (_RtlGetCurrentServiceSessionId@0.c)
 *     _RtlAllocateHeap@12 @ 0x4B2C5D40 (_RtlAllocateHeap@12.c)
 *     _NtTraceEvent@16 @ 0x4B2F2F60 (_NtTraceEvent@16.c)
 *     _memcpy @ 0x4B2F88B0 (_memcpy.c)
 */

int __fastcall LdrpLogNewDllLoadInternal(int a1, int a2, int a3, size_t Size, void *Src)
{
  int result; // eax
  int v6; // esi
  __int16 v7; // cx
  int v8; // ecx

  result = RtlAllocateHeap((int)NtCurrentPeb()->ProcessHeap, NtdllBaseTag + 1572864, Size + 46);
  v6 = result;
  if ( result )
  {
    if ( a3 == 5 || (v7 = 5296, a3 == 6) )
      v7 = 5297;
    *(_WORD *)(result + 6) = v7;
    *(_DWORD *)(result + 40) = a3;
    *(_DWORD *)(result + 32) = a1;
    *(_DWORD *)(result + 36) = a2;
    memcpy((void *)(result + 44), Src, Size);
    *(_WORD *)(v6 + 2 * (Size >> 1) + 44) = 0;
    if ( RtlGetCurrentServiceSessionId() )
      v8 = (int)NtCurrentPeb()->SharedData + 554;
    else
      v8 = 2147353476;
    NtTraceEvent(*(unsigned __int8 *)v8, 1027, Size + 14, v6);
    return RtlFreeHeap((int)NtCurrentPeb()->ProcessHeap, 0, v6);
  }
  return result;
}
