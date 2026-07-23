/*
 * XREFs of _RtlCompactHeap@8 @ 0x4B3567C0
 * Callers:
 *     _RtlDebugCompactHeap@8 @ 0x4B35F26E (_RtlDebugCompactHeap@8.c)
 * Callees:
 *     _RtlLeaveCriticalSection@4 @ 0x4B2BE700 (_RtlLeaveCriticalSection@4.c)
 *     _RtlEnterCriticalSection@4 @ 0x4B2BFE90 (_RtlEnterCriticalSection@4.c)
 *     _RtlNtStatusToDosError@4 @ 0x4B2DAB70 (_RtlNtStatusToDosError@4.c)
 *     __SEH_prolog4 @ 0x4B307AC4 (__SEH_prolog4.c)
 *     _RtlCompactHeap@8 @ 0x4B3567C0 (_RtlCompactHeap@8.c)
 *     _RtlpCoalesceHeap@4 @ 0x4B35776F (_RtlpCoalesceHeap@4.c)
 *     _RtlDebugCompactHeap@8 @ 0x4B35F26E (_RtlDebugCompactHeap@8.c)
 *     _RtlpHeapExceptionFilter@8 @ 0x4B375DFF (_RtlpHeapExceptionFilter@8.c)
 *     _RtlpHpHeapCompact@8 @ 0x4B378991 (_RtlpHpHeapCompact@8.c)
 */

SIZE_T __cdecl RtlCompactHeap(PVOID HeapHandle, ULONG Flags)
{
  SIZE_T result; // rax
  ULONG v3; // edx
  struct _TEB *v4; // esi
  unsigned int v5; // [esp+18h] [ebp-20h]
  char v6; // [esp+1Fh] [ebp-19h]

  v6 = 0;
  if ( *((_DWORD *)HeapHandle + 2) == -571548178 )
  {
    RtlpHpHeapCompact(HeapHandle, Flags & 1);
    LODWORD(result) = 8;
  }
  else
  {
    v3 = *((_DWORD *)HeapHandle + 17) | Flags;
    if ( (v3 & 0x61000000) != 0 && (v3 & 0x10000000) == 0 )
    {
      LODWORD(result) = RtlDebugCompactHeap(HeapHandle);
    }
    else
    {
      v5 = 0;
      if ( (v3 & 1) == 0 )
      {
        RtlEnterCriticalSection(*((PRTL_CRITICAL_SECTION *)HeapHandle + 50));
        v6 = 1;
      }
      LODWORD(result) = RtlpCoalesceHeap(HeapHandle);
      HIDWORD(result) = result;
      if ( (_DWORD)result )
      {
        v5 = 8 * *(unsigned __int16 *)result;
        if ( *((_DWORD *)HeapHandle + 19) )
        {
          *(_BYTE *)(result + 3) = *(_BYTE *)result ^ *(_BYTE *)(result + 1) ^ *(_BYTE *)(result + 2);
          *(_DWORD *)result ^= *((_DWORD *)HeapHandle + 20);
        }
      }
      if ( *((PVOID *)HeapHandle + 35) != (char *)HeapHandle + 140
        && *(_DWORD *)(*((_DWORD *)HeapHandle + 36) + 20) > v5 )
      {
        v5 = *(_DWORD *)(*((_DWORD *)HeapHandle + 36) + 20);
      }
      if ( !v5 )
      {
        NtCurrentTeb()->LastStatusValue = 0;
        v4 = NtCurrentTeb();
        v4->LastErrorValue = RtlNtStatusToDosError(0);
      }
      if ( v6 )
        RtlLeaveCriticalSection(*((PRTL_CRITICAL_SECTION *)HeapHandle + 50));
      LODWORD(result) = v5;
    }
  }
  return result;
}
