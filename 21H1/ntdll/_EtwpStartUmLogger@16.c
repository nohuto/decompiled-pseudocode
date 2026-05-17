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
  unsigned int v12; // ebx
  _DWORD *inited; // esi
  int v14; // eax
  NTSTATUS v15; // eax
  unsigned int v16; // eax
  ULONG TraceBufferPool; // ebx
  int EtwThread; // eax
  unsigned int v19; // eax
  NTSTATUS v20; // eax
  int v23; // [esp+14h] [ebp-4Ch]
  unsigned int v24; // [esp+18h] [ebp-48h] BYREF
  int v25; // [esp+1Ch] [ebp-44h]
  size_t Size; // [esp+20h] [ebp-40h]
  char v27[4]; // [esp+24h] [ebp-3Ch] BYREF
  _DWORD *v28; // [esp+28h] [ebp-38h] BYREF
  unsigned int v29; // [esp+2Ch] [ebp-34h]
  char SystemInformation[8]; // [esp+30h] [ebp-30h] BYREF
  int v31; // [esp+38h] [ebp-28h]

  v28 = 0;
  v4 = *(_DWORD *)a4 < 0xB0u;
  v25 = 0;
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
    v29 = v7 >> 8;
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
  if ( !EtwpGetPrivateLoggerContextByName(a4 + 144, &v28) )
  {
    _InterlockedDecrement((volatile signed __int32 *)(EtwpLoggerArray + 8 * v28[5] + 4));
    return 183;
  }
  result = EtwpGetNextAvailableLoggerId(a4, &v24);
  if ( !result )
  {
    if ( (*(_DWORD *)(a4 + 64) & 0x10000) != 0 )
    {
      v19 = (*(unsigned __int16 *)(a4 + 130) + *(unsigned __int16 *)(a4 + 146) + 183) & 0xFFFFFFF8;
      Size = *(_DWORD *)a4 - v19;
      v25 = a4 + v19;
      NumberOfProcessors = -1;
    }
    else if ( (*(_DWORD *)(a4 + 64) & 0x10000000) == 0 )
    {
      NumberOfProcessors = NtCurrentPeb()->NumberOfProcessors;
    }
    v12 = v24;
    v29 = v24;
    inited = (_DWORD *)EtwpInitLoggerContext(NumberOfProcessors, v25, Size);
    v28 = inited;
    if ( inited )
    {
      v14 = NtQuerySystemInformation(SystemBasicInformation, SystemInformation, 0x2Cu, 0);
      if ( v14 < 0 )
        return RtlNtStatusToDosError(v14);
      inited[35] = ~(v31 - 1) & (v31 + inited[35] - 1);
      if ( (inited[53] & 0x4000000) != 0 )
      {
        v20 = EtwpInitializeCompression(inited);
        if ( v20 )
        {
          TraceBufferPool = RtlNtStatusToDosError(v20);
          if ( TraceBufferPool )
            goto LABEL_51;
        }
      }
      if ( (inited[53] & 0x400) == 0 )
      {
        v15 = EtwpAddLogHeaderToLogFile(Size, (inited[53] & 4) != 0);
        if ( v15 )
        {
          TraceBufferPool = RtlNtStatusToDosError(v15);
          if ( TraceBufferPool )
            goto LABEL_51;
        }
      }
      v16 = inited[35] - 72;
      if ( v16 >= 0xFFFF )
        v16 = 0xFFFF;
      inited[36] = v16 & 0xFFFFFFF8;
      TraceBufferPool = EtwpAllocateTraceBufferPool(inited);
      if ( TraceBufferPool )
        goto LABEL_51;
      if ( (inited[53] & 0x20000) == 0 )
      {
        TraceBufferPool = EtwpRegisterPrivateSession(v27);
        if ( TraceBufferPool )
          goto LABEL_51;
        inited[95] = v23;
      }
      _InterlockedIncrement((volatile signed __int32 *)(EtwpLoggerArray + 8 * v29 + 4));
      if ( (inited[53] & 0x400) == 0 )
      {
        EtwThread = EtwpCreateEtwThread(EtwpLogger, inited);
        if ( !EtwThread )
        {
          inited = v28;
          TraceBufferPool = NtCurrentTeb()->LastErrorValue;
LABEL_28:
          _InterlockedDecrement((volatile signed __int32 *)(EtwpLoggerArray + 8 * v29 + 4));
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
            inited[26] = 0;
          }
          EtwpFreeLoggerContext(inited);
          return TraceBufferPool;
        }
        inited[7] = EtwThread;
      }
      EtwpGetUmLoggerInfoFromContext(v27);
      _InterlockedExchange((volatile __int32 *)(EtwpLoggerArray + 8 * v29), (__int32)inited);
      EtwpSendSessionNotification(0);
      goto LABEL_28;
    }
    _InterlockedDecrement((volatile signed __int32 *)(EtwpLoggerArray + 8 * v12 + 4));
    return 8;
  }
  return result;
}
