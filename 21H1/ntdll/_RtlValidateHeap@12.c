/*
 * XREFs of _RtlValidateHeap@12 @ 0x4B2A7420
 * Callers:
 *     _RtlValidateProcessHeaps@0 @ 0x4B3574F0 (_RtlValidateProcessHeaps@0.c)
 * Callees:
 *     _RtlValidateHeap@12 @ 0x4B2A7420 (_RtlValidateHeap@12.c)
 *     _RtlpValidateHeapEntry@12 @ 0x4B2A74FF (_RtlpValidateHeapEntry@12.c)
 *     _RtlpCheckHeapSignature@8 @ 0x4B2A7622 (_RtlpCheckHeapSignature@8.c)
 *     _RtlLeaveCriticalSection@4 @ 0x4B2BE700 (_RtlLeaveCriticalSection@4.c)
 *     _RtlEnterCriticalSection@4 @ 0x4B2BFE90 (_RtlEnterCriticalSection@4.c)
 *     _RtlGetCurrentServiceSessionId@0 @ 0x4B2C3BF0 (_RtlGetCurrentServiceSessionId@0.c)
 *     _RtlNtStatusToDosError@4 @ 0x4B2DAB70 (_RtlNtStatusToDosError@4.c)
 *     _RtlUnlockHeap@4 @ 0x4B2DD9F0 (_RtlUnlockHeap@4.c)
 *     _RtlLockHeap@4 @ 0x4B2DDA90 (_RtlLockHeap@4.c)
 *     _RtlpHpAppCompatDontChangePolicy@0 @ 0x4B2ED850 (_RtlpHpAppCompatDontChangePolicy@0.c)
 *     __SEH_prolog4 @ 0x4B307AC4 (__SEH_prolog4.c)
 *     _RtlpHpConvertFlagsToSegmentFlags@4 @ 0x4B35D732 (_RtlpHpConvertFlagsToSegmentFlags@4.c)
 *     _RtlpValidateHeap@8 @ 0x4B360697 (_RtlpValidateHeap@8.c)
 *     _RtlpLogHeapValidateEvent@4 @ 0x4B36F5C3 (_RtlpLogHeapValidateEvent@4.c)
 *     _RtlpHeapExceptionFilter@8 @ 0x4B375DFF (_RtlpHeapExceptionFilter@8.c)
 *     _RtlpHpSizeHeap@12 @ 0x4B37999D (_RtlpHpSizeHeap@12.c)
 */

BOOLEAN __cdecl RtlValidateHeap(PVOID HeapHandle, ULONG Flags, PVOID BaseAddress)
{
  BOOLEAN v3; // al
  int v4; // eax
  BOOLEAN v6; // bl
  void *v7; // ecx
  int v8; // [esp+18h] [ebp-20h]
  char v9; // [esp+1Eh] [ebp-1Ah]
  BOOLEAN v10; // [esp+1Fh] [ebp-19h]

  v9 = 0;
  if ( *((_DWORD *)HeapHandle + 2) != -571548178 )
  {
    v10 = 0;
    if ( (*((_DWORD *)HeapHandle + 17) & 0x1000000) != 0 )
    {
      v3 = dword_4B3A3774(dword_4B3A3774, HeapHandle, Flags, BaseAddress);
    }
    else
    {
      if ( !(unsigned __int8)RtlpCheckHeapSignature(HeapHandle, "RtlValidateHeap") )
      {
LABEL_14:
        if ( v9 )
          RtlLeaveCriticalSection(*((PRTL_CRITICAL_SECTION *)HeapHandle + 50));
        if ( RtlGetCurrentServiceSessionId() )
          v4 = (int)NtCurrentPeb()->SharedData + 550;
        else
          v4 = 2147353472;
        if ( *(_BYTE *)v4 )
        {
          if ( (NtCurrentPeb()->TracingFlags & 1) != 0 )
            RtlpLogHeapValidateEvent(HeapHandle);
        }
        return v10;
      }
      if ( ((*((_BYTE *)HeapHandle + 68) | (unsigned __int8)Flags) & 1) == 0 )
      {
        RtlEnterCriticalSection(*((PRTL_CRITICAL_SECTION *)HeapHandle + 50));
        v9 = 1;
      }
      if ( BaseAddress )
        v3 = RtlpValidateHeapEntry("RtlValidateHeap");
      else
        v3 = RtlpValidateHeap(HeapHandle);
    }
    v10 = v3;
    goto LABEL_14;
  }
  v6 = 1;
  if ( (Flags & 1) == 0 )
    RtlLockHeap(HeapHandle);
  v8 = RtlpHpConvertFlagsToSegmentFlags(Flags);
  v7 = (void *)*((_DWORD *)HeapHandle + 44);
  if ( v7 && v7 == NtCurrentTeb()->ClientId.UniqueThread )
    v8 |= 1u;
  if ( BaseAddress )
    v6 = RtlpHpSizeHeap(v8) != -1;
  if ( (Flags & 1) == 0 )
    RtlUnlockHeap(HeapHandle);
  return v6;
}
