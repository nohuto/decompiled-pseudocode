/*
 * XREFs of wmain @ 0x140001840
 * Callers:
 *     NtProcessStartupW_AfterSecurityCookieInitialized @ 0x140001510 (NtProcessStartupW_AfterSecurityCookieInitialized.c)
 * Callees:
 *     TraceLoggingRegisterEx_EtwEventRegister_EtwEventSetInformation @ 0x1400010BC (TraceLoggingRegisterEx_EtwEventRegister_EtwEventSetInformation.c)
 *     WppInitUm @ 0x140001E8C (WppInitUm.c)
 *     SmpSearchKnownSubSysDatabase @ 0x1400034EC (SmpSearchKnownSubSysDatabase.c)
 *     SmpUnlockKnownSubSysList @ 0x1400035B8 (SmpUnlockKnownSubSysList.c)
 *     SmpWaitForSubSysStartup @ 0x140003918 (SmpWaitForSubSysStartup.c)
 *     SmpDereferenceKnownSubSys @ 0x140003A84 (SmpDereferenceKnownSubSys.c)
 *     SmpWaitForSingleSubSys @ 0x140003B30 (SmpWaitForSingleSubSys.c)
 *     SmscMain @ 0x140003F4C (SmscMain.c)
 *     SmpGetFirstSessionId @ 0x140005630 (SmpGetFirstSessionId.c)
 *     SmpReadyBootSync @ 0x14000A580 (SmpReadyBootSync.c)
 *     SmpInit @ 0x14000C620 (SmpInit.c)
 *     SmpGetCoreProcessIds @ 0x14000E0F8 (SmpGetCoreProcessIds.c)
 *     __security_check_cookie @ 0x14000E4B0 (__security_check_cookie.c)
 *     SmpGetSoftBootStatus @ 0x14000EC58 (SmpGetSoftBootStatus.c)
 *     SmpTerminate @ 0x140015498 (SmpTerminate.c)
 *     SmpUnhandledExceptionFilter @ 0x140015540 (SmpUnhandledExceptionFilter.c)
 */

