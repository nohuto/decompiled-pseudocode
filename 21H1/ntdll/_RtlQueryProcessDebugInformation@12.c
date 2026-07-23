/*
 * XREFs of _RtlQueryProcessDebugInformation@12 @ 0x4B336B50
 * Callers:
 *     _RtlpQueryProcessDebugInformationRemote@4 @ 0x4B337A60 (_RtlpQueryProcessDebugInformationRemote@4.c)
 * Callees:
 *     _RtlWow64GetProcessMachines@12 @ 0x4B2DBD70 (_RtlWow64GetProcessMachines@12.c)
 *     _RtlpCreateUserThreadEx@44 @ 0x4B2F0524 (_RtlpCreateUserThreadEx@44.c)
 *     _ZwWaitForSingleObject@12 @ 0x4B2F29A0 (_ZwWaitForSingleObject@12.c)
 *     _NtClose@4 @ 0x4B2F2A50 (_NtClose@4.c)
 *     _NtQueryInformationThread@20 @ 0x4B2F2BD0 (_NtQueryInformationThread@20.c)
 *     _ZwOpenProcess@16 @ 0x4B2F2BE0 (_ZwOpenProcess@16.c)
 *     _ZwTerminateThread@8 @ 0x4B2F2EB0 (_ZwTerminateThread@8.c)
 *     _NtWow64CallFunction64@28 @ 0x4B2F4800 (_NtWow64CallFunction64@28.c)
 *     @__security_check_cookie@4 @ 0x4B2F4B20 (@__security_check_cookie@4.c)
 *     _memset @ 0x4B2F8F30 (_memset.c)
 *     _RtlQueryProcessBackTraceInformation@4 @ 0x4B336A00 (_RtlQueryProcessBackTraceInformation@4.c)
 *     _RtlQueryProcessHeapInformation@4 @ 0x4B336F80 (_RtlQueryProcessHeapInformation@4.c)
 *     _RtlQueryProcessLockInformation@4 @ 0x4B337290 (_RtlQueryProcessLockInformation@4.c)
 *     _RtlQueryProcessModuleInformation@12 @ 0x4B337478 (_RtlQueryProcessModuleInformation@12.c)
 *     _RtlpChangeQueryDebugBufferTarget@16 @ 0x4B3376D2 (_RtlpChangeQueryDebugBufferTarget@16.c)
 *     _RtlpCopyRemoteDebugInformation@4 @ 0x4B33790E (_RtlpCopyRemoteDebugInformation@4.c)
 *     _RtlpQueryCriticalSectionOwnerInformation@8 @ 0x4B337A1F (_RtlpQueryCriticalSectionOwnerInformation@8.c)
 *     _RtlpValidateRemoteDebugInformation@16 @ 0x4B337DB3 (_RtlpValidateRemoteDebugInformation@16.c)
 *     _AVrfpQueryProcessVerifierOptions@4 @ 0x4B339457 (_AVrfpQueryProcessVerifierOptions@4.c)
 *     _RtlpCreateExecutionRequiredRequest@8 @ 0x4B36FC1E (_RtlpCreateExecutionRequiredRequest@8.c)
 *     _RtlpDestroyExecutionRequiredRequest@4 @ 0x4B36FCC4 (_RtlpDestroyExecutionRequiredRequest@4.c)
 */

