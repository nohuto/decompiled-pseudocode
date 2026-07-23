/*
 * XREFs of _RtlRemoteCall@28 @ 0x4B366400
 * Callers:
 *     <none>
 * Callees:
 *     _LdrControlFlowGuardEnforced@0 @ 0x4B2D0100 (_LdrControlFlowGuardEnforced@0.c)
 *     _NtWriteVirtualMemory@20 @ 0x4B2F2D20 (_NtWriteVirtualMemory@20.c)
 *     _ZwResumeThread@8 @ 0x4B2F2EA0 (_ZwResumeThread@8.c)
 *     _NtGetContextThread@8 @ 0x4B2F38A0 (_NtGetContextThread@8.c)
 *     _ZwSetContextThread@8 @ 0x4B2F4230 (_ZwSetContextThread@8.c)
 *     _ZwSuspendThread@8 @ 0x4B2F4540 (_ZwSuspendThread@8.c)
 *     @__security_check_cookie@4 @ 0x4B2F4B20 (@__security_check_cookie@4.c)
 *     _memcpy @ 0x4B2F88B0 (_memcpy.c)
 */

NTSTATUS __cdecl RtlRemoteCall(
        HANDLE ProcessHandle,
        HANDLE ThreadHandle,
        PVOID CallSite,
        ULONG ArgumentCount,
        PULONG_PTR Arguments,
        BOOLEAN PassContext,
        BOOLEAN AlreadySuspended)
{
  ULONG_PTR *v7; // ebx
  int v8; // eax
  NTSTATUS result; // eax
  ULONG v10; // edi
  int v11; // edi
  size_t v12; // [esp-Ch] [ebp-308h]
  size_t v13; // [esp-Ch] [ebp-308h]
  ULONG_PTR *v14; // [esp-8h] [ebp-304h]
  NTSTATUS v15; // [esp+8h] [ebp-2F4h]
  NTSTATUS v16; // [esp+14h] [ebp-2E8h]
  char *Esp; // [esp+14h] [ebp-2E8h]
  _CONTEXT ThreadContext; // [esp+18h] [ebp-2E4h] BYREF
  char *Buffer; // [esp+2E4h] [ebp-18h] BYREF
  _BYTE v20[16]; // [esp+2E8h] [ebp-14h] BYREF

  LOBYTE(v8) = LdrControlFlowGuardEnforced();
  if ( v8 )
    return -1073741822;
  v10 = ArgumentCount;
  if ( ArgumentCount > 4 )
    return -1073741811;
  HIDWORD(v12) = v7;
  if ( AlreadySuspended || (result = ZwSuspendThread(ThreadHandle, 0), result >= 0) )
  {
    ThreadContext.ContextFlags = 65543;
    result = NtGetContextThread(ThreadHandle, &ThreadContext);
    v16 = result;
    if ( result < 0 )
    {
      if ( !AlreadySuspended )
      {
        ZwResumeThread(ThreadHandle, 0);
        return v16;
      }
      return result;
    }
    Esp = (char *)ThreadContext.Esp;
    if ( PassContext )
    {
      Esp = (char *)(ThreadContext.Esp - 716);
      result = NtWriteVirtualMemory(ProcessHandle, (PVOID)(ThreadContext.Esp - 716), &ThreadContext, 0x2CCuLL, v7);
      v15 = result;
      if ( result < 0 )
      {
        if ( !AlreadySuspended )
        {
          ZwResumeThread(ThreadHandle, 0);
          return v15;
        }
        return result;
      }
      Buffer = Esp;
      LODWORD(v13) = 4 * ArgumentCount;
      memcpy(v20, Arguments, v13);
      v10 = ArgumentCount + 1;
    }
    else
    {
      LODWORD(v12) = 4 * ArgumentCount;
      memcpy(&Buffer, Arguments, v12);
    }
    if ( !v10 || (Esp -= 4 * v10, v11 = NtWriteVirtualMemory(ProcessHandle, Esp, &Buffer, 4 * v10, v14), v11 >= 0) )
    {
      ThreadContext.Esp = (unsigned int)Esp;
      ThreadContext.Eip = (unsigned int)CallSite;
      v11 = ZwSetContextThread(ThreadHandle, &ThreadContext);
    }
    if ( !AlreadySuspended )
      ZwResumeThread(ThreadHandle, 0);
    return v11;
  }
  return result;
}
