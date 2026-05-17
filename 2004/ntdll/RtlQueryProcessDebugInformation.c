/*
 * XREFs of RtlQueryProcessDebugInformation @ 0x1800D7760
 * Callers:
 *     RtlpQueryProcessDebugInformationFromWow64 @ 0x1800D8BC0 (RtlpQueryProcessDebugInformationFromWow64.c)
 *     RtlpQueryProcessDebugInformationRemote @ 0x1800D8C60 (RtlpQueryProcessDebugInformationRemote.c)
 * Callees:
 *     RtlpCreateUserThreadEx @ 0x1800560B0 (RtlpCreateUserThreadEx.c)
 *     RtlWow64GetProcessMachines @ 0x18007AD00 (RtlWow64GetProcessMachines.c)
 *     __security_check_cookie @ 0x18008C240 (__security_check_cookie.c)
 *     NtWaitForSingleObject @ 0x18009CE90 (NtWaitForSingleObject.c)
 *     NtClose @ 0x18009CFF0 (NtClose.c)
 *     ZwQueryInformationThread @ 0x18009D2B0 (ZwQueryInformationThread.c)
 *     NtOpenProcess @ 0x18009D2D0 (NtOpenProcess.c)
 *     ZwDuplicateObject @ 0x18009D590 (ZwDuplicateObject.c)
 *     ZwReadVirtualMemory @ 0x18009D5F0 (ZwReadVirtualMemory.c)
 *     NtTerminateThread @ 0x18009D870 (NtTerminateThread.c)
 *     memset @ 0x1800A3EC0 (memset.c)
 *     RtlQueryProcessBackTraceInformation @ 0x1800D75D0 (RtlQueryProcessBackTraceInformation.c)
 *     RtlQueryProcessHeapInformation @ 0x1800D7C40 (RtlQueryProcessHeapInformation.c)
 *     RtlQueryProcessLockInformation @ 0x1800D8020 (RtlQueryProcessLockInformation.c)
 *     RtlQueryProcessModuleInformation @ 0x1800D82C0 (RtlQueryProcessModuleInformation.c)
 *     RtlpChangeQueryDebugBufferTarget @ 0x1800D85F0 (RtlpChangeQueryDebugBufferTarget.c)
 *     RtlpCopyRemoteDebugInformation @ 0x1800D8980 (RtlpCopyRemoteDebugInformation.c)
 *     RtlpQueryCriticalSectionOwnerInformation @ 0x1800D8B6C (RtlpQueryCriticalSectionOwnerInformation.c)
 *     RtlpValidateRemoteDebugInformation @ 0x1800D903C (RtlpValidateRemoteDebugInformation.c)
 *     AVrfpQueryProcessVerifierOptions @ 0x1800DB114 (AVrfpQueryProcessVerifierOptions.c)
 *     RtlpCreateExecutionRequiredRequest @ 0x18010ADA4 (RtlpCreateExecutionRequiredRequest.c)
 *     RtlpDestroyExecutionRequiredRequest @ 0x18010AEA4 (RtlpDestroyExecutionRequiredRequest.c)
 */

