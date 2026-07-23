/*
 * XREFs of _RtlSetProcessDebugInformation@12 @ 0x4B337540
 * Callers:
 *     _RtlpSetProcessDebugInformationRemote@4 @ 0x4B337C70 (_RtlpSetProcessDebugInformationRemote@4.c)
 * Callees:
 *     _RtlpCreateUserThreadEx@44 @ 0x4B2F0524 (_RtlpCreateUserThreadEx@44.c)
 *     _ZwWaitForSingleObject@12 @ 0x4B2F29A0 (_ZwWaitForSingleObject@12.c)
 *     _NtClose@4 @ 0x4B2F2A50 (_NtClose@4.c)
 *     _NtQueryInformationThread@20 @ 0x4B2F2BD0 (_NtQueryInformationThread@20.c)
 *     _ZwResumeThread@8 @ 0x4B2F2EA0 (_ZwResumeThread@8.c)
 *     _ZwTerminateThread@8 @ 0x4B2F2EB0 (_ZwTerminateThread@8.c)
 *     _memcpy @ 0x4B2F88B0 (_memcpy.c)
 *     _RtlpChangeQueryDebugBufferTarget@16 @ 0x4B3376D2 (_RtlpChangeQueryDebugBufferTarget@16.c)
 *     _RtlpSetProcessBacktraces@4 @ 0x4B337C27 (_RtlpSetProcessBacktraces@4.c)
 *     _AVrfpSetProcessVerifierOptions@4 @ 0x4B3394F3 (_AVrfpSetProcessVerifierOptions@4.c)
 */

NTSTATUS __cdecl RtlSetProcessDebugInformation(HANDLE UniqueProcessId, ULONG Flags, PRTL_DEBUG_INFORMATION Buffer)
{
  struct _TEB *v3; // eax
  int InformationThread; // esi
  NTSTATUS result; // eax
  int v6; // ecx
  char *TargetThreadHandle; // eax
  HANDLE v8; // edi
  size_t v9; // [esp-4h] [ebp-44h]
  HANDLE Handle; // [esp+10h] [ebp-30h] BYREF
  HANDLE ThreadHandle; // [esp+14h] [ebp-2Ch] BYREF
  LARGE_INTEGER Timeout; // [esp+18h] [ebp-28h] BYREF
  int ThreadInformation[7]; // [esp+24h] [ebp-1Ch] BYREF

  v3 = NtCurrentTeb();
  InformationThread = 0;
  Timeout.QuadPart = -600000000LL;
  Buffer->TargetProcessId = (HANDLE)Flags;
  if ( v3->ClientId.UniqueProcess == UniqueProcessId )
  {
    if ( ((Flags & 1) == 0 || (InformationThread = AVrfpSetProcessVerifierOptions(Buffer)) == 0) && (Flags & 2) != 0 )
      return RtlpSetProcessBacktraces(Buffer);
  }
  else
  {
    Handle = 0;
    result = RtlpChangeQueryDebugBufferTarget(Buffer, UniqueProcessId, 0, &Handle);
    if ( result < 0 )
      return result;
    TargetThreadHandle = (char *)Buffer->TargetThreadHandle;
    if ( (unsigned int)TargetThreadHandle > 0x68 )
    {
      LODWORD(v9) = TargetThreadHandle - 104;
      memcpy((char *)&Buffer->CriticalSectionHandle + *(&Buffer->Flags + 1), &Buffer->CriticalSectionHandle, v9);
    }
    InformationThread = RtlpCreateUserThreadEx(
                          Handle,
                          0,
                          7,
                          0LL,
                          0,
                          v6,
                          (NTSTATUS (__cdecl *)(PVOID))RtlpSetProcessDebugInformationRemote,
                          Buffer->ViewBaseTarget,
                          &ThreadHandle,
                          0);
    if ( InformationThread >= 0 )
    {
      v8 = ThreadHandle;
      InformationThread = ZwResumeThread(ThreadHandle, 0);
      if ( InformationThread < 0 || (InformationThread = ZwWaitForSingleObject(v8, 1u, &Timeout), InformationThread < 0) )
      {
        ZwTerminateThread(v8, InformationThread);
      }
      else
      {
        InformationThread = NtQueryInformationThread(v8, ThreadBasicInformation, ThreadInformation, 0x1Cu, 0);
        if ( InformationThread >= 0 )
          InformationThread = ThreadInformation[0];
      }
      NtClose(v8);
    }
    NtClose(Handle);
  }
  return InformationThread;
}
