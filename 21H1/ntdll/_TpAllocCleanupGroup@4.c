/*
 * XREFs of _TpAllocCleanupGroup@4 @ 0x4B2EC860
 * Callers:
 *     <none>
 * Callees:
 *     _RtlFreeHeap@12 @ 0x4B2C3B70 (_RtlFreeHeap@12.c)
 *     _RtlAllocateHeap@12 @ 0x4B2C5D40 (_RtlAllocateHeap@12.c)
 *     _TpAllocCleanupGroup@4 @ 0x4B2EC860 (_TpAllocCleanupGroup@4.c)
 *     __SEH_prolog4 @ 0x4B307AC4 (__SEH_prolog4.c)
 *     _TppRaiseInvalidParameter@0 @ 0x4B3848BD (_TppRaiseInvalidParameter@0.c)
 */

NTSTATUS __cdecl TpAllocCleanupGroup(PTP_CLEANUP_GROUP *CleanupGroupReturn)
{
  _TP_CLEANUP_GROUP *Heap; // ecx
  NTSTATUS result; // eax
  SIZE_T v3; // [esp-4h] [ebp-38h]
  NTSTATUS v4; // [esp+18h] [ebp-1Ch]

  if ( !CleanupGroupReturn || NtCurrentPeb()->Ldr->ShutdownInProgress )
    TppRaiseInvalidParameter();
  *CleanupGroupReturn = 0;
  LODWORD(v3) = 56;
  Heap = (_TP_CLEANUP_GROUP *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, TppHeapTag | 8, v3);
  if ( Heap )
  {
    *(_DWORD *)Heap = 1;
    *((_DWORD *)Heap + 1) = 0;
    *((_DWORD *)Heap + 2) = 0;
    *((_DWORD *)Heap + 10) = 0;
    *((_DWORD *)Heap + 4) = (char *)Heap + 12;
    *((_DWORD *)Heap + 3) = (char *)Heap + 12;
    *((_DWORD *)Heap + 12) = (char *)Heap + 44;
    *((_DWORD *)Heap + 11) = (char *)Heap + 44;
    *((_DWORD *)Heap + 6) = 0;
    *((_DWORD *)Heap + 7) = 0;
    *((_DWORD *)Heap + 8) = 0;
    *((_DWORD *)Heap + 9) = 0;
    result = 0;
    v4 = 0;
    *CleanupGroupReturn = Heap;
  }
  else
  {
    result = -1073741801;
    v4 = -1073741801;
  }
  if ( result < 0 )
  {
    if ( Heap )
    {
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, TppHeapTag, Heap);
      return v4;
    }
  }
  return result;
}
