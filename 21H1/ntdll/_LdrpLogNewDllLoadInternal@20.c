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

char *__fastcall LdrpLogNewDllLoadInternal(unsigned int a1, unsigned int a2, int a3, size_t Size)
{
  char *result; // eax
  _WORD *v5; // esi
  __int16 v6; // cx
  int v7; // ecx
  SIZE_T v8; // [esp-4h] [ebp-18h]
  size_t v9; // [esp-4h] [ebp-18h]
  unsigned __int64 v10; // [esp+Ch] [ebp-8h]

  v10 = __PAIR64__(a1, a2);
  LODWORD(v8) = Size + 46;
  result = (char *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, NtdllBaseTag + 1572864, v8);
  v5 = result;
  if ( result )
  {
    if ( a3 == 5 || (v6 = 5296, a3 == 6) )
      v6 = 5297;
    *((_WORD *)result + 3) = v6;
    LODWORD(v9) = Size;
    *((_DWORD *)result + 10) = a3;
    *((_DWORD *)result + 8) = HIDWORD(v10);
    *((_DWORD *)result + 9) = v10;
    memcpy(result + 44, (const void *)HIDWORD(Size), v9);
    v5[((unsigned int)Size >> 1) + 22] = 0;
    if ( RtlGetCurrentServiceSessionId() )
      v7 = (int)NtCurrentPeb()->SharedData + 554;
    else
      v7 = 2147353476;
    NtTraceEvent((HANDLE)*(unsigned __int8 *)v7, 0x403u, Size + 14, v5);
    return (char *)RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v5);
  }
  return result;
}
