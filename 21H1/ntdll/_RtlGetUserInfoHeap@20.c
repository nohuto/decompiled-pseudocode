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

BOOLEAN __cdecl RtlGetUserInfoHeap(
        PVOID HeapHandle,
        ULONG Flags,
        PVOID BaseAddress,
        PVOID *UserValue,
        PULONG UserFlags)
{
  ULONG v5; // eax
  char *v6; // esi
  char *v7; // ecx
  int ExtraStuffPointer; // eax
  char *v9; // esi
  void *v10; // ecx
  struct _TEB *v11; // esi
  struct _TEB *v12; // esi
  PVOID v14; // [esp-10h] [ebp-4Ch]
  char v15; // [esp+18h] [ebp-24h]
  int v16; // [esp+18h] [ebp-24h]
  char *v17; // [esp+1Ch] [ebp-20h]
  char v18; // [esp+22h] [ebp-1Ah]
  char v19; // [esp+23h] [ebp-19h]

  v18 = 0;
  if ( *((_DWORD *)HeapHandle + 2) == -571548178 )
  {
    v16 = RtlpHpConvertFlagsToSegmentFlags(Flags);
    v10 = (void *)*((_DWORD *)HeapHandle + 44);
    if ( v10 && v10 == NtCurrentTeb()->ClientId.UniqueThread )
      v16 |= 1u;
    LOBYTE(ExtraStuffPointer) = RtlpHpGetUserInfo(v16, UserValue, UserFlags);
    return ExtraStuffPointer;
  }
  v5 = *((_DWORD *)HeapHandle + 17) | Flags;
  v15 = *((_BYTE *)HeapHandle + 68) | Flags;
  if ( (v5 & 0x61000000) != 0 && (v5 & 0x10000000) == 0 )
  {
    LOBYTE(ExtraStuffPointer) = RtlDebugGetUserInfoHeap(BaseAddress, UserValue, UserFlags);
    return ExtraStuffPointer;
  }
  if ( (v5 & 0x800) != 0 || (*((_BYTE *)HeapHandle + 72) & 1) != 0 )
  {
    v6 = (char *)BaseAddress;
    v7 = (char *)RtlpProbeUserBufferSafe((int)HeapHandle, (int)BaseAddress);
    goto LABEL_5;
  }
  if ( ((unsigned __int8)BaseAddress & 7) != 0 )
  {
    v14 = BaseAddress;
  }
  else
  {
    v7 = (char *)BaseAddress - 8;
    if ( *((char *)BaseAddress - 1) == 5 )
      v7 -= 8 * (unsigned __int8)v7[6];
    if ( (v7[7] & 0x3F) != 0 )
      goto LABEL_29;
    v14 = v7;
  }
  RtlpLogHeapFailure(v14, 0, 0, 0);
  v7 = 0;
LABEL_29:
  v6 = (char *)BaseAddress;
LABEL_5:
  if ( !v7 )
    goto LABEL_44;
  LOBYTE(ExtraStuffPointer) = v7[7];
  if ( (ExtraStuffPointer & 0x80u) == 0 )
  {
    v19 = 0;
    v9 = v6 - 8;
    if ( v9[7] == 5 )
    {
      ExtraStuffPointer = 8 * (unsigned __int8)v9[6];
      v9 -= ExtraStuffPointer;
    }
    v17 = v9;
    if ( (v15 & 1) == 0 )
    {
      LOBYTE(ExtraStuffPointer) = RtlEnterCriticalSection(*((PRTL_CRITICAL_SECTION *)HeapHandle + 50));
      v18 = 1;
    }
    if ( *((_DWORD *)HeapHandle + 19) )
    {
      *(_DWORD *)v9 ^= *((_DWORD *)HeapHandle + 20);
      LOBYTE(ExtraStuffPointer) = *v9 ^ v9[1] ^ v9[2];
      if ( v9[3] != (_BYTE)ExtraStuffPointer )
        LOBYTE(ExtraStuffPointer) = RtlpAnalyzeHeapFailure(v7);
    }
    if ( (v9[7] & 0x3F) != 0 )
    {
      if ( (v9[2] & 2) != 0 )
      {
        ExtraStuffPointer = RtlpGetExtraStuffPointer(v9);
        if ( UserValue )
        {
          ExtraStuffPointer = *(_DWORD *)(ExtraStuffPointer + 4);
          *UserValue = (PVOID)ExtraStuffPointer;
        }
      }
      if ( UserFlags )
      {
        ExtraStuffPointer = 16 * (v9[2] & 0xE0);
        *UserFlags = ExtraStuffPointer;
      }
      v19 = 1;
    }
    else
    {
      NtCurrentTeb()->LastStatusValue = -1073741811;
      v12 = NtCurrentTeb();
      ExtraStuffPointer = RtlNtStatusToDosError(-1073741811);
      v12->LastErrorValue = ExtraStuffPointer;
      v9 = v17;
    }
    if ( *((_DWORD *)HeapHandle + 19) )
    {
      v9[3] = *v9 ^ v9[1] ^ v9[2];
      ExtraStuffPointer = *((_DWORD *)HeapHandle + 20);
      *(_DWORD *)v9 ^= ExtraStuffPointer;
    }
    if ( v18 )
    {
      RtlLeaveCriticalSection(*((PRTL_CRITICAL_SECTION *)HeapHandle + 50));
      LOBYTE(ExtraStuffPointer) = v19;
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
  if ( UserFlags )
    *UserFlags = 0;
  LOBYTE(ExtraStuffPointer) = 1;
  return ExtraStuffPointer;
}
