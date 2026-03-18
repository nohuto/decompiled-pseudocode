/*
 * XREFs of PopCreatePowerRequestObject @ 0x1406FF910
 * Callers:
 *     PopCreateUserPowerRequest @ 0x1406FF730 (PopCreateUserPowerRequest.c)
 *     PopCreateKernelPowerRequest @ 0x14075DCD8 (PopCreateKernelPowerRequest.c)
 * Callees:
 *     PopReleaseRwLock @ 0x140205C14 (PopReleaseRwLock.c)
 *     PsGetProcessId @ 0x1402D44D0 (PsGetProcessId.c)
 *     PsGetCurrentProcessSessionId @ 0x1402D7070 (PsGetCurrentProcessSessionId.c)
 *     RtlDeleteElementGenericTableAvl @ 0x1402E5430 (RtlDeleteElementGenericTableAvl.c)
 *     RtlInsertElementGenericTableAvl @ 0x1402E5690 (RtlInsertElementGenericTableAvl.c)
 *     memset @ 0x140408F80 (memset.c)
 *     ObCreateObjectEx @ 0x140601F10 (ObCreateObjectEx.c)
 *     PopStatsCreatePowerRequest @ 0x1406FFA94 (PopStatsCreatePowerRequest.c)
 *     PopAcquirePowerRequestPushLock @ 0x14070F888 (PopAcquirePowerRequestPushLock.c)
 */

__int64 __fastcall PopCreatePowerRequestObject(_QWORD *a1, _DWORD *a2)
{
  _QWORD *v3; // r13
  char v4; // bl
  unsigned int ProcessId; // r12d
  signed __int32 v6; // esi
  _DWORD *inserted; // rdi
  __int64 v8; // rcx
  int v9; // r14d
  _DWORD *v10; // rbx
  __int64 v12; // [rsp+28h] [rbp-39h]
  int v13; // [rsp+38h] [rbp-29h]
  __int128 Buffer; // [rsp+58h] [rbp-9h] BYREF
  _DWORD v15[2]; // [rsp+68h] [rbp+7h] BYREF
  __int64 v16; // [rsp+70h] [rbp+Fh]
  __int64 v17; // [rsp+78h] [rbp+17h]
  int v18; // [rsp+80h] [rbp+1Fh]
  int v19; // [rsp+84h] [rbp+23h]
  __int128 v20; // [rsp+88h] [rbp+27h]
  void *v21; // [rsp+D0h] [rbp+6Fh] BYREF

  v3 = a1;
  v15[1] = 0;
  v19 = 0;
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
  v21 = 0LL;
  v6 = _InterlockedIncrement(&PopPowerRequestId);
  Buffer = 0LL;
  LOBYTE(a1) = 1;
  DWORD2(Buffer) = v6;
  PopAcquirePowerRequestPushLock(a1);
  inserted = RtlInsertElementGenericTableAvl(&PopPowerRequestTable, &Buffer, 0x10u, 0LL);
  PopReleaseRwLock((ULONG_PTR)&PopPowerRequestLock);
  if ( inserted )
  {
    v13 = a2[6] + 32;
    v15[0] = 48;
    v16 = 0LL;
    v18 = 32;
    v17 = 0LL;
    v20 = 0LL;
    v9 = ObCreateObjectEx(0, PopPowerRequestObjectType, (__int64)v15, v4, v12, 152, v13, 0, &v21, 0LL);
    if ( v9 >= 0 )
    {
      v10 = v21;
      memset(v21, 0, 0x98uLL);
      v10[4] = PsGetCurrentProcessSessionId();
      v10[22] = ProcessId;
      *((_QWORD *)v10 + 10) = a2;
      v10[7] = v6;
      inserted[2] = v6;
      *(_QWORD *)inserted = v10;
      inserted = 0LL;
      PopStatsCreatePowerRequest(v10);
      *v3 = v10;
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
  return (unsigned int)v9;
}
