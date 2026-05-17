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

bool __stdcall RtlValidateHeap(int a1, int a2, int a3)
{
  char v3; // al
  int v4; // eax
  bool v6; // bl
  void *v7; // ecx
  int v8; // [esp+18h] [ebp-20h]
  char v9; // [esp+1Eh] [ebp-1Ah]
  char v10; // [esp+1Fh] [ebp-19h]

  v9 = 0;
  if ( *(_DWORD *)(a1 + 8) != -571548178 )
  {
    v10 = 0;
    if ( (*(_DWORD *)(a1 + 68) & 0x1000000) != 0 )
    {
      v3 = dword_4B3A3774(dword_4B3A3774, a1, a2, a3);
    }
    else
    {
      if ( !(unsigned __int8)RtlpCheckHeapSignature(a1, "RtlValidateHeap") )
      {
LABEL_14:
        if ( v9 )
          RtlLeaveCriticalSection(*(_DWORD *)(a1 + 200));
        if ( RtlGetCurrentServiceSessionId() )
          v4 = (int)NtCurrentPeb()->SharedData + 550;
        else
          v4 = 2147353472;
        if ( *(_BYTE *)v4 )
        {
          if ( (NtCurrentPeb()->TracingFlags & 1) != 0 )
            RtlpLogHeapValidateEvent(a1);
        }
        return v10;
      }
      if ( ((*(_BYTE *)(a1 + 68) | (unsigned __int8)a2) & 1) == 0 )
      {
        RtlEnterCriticalSection(*(_DWORD *)(a1 + 200));
        v9 = 1;
      }
      if ( a3 )
        v3 = RtlpValidateHeapEntry("RtlValidateHeap");
      else
        v3 = RtlpValidateHeap(a1, 1);
    }
    v10 = v3;
    goto LABEL_14;
  }
  v6 = 1;
  if ( (a2 & 1) == 0 )
    RtlLockHeap(a1);
  v8 = RtlpHpConvertFlagsToSegmentFlags(a2);
  v7 = *(void **)(a1 + 176);
  if ( v7 && v7 == NtCurrentTeb()->ClientId.UniqueThread )
    v8 |= 1u;
  if ( a3 )
    v6 = RtlpHpSizeHeap(v8) != -1;
  if ( (a2 & 1) == 0 )
    RtlUnlockHeap(a1);
  return v6;
}
