/*
 * XREFs of PopCreatePowerRequestObject @ 0x14064DBA8
 * Callers:
 *     PopCreateUserPowerRequest @ 0x14064E058 (PopCreateUserPowerRequest.c)
 *     PopCreateKernelPowerRequest @ 0x14075FFE8 (PopCreateKernelPowerRequest.c)
 * Callees:
 *     RtlDeleteElementGenericTableAvl @ 0x140201B40 (RtlDeleteElementGenericTableAvl.c)
 *     RtlInsertElementGenericTableAvl @ 0x140201DA0 (RtlInsertElementGenericTableAvl.c)
 *     PsGetProcessId @ 0x14026AB30 (PsGetProcessId.c)
 *     PsGetCurrentProcessSessionId @ 0x14026D6D0 (PsGetCurrentProcessSessionId.c)
 *     PopReleaseRwLock @ 0x1402985D4 (PopReleaseRwLock.c)
 *     memset @ 0x14040A280 (memset.c)
 *     PopStatsCreatePowerRequest @ 0x14064D9C4 (PopStatsCreatePowerRequest.c)
 *     ObCreateObjectEx @ 0x140679FF0 (ObCreateObjectEx.c)
 *     PopAcquirePowerRequestPushLock @ 0x1406A85E8 (PopAcquirePowerRequestPushLock.c)
 */

__int64 __fastcall PopCreatePowerRequestObject(_QWORD *a1, _DWORD *a2)
{
  _QWORD *v3; // r13
  char v4; // bl
  unsigned int ProcessId; // r12d
  signed __int32 v6; // esi
  _DWORD *inserted; // rdi
  int v8; // r9d
  __int64 v9; // rcx
  int Object; // r14d
  __int128 Buffer; // [rsp+58h] [rbp-9h] BYREF
  _DWORD v13[2]; // [rsp+68h] [rbp+7h] BYREF
  __int64 v14; // [rsp+70h] [rbp+Fh]
  __int64 v15; // [rsp+78h] [rbp+17h]
  int v16; // [rsp+80h] [rbp+1Fh]
  int v17; // [rsp+84h] [rbp+23h]
  __int128 v18; // [rsp+88h] [rbp+27h]

  v3 = a1;
  v13[1] = 0;
  v17 = 0;
  if ( *a2 )
  {
    v4 = 1;
    ProcessId = (unsigned int)PsGetProcessId(KeGetCurrentThread()->ApcState.Process);
  }
  else
  {
    v4 = 0;
    ProcessId = 0;
  }
  v6 = _InterlockedIncrement(&PopPowerRequestId);
  Buffer = 0LL;
  LOBYTE(a1) = 1;
  DWORD2(Buffer) = v6;
  PopAcquirePowerRequestPushLock(a1);
  inserted = RtlInsertElementGenericTableAvl(&PopPowerRequestTable, &Buffer, 0x10u, 0LL);
  PopReleaseRwLock((ULONG_PTR)&PopPowerRequestLock);
  if ( inserted )
  {
    LOBYTE(v8) = v4;
    v13[0] = 48;
    v14 = 0LL;
    v16 = 32;
    v15 = 0LL;
    v18 = 0LL;
    Object = ObCreateObjectEx(0, (_DWORD)PopPowerRequestObjectType, (unsigned int)v13, v8);
    if ( Object >= 0 )
    {
      memset(0LL, 0, 0x98uLL);
      MEMORY[0x10] = PsGetCurrentProcessSessionId();
      MEMORY[0x58] = ProcessId;
      MEMORY[0x50] = a2;
      MEMORY[0x1C] = v6;
      inserted[2] = v6;
      *(_QWORD *)inserted = 0LL;
      inserted = 0LL;
      PopStatsCreatePowerRequest(0LL);
      *v3 = 0LL;
    }
    if ( inserted )
    {
      LOBYTE(v9) = 1;
      PopAcquirePowerRequestPushLock(v9);
      RtlDeleteElementGenericTableAvl(&PopPowerRequestTable, inserted);
      PopReleaseRwLock((ULONG_PTR)&PopPowerRequestLock);
    }
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return (unsigned int)Object;
}
