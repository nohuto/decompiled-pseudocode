/*
 * XREFs of _EtwpStartUmLogger@16 @ 0x4B2F0075
 * Callers:
 *     _EtwProcessPrivateLoggerRequest@4 @ 0x4B2EFF20 (_EtwProcessPrivateLoggerRequest@4.c)
 * Callees:
 *     _RtlNtStatusToDosError@4 @ 0x4B2DAB70 (_RtlNtStatusToDosError@4.c)
 *     _EtwpFreeLoggerContext@4 @ 0x4B2EE335 (_EtwpFreeLoggerContext@4.c)
 *     _EtwpSendSessionNotification@12 @ 0x4B2F0314 (_EtwpSendSessionNotification@12.c)
 *     _EtwpGetUmLoggerInfoFromContext@12 @ 0x4B2F03CA (_EtwpGetUmLoggerInfoFromContext@12.c)
 *     _EtwpCreateEtwThread@8 @ 0x4B2F04A0 (_EtwpCreateEtwThread@8.c)
 *     _EtwpAllocateTraceBufferPool@4 @ 0x4B2F0625 (_EtwpAllocateTraceBufferPool@4.c)
 *     _EtwpAddLogHeaderToLogFile@16 @ 0x4B2F085E (_EtwpAddLogHeaderToLogFile@16.c)
 *     _EtwpInitLoggerContext@20 @ 0x4B2F1733 (_EtwpInitLoggerContext@20.c)
 *     _EtwpGetNextAvailableLoggerId@8 @ 0x4B2F1A70 (_EtwpGetNextAvailableLoggerId@8.c)
 *     _EtwpGetPrivateLoggerContextByName@8 @ 0x4B2F1B33 (_EtwpGetPrivateLoggerContextByName@8.c)
 *     _NtClose@4 @ 0x4B2F2A50 (_NtClose@4.c)
 *     _NtQuerySystemInformation@16 @ 0x4B2F2CE0 (_NtQuerySystemInformation@16.c)
 *     @__security_check_cookie@4 @ 0x4B2F4B20 (@__security_check_cookie@4.c)
 *     _EtwpRegisterPrivateSession@12 @ 0x4B3818EE (_EtwpRegisterPrivateSession@12.c)
 *     _EtwpInitializeCompression@4 @ 0x4B383119 (_EtwpInitializeCompression@4.c)
 */

