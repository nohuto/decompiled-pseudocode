/*
 * XREFs of _RtlSetUserValueHeap@16 @ 0x4B2E3990
 * Callers:
 *     _RtlDebugSetUserValueHeap@16 @ 0x4B3602B5 (_RtlDebugSetUserValueHeap@16.c)
 * Callees:
 *     @RtlpProbeUserBufferSafe@8 @ 0x4B2AA492 (@RtlpProbeUserBufferSafe@8.c)
 *     _RtlLeaveCriticalSection@4 @ 0x4B2BE700 (_RtlLeaveCriticalSection@4.c)
 *     _RtlEnterCriticalSection@4 @ 0x4B2BFE90 (_RtlEnterCriticalSection@4.c)
 *     _RtlNtStatusToDosError@4 @ 0x4B2DAB70 (_RtlNtStatusToDosError@4.c)
 *     _RtlSetUserValueHeap@16 @ 0x4B2E3990 (_RtlSetUserValueHeap@16.c)
 *     _RtlpGetExtraStuffPointer@4 @ 0x4B2E3AB9 (_RtlpGetExtraStuffPointer@4.c)
 *     __SEH_prolog4 @ 0x4B307AC4 (__SEH_prolog4.c)
 *     _RtlpHpConvertFlagsToSegmentFlags@4 @ 0x4B35D732 (_RtlpHpConvertFlagsToSegmentFlags@4.c)
 *     _RtlDebugSetUserValueHeap@16 @ 0x4B3602B5 (_RtlDebugSetUserValueHeap@16.c)
 *     _RtlpAnalyzeHeapFailure@12 @ 0x4B36D496 (_RtlpAnalyzeHeapFailure@12.c)
 *     _RtlpLogHeapFailure@24 @ 0x4B375E3D (_RtlpLogHeapFailure@24.c)
 *     _RtlpHpExtrasGet@16 @ 0x4B3783B5 (_RtlpHpExtrasGet@16.c)
 */

BOOLEAN __cdecl RtlSetUserValueHeap(PVOID HeapHandle, ULONG Flags, PVOID BaseAddress, PVOID UserValue)
{
  int v4; // ecx
  BOOLEAN v5; // bl
  ULONG v6; // eax
  char *v7; // esi
  char v8; // al
  void *v10; // ecx
  int v11; // eax
  struct _TEB *v12; // esi
  struct _TEB *v13; // esi
  struct _TEB *v14; // esi
  PVOID v15; // [esp-10h] [ebp-48h]
  char v16; // [esp+14h] [ebp-24h]
  int v17; // [esp+14h] [ebp-24h]
  BOOLEAN v18; // [esp+1Eh] [ebp-1Ah]
  char v19; // [esp+1Fh] [ebp-19h]

  v5 = 0;
  v19 = 0;
  if ( *((_DWORD *)HeapHandle + 2) != -571548178 )
  {
    v6 = *((_DWORD *)HeapHandle + 17) | Flags;
    v16 = *((_BYTE *)HeapHandle + 68) | Flags;
    if ( (v6 & 0x61000000) != 0 && (v6 & 0x10000000) == 0 )
      return RtlDebugSetUserValueHeap(BaseAddress, UserValue);
    if ( (*((_BYTE *)HeapHandle + 72) & 1) != 0 )
    {
      v7 = (char *)RtlpProbeUserBufferSafe((int)HeapHandle, (int)BaseAddress);
    }
    else
    {
      if ( ((unsigned __int8)BaseAddress & 7) != 0 )
      {
        v15 = BaseAddress;
LABEL_6:
        RtlpLogHeapFailure(v15, 0, 0, 0);
        v7 = 0;
        goto LABEL_7;
      }
      v7 = (char *)BaseAddress - 8;
      if ( *((char *)BaseAddress - 1) == 5 )
        v7 -= 8 * (unsigned __int8)v7[6];
      if ( (v7[7] & 0x3F) == 0 )
      {
        v15 = v7;
        goto LABEL_6;
      }
    }
LABEL_7:
    if ( !v7 )
    {
      NtCurrentTeb()->LastStatusValue = -1073741811;
      v13 = NtCurrentTeb();
      v13->LastErrorValue = RtlNtStatusToDosError(-1073741811);
      return 0;
    }
    v18 = 0;
    if ( (v16 & 1) == 0 )
    {
      RtlEnterCriticalSection(*((PRTL_CRITICAL_SECTION *)HeapHandle + 50));
      v19 = 1;
    }
    v8 = v7[7];
    if ( (v8 & 0x3F) != 0 )
    {
      if ( v8 >= 0 )
      {
        if ( *((_DWORD *)HeapHandle + 19) )
        {
          *(_DWORD *)v7 ^= *((_DWORD *)HeapHandle + 20);
          if ( v7[3] != ((unsigned __int8)*v7 ^ (unsigned __int8)(v7[1] ^ v7[2])) )
            RtlpAnalyzeHeapFailure(v4);
        }
        if ( (v7[2] & 2) != 0 )
        {
          *(_DWORD *)(RtlpGetExtraStuffPointer(v7) + 4) = UserValue;
          v18 = 1;
        }
        goto LABEL_23;
      }
    }
    else
    {
      NtCurrentTeb()->LastStatusValue = -1073741811;
      v14 = NtCurrentTeb();
      v14->LastErrorValue = RtlNtStatusToDosError(-1073741811);
    }
    v7 = 0;
LABEL_23:
    if ( v7 && *((_DWORD *)HeapHandle + 19) )
    {
      v7[3] = *v7 ^ v7[1] ^ v7[2];
      *(_DWORD *)v7 ^= *((_DWORD *)HeapHandle + 20);
    }
    if ( v19 )
      RtlLeaveCriticalSection(*((PRTL_CRITICAL_SECTION *)HeapHandle + 50));
    return v18;
  }
  v17 = RtlpHpConvertFlagsToSegmentFlags(Flags);
  v10 = (void *)*((_DWORD *)HeapHandle + 44);
  if ( v10 && v10 == NtCurrentTeb()->ClientId.UniqueThread )
    v17 |= 1u;
  v11 = RtlpHpExtrasGet(v17 | *((_DWORD *)HeapHandle + 3), 0);
  if ( v11 && v11 != -1 )
  {
    *(_DWORD *)(v11 + 4) = UserValue;
    v5 = 1;
  }
  if ( !v5 )
  {
    NtCurrentTeb()->LastStatusValue = -1073741811;
    v12 = NtCurrentTeb();
    v12->LastErrorValue = RtlNtStatusToDosError(-1073741811);
  }
  return v5;
}