NTSTATUS __cdecl RtlQueryProcessDebugInformation(HANDLE UniqueProcessId, ULONG Flags, PRTL_DEBUG_INFORMATION Buffer)
{
  NTSTATUS CriticalSectionOwnerInformation; // esi
  NTSTATUS result; // eax
  ULONG v5; // edx
  char *TargetThreadHandle; // eax
  void *v7; // ecx
  HANDLE v8; // eax
  HANDLE v9; // esi
  HANDLE ViewSize_high; // ecx
  int v11; // eax
  size_t v12; // [esp-4h] [ebp-9Ch]
  HANDLE ProcessHandle; // [esp+Ch] [ebp-8Ch] BYREF
  HANDLE v14; // [esp+10h] [ebp-88h]
  _DWORD *ExecutionRequiredRequest; // [esp+14h] [ebp-84h]
  HANDLE Handle; // [esp+18h] [ebp-80h] BYREF
  HANDLE ThreadHandle; // [esp+1Ch] [ebp-7Ch] BYREF
  int v18; // [esp+20h] [ebp-78h]
  USHORT ProcessMachine; // [esp+24h] [ebp-74h] BYREF
  _CLIENT_ID ClientId; // [esp+28h] [ebp-70h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [esp+30h] [ebp-68h] BYREF
  HANDLE v22; // [esp+48h] [ebp-50h]
  ULONG v23; // [esp+4Ch] [ebp-4Ch]
  LARGE_INTEGER Timeout; // [esp+50h] [ebp-48h] BYREF
  _DWORD v25[3]; // [esp+58h] [ebp-40h] BYREF
  NTSTATUS ThreadInformation[7]; // [esp+64h] [ebp-34h] BYREF
  _DWORD v27[5]; // [esp+80h] [ebp-18h] BYREF

  CriticalSectionOwnerInformation = 0;
  v14 = UniqueProcessId;
  v18 = 0;
  ProcessHandle = 0;
  ExecutionRequiredRequest = 0;
  if ( Buffer->EventPairClient && Buffer->EventPairClient != UniqueProcessId )
    return -1073741811;
  v5 = Flags & 0x3FFFFFBE;
  Handle = (HANDLE)(Flags & 0x3FFFFFBE);
  if ( (Flags & 0x3FFFFFBE) != 0 && (Flags & 0x40000000) != 0 )
    return -1073741637;
  TargetThreadHandle = (char *)Buffer->TargetThreadHandle;
  Timeout.QuadPart = -600000000LL;
  Buffer->TargetProcessId = (HANDLE)Flags;
  if ( TargetThreadHandle )
  {
    LODWORD(v12) = TargetThreadHandle - 104;
    memset(&Buffer->CriticalSectionHandle, 0, v12);
    v5 = (ULONG)Handle;
  }
  Buffer->TargetThreadHandle = (HANDLE)104;
  v23 = Flags & 0x41;
  v7 = v14;
  if ( ((unsigned __int8)-(v5 == 0) & ((Flags & 0x80000000) != 0 && v23 != 0)) != 0 )
  {
    if ( (Flags & 0x40000000) != 0 )
    {
      ExecutionRequiredRequest = v14;
    }
    else if ( NtCurrentTeb()->ClientId.UniqueProcess == v14 )
    {
      ExecutionRequiredRequest = 0;
    }
    else
    {
      ClientId.UniqueProcess = v14;
      ObjectAttributes.Length = 24;
      memset(&ObjectAttributes.RootDirectory, 0, 20);
      ClientId.UniqueThread = 0;
      if ( ZwOpenProcess(&ProcessHandle, 0x1FFFFFu, &ObjectAttributes, &ClientId) >= 0 )
      {
        v8 = ProcessHandle;
      }
      else
      {
        v8 = 0;
        ProcessHandle = 0;
      }
      v7 = v14;
      v25[0] = v8;
      v25[1] = &RtlpQueryReadVirtualMemory;
      v25[2] = ZwQueryInformationProcess;
      ExecutionRequiredRequest = v25;
    }
  }
  if ( NtCurrentTeb()->ClientId.UniqueProcess == v7 || (Flags & 0x40000000) != 0 || ProcessHandle )
  {
    if ( (!v23 || (CriticalSectionOwnerInformation = RtlQueryProcessModuleInformation(Buffer)) == 0)
      && ((Flags & 2) == 0 || (CriticalSectionOwnerInformation = RtlQueryProcessBackTraceInformation((int)Buffer)) == 0)
      && ((Flags & 0x20) == 0 || (CriticalSectionOwnerInformation = RtlQueryProcessLockInformation(Buffer)) == 0)
      && ((Flags & 0x21C) == 0 || (CriticalSectionOwnerInformation = RtlQueryProcessHeapInformation(Buffer)) == 0)
      && ((Flags & 0x80u) == 0 || (CriticalSectionOwnerInformation = AVrfpQueryProcessVerifierOptions(Buffer)) == 0)
      && (Flags & 0xC00) != 0 )
    {
      CriticalSectionOwnerInformation = RtlpQueryCriticalSectionOwnerInformation(Buffer, Flags);
    }
    if ( ProcessHandle )
      NtClose(ProcessHandle);
    return CriticalSectionOwnerInformation;
  }
  if ( Flags == 1024 || Flags == 2048 )
  {
    ClientId.UniqueProcess = v14;
    ObjectAttributes.Length = 24;
    memset(&ObjectAttributes.RootDirectory, 0, 20);
    ClientId.UniqueThread = 0;
    if ( ZwOpenProcess(&ProcessHandle, 0x1000u, &ObjectAttributes, &ClientId) >= 0 )
    {
      if ( RtlWow64GetProcessMachines(ProcessHandle, &ProcessMachine, 0) >= 0 && !ProcessMachine )
        v18 = 2;
      NtClose(ProcessHandle);
    }
    ProcessHandle = 0;
  }
  Handle = 0;
  result = RtlpChangeQueryDebugBufferTarget(Buffer, v14, v18, &Handle);
  if ( result >= 0 )
  {
    v9 = Handle;
    ViewSize_high = Handle;
    if ( !Handle )
      ViewSize_high = (HANDLE)HIDWORD(Buffer->ViewSize);
    ExecutionRequiredRequest = (_DWORD *)RtlpCreateExecutionRequiredRequest(ViewSize_high);
    if ( (int)ExecutionRequiredRequest < 0 )
    {
      NtClose(v9);
      return (NTSTATUS)ExecutionRequiredRequest;
    }
    if ( v18 == 2 )
    {
      v27[0] = v14;
      v27[3] = 0;
      v27[1] = Flags;
      v27[2] = Buffer;
      CriticalSectionOwnerInformation = NtWow64CallFunction64(1, Flags, 16, (int)v27, 0, 0, 0);
    }
    else
    {
      CriticalSectionOwnerInformation = RtlpCreateUserThreadEx(
                                          v9,
                                          0,
                                          6,
                                          0LL,
                                          0,
                                          0,
                                          (NTSTATUS (__cdecl *)(PVOID))RtlpQueryProcessDebugInformationRemote,
                                          Buffer->ViewBaseTarget,
                                          &ThreadHandle,
                                          0);
      if ( CriticalSectionOwnerInformation >= 0 )
      {
        v11 = ZwWaitForSingleObject(ThreadHandle, 1u, &Timeout);
        CriticalSectionOwnerInformation = v11;
        if ( v11 < 0 )
        {
          ZwTerminateThread(ThreadHandle, v11);
        }
        else
        {
          CriticalSectionOwnerInformation = NtQueryInformationThread(
                                              ThreadHandle,
                                              ThreadBasicInformation,
                                              ThreadInformation,
                                              0x1Cu,
                                              0);
          if ( CriticalSectionOwnerInformation >= 0 )
            CriticalSectionOwnerInformation = ThreadInformation[0];
        }
        NtClose(ThreadHandle);
      }
    }
    NtClose(Handle);
    if ( v22 )
      RtlpDestroyExecutionRequiredRequest(v22);
    if ( CriticalSectionOwnerInformation >= 0 )
    {
      if ( !v18 )
        CriticalSectionOwnerInformation = RtlpCopyRemoteDebugInformation(Buffer);
      if ( CriticalSectionOwnerInformation >= 0 )
      {
        if ( (Flags & 1) != 0 && !LODWORD(Buffer->OffsetFree) )
          CriticalSectionOwnerInformation = -1073741558;
        if ( (Flags & 0x40) != 0 && !LODWORD(Buffer->OffsetFree) )
          CriticalSectionOwnerInformation = -1073741558;
        if ( CriticalSectionOwnerInformation >= 0 )
          return RtlpValidateRemoteDebugInformation(
                   &Buffer->CriticalSectionHandle,
                   (char *)Buffer->TargetThreadHandle - 104);
      }
    }
    return CriticalSectionOwnerInformation;
  }
  return result;
}
