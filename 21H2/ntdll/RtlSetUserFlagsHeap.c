/*
 * XREFs of RtlSetUserFlagsHeap @ 0x1800F2E30
 * Callers:
 *     RtlDebugSetUserFlagsHeap @ 0x1800F9F14 (RtlDebugSetUserFlagsHeap.c)
 * Callees:
 *     RtlpProbeUserBufferSafe @ 0x180001E7C (RtlpProbeUserBufferSafe.c)
 *     RtlpHpExtrasGet @ 0x1800021A0 (RtlpHpExtrasGet.c)
 *     RtlpHpConvertFlagsToSegmentFlags @ 0x1800246E0 (RtlpHpConvertFlagsToSegmentFlags.c)
 *     RtlLeaveCriticalSection @ 0x18002F230 (RtlLeaveCriticalSection.c)
 *     RtlEnterCriticalSection @ 0x18002FAA0 (RtlEnterCriticalSection.c)
 *     RtlNtStatusToDosError @ 0x180051950 (RtlNtStatusToDosError.c)
 *     RtlDebugSetUserFlagsHeap @ 0x1800F9F14 (RtlDebugSetUserFlagsHeap.c)
 *     RtlpAnalyzeHeapFailure @ 0x180107E64 (RtlpAnalyzeHeapFailure.c)
 *     RtlpHeapExceptionFilter @ 0x18010E064 (RtlpHeapExceptionFilter.c)
 *     RtlpLogHeapFailure @ 0x18010E17C (RtlpLogHeapFailure.c)
 */

BOOLEAN __cdecl RtlSetUserFlagsHeap(
        PVOID HeapHandle,
        ULONG Flags,
        PVOID BaseAddress,
        ULONG UserFlagsReset,
        ULONG UserFlagsSet)
{
  char *v6; // rbx
  int v8; // r9d
  int v9; // ecx
  int v10; // edx
  BOOLEAN v11; // si
  int v12; // ecx
  unsigned __int64 v13; // rcx
  struct _TEB *v14; // rbx
  ULONG v15; // eax
  ULONG v16; // r12d
  unsigned __int8 *v17; // rcx
  int v18; // ecx
  char *v19; // rbx
  struct _TEB *v20; // rbx
  char v21; // r15
  char v23; // [rsp+31h] [rbp-27h]
  char *v24; // [rsp+38h] [rbp-20h]

  v6 = (char *)BaseAddress;
  v23 = 0;
  if ( ((UserFlagsSet | UserFlagsReset) & 0xFFFFF1FF) != 0 )
    goto LABEL_42;
  if ( *((_DWORD *)HeapHandle + 4) != -571548178 )
  {
    v16 = *((_DWORD *)HeapHandle + 29) | Flags;
    if ( (v16 & 0x61000000) != 0 && (v16 & 0x10000000) == 0 )
      return RtlDebugSetUserFlagsHeap(HeapHandle, UserFlagsSet);
    v11 = 1;
    if ( (*((_BYTE *)HeapHandle + 120) & 1) != 0 )
    {
      v17 = RtlpProbeUserBufferSafe((int)HeapHandle, (__int64)BaseAddress);
      goto LABEL_26;
    }
    if ( ((unsigned __int8)BaseAddress & 0xF) != 0 )
    {
      v18 = 9;
    }
    else
    {
      v17 = (unsigned __int8 *)BaseAddress - 16;
      _m_prefetchw((char *)BaseAddress - 16);
      if ( *((char *)BaseAddress - 1) == 5 )
        v17 -= 16 * v17[14];
      if ( (v17[15] & 0x3F) != 0 )
      {
LABEL_26:
        if ( v17 && (v17[15] & 0x80u) == 0 )
        {
          if ( (v16 & 1) == 0 )
          {
            RtlEnterCriticalSection(*((PRTL_CRITICAL_SECTION *)HeapHandle + 44));
            v23 = 1;
          }
          v19 = v6 - 16;
          _m_prefetchw(v19);
          if ( v19[15] == 5 )
            v19 -= 16 * (unsigned __int8)v19[14];
          v24 = v19;
          if ( *((_DWORD *)HeapHandle + 31) )
          {
            *((_DWORD *)v19 + 2) ^= *((_DWORD *)HeapHandle + 34);
            if ( v19[11] != ((unsigned __int8)v19[8] ^ (unsigned __int8)(v19[9] ^ v19[10])) )
              RtlpAnalyzeHeapFailure(HeapHandle, v19);
          }
          if ( (v19[15] & 0x3F) != 0 )
          {
            v21 = v19[10] & ~(unsigned __int8)(UserFlagsReset >> 4);
            v19[10] = v21;
            v19[10] = v21 | (UserFlagsSet >> 4);
          }
          else
          {
            NtCurrentTeb()->LastStatusValue = -1073741811;
            v20 = NtCurrentTeb();
            v20->LastErrorValue = RtlNtStatusToDosError(-1073741811);
            v11 = 0;
            v19 = v24;
          }
          if ( *((_DWORD *)HeapHandle + 31) )
          {
            v19[11] = v19[8] ^ v19[9] ^ v19[10];
            *((_DWORD *)v19 + 2) ^= *((_DWORD *)HeapHandle + 34);
          }
          if ( v23 )
            RtlLeaveCriticalSection(*((PRTL_CRITICAL_SECTION *)HeapHandle + 44));
          return v11;
        }
LABEL_42:
        NtCurrentTeb()->LastStatusValue = -1073741811;
        v14 = NtCurrentTeb();
        v15 = RtlNtStatusToDosError(-1073741811);
        v11 = 0;
        goto LABEL_43;
      }
      LODWORD(BaseAddress) = (_DWORD)v17;
      v18 = 8;
    }
    RtlpLogHeapFailure(v18, (_DWORD)HeapHandle, (_DWORD)BaseAddress, 0, 0LL, 0LL);
    v17 = 0LL;
    goto LABEL_26;
  }
  v8 = RtlpHpConvertFlagsToSegmentFlags(Flags);
  v9 = *((_DWORD *)HeapHandle + 55);
  v10 = 0;
  if ( v9 )
    LOBYTE(v10) = v9 == LODWORD(NtCurrentTeb()->ClientId.UniqueThread);
  v11 = 1;
  v12 = v8 | 1;
  if ( !v10 )
    v12 = v8;
  if ( !v6 )
    goto LABEL_42;
  if ( (RtlpHpAppCompatFlags & 2) != 0 )
    v6 -= *((_QWORD *)v6 - 2);
  v13 = RtlpHpExtrasGet((__int64)HeapHandle, (__int64)v6, (unsigned int)v12 | *((_DWORD *)HeapHandle + 5), 0LL);
  if ( v13 - 1 > 0xFFFFFFFFFFFFFFFDuLL )
    v11 = 0;
  else
    *(_BYTE *)(v13 + 2) = *(_BYTE *)(v13 + 2) & ((16 * ~BYTE1(UserFlagsReset)) | 0xF) | (16 * BYTE1(UserFlagsSet));
  if ( !v11 )
  {
    NtCurrentTeb()->LastStatusValue = -1073741811;
    v14 = NtCurrentTeb();
    v15 = RtlNtStatusToDosError(-1073741811);
LABEL_43:
    v14->LastErrorValue = v15;
  }
  return v11;
}
