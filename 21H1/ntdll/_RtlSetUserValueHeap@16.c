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

char __thiscall RtlSetUserValueHeap(void *this, int a2, int a3, int a4, int a5)
{
  char v5; // bl
  int v6; // eax
  int v7; // esi
  char v8; // al
  void *v10; // ecx
  int v11; // eax
  struct _TEB *v12; // esi
  struct _TEB *v13; // esi
  struct _TEB *v14; // esi
  char v15; // [esp+14h] [ebp-24h]
  int v16; // [esp+14h] [ebp-24h]
  char v17; // [esp+1Eh] [ebp-1Ah]
  char v18; // [esp+1Fh] [ebp-19h]

  v5 = 0;
  v18 = 0;
  if ( *(_DWORD *)(a2 + 8) != -571548178 )
  {
    v6 = *(_DWORD *)(a2 + 68) | a3;
    v15 = *(_BYTE *)(a2 + 68) | a3;
    if ( (v6 & 0x61000000) != 0 && (v6 & 0x10000000) == 0 )
      return RtlDebugSetUserValueHeap(a4, a5);
    if ( (*(_BYTE *)(a2 + 72) & 1) != 0 )
    {
      v7 = RtlpProbeUserBufferSafe(a2, a4);
    }
    else
    {
      if ( (a4 & 7) != 0 )
      {
        RtlpLogHeapFailure(a4, 0, 0, 0);
LABEL_6:
        v7 = 0;
        goto LABEL_7;
      }
      v7 = a4 - 8;
      if ( *(_BYTE *)(a4 - 8 + 7) == 5 )
        v7 -= 8 * *(unsigned __int8 *)(v7 + 6);
      if ( (*(_BYTE *)(v7 + 7) & 0x3F) == 0 )
      {
        RtlpLogHeapFailure(v7, 0, 0, 0);
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
    v17 = 0;
    if ( (v15 & 1) == 0 )
    {
      RtlEnterCriticalSection(*(_DWORD *)(a2 + 200));
      v18 = 1;
    }
    v8 = *(_BYTE *)(v7 + 7);
    if ( (v8 & 0x3F) != 0 )
    {
      if ( v8 >= 0 )
      {
        if ( *(_DWORD *)(a2 + 76) )
        {
          *(_DWORD *)v7 ^= *(_DWORD *)(a2 + 80);
          if ( *(_BYTE *)(v7 + 3) != (*(_BYTE *)v7 ^ (unsigned __int8)(*(_BYTE *)(v7 + 1) ^ *(_BYTE *)(v7 + 2))) )
            RtlpAnalyzeHeapFailure(this);
        }
        if ( (*(_BYTE *)(v7 + 2) & 2) != 0 )
        {
          *(_DWORD *)(RtlpGetExtraStuffPointer(v7) + 4) = a5;
          v17 = 1;
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
    if ( v7 && *(_DWORD *)(a2 + 76) )
    {
      *(_BYTE *)(v7 + 3) = *(_BYTE *)v7 ^ *(_BYTE *)(v7 + 1) ^ *(_BYTE *)(v7 + 2);
      *(_DWORD *)v7 ^= *(_DWORD *)(a2 + 80);
    }
    if ( v18 )
      RtlLeaveCriticalSection(*(_DWORD *)(a2 + 200));
    return v17;
  }
  v16 = RtlpHpConvertFlagsToSegmentFlags(a3);
  v10 = *(void **)(a2 + 176);
  if ( v10 && v10 == NtCurrentTeb()->ClientId.UniqueThread )
    v16 |= 1u;
  v11 = RtlpHpExtrasGet(v16 | *(_DWORD *)(a2 + 12), 0);
  if ( v11 && v11 != -1 )
  {
    *(_DWORD *)(v11 + 4) = a5;
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
