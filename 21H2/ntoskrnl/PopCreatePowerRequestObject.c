/*
 * XREFs of PopCreatePowerRequestObject @ 0x14062BBB0
 * Callers:
 *     PopCreateUserPowerRequest @ 0x14067CD9C (PopCreateUserPowerRequest.c)
 *     PopCreateKernelPowerRequest @ 0x1407727C8 (PopCreateKernelPowerRequest.c)
 * Callees:
 *     PsGetCurrentProcessSessionId @ 0x14025F5C0 (PsGetCurrentProcessSessionId.c)
 *     RtlDeleteElementGenericTableAvl @ 0x1402648C0 (RtlDeleteElementGenericTableAvl.c)
 *     RtlInsertElementGenericTableAvl @ 0x140264B20 (RtlInsertElementGenericTableAvl.c)
 *     PsGetProcessId @ 0x14027B6A0 (PsGetProcessId.c)
 *     PopReleaseRwLock @ 0x14027C284 (PopReleaseRwLock.c)
 *     memset @ 0x140414200 (memset.c)
 *     PopStatsCreatePowerRequest @ 0x14062B98C (PopStatsCreatePowerRequest.c)
 *     PopAcquirePowerRequestPushLock @ 0x14067B148 (PopAcquirePowerRequestPushLock.c)
 *     ObCreateObjectEx @ 0x140704810 (ObCreateObjectEx.c)
 */

__int64 __fastcall PopCreatePowerRequestObject(_QWORD *a1, _DWORD *a2)
{
  _QWORD *v3; // r13
  char v4; // bl
  unsigned int ProcessId; // r12d
  signed __int32 v6; // esi
  _DWORD *inserted; // rdi
  __int64 v8; // rcx
  int Object; // r14d
  __int128 Buffer; // [rsp+58h] [rbp-9h] BYREF
  _DWORD v12[2]; // [rsp+68h] [rbp+7h] BYREF
  __int64 v13; // [rsp+70h] [rbp+Fh]
  __int64 v14; // [rsp+78h] [rbp+17h]
  int v15; // [rsp+80h] [rbp+1Fh]
  int v16; // [rsp+84h] [rbp+23h]
  __int128 v17; // [rsp+88h] [rbp+27h]

  v3 = a1;
  v12[1] = 0;
  v16 = 0;
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
    v12[0] = 48;
    v13 = 0LL;
    v15 = 32;
    v14 = 0LL;
    v17 = 0LL;
    Object = ObCreateObjectEx(0, (_DWORD)PopPowerRequestObjectType, (unsigned int)v12, v4);
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
      LOBYTE(v8) = 1;
      PopAcquirePowerRequestPushLock(v8);
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