ULONG __fastcall EtwpStartUmLogger(int a1, _DWORD *a2, _DWORD *a3, int a4)
{
  bool v4; // cf
  int v5; // ebx
  unsigned int NumberOfProcessors; // esi
  unsigned int v7; // ecx
  int v8; // eax
  char v9; // dl
  int v10; // eax
  ULONG result; // eax
  int v12; // ebx
  int inited; // esi
  int v14; // eax
  NTSTATUS v15; // eax
  unsigned int v16; // eax
  ULONG TraceBufferPool; // ebx
  int v18; // ecx
  int EtwThread; // eax
  unsigned int v20; // eax
  NTSTATUS v21; // eax
  size_t v22; // [esp-8h] [ebp-68h]
  int v25; // [esp+14h] [ebp-4Ch]
  int v26; // [esp+18h] [ebp-48h] BYREF
  int v27; // [esp+1Ch] [ebp-44h]
  unsigned int Size; // [esp+20h] [ebp-40h]
  size_t Size_4; // [esp+24h] [ebp-3Ch] BYREF
  int v30; // [esp+28h] [ebp-38h] BYREF
  int v31; // [esp+2Ch] [ebp-34h]
  char SystemInformation[8]; // [esp+30h] [ebp-30h] BYREF
  int v33; // [esp+38h] [ebp-28h]

  v30 = 0;
  v4 = *(_DWORD *)a4 < 0xB0u;
  v27 = 0;
  Size = 0;
  if ( v4 )
    return 87;
  v5 = *(_DWORD *)(a4 + 64);
  *(_DWORD *)(a4 + 148) = a4 + 176;
  *(_DWORD *)(a4 + 132) = a4 + *(unsigned __int16 *)(a4 + 146) + 176;
  NumberOfProcessors = 1;
  if ( (v5 & 0x40B) != 0 )
  {
    v7 = ~(v5 & 0x40B);
    v8 = (unsigned __int8)v7;
    v7 >>= 8;
    v9 = RtlpBitsClearTotal[v8];
    v31 = v7 >> 8;
    if ( RtlpBitsClearTotal[(unsigned __int8)v7] + v9 + RtlpBitsClearTotal[BYTE1(v7)] + RtlpBitsClearTotal[HIWORD(v7)] == 1 )
      goto LABEL_4;
    return 87;
  }
  v5 |= 1u;
  *(_DWORD *)(a4 + 64) = v5;
LABEL_4:
  if ( (v5 & 0x2000000) != 0
    || (v5 & 0x400) != 0 && (*(_WORD *)(a4 + 128) || *(_DWORD *)(a4 + 68) || *(_DWORD *)(a4 + 76)) )
  {
    return 87;
  }
  v10 = *(_DWORD *)(a4 + 76);
  if ( v10 )
  {
    if ( *(_DWORD *)(a4 + 68) || v10 < 0 )
      return 87;
  }
  if ( (v5 & 6) == 6 || (v5 & 0xC000) == 0xC000 || (v5 & 0x4000000) != 0 && ((v5 & 0x26) != 0 || (v5 & 0x400) != 0) )
    return 87;
  if ( !EtwpGetPrivateLoggerContextByName(a4 + 144, &v30) )
  {
    _InterlockedDecrement((volatile signed __int32 *)(EtwpLoggerArray + 8 * *(_DWORD *)(v30 + 20) + 4));
    return 183;
  }
  result = EtwpGetNextAvailableLoggerId(a4, &v26);
  if ( !result )
  {
    if ( (*(_DWORD *)(a4 + 64) & 0x10000) != 0 )
    {
      v20 = (*(unsigned __int16 *)(a4 + 130) + *(unsigned __int16 *)(a4 + 146) + 183) & 0xFFFFFFF8;
      Size = *(_DWORD *)a4 - v20;
      v27 = a4 + v20;
      NumberOfProcessors = -1;
    }
    else if ( (*(_DWORD *)(a4 + 64) & 0x10000000) == 0 )
    {
      NumberOfProcessors = NtCurrentPeb()->NumberOfProcessors;
    }
    v12 = v26;
    v31 = v26;
    inited = EtwpInitLoggerContext(NumberOfProcessors, v27, Size);
    v30 = inited;
    if ( inited )
    {
      v14 = NtQuerySystemInformation(SystemBasicInformation, SystemInformation, 0x2Cu, 0);
      if ( v14 < 0 )
        return RtlNtStatusToDosError(v14);
      *(_DWORD *)(inited + 140) = ~(v33 - 1) & (v33 + *(_DWORD *)(inited + 140) - 1);
      if ( (*(_DWORD *)(inited + 212) & 0x4000000) != 0 )
      {
        v21 = EtwpInitializeCompression(inited);
        if ( v21 )
        {
          TraceBufferPool = RtlNtStatusToDosError(v21);
          if ( TraceBufferPool )
            goto LABEL_51;
        }
      }
      if ( (*(_DWORD *)(inited + 212) & 0x400) == 0 )
      {
        HIDWORD(v22) = (*(_DWORD *)(inited + 212) & 4) != 0;
        LODWORD(v22) = Size;
        v15 = EtwpAddLogHeaderToLogFile(v22);
        if ( v15 )
        {
          TraceBufferPool = RtlNtStatusToDosError(v15);
          if ( TraceBufferPool )
            goto LABEL_51;
        }
      }
      v16 = *(_DWORD *)(inited + 140) - 72;
      if ( v16 >= 0xFFFF )
        v16 = 0xFFFF;
      *(_DWORD *)(inited + 144) = v16 & 0xFFFFFFF8;
      TraceBufferPool = EtwpAllocateTraceBufferPool(inited);
      if ( TraceBufferPool )
        goto LABEL_51;
      if ( (*(_DWORD *)(inited + 212) & 0x20000) == 0 )
      {
        TraceBufferPool = EtwpRegisterPrivateSession(&Size_4);
        if ( TraceBufferPool )
          goto LABEL_51;
        *(_DWORD *)(inited + 380) = v25;
      }
      v18 = v31;
      _InterlockedIncrement((volatile signed __int32 *)(EtwpLoggerArray + 8 * v31 + 4));
      if ( (*(_DWORD *)(inited + 212) & 0x400) == 0 )
      {
        EtwThread = EtwpCreateEtwThread(v18, (int)EtwpLogger, inited);
        if ( !EtwThread )
        {
          inited = v30;
          TraceBufferPool = NtCurrentTeb()->LastErrorValue;
LABEL_28:
          _InterlockedDecrement((volatile signed __int32 *)(EtwpLoggerArray + 8 * v31 + 4));
          if ( !TraceBufferPool )
          {
            *a2 = *(_DWORD *)a4;
            *a3 = *(_DWORD *)a4;
            return TraceBufferPool;
          }
LABEL_51:
          if ( *(_DWORD *)(a4 + 88) )
          {
            NtClose(*(HANDLE *)(a4 + 88));
            *(_DWORD *)(a4 + 88) = 0;
            *(_DWORD *)(inited + 104) = 0;
          }
          EtwpFreeLoggerContext((char *)inited);
          return TraceBufferPool;
        }
        *(_DWORD *)(inited + 28) = EtwThread;
      }
      EtwpGetUmLoggerInfoFromContext(&Size_4);
      _InterlockedExchange((volatile __int32 *)(EtwpLoggerArray + 8 * v31), inited);
      EtwpSendSessionNotification(0);
      goto LABEL_28;
    }
    _InterlockedDecrement((volatile signed __int32 *)(EtwpLoggerArray + 8 * v12 + 4));
    return 8;
  }
  return result;
}
