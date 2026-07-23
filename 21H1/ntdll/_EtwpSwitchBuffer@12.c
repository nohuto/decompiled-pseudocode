/*
 * XREFs of _EtwpSwitchBuffer@12 @ 0x4B2EFDE8
 * Callers:
 *     _EtwpReserveTraceBuffer@20 @ 0x4B2EFD10 (_EtwpReserveTraceBuffer@20.c)
 * Callees:
 *     _RtlLeaveCriticalSection@4 @ 0x4B2BE700 (_RtlLeaveCriticalSection@4.c)
 *     _RtlEnterCriticalSection@4 @ 0x4B2BFE90 (_RtlEnterCriticalSection@4.c)
 *     _EtwpDequeueFreeBuffer@4 @ 0x4B2EFE95 (_EtwpDequeueFreeBuffer@4.c)
 *     _EtwpAllocateFreeBuffers@8 @ 0x4B2F06F0 (_EtwpAllocateFreeBuffers@8.c)
 *     _EtwpEnqueueFreeBuffer@8 @ 0x4B2F07E2 (_EtwpEnqueueFreeBuffer@8.c)
 *     _NtSetEvent@8 @ 0x4B2F2A40 (_NtSetEvent@8.c)
 *     _RtlSleepConditionVariableCS@12 @ 0x4B366010 (_RtlSleepConditionVariableCS@12.c)
 */

char __fastcall EtwpSwitchBuffer(int a1, int a2, int a3)
{
  int v4; // edi
  int i; // eax
  int v6; // ebx
  char v7; // bl
  int v9; // [esp+Ch] [ebp-10h]
  int v11; // [esp+14h] [ebp-8h]
  char v12; // [esp+1Bh] [ebp-1h]

  v12 = 0;
  v4 = a2;
  v9 = *(_DWORD *)(a1 + 212) & 0x400;
  RtlEnterCriticalSection((PRTL_CRITICAL_SECTION)(a1 + 72));
  for ( i = *(_DWORD *)(a1 + 4 * a3 + 388); ; i = *(_DWORD *)(a1 + 4 * a3 + 388) )
  {
    v11 = i;
    if ( i && v4 != i )
      goto LABEL_5;
    v6 = EtwpDequeueFreeBuffer(a1);
    if ( v6 )
      break;
    if ( (*(_DWORD *)(a1 + 212) & 0x400) == 0 )
    {
      do
      {
        if ( EtwpAllocateFreeBuffers(a1, 1) != 1 )
          break;
        v6 = EtwpDequeueFreeBuffer(a1);
      }
      while ( !v6 );
      v4 = a2;
      if ( v6 )
        break;
    }
    if ( (*(_DWORD *)(a1 + 212) & 0x20000000) == 0 || !*(_DWORD *)(a1 + 216) )
    {
      v7 = 0;
      goto LABEL_6;
    }
    RtlSleepConditionVariableCS((PRTL_CONDITION_VARIABLE)(a1 + 68), (PRTL_CRITICAL_SECTION)(a1 + 72), 0);
  }
  *(_WORD *)(v6 + 40) = *(_WORD *)(*(_DWORD *)(a1 + 376) + 4 * a3 + 2);
  *(_WORD *)(v6 + 42) = *(_WORD *)(*(_DWORD *)(a1 + 376) + 4 * a3);
  *(_DWORD *)(a1 + 4 * a3 + 388) = v6;
  if ( !v4 || v4 != v11 )
  {
LABEL_5:
    v7 = 1;
    goto LABEL_6;
  }
  if ( v9 )
  {
    EtwpEnqueueFreeBuffer(a1, v4);
    goto LABEL_5;
  }
  *(_DWORD *)(v4 + 44) = 3;
  v7 = 1;
  v12 = 1;
  **(_DWORD **)(a1 + 188) = v4 + 32;
  *(_DWORD *)(a1 + 188) = v4 + 32;
LABEL_6:
  RtlLeaveCriticalSection((PRTL_CRITICAL_SECTION)(a1 + 72));
  if ( v4 )
    _InterlockedDecrement((volatile signed __int32 *)(v4 + 12));
  if ( v12
    && (!*(_DWORD *)(a1 + 256)
     || (unsigned int)(*(_DWORD *)(a1 + 156) - *(_DWORD *)(a1 + 136) - *(_DWORD *)(a1 + 160)) >= *(_DWORD *)(a1 + 256)) )
  {
    NtSetEvent(*(HANDLE *)(a1 + 96), 0);
  }
  return v7;
}
