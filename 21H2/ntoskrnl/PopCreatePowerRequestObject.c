/*
 * XREFs of PopCreatePowerRequestObject @ 0x140670788
 * Callers:
 *     PopCreateUserPowerRequest @ 0x140670C38 (PopCreateUserPowerRequest.c)
 *     PopCreateKernelPowerRequest @ 0x140772988 (PopCreateKernelPowerRequest.c)
 * Callees:
 *     RtlDeleteElementGenericTableAvl @ 0x140252950 (RtlDeleteElementGenericTableAvl.c)
 *     RtlInsertElementGenericTableAvl @ 0x140252BB0 (RtlInsertElementGenericTableAvl.c)
 *     PsGetProcessId @ 0x140269640 (PsGetProcessId.c)
 *     PopReleaseRwLock @ 0x14026A224 (PopReleaseRwLock.c)
 *     PsGetCurrentProcessSessionId @ 0x14027E740 (PsGetCurrentProcessSessionId.c)
 *     memset @ 0x140414300 (memset.c)
 *     PopAcquirePowerRequestPushLock @ 0x14066E888 (PopAcquirePowerRequestPushLock.c)
 *     PopStatsCreatePowerRequest @ 0x140670564 (PopStatsCreatePowerRequest.c)
 *     ObCreateObjectEx @ 0x14071BBF0 (ObCreateObjectEx.c)
 */

__int64 __fastcall PopCreatePowerRequestObject(_QWORD *a1, _DWORD *a2)
{
  char v4; // bl
  unsigned int ProcessId; // r12d
  signed __int32 v6; // esi
  _DWORD *inserted; // rdi
  int Object; // r14d
  __int128 Buffer; // [rsp+58h] [rbp-9h] BYREF
  _DWORD v11[2]; // [rsp+68h] [rbp+7h] BYREF
  __int64 v12; // [rsp+70h] [rbp+Fh]
  __int64 v13; // [rsp+78h] [rbp+17h]
  int v14; // [rsp+80h] [rbp+1Fh]
  int v15; // [rsp+84h] [rbp+23h]
  __int128 v16; // [rsp+88h] [rbp+27h]

  v11[1] = 0;
  v15 = 0;
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
  DWORD2(Buffer) = v6;
  PopAcquirePowerRequestPushLock(1);
  inserted = RtlInsertElementGenericTableAvl(&PopPowerRequestTable, &Buffer, 0x10u, 0LL);
  PopReleaseRwLock((ULONG_PTR)&PopPowerRequestLock);
  if ( inserted )
  {
    v11[0] = 48;
    v12 = 0LL;
    v14 = 32;
    v13 = 0LL;
    v16 = 0LL;
    Object = ObCreateObjectEx(0, (_DWORD)PopPowerRequestObjectType, (unsigned int)v11, v4);
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
      *a1 = 0LL;
    }
    if ( inserted )
    {
      PopAcquirePowerRequestPushLock(1);
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
