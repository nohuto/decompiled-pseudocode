/*
 * XREFs of _RtlGetUserInfoHeap@20 @ 0x4B2E37E0
 * Callers:
 *     _RtlDebugGetUserInfoHeap@20 @ 0x4B35FA2C (_RtlDebugGetUserInfoHeap@20.c)
 * Callees:
 *     @RtlpProbeUserBufferSafe@8 @ 0x4B2AA492 (@RtlpProbeUserBufferSafe@8.c)
 *     _RtlLeaveCriticalSection@4 @ 0x4B2BE700 (_RtlLeaveCriticalSection@4.c)
 *     _RtlEnterCriticalSection@4 @ 0x4B2BFE90 (_RtlEnterCriticalSection@4.c)
 *     _RtlNtStatusToDosError@4 @ 0x4B2DAB70 (_RtlNtStatusToDosError@4.c)
 *     _RtlGetUserInfoHeap@20 @ 0x4B2E37E0 (_RtlGetUserInfoHeap@20.c)
 *     _RtlpGetExtraStuffPointer@4 @ 0x4B2E3AB9 (_RtlpGetExtraStuffPointer@4.c)
 *     __SEH_prolog4 @ 0x4B307AC4 (__SEH_prolog4.c)
 *     _RtlpHpConvertFlagsToSegmentFlags@4 @ 0x4B35D732 (_RtlpHpConvertFlagsToSegmentFlags@4.c)
 *     _RtlDebugGetUserInfoHeap@20 @ 0x4B35FA2C (_RtlDebugGetUserInfoHeap@20.c)
 *     _RtlpAnalyzeHeapFailure@12 @ 0x4B36D496 (_RtlpAnalyzeHeapFailure@12.c)
 *     _RtlpHeapExceptionFilter@8 @ 0x4B375DFF (_RtlpHeapExceptionFilter@8.c)
 *     _RtlpLogHeapFailure@24 @ 0x4B375E3D (_RtlpLogHeapFailure@24.c)
 *     _RtlpHpGetUserInfo@20 @ 0x4B37872D (_RtlpHpGetUserInfo@20.c)
 */

