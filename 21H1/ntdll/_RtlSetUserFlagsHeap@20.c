/*
 * XREFs of _RtlSetUserFlagsHeap@20 @ 0x4B357160
 * Callers:
 *     _RtlDebugSetUserFlagsHeap@20 @ 0x4B36015A (_RtlDebugSetUserFlagsHeap@20.c)
 * Callees:
 *     @RtlpProbeUserBufferSafe@8 @ 0x4B2AA492 (@RtlpProbeUserBufferSafe@8.c)
 *     _RtlLeaveCriticalSection@4 @ 0x4B2BE700 (_RtlLeaveCriticalSection@4.c)
 *     _RtlEnterCriticalSection@4 @ 0x4B2BFE90 (_RtlEnterCriticalSection@4.c)
 *     _RtlNtStatusToDosError@4 @ 0x4B2DAB70 (_RtlNtStatusToDosError@4.c)
 *     __SEH_prolog4 @ 0x4B307AC4 (__SEH_prolog4.c)
 *     _RtlSetUserFlagsHeap@20 @ 0x4B357160 (_RtlSetUserFlagsHeap@20.c)
 *     _RtlpHpConvertFlagsToSegmentFlags@4 @ 0x4B35D732 (_RtlpHpConvertFlagsToSegmentFlags@4.c)
 *     _RtlDebugSetUserFlagsHeap@20 @ 0x4B36015A (_RtlDebugSetUserFlagsHeap@20.c)
 *     _RtlpAnalyzeHeapFailure@12 @ 0x4B36D496 (_RtlpAnalyzeHeapFailure@12.c)
 *     _RtlpHeapExceptionFilter@8 @ 0x4B375DFF (_RtlpHeapExceptionFilter@8.c)
 *     _RtlpLogHeapFailure@24 @ 0x4B375E3D (_RtlpLogHeapFailure@24.c)
 *     _RtlpHpSetUserFlags@20 @ 0x4B379956 (_RtlpHpSetUserFlags@20.c)
 */

BOOLEAN __cdecl RtlSetUserFlagsHeap(
        PVOID HeapHandle,
        ULONG Flags,
        PVOID BaseAddress,
        ULONG UserFlagsReset,
        ULONG UserFlagsSet)
{
  BOOLEAN v5; // bl
  void *v6; // ecx
  char *v7; // esi
  char *v8; // ecx
  char *v9; // esi
  struct _TEB *v10; // esi
  char v11; // al
  struct _TEB *v12; // esi
  PVOID v14; // [esp-10h] [ebp-4Ch]
  int v15; // [esp+0h] [ebp-3Ch]
  int v16; // [esp+4h] [ebp-38h]
  int v17; // [esp+18h] [ebp-24h]
  ULONG v18; // [esp+18h] [ebp-24h]
  char *v19; // [esp+1Ch] [ebp-20h]
  char v20; // [esp+22h] [ebp-1Ah]
  BOOLEAN v21; // [esp+23h] [ebp-19h]

  v5 = 0;
  v20 = 0;
  v21 = 0;
  if ( ((UserFlagsSet | UserFlagsReset) & 0xFFFFF1FF) != 0 )
    goto LABEL_38;
  if ( *((_DWORD *)HeapHandle + 2) != -571548178 )
  {
    v18 = *((_DWORD *)HeapHandle + 17) | Flags;
    if ( (v18 & 0x61000000) != 0 && (v18 & 0x10000000) == 0 )
      return RtlDebugSetUserFlagsHeap(BaseAddress, UserFlagsReset, UserFlagsSet, v15, v16);
    if ( (*((_BYTE *)HeapHandle + 72) & 1) != 0 )
    {
      v7 = (char *)BaseAddress;
      v8 = (char *)RtlpProbeUserBufferSafe((int)HeapHandle, (int)BaseAddress);
LABEL_21:
      if ( v8 && v8[7] >= 0 )
      {
        if ( (v18 & 1) == 0 )
        {
          RtlEnterCriticalSection(*((PRTL_CRITICAL_SECTION *)HeapHandle + 50));
          v20 = 1;
        }
        v9 = v7 - 8;
        if ( v9[7] == 5 )
          v9 -= 8 * (unsigned __int8)v9[6];
        v19 = v9;
        if ( *((_DWORD *)HeapHandle + 19) )
        {
          *(_DWORD *)v9 ^= *((_DWORD *)HeapHandle + 20);
          if ( v9[3] != ((unsigned __int8)*v9 ^ (unsigned __int8)(v9[1] ^ v9[2])) )
            RtlpAnalyzeHeapFailure(v8);
        }
        if ( (v9[7] & 0x3F) != 0 )
        {
          v11 = v9[2] & ~(unsigned __int8)(UserFlagsReset >> 4);
          v9[2] = v11;
          v9[2] = v11 | (UserFlagsSet >> 4);
          v21 = 1;
        }
        else
        {
          NtCurrentTeb()->LastStatusValue = -1073741811;
          v10 = NtCurrentTeb();
          v10->LastErrorValue = RtlNtStatusToDosError(-1073741811);
          v9 = v19;
        }
        if ( *((_DWORD *)HeapHandle + 19) )
        {
          v9[3] = *v9 ^ v9[1] ^ v9[2];
          *(_DWORD *)v9 ^= *((_DWORD *)HeapHandle + 20);
        }
        if ( v20 )
          RtlLeaveCriticalSection(*((PRTL_CRITICAL_SECTION *)HeapHandle + 50));
        return v21;
      }
LABEL_38:
      NtCurrentTeb()->LastStatusValue = -1073741811;
      v12 = NtCurrentTeb();
      v12->LastErrorValue = RtlNtStatusToDosError(-1073741811);
      return v5;
    }
    if ( ((unsigned __int8)BaseAddress & 7) != 0 )
    {
      v14 = BaseAddress;
    }
    else
    {
      v8 = (char *)BaseAddress - 8;
      if ( *((char *)BaseAddress - 1) == 5 )
        v8 -= 8 * (unsigned __int8)v8[6];
      if ( (v8[7] & 0x3F) != 0 )
        goto LABEL_20;
      v14 = v8;
    }
    RtlpLogHeapFailure(v14, 0, 0, 0);
    v8 = 0;
LABEL_20:
    v7 = (char *)BaseAddress;
    goto LABEL_21;
  }
  v17 = RtlpHpConvertFlagsToSegmentFlags(Flags);
  v6 = (void *)*((_DWORD *)HeapHandle + 44);
  if ( v6 && v6 == NtCurrentTeb()->ClientId.UniqueThread )
    v17 |= 1u;
  if ( !BaseAddress )
    goto LABEL_38;
  v5 = RtlpHpSetUserFlags(v17, UserFlagsReset, UserFlagsSet);
  if ( !v5 )
    goto LABEL_38;
  return v5;
}