__int64 __fastcall wmain(int a1, PCWSTR *a2, __int64 a3, unsigned int a4)
{
  int v7; // eax
  REGHANDLE v8; // rcx
  NTSTATUS v10; // eax
  __int64 v11; // rsi
  int v12; // eax
  int v13; // eax
  __int64 v14; // rdi
  __int64 (__fastcall *v15)(_QWORD, _QWORD); // rcx
  int v16; // eax
  int v17; // eax
  int v18; // eax
  int v19; // eax
  unsigned int v20; // edi
  unsigned int FirstSessionId; // eax
  unsigned int v22; // eax
  void *v23; // rsi
  int v24; // eax
  __int64 v25; // r15
  NTSTATUS v26; // edi
  NTSTATUS InformationProcess; // eax
  int v28; // [rsp+30h] [rbp-118h] BYREF
  int v29; // [rsp+34h] [rbp-114h]
  struct _UNICODE_STRING DestinationString; // [rsp+38h] [rbp-110h] BYREF
  int v31; // [rsp+48h] [rbp-100h] BYREF
  int v32; // [rsp+4Ch] [rbp-FCh] BYREF
  unsigned int v33; // [rsp+50h] [rbp-F8h]
  _DWORD ProcessInformation[2]; // [rsp+58h] [rbp-F0h] BYREF
  __int64 v35; // [rsp+60h] [rbp-E8h] BYREF
  __int128 v36; // [rsp+68h] [rbp-E0h] BYREF
  __int64 v37; // [rsp+78h] [rbp-D0h]
  __int64 v38; // [rsp+80h] [rbp-C8h] BYREF
  _BYTE v39[16]; // [rsp+88h] [rbp-C0h] BYREF
  int v40; // [rsp+98h] [rbp-B0h] BYREF
  _BYTE *v41; // [rsp+A0h] [rbp-A8h]
  int v42; // [rsp+A8h] [rbp-A0h]
  _BYTE v43[16]; // [rsp+B0h] [rbp-98h] BYREF
  NTSTATUS v44[12]; // [rsp+C0h] [rbp-88h] BYREF
  unsigned __int64 Parameters; // [rsp+F0h] [rbp-58h] BYREF
  __int64 v46; // [rsp+F8h] [rbp-50h]
  __int64 v47; // [rsp+100h] [rbp-48h]
  __int64 v48; // [rsp+108h] [rbp-40h]

  ProcessInformation[0] = 2;
  ProcessInformation[1] = 1;
  NtSetInformationProcess((HANDLE)0xFFFFFFFFFFFFFFFFLL, ProcessCookie|ProcessUserModeIOPL, ProcessInformation, 8u);
  v31 = 1;
  NtSetInformationProcess((HANDLE)0xFFFFFFFFFFFFFFFFLL, ProcessCycleTime|ProcessUserModeIOPL, &v31, 4u);
  RtlSetHeapInformation(0LL, HeapEnableTerminationOnCorruption, 0LL, 0LL);
  TraceLoggingRegisterEx_EtwEventRegister_EtwEventSetInformation();
  v7 = EtwEventRegister(&SmssEventProvider, 0LL, 0LL, &SmpTraceHandle);
  v8 = SmpTraceHandle;
  if ( v7 )
    v8 = 0LL;
  SmpTraceHandle = v8;
  qword_140023D10 = 0LL;
  WPP_MAIN_CB = 0LL;
  qword_140023D18 = 1LL;
  WPP_REGISTRATION_GUIDS = (__int64)&WPP_ThisDir_CTLGUID_Smss;
  WPP_GLOBAL_Control = &WPP_MAIN_CB;
  WppInitUm();
  SmpHostSmss = (unsigned int)RtlGetCurrentServiceSessionId() == 0;
  SmpGetSoftBootStatus();
  if ( a1 <= 1 )
  {
    SmpPrimarySmss = 1;
    SmpReadyBootSync();
    RtlInitUnicodeStringEx(&SmpHelperCmd, *a2);
    RtlSetThreadIsCritical(1u, 0LL, 0);
    v32 = 11;
    NtSetInformationProcess((HANDLE)0xFFFFFFFFFFFFFFFFLL, ProcessBasePriority, &v32, 4u);
    Parameters = (unsigned __int64)&DestinationString;
    v46 = 0LL;
    v47 = 0LL;
    v48 = 0LL;
    if ( (MEMORY[0x7FFE02F0] & 0x20) != 0 )
    {
      v28 = 3;
      v10 = NtSetInformationProcess((HANDLE)0xFFFFFFFFFFFFFFFFLL, ProcessAffinityUpdateMode, &v28, 4u);
      v11 = (unsigned int)v10;
      if ( v10 < 0 )
      {
        RtlInitUnicodeString(&DestinationString, L"Session Manager failed to set affinity update mode");
        v46 = v11;
        goto LABEL_39;
      }
    }
    v12 = SmpDebug;
    if ( a4 )
      v12 = a4;
    SmpDebug = v12;
    v38 = 0LL;
    v35 = 0LL;
    v36 = 0LL;
    v37 = 0LL;
    RtlInitializeSRWLock(&v36);
    v13 = TpAllocPool((char *)&v36 + 8, 0LL);
    v14 = (unsigned int)v13;
    v29 = v13;
    if ( v13 >= 0 )
    {
      LODWORD(v37) = SmpNumberInitialSessions;
      v16 = TpSetPoolMinThreads(*((_QWORD *)&v36 + 1), (unsigned int)(SmpNumberInitialSessions + 1));
      v14 = v16;
      v29 = v16;
      if ( v16 >= 0 )
      {
        SmpCallbackEnviron = 3;
        xmmword_140023D48 = 0LL;
        qword_140023D58 = 0LL;
        xmmword_140023D60 = 0LL;
        qword_140023D70 = 0LL;
        dword_140023D78 = 0;
        dword_140023D7C = 1;
        dword_140023D80 = 72;
        *(_QWORD *)&xmmword_140023D48 = *((_QWORD *)&v36 + 1);
        v17 = SmpInit();
        v14 = (unsigned int)v17;
        if ( v17 < 0 )
        {
          RtlInitUnicodeString(&DestinationString, L"Session Manager Initialization");
          goto LABEL_13;
        }
        v18 = TpAllocAlpcCompletion(&v38, SmpApiConnectionPort, SmpApiCallback, &v36, &SmpCallbackEnviron);
        v14 = (unsigned int)v18;
        v29 = v18;
        if ( v18 >= 0 )
        {
          v19 = TpAllocWork(&v35, SmpCreateInitialSession, 0LL, &SmpCallbackEnviron);
          v14 = v19;
          v29 = v19;
          if ( v19 >= 0 )
          {
            v20 = 0;
            v33 = 0;
            while ( v20 < SmpNumberInitialSessions )
            {
              TpPostWork(v35);
              if ( (unsigned int)SmpNumberInitialSessions > 1 && !v20 )
              {
                v40 = 1;
                v41 = v39;
                v42 = 2;
                do
                {
                  FirstSessionId = SmpGetFirstSessionId();
                  SmpWaitForSubSysStartup(FirstSessionId, 2LL, 0LL, v39);
                  v22 = SmpGetFirstSessionId();
                  v23 = (void *)SmpSearchKnownSubSysDatabase(v22, &v40);
                  SmpUnlockKnownSubSysList(v39);
                }
                while ( !v23 );
                v24 = SmpWaitForSingleSubSys(v23);
                v25 = v24;
                if ( v24 < 0 )
                {
                  RtlInitUnicodeString(&DestinationString, L"Failed to locate core GUI process.");
                  v46 = v25;
                  goto LABEL_39;
                }
                SmpDereferenceKnownSubSys(v23);
              }
              v33 = ++v20;
            }
            SmpGetCoreProcessIds(0LL, v43);
            v26 = NtWaitForMultipleObjects(1u, SmpCoreSubsysProcess, WaitAny, 0, 0LL);
            if ( v26 )
            {
              RtlInitUnicodeString(&DestinationString, L"Unexpected error code from NtWaitForMultipleObjects");
              v44[0] = v26;
              InformationProcess = 0;
            }
            else
            {
              RtlInitUnicodeString(&DestinationString, L"Master Subsystem Process");
              InformationProcess = NtQueryInformationProcess(
                                     SmpCoreSubsysProcess[0],
                                     ProcessBasicInformation,
                                     v44,
                                     0x30u,
                                     0LL);
              v26 = v44[0];
            }
            if ( InformationProcess < 0 )
              v46 = -1073741823LL;
            else
              v46 = v26;
LABEL_39:
            SmpTerminate(&Parameters, 1u, 4u);
            JUMPOUT(0x140001E83LL);
          }
          RtlInitUnicodeString(&DestinationString, L"Thread pool work object allocation.");
          SmpInitProgressByLine = 489;
          SmpInitReturnStatus = v14;
          v15 = (__int64 (__fastcall *)(_QWORD, _QWORD))TpAllocWork;
        }
        else
        {
          RtlInitUnicodeString(&DestinationString, L"ALPC Completion object allocation");
          SmpInitProgressByLine = 457;
          SmpInitReturnStatus = v14;
          v15 = (__int64 (__fastcall *)(_QWORD, _QWORD))TpAllocAlpcCompletion;
        }
      }
      else
      {
        RtlInitUnicodeString(&DestinationString, L"Configuring thread pool minimum thread number");
        SmpInitProgressByLine = 413;
        SmpInitReturnStatus = v14;
        v15 = TpSetPoolMinThreads;
      }
    }
    else
    {
      RtlInitUnicodeString(&DestinationString, L"Thread pool allocation");
      SmpInitProgressByLine = 385;
      SmpInitReturnStatus = v14;
      v15 = TpAllocPool;
    }
    SmpInitLastCall = (__int64)v15;
LABEL_13:
    v46 = v14;
    goto LABEL_39;
  }
  SmscMain((unsigned int)a1, a2, a4);
  return 0LL;
}
