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

int __stdcall RtlQueryProcessDebugInformation(void *a1, int a2, int a3)
{
  int CriticalSectionOwnerInformation; // esi
  int result; // eax
  HANDLE v5; // edx
  int v6; // eax
  void *v7; // ecx
  HANDLE v8; // eax
  HANDLE v9; // esi
  HANDLE v10; // ecx
  int v11; // eax
  HANDLE Handle; // [esp+Ch] [ebp-8Ch] BYREF
  void *v13; // [esp+10h] [ebp-88h]
  _DWORD *v14; // [esp+14h] [ebp-84h]
  HANDLE v15; // [esp+18h] [ebp-80h] BYREF
  HANDLE ThreadHandle; // [esp+1Ch] [ebp-7Ch] BYREF
  int v17; // [esp+20h] [ebp-78h]
  __int16 v18; // [esp+24h] [ebp-74h] BYREF
  void *v19; // [esp+28h] [ebp-70h] BYREF
  int v20; // [esp+2Ch] [ebp-6Ch]
  int v21; // [esp+30h] [ebp-68h] BYREF
  int v22; // [esp+34h] [ebp-64h]
  int v23; // [esp+38h] [ebp-60h]
  int v24; // [esp+3Ch] [ebp-5Ch]
  int v25; // [esp+40h] [ebp-58h]
  int v26; // [esp+44h] [ebp-54h]
  HANDLE v27; // [esp+48h] [ebp-50h] BYREF
  int v28; // [esp+4Ch] [ebp-4Ch]
  _DWORD v29[2]; // [esp+50h] [ebp-48h] BYREF
  _DWORD v30[3]; // [esp+58h] [ebp-40h] BYREF
  int ThreadInformation[7]; // [esp+64h] [ebp-34h] BYREF
  _DWORD v32[5]; // [esp+80h] [ebp-18h] BYREF

  CriticalSectionOwnerInformation = 0;
  v13 = a1;
  v17 = 0;
  Handle = 0;
  v14 = 0;
  if ( *(_DWORD *)(a3 + 24) && *(void **)(a3 + 24) != a1 )
    return -1073741811;
  v5 = (HANDLE)(a2 & 0x3FFFFFBE);
  v15 = (HANDLE)(a2 & 0x3FFFFFBE);
  if ( (a2 & 0x3FFFFFBE) != 0 && (a2 & 0x40000000) != 0 )
    return -1073741637;
  v29[1] = -1;
  v6 = *(_DWORD *)(a3 + 36);
  v29[0] = -600000000;
  *(_DWORD *)(a3 + 32) = a2;
  if ( v6 )
  {
    memset((void *)(a3 + 104), 0, v6 - 104);
    v5 = v15;
  }
  *(_DWORD *)(a3 + 36) = 104;
  v28 = a2 & 0x41;
  v7 = v13;
  if ( ((unsigned __int8)-(v5 == 0) & (a2 < 0 && v28 != 0)) != 0 )
  {
    if ( (a2 & 0x40000000) != 0 )
    {
      v14 = v13;
    }
    else if ( NtCurrentTeb()->ClientId.UniqueProcess == v13 )
    {
      v14 = 0;
    }
    else
    {
      v19 = v13;
      v21 = 24;
      v22 = 0;
      v24 = 0;
      v23 = 0;
      v25 = 0;
      v26 = 0;
      v20 = 0;
      if ( ZwOpenProcess((int)&Handle, 0x1FFFFF, (int)&v21, (int)&v19) >= 0 )
      {
        v8 = Handle;
      }
      else
      {
        v8 = 0;
        Handle = 0;
      }
      v7 = v13;
      v30[0] = v8;
      v30[1] = RtlpQueryReadVirtualMemory;
      v30[2] = ZwQueryInformationProcess;
      v14 = v30;
    }
  }
  if ( NtCurrentTeb()->ClientId.UniqueProcess == v7 || (a2 & 0x40000000) != 0 || Handle )
  {
    if ( (!v28 || (CriticalSectionOwnerInformation = RtlQueryProcessModuleInformation(a3)) == 0)
      && ((a2 & 2) == 0 || (CriticalSectionOwnerInformation = RtlQueryProcessBackTraceInformation(a3)) == 0)
      && ((a2 & 0x20) == 0 || (CriticalSectionOwnerInformation = RtlQueryProcessLockInformation(a3)) == 0)
      && ((a2 & 0x21C) == 0 || (CriticalSectionOwnerInformation = RtlQueryProcessHeapInformation(a3)) == 0)
      && ((a2 & 0x80u) == 0 || (CriticalSectionOwnerInformation = AVrfpQueryProcessVerifierOptions(a3)) == 0)
      && (a2 & 0xC00) != 0 )
    {
      CriticalSectionOwnerInformation = RtlpQueryCriticalSectionOwnerInformation(a3, a2);
    }
    if ( Handle )
      NtClose(Handle);
    return CriticalSectionOwnerInformation;
  }
  if ( a2 == 1024 || a2 == 2048 )
  {
    v19 = v13;
    v21 = 24;
    v22 = 0;
    v24 = 0;
    v23 = 0;
    v25 = 0;
    v26 = 0;
    v20 = 0;
    if ( ZwOpenProcess((int)&Handle, 4096, (int)&v21, (int)&v19) >= 0 )
    {
      if ( RtlWow64GetProcessMachines((int)Handle, &v18, 0) >= 0 && !v18 )
        v17 = 2;
      NtClose(Handle);
    }
    Handle = 0;
  }
  v15 = 0;
  result = RtlpChangeQueryDebugBufferTarget(v17, &v15);
  if ( result >= 0 )
  {
    v9 = v15;
    v10 = v15;
    if ( !v15 )
      v10 = *(HANDLE *)(a3 + 68);
    v14 = (_DWORD *)RtlpCreateExecutionRequiredRequest(v10, &v27);
    if ( (int)v14 < 0 )
    {
      NtClose(v9);
      return (int)v14;
    }
    if ( v17 == 2 )
    {
      v32[0] = v13;
      v32[3] = 0;
      v32[1] = a2;
      v32[2] = a3;
      CriticalSectionOwnerInformation = NtWow64CallFunction64(1, a2, 16, (int)v32, 0, 0, 0);
    }
    else
    {
      CriticalSectionOwnerInformation = RtlpCreateUserThreadEx(
                                          (int)v9,
                                          0,
                                          6,
                                          0,
                                          0,
                                          0,
                                          0,
                                          (int)RtlpQueryProcessDebugInformationRemote,
                                          *(void **)(a3 + 8),
                                          &ThreadHandle,
                                          0);
      if ( CriticalSectionOwnerInformation >= 0 )
      {
        v11 = ZwWaitForSingleObject((int)ThreadHandle, 1, (int)v29);
        CriticalSectionOwnerInformation = v11;
        if ( v11 < 0 )
        {
          ZwTerminateThread((int)ThreadHandle, v11);
        }
        else
        {
          CriticalSectionOwnerInformation = NtQueryInformationThread(
                                              ThreadHandle,
                                              (THREADINFOCLASS)0,
                                              ThreadInformation,
                                              0x1Cu,
                                              0);
          if ( CriticalSectionOwnerInformation >= 0 )
            CriticalSectionOwnerInformation = ThreadInformation[0];
        }
        NtClose(ThreadHandle);
      }
    }
    NtClose(v15);
    if ( v27 )
      RtlpDestroyExecutionRequiredRequest(v27);
    if ( CriticalSectionOwnerInformation >= 0 )
    {
      if ( !v17 )
        CriticalSectionOwnerInformation = RtlpCopyRemoteDebugInformation(a3);
      if ( CriticalSectionOwnerInformation >= 0 )
      {
        if ( (a2 & 1) != 0 && !*(_DWORD *)(a3 + 48) )
          CriticalSectionOwnerInformation = -1073741558;
        if ( (a2 & 0x40) != 0 && !*(_DWORD *)(a3 + 48) )
          CriticalSectionOwnerInformation = -1073741558;
        if ( CriticalSectionOwnerInformation >= 0 )
          return RtlpValidateRemoteDebugInformation(a3 + 104, *(_DWORD *)(a3 + 36) - 104);
      }
    }
    return CriticalSectionOwnerInformation;
  }
  return result;
}
