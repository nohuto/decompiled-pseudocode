/*
 * XREFs of RtlGetUserInfoHeap @ 0x180001BC0
 * Callers:
 *     RtlDebugGetUserInfoHeap @ 0x1800F9340 (RtlDebugGetUserInfoHeap.c)
 * Callees:
 *     RtlpProbeUserBufferSafe @ 0x180001E7C (RtlpProbeUserBufferSafe.c)
 *     RtlpHpGetUserInfo @ 0x180001EF0 (RtlpHpGetUserInfo.c)
 *     RtlpGetExtraStuffPointer @ 0x1800024B0 (RtlpGetExtraStuffPointer.c)
 *     RtlpHpConvertFlagsToSegmentFlags @ 0x1800246E0 (RtlpHpConvertFlagsToSegmentFlags.c)
 *     RtlLeaveCriticalSection @ 0x18002F230 (RtlLeaveCriticalSection.c)
 *     RtlEnterCriticalSection @ 0x18002FAA0 (RtlEnterCriticalSection.c)
 *     RtlNtStatusToDosError @ 0x1800507F0 (RtlNtStatusToDosError.c)
 *     RtlDebugGetUserInfoHeap @ 0x1800F9340 (RtlDebugGetUserInfoHeap.c)
 *     RtlpAnalyzeHeapFailure @ 0x180107AF4 (RtlpAnalyzeHeapFailure.c)
 *     RtlpHeapExceptionFilter @ 0x18010DCF4 (RtlpHeapExceptionFilter.c)
 *     RtlpLogHeapFailure @ 0x18010DE0C (RtlpLogHeapFailure.c)
 */

BOOLEAN __cdecl RtlGetUserInfoHeap(
        PVOID HeapHandle,
        ULONG Flags,
        PVOID BaseAddress,
        PVOID *UserValue,
        PULONG UserFlags)
{
  char *v6; // rbx
  ULONG v8; // r15d
  char *v9; // rcx
  BOOLEAN v10; // r14
  char *v11; // rbx
  __int64 ExtraStuffPointer; // rax
  struct _TEB *v13; // rbx
  int v15; // r9d
  int v16; // r10d
  int v17; // edx
  int v18; // ecx
  int v19; // r8d
  int v20; // ecx
  struct _TEB *v21; // rbx
  char v22; // [rsp+31h] [rbp-27h]
  char *v23; // [rsp+38h] [rbp-20h]

  v6 = (char *)BaseAddress;
  v22 = 0;
  if ( *((_DWORD *)HeapHandle + 4) == -571548178 )
  {
    v16 = RtlpHpConvertFlagsToSegmentFlags(Flags);
    v17 = *((_DWORD *)HeapHandle + 55);
    v18 = 0;
    if ( v17 )
      LOBYTE(v18) = v17 == LODWORD(NtCurrentTeb()->ClientId.UniqueThread);
    v19 = v16 | 1;
    if ( !v18 )
      v19 = v16;
    if ( (RtlpHpAppCompatFlags & 2) != 0 && v6 )
      v6 -= *((_QWORD *)v6 - 2);
    return RtlpHpGetUserInfo((_DWORD)HeapHandle, (_DWORD)v6, v19, v15, (__int64)UserFlags);
  }
  v8 = *((_DWORD *)HeapHandle + 29) | Flags;
  if ( (v8 & 0x61000000) != 0 && (v8 & 0x10000000) == 0 )
    return RtlDebugGetUserInfoHeap(HeapHandle, UserFlags);
  if ( (v8 & 0x800) != 0 )
  {
    v9 = (char *)RtlpProbeUserBufferSafe(HeapHandle, BaseAddress);
    v10 = 1;
  }
  else
  {
    v10 = 1;
    if ( (*((_BYTE *)HeapHandle + 120) & 1) != 0 )
    {
      v9 = (char *)RtlpProbeUserBufferSafe(HeapHandle, BaseAddress);
    }
    else
    {
      if ( ((unsigned __int8)BaseAddress & 0xF) != 0 )
      {
        v20 = 9;
      }
      else
      {
        v9 = (char *)BaseAddress - 16;
        _m_prefetchw((char *)BaseAddress - 16);
        if ( *((char *)BaseAddress - 1) == 5 )
          v9 -= 16 * (unsigned __int8)v9[14];
        if ( (v9[15] & 0x3F) != 0 )
          goto LABEL_5;
        LODWORD(BaseAddress) = (_DWORD)v9;
        v20 = 8;
      }
      RtlpLogHeapFailure(v20, (_DWORD)HeapHandle, (_DWORD)BaseAddress, 0, 0LL, 0LL);
      v9 = 0LL;
    }
  }
LABEL_5:
  if ( v9 )
  {
    if ( v9[15] >= 0 )
    {
      v11 = v6 - 16;
      _m_prefetchw(v11);
      if ( v11[15] == 5 )
        v11 -= 16 * (unsigned __int8)v11[14];
      v23 = v11;
      if ( (v8 & 1) == 0 )
      {
        RtlEnterCriticalSection(*((PRTL_CRITICAL_SECTION *)HeapHandle + 44));
        v22 = 1;
      }
      if ( *((_DWORD *)HeapHandle + 31) )
      {
        *((_DWORD *)v11 + 2) ^= *((_DWORD *)HeapHandle + 34);
        if ( v11[11] != ((unsigned __int8)v11[8] ^ (unsigned __int8)(v11[9] ^ v11[10])) )
          RtlpAnalyzeHeapFailure(HeapHandle, v11);
      }
      if ( (v11[15] & 0x3F) != 0 )
      {
        if ( (v11[10] & 2) != 0 )
        {
          ExtraStuffPointer = RtlpGetExtraStuffPointer(v11);
          if ( UserValue )
            *UserValue = *(PVOID *)(ExtraStuffPointer + 8);
        }
        if ( UserFlags )
          *UserFlags = 16 * (v11[10] & 0xE0);
      }
      else
      {
        NtCurrentTeb()->LastStatusValue = -1073741811;
        v13 = NtCurrentTeb();
        v13->LastErrorValue = RtlNtStatusToDosError(-1073741811);
        v11 = v23;
        v10 = 0;
      }
      if ( *((_DWORD *)HeapHandle + 31) )
      {
        v11[11] = v11[8] ^ v11[9] ^ v11[10];
        *((_DWORD *)v11 + 2) ^= *((_DWORD *)HeapHandle + 34);
      }
      if ( v22 )
        RtlLeaveCriticalSection(*((PRTL_CRITICAL_SECTION *)HeapHandle + 44));
      return v10;
    }
    if ( (v9[15] & 0x3F) != 0 )
    {
      if ( UserFlags )
        *UserFlags = 0;
      return v10;
    }
  }
  NtCurrentTeb()->LastStatusValue = -1073741811;
  v21 = NtCurrentTeb();
  v21->LastErrorValue = RtlNtStatusToDosError(-1073741811);
  return 0;
}