char __stdcall RtlGetUserInfoHeap(int a1, int a2, int a3, ULONG *a4, ULONG *a5)
{
  int v5; // eax
  int v6; // esi
  int v7; // ecx
  ULONG ExtraStuffPointer; // eax
  int v9; // esi
  void *v10; // ecx
  struct _TEB *v11; // esi
  struct _TEB *v12; // esi
  char v14; // [esp+18h] [ebp-24h]
  int v15; // [esp+18h] [ebp-24h]
  int v16; // [esp+1Ch] [ebp-20h]
  char v17; // [esp+22h] [ebp-1Ah]
  char v18; // [esp+23h] [ebp-19h]

  v17 = 0;
  if ( *(_DWORD *)(a1 + 8) == -571548178 )
  {
    v15 = RtlpHpConvertFlagsToSegmentFlags(a2);
    v10 = *(void **)(a1 + 176);
    if ( v10 && v10 == NtCurrentTeb()->ClientId.UniqueThread )
      v15 |= 1u;
    LOBYTE(ExtraStuffPointer) = RtlpHpGetUserInfo(v15, a4, a5);
    return ExtraStuffPointer;
  }
  v5 = *(_DWORD *)(a1 + 68) | a2;
  v14 = *(_BYTE *)(a1 + 68) | a2;
  if ( (v5 & 0x61000000) != 0 && (v5 & 0x10000000) == 0 )
  {
    LOBYTE(ExtraStuffPointer) = RtlDebugGetUserInfoHeap(a3, a4, a5);
    return ExtraStuffPointer;
  }
  if ( (v5 & 0x800) != 0 || (*(_BYTE *)(a1 + 72) & 1) != 0 )
  {
    v6 = a3;
    v7 = RtlpProbeUserBufferSafe(a1, a3);
    goto LABEL_5;
  }
  if ( (a3 & 7) != 0 )
  {
    RtlpLogHeapFailure(a3, 0, 0, 0);
  }
  else
  {
    v7 = a3 - 8;
    if ( *(_BYTE *)(a3 - 8 + 7) == 5 )
      v7 -= 8 * *(unsigned __int8 *)(v7 + 6);
    if ( (*(_BYTE *)(v7 + 7) & 0x3F) != 0 )
      goto LABEL_29;
    RtlpLogHeapFailure(v7, 0, 0, 0);
  }
  v7 = 0;
LABEL_29:
  v6 = a3;
LABEL_5:
  if ( !v7 )
    goto LABEL_44;
  LOBYTE(ExtraStuffPointer) = *(_BYTE *)(v7 + 7);
  if ( (ExtraStuffPointer & 0x80u) == 0 )
  {
    v18 = 0;
    v9 = v6 - 8;
    if ( *(_BYTE *)(v9 + 7) == 5 )
    {
      ExtraStuffPointer = 8 * *(unsigned __int8 *)(v9 + 6);
      v9 -= ExtraStuffPointer;
    }
    v16 = v9;
    if ( (v14 & 1) == 0 )
    {
      LOBYTE(ExtraStuffPointer) = RtlEnterCriticalSection(*(_DWORD *)(a1 + 200));
      v17 = 1;
    }
    if ( *(_DWORD *)(a1 + 76) )
    {
      *(_DWORD *)v9 ^= *(_DWORD *)(a1 + 80);
      LOBYTE(ExtraStuffPointer) = *(_BYTE *)v9 ^ *(_BYTE *)(v9 + 1) ^ *(_BYTE *)(v9 + 2);
      if ( *(_BYTE *)(v9 + 3) != (_BYTE)ExtraStuffPointer )
        LOBYTE(ExtraStuffPointer) = RtlpAnalyzeHeapFailure(v7);
    }
    if ( (*(_BYTE *)(v9 + 7) & 0x3F) != 0 )
    {
      if ( (*(_BYTE *)(v9 + 2) & 2) != 0 )
      {
        ExtraStuffPointer = RtlpGetExtraStuffPointer(v9);
        if ( a4 )
        {
          ExtraStuffPointer = *(_DWORD *)(ExtraStuffPointer + 4);
          *a4 = ExtraStuffPointer;
        }
      }
      if ( a5 )
      {
        ExtraStuffPointer = 16 * (*(_BYTE *)(v9 + 2) & 0xE0);
        *a5 = ExtraStuffPointer;
      }
      v18 = 1;
    }
    else
    {
      NtCurrentTeb()->LastStatusValue = -1073741811;
      v12 = NtCurrentTeb();
      ExtraStuffPointer = RtlNtStatusToDosError(-1073741811);
      v12->LastErrorValue = ExtraStuffPointer;
      v9 = v16;
    }
    if ( *(_DWORD *)(a1 + 76) )
    {
      *(_BYTE *)(v9 + 3) = *(_BYTE *)v9 ^ *(_BYTE *)(v9 + 1) ^ *(_BYTE *)(v9 + 2);
      ExtraStuffPointer = *(_DWORD *)(a1 + 80);
      *(_DWORD *)v9 ^= ExtraStuffPointer;
    }
    if ( v17 )
    {
      RtlLeaveCriticalSection(*(_DWORD *)(a1 + 200));
      LOBYTE(ExtraStuffPointer) = v18;
    }
    return ExtraStuffPointer;
  }
  if ( (ExtraStuffPointer & 0x3F) == 0 )
  {
LABEL_44:
    NtCurrentTeb()->LastStatusValue = -1073741811;
    v11 = NtCurrentTeb();
    v11->LastErrorValue = RtlNtStatusToDosError(-1073741811);
    LOBYTE(ExtraStuffPointer) = 0;
    return ExtraStuffPointer;
  }
  if ( a5 )
    *a5 = 0;
  LOBYTE(ExtraStuffPointer) = 1;
  return ExtraStuffPointer;
}
