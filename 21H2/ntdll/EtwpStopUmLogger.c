/*
 * XREFs of EtwpStopUmLogger @ 0x18004BEF0
 * Callers:
 *     EtwProcessPrivateLoggerRequest @ 0x180049AF0 (EtwProcessPrivateLoggerRequest.c)
 *     EtwpShutdownPrivateLoggers @ 0x180081FC0 (EtwpShutdownPrivateLoggers.c)
 * Callees:
 *     EtwpGetUmLoggerInfoFromContext @ 0x18004863C (EtwpGetUmLoggerInfoFromContext.c)
 *     EtwpGetPrivateLoggerContext @ 0x18004C054 (EtwpGetPrivateLoggerContext.c)
 *     EtwpFreeLoggerContext @ 0x18004F614 (EtwpFreeLoggerContext.c)
 *     EtwpSynchronizeWithLogger @ 0x18004F868 (EtwpSynchronizeWithLogger.c)
 *     EtwpStopLoggerInstance @ 0x18004F8C0 (EtwpStopLoggerInstance.c)
 *     RtlNtStatusToDosError @ 0x180051950 (RtlNtStatusToDosError.c)
 *     NtWaitForSingleObject @ 0x18009D680 (NtWaitForSingleObject.c)
 *     NtClose @ 0x18009D7E0 (NtClose.c)
 */

__int64 __fastcall EtwpStopUmLogger(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  char v4; // r12
  ULONG PrivateLoggerContext; // esi
  _DWORD *v7; // rbx
  char v8; // r15
  __int64 v9; // r13
  int v10; // ebp
  void *v11; // r14
  NTSTATUS v12; // eax
  int v14; // [rsp+60h] [rbp+8h]
  PVOID BaseAddress; // [rsp+68h] [rbp+10h] BYREF
  int v16; // [rsp+70h] [rbp+18h]
  int v17; // [rsp+74h] [rbp+1Ch]

  v17 = HIDWORD(a3);
  BaseAddress = 0LL;
  v4 = 0;
  v14 = 0;
  v16 = 0;
  PrivateLoggerContext = EtwpGetPrivateLoggerContext(a4, &BaseAddress);
  if ( !PrivateLoggerContext )
  {
    v7 = BaseAddress;
    v8 = 1;
    v9 = *((unsigned int *)BaseAddress + 5);
    v10 = *((_DWORD *)BaseAddress + 81) & 0x400;
    v11 = (void *)*((_QWORD *)BaseAddress + 4);
    if ( (*(_DWORD *)(a4 + 64) & 0x10000) != 0 )
    {
      v4 = 1;
      v14 = *((_DWORD *)BaseAddress + 96);
      v16 = *((_DWORD *)BaseAddress + 97);
      *((_DWORD *)BaseAddress + 96) = *(_DWORD *)(a4 + 104);
      v7[97] = *(_DWORD *)(a4 + 112);
      if ( (*(_DWORD *)(a4 + 64) & 0x1000) != 0 )
        *((_QWORD *)v7 + 47) = *(_QWORD *)(a4 + 16);
    }
    PrivateLoggerContext = EtwpStopLoggerInstance(v7);
    if ( !PrivateLoggerContext )
    {
      if ( v10 || (v12 = EtwpSynchronizeWithLogger(v7, 8LL), v12 >= 0) )
      {
        EtwpGetUmLoggerInfoFromContext(a4, (__int64)v7, 0LL);
        v8 = 0;
        _InterlockedDecrement((volatile signed __int32 *)(EtwpLoggerArray + 16 * v9 + 8));
        if ( v10 )
          EtwpFreeLoggerContext(BaseAddress);
        v7 = 0LL;
        BaseAddress = 0LL;
        if ( v11 )
        {
          NtWaitForSingleObject(v11, 0, 0LL);
          NtClose(v11);
        }
      }
      else
      {
        PrivateLoggerContext = RtlNtStatusToDosError(v12);
      }
    }
    if ( v4 && v7 )
    {
      v7[96] = v14;
      v7[97] = v16;
    }
    if ( v8 )
      _InterlockedDecrement((volatile signed __int32 *)(EtwpLoggerArray + 16 * v9 + 8));
  }
  return PrivateLoggerContext;
}
