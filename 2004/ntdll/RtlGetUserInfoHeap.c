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

char __fastcall RtlGetUserInfoHeap(__int64 a1, unsigned int a2, __int64 a3, _QWORD *a4, _DWORD *a5)
{
  __int64 v6; // rbx
  int v8; // r15d
  __int64 v9; // rcx
  char v10; // r14
  __int64 v11; // rbx
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
  __int64 v23; // [rsp+38h] [rbp-20h]

  v6 = a3;
  v22 = 0;
  if ( *(_DWORD *)(a1 + 16) == -571548178 )
  {
    v16 = RtlpHpConvertFlagsToSegmentFlags(a2);
    v17 = *(_DWORD *)(a1 + 220);
    v18 = 0;
    if ( v17 )
      LOBYTE(v18) = v17 == LODWORD(NtCurrentTeb()->ClientId.UniqueThread);
    v19 = v16 | 1;
    if ( !v18 )
      v19 = v16;
    if ( (RtlpHpAppCompatFlags & 2) != 0 && v6 )
      v6 -= *(_QWORD *)(v6 - 16);
    return RtlpHpGetUserInfo(a1, v6, v19, v15, (__int64)a5);
  }
  v8 = *(_DWORD *)(a1 + 116) | a2;
  if ( (v8 & 0x61000000) != 0 && (v8 & 0x10000000) == 0 )
    return RtlDebugGetUserInfoHeap(a1, v8, a3, (_DWORD)a4, (__int64)a5);
  if ( (v8 & 0x800) != 0 )
  {
    v9 = RtlpProbeUserBufferSafe(a1, a3);
    v10 = 1;
  }
  else
  {
    v10 = 1;
    if ( (*(_BYTE *)(a1 + 120) & 1) != 0 )
    {
      v9 = RtlpProbeUserBufferSafe(a1, a3);
    }
    else
    {
      if ( (a3 & 0xF) != 0 )
      {
        v20 = 9;
      }
      else
      {
        v9 = a3 - 16;
        _m_prefetchw((const void *)(a3 - 16));
        if ( *(_BYTE *)(a3 - 16 + 15) == 5 )
          v9 -= 16LL * *(unsigned __int8 *)(v9 + 14);
        if ( (*(_BYTE *)(v9 + 15) & 0x3F) != 0 )
          goto LABEL_5;
        LODWORD(a3) = v9;
        v20 = 8;
      }
      RtlpLogHeapFailure(v20, a1, a3, 0, 0LL, 0LL);
      v9 = 0LL;
    }
  }
LABEL_5:
  if ( v9 )
  {
    if ( *(char *)(v9 + 15) >= 0 )
    {
      v11 = v6 - 16;
      _m_prefetchw((const void *)v11);
      if ( *(_BYTE *)(v11 + 15) == 5 )
        v11 -= 16LL * *(unsigned __int8 *)(v11 + 14);
      v23 = v11;
      if ( (v8 & 1) == 0 )
      {
        RtlEnterCriticalSection(*(_QWORD *)(a1 + 352));
        v22 = 1;
      }
      if ( *(_DWORD *)(a1 + 124) )
      {
        *(_DWORD *)(v11 + 8) ^= *(_DWORD *)(a1 + 136);
        if ( *(_BYTE *)(v11 + 11) != (*(_BYTE *)(v11 + 8) ^ (unsigned __int8)(*(_BYTE *)(v11 + 9) ^ *(_BYTE *)(v11 + 10))) )
          RtlpAnalyzeHeapFailure(a1, v11);
      }
      if ( (*(_BYTE *)(v11 + 15) & 0x3F) != 0 )
      {
        if ( (*(_BYTE *)(v11 + 10) & 2) != 0 )
        {
          ExtraStuffPointer = RtlpGetExtraStuffPointer(v11);
          if ( a4 )
            *a4 = *(_QWORD *)(ExtraStuffPointer + 8);
        }
        if ( a5 )
          *a5 = 16 * (*(_BYTE *)(v11 + 10) & 0xE0);
      }
      else
      {
        NtCurrentTeb()->LastStatusValue = -1073741811;
        v13 = NtCurrentTeb();
        v13->LastErrorValue = RtlNtStatusToDosError(-1073741811);
        v11 = v23;
        v10 = 0;
      }
      if ( *(_DWORD *)(a1 + 124) )
      {
        *(_BYTE *)(v11 + 11) = *(_BYTE *)(v11 + 8) ^ *(_BYTE *)(v11 + 9) ^ *(_BYTE *)(v11 + 10);
        *(_DWORD *)(v11 + 8) ^= *(_DWORD *)(a1 + 136);
      }
      if ( v22 )
        RtlLeaveCriticalSection(*(_QWORD *)(a1 + 352));
      return v10;
    }
    if ( (*(_BYTE *)(v9 + 15) & 0x3F) != 0 )
    {
      if ( a5 )
        *a5 = 0;
      return v10;
    }
  }
  NtCurrentTeb()->LastStatusValue = -1073741811;
  v21 = NtCurrentTeb();
  v21->LastErrorValue = RtlNtStatusToDosError(-1073741811);
  return 0;
}