__int64 __fastcall RtlQueryProcessDebugInformation(_QWORD *a1, unsigned int a2, __int64 a3)
{
  void (__fastcall __noreturn *v3)(); // rbx
  _QWORD *v4; // r15
  __int64 result; // rax
  __int64 v9; // r8
  bool v10; // dl
  unsigned int v11; // r15d
  HANDLE v12; // r14
  HANDLE v13; // rcx
  HANDLE v14; // r15
  __int64 v15; // [rsp+20h] [rbp-E0h]
  __int64 v16; // [rsp+30h] [rbp-D0h]
  __int16 v17[2]; // [rsp+68h] [rbp-98h] BYREF
  unsigned int v18; // [rsp+6Ch] [rbp-94h]
  HANDLE Handle; // [rsp+70h] [rbp-90h]
  HANDLE v20; // [rsp+78h] [rbp-88h] BYREF
  void (__fastcall __noreturn *v21)(); // [rsp+80h] [rbp-80h]
  _QWORD *v22; // [rsp+88h] [rbp-78h]
  __int64 v23; // [rsp+90h] [rbp-70h]
  __int64 v24; // [rsp+98h] [rbp-68h]
  LARGE_INTEGER Timeout; // [rsp+A0h] [rbp-60h] BYREF
  HANDLE v26; // [rsp+A8h] [rbp-58h] BYREF
  HANDLE v27; // [rsp+B0h] [rbp-50h] BYREF
  int v28; // [rsp+B8h] [rbp-48h]
  __int64 v29; // [rsp+C0h] [rbp-40h]
  __int64 v30; // [rsp+C8h] [rbp-38h]
  int v31; // [rsp+D0h] [rbp-30h]
  __int128 v32; // [rsp+D8h] [rbp-28h]
  _QWORD v33[17]; // [rsp+E8h] [rbp-18h] BYREF
  int v34; // [rsp+170h] [rbp+70h]
  void (__fastcall __noreturn *v35)(); // [rsp+1E0h] [rbp+E0h]

  v3 = 0LL;
  v21 = RtlpQueryProcessDebugInformationRemote;
  v4 = 0LL;
  v18 = 0;
  if ( *(_QWORD *)(a3 + 48) && *(_QWORD **)(a3 + 48) != a1 )
    return 3221225485LL;
  if ( (a2 & 0x3FFFFFBE) != 0 && (a2 & 0x40000000) != 0 )
    return 3221225659LL;
  *(_DWORD *)(a3 + 64) = a2;
  v9 = *(_QWORD *)(a3 + 72);
  Timeout.QuadPart = -600000000LL;
  if ( v9 )
    memset((void *)(a3 + 208), 0, v9 - 208);
  *(_QWORD *)(a3 + 72) = 208LL;
  v10 = 0;
  if ( (a2 & 0x3FFFFFBE) == 0 )
    v10 = (a2 & 0x80000000) != 0 && (a2 & 0x41) != 0;
  if ( v10 )
  {
    if ( (a2 & 0x40000000) != 0 )
    {
      v4 = a1;
    }
    else if ( NtCurrentTeb()->ClientId.UniqueProcess != a1 )
    {
      v28 = 48;
      v29 = 0LL;
      v31 = 0;
      v30 = 0LL;
      v22 = a1;
      v32 = 0LL;
      v23 = 0LL;
      NtOpenProcess();
      v4 = v33;
      v33[1] = RtlpQueryReadVirtualMemory;
      v33[2] = NtQueryInformationProcess;
      v33[0] = 0LL;
    }
  }
  if ( NtCurrentTeb()->ClientId.UniqueProcess == a1 || (a2 & 0x40000000) != 0 )
  {
    if ( (a2 & 0x41) == 0 || (LODWORD(v3) = RtlQueryProcessModuleInformation(v4, a2, a3), !(_DWORD)v3) )
    {
      if ( (a2 & 2) == 0 || (LODWORD(v3) = RtlQueryProcessBackTraceInformation(a3), !(_DWORD)v3) )
      {
        if ( (a2 & 0x20) == 0 || (LODWORD(v3) = RtlQueryProcessLockInformation(a3), !(_DWORD)v3) )
        {
          if ( (a2 & 0x21C) == 0 || (LODWORD(v3) = RtlQueryProcessHeapInformation(a3), !(_DWORD)v3) )
          {
            if ( (a2 & 0x80u) == 0 || (LODWORD(v3) = AVrfpQueryProcessVerifierOptions(a3), !(_DWORD)v3) )
            {
              if ( (a2 & 0xC00) != 0 )
                LODWORD(v3) = RtlpQueryCriticalSectionOwnerInformation(a3, a2);
            }
          }
        }
      }
    }
    return (unsigned int)v3;
  }
  if ( ((a2 - 1024) & 0xFFFFFBFF) == 0 )
  {
    v28 = 48;
    v29 = 0LL;
    v31 = 0;
    v30 = 0LL;
    v22 = a1;
    v32 = 0LL;
    v23 = 0LL;
    if ( (int)NtOpenProcess() >= 0 )
    {
      if ( (int)RtlWow64GetProcessMachines(0LL, v17, 0LL) >= 0 )
      {
        if ( v17[0] )
        {
          LODWORD(v16) = 0;
          if ( (int)ZwDuplicateObject() >= 0 )
          {
            if ( (int)ZwReadVirtualMemory() >= 0 && v24 == 240 )
              v3 = v35;
            NtClose(Handle);
            if ( v3 )
            {
              v21 = v3;
              v18 = 1;
            }
          }
        }
      }
      NtClose(0LL);
    }
  }
  v11 = v18;
  v20 = 0LL;
  result = RtlpChangeQueryDebugBufferTarget(a3, a1, v18, &v20);
  if ( (int)result >= 0 )
  {
    v12 = v20;
    v13 = v20;
    if ( !v20 )
      v13 = *(HANDLE *)(a3 + 136);
    LODWORD(v3) = RtlpCreateExecutionRequiredRequest(v13, &v27);
    if ( (int)v3 < 0 )
    {
      NtClose(v12);
    }
    else
    {
      LODWORD(v3) = RtlpCreateUserThreadEx(
                      (__int64)v12,
                      0LL,
                      6,
                      0,
                      0LL,
                      0LL,
                      v16,
                      (__int64)v21,
                      *(_QWORD *)(a3 + 16),
                      &v26,
                      0LL);
      if ( (int)v3 >= 0 )
      {
        v14 = v26;
        LODWORD(v3) = NtWaitForSingleObject(v26, 1u, &Timeout);
        if ( (int)v3 < 0 )
        {
          NtTerminateThread();
        }
        else
        {
          v15 = 0LL;
          LODWORD(v3) = ZwQueryInformationThread();
          if ( (int)v3 >= 0 )
            LODWORD(v3) = v34;
        }
        NtClose(v14);
        v11 = v18;
      }
      NtClose(v12);
      if ( v27 )
        RtlpDestroyExecutionRequiredRequest(v27);
      if ( (int)v3 < 0 )
        return (unsigned int)v3;
      if ( v11 == 1 )
      {
        LODWORD(v3) = 0;
        *(_QWORD *)(a3 + 168) = (unsigned int)_mm_cvtsi128_si32(_mm_srli_si128(*(__m128i *)(*(_QWORD *)(a3 + 88)
                                                                                          + a3
                                                                                          + 80), 4));
      }
      else
      {
        if ( !v11 )
          LODWORD(v3) = RtlpCopyRemoteDebugInformation(a3);
        if ( (int)v3 < 0 )
          return (unsigned int)v3;
      }
      if ( (a2 & 1) != 0 && !*(_QWORD *)(a3 + 96) )
        LODWORD(v3) = -1073741558;
      if ( (a2 & 0x40) != 0 && !*(_QWORD *)(a3 + 96) )
        LODWORD(v3) = -1073741558;
      if ( (int)v3 >= 0 )
        LODWORD(v3) = RtlpValidateRemoteDebugInformation(a3, a2, a3 + 208, *(_QWORD *)(a3 + 72) - 208LL, v15);
    }
    return (unsigned int)v3;
  }
  return result;
}
