/*
 * XREFs of RtlSetProcessDebugInformation @ 0x1800D8760
 * Callers:
 *     RtlpSetProcessDebugInformationRemote @ 0x1800D9250 (RtlpSetProcessDebugInformationRemote.c)
 * Callees:
 *     RtlpCreateUserThreadEx @ 0x180056100 (RtlpCreateUserThreadEx.c)
 *     NtWaitForSingleObject @ 0x18009D130 (NtWaitForSingleObject.c)
 *     NtClose @ 0x18009D290 (NtClose.c)
 *     ZwQueryInformationThread @ 0x18009D550 (ZwQueryInformationThread.c)
 *     ZwResumeThread @ 0x18009DAF0 (ZwResumeThread.c)
 *     NtTerminateThread @ 0x18009DB10 (NtTerminateThread.c)
 *     memmove @ 0x1800A3EC0 (memmove.c)
 *     RtlpChangeQueryDebugBufferTarget @ 0x1800D8990 (RtlpChangeQueryDebugBufferTarget.c)
 *     AVrfpSetProcessVerifierOptions @ 0x1800DB57C (AVrfpSetProcessVerifierOptions.c)
 *     RtlControlStackTraceDataBase @ 0x180101228 (RtlControlStackTraceDataBase.c)
 */

NTSTATUS __cdecl RtlSetProcessDebugInformation(HANDLE UniqueProcessId, ULONG Flags, PRTL_DEBUG_INFORMATION Buffer)
{
  int InformationThread; // ebx
  char v5; // si
  NTSTATUS result; // eax
  SIZE_T OffsetFree; // r8
  HANDLE v8; // rdi
  int v9; // eax
  void *v10; // rcx
  PRTL_PROCESS_BACKTRACES BackTraces; // rax
  __int64 CommittedMemory; // rcx
  __int64 ReservedMemory; // rdx
  ULONG *p_NumberOfBackTraceLookups; // r8
  int v15; // [rsp+30h] [rbp-78h]
  int ThreadInformation[18]; // [rsp+60h] [rbp-48h] BYREF
  HANDLE Handle; // [rsp+B0h] [rbp+8h] BYREF
  HANDLE ThreadHandle; // [rsp+C0h] [rbp+18h] BYREF
  LARGE_INTEGER Timeout; // [rsp+C8h] [rbp+20h] BYREF

  Timeout.QuadPart = -600000000LL;
  InformationThread = 0;
  Buffer->Flags = Flags;
  v5 = Flags;
  if ( NtCurrentTeb()->ClientId.UniqueProcess == UniqueProcessId )
  {
    if ( (Flags & 1) != 0 )
    {
      InformationThread = AVrfpSetProcessVerifierOptions(Buffer);
      if ( InformationThread )
        return InformationThread;
    }
    if ( (v5 & 2) == 0 )
      return InformationThread;
    BackTraces = Buffer->BackTraces;
    if ( BackTraces )
    {
      CommittedMemory = BackTraces->CommittedMemory;
      ReservedMemory = BackTraces->ReservedMemory;
      if ( (_DWORD)CommittedMemory )
      {
        p_NumberOfBackTraceLookups = &BackTraces->NumberOfBackTraceLookups;
      }
      else
      {
        if ( (unsigned int)ReservedMemory < 0x18 )
          return -1073741811;
        p_NumberOfBackTraceLookups = &BackTraces->NumberOfBackTraceLookups;
        if ( *(_QWORD *)&BackTraces->NumberOfBackTraceLookups || BackTraces->BackTraces[0].SymbolicBackTrace )
          return -1073741811;
      }
      return RtlControlStackTraceDataBase(CommittedMemory, ReservedMemory, p_NumberOfBackTraceLookups);
    }
    return -1073741801;
  }
  else
  {
    Handle = 0LL;
    result = RtlpChangeQueryDebugBufferTarget(Buffer, UniqueProcessId, 0LL, &Handle);
    if ( result < 0 )
      return result;
    OffsetFree = Buffer->OffsetFree;
    if ( OffsetFree > 0xD0 )
      memmove((char *)&Buffer[1] + Buffer->ViewSize, &Buffer[1], OffsetFree - 208);
    InformationThread = RtlpCreateUserThreadEx(
                          Handle,
                          0LL,
                          7,
                          0,
                          0LL,
                          0LL,
                          v15,
                          (PUSER_THREAD_START_ROUTINE)RtlpSetProcessDebugInformationRemote,
                          Buffer->ViewBaseTarget,
                          &ThreadHandle,
                          0LL);
    if ( InformationThread >= 0 )
    {
      v8 = ThreadHandle;
      v9 = ZwResumeThread(ThreadHandle, 0LL);
      InformationThread = v9;
      v10 = v8;
      if ( v9 < 0 || (v9 = NtWaitForSingleObject(v8, 1u, &Timeout), InformationThread = v9, v10 = v8, v9 < 0) )
      {
        NtTerminateThread(v10, v9);
      }
      else
      {
        InformationThread = ZwQueryInformationThread(v8, ThreadBasicInformation, ThreadInformation, 0x30u, 0LL);
        if ( InformationThread >= 0 )
          InformationThread = ThreadInformation[0];
      }
      NtClose(v8);
    }
    NtClose(Handle);
  }
  return InformationThread;
}
