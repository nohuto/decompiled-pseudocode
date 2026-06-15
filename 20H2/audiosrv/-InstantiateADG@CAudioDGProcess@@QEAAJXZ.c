/*
 * XREFs of ?InstantiateADG@CAudioDGProcess@@QEAAJXZ @ 0x180010A20
 * Callers:
 *     ?AudioServerInitialize_Internal@@YAJPEAXPEBGW4_AUDCLNT_SHAREMODE@@KPEBUtWAVEFORMATEX@@PEBU_GUID@@PEAUVadServerSettings@@PEAPEAGPEAUIProcessSubmixProxy@@PEAPEAX@Z @ 0x18000F900 (-AudioServerInitialize_Internal@@YAJPEAXPEBGW4_AUDCLNT_SHAREMODE@@KPEBUtWAVEFORMATEX@@PEBU_GUID@.c)
 *     ??$MakeAndInitialize@VCAPOWrapperClient@@UIAudioProcessingObject@@AEAPEBGAEAW4APO_TYPE@@AEBU_GUID@@@Details@WRL@Microsoft@@YAJPEAPEAUIAudioProcessingObject@@AEAPEBGAEAW4APO_TYPE@@AEBU_GUID@@@Z @ 0x18000FFC0 (--$MakeAndInitialize@VCAPOWrapperClient@@UIAudioProcessingObject@@AEAPEBGAEAW4APO_TYPE@@AEBU_GUI.c)
 *     AudioServerGetAudioHistoryProducerHandle @ 0x1800DDBA0 (AudioServerGetAudioHistoryProducerHandle.c)
 *     s_adGetDeviceGraphWnfStateName @ 0x18012DBD0 (s_adGetDeviceGraphWnfStateName.c)
 * Callees:
 *     ?LaunchAndWaitForADGStartup@CAudioDGProcess@@AEAAJ_N@Z @ 0x180003F0C (-LaunchAndWaitForADGStartup@CAudioDGProcess@@AEAAJ_N@Z.c)
 *     ?PrepareForADGStartup@CAudioDGProcess@@AEAAJXZ @ 0x180045190 (-PrepareForADGStartup@CAudioDGProcess@@AEAAJXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18004BEB4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180069C20 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800741C0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall CAudioDGProcess::InstantiateADG(CAudioDGProcess *this)
{
  struct _RTL_CRITICAL_SECTION *v2; // rbx
  unsigned int v3; // esi
  bool v5; // bp
  int v6; // eax
  int v7; // r14d
  int v8; // eax
  int v9; // r14d
  struct CAudioThreadPool *v10; // r14
  __int64 v11; // rdx
  int v12; // eax
  int v13; // r14d
  int pdwType; // [rsp+20h] [rbp-98h]
  bool v15; // [rsp+40h] [rbp-78h] BYREF
  unsigned int pvData; // [rsp+44h] [rbp-74h] BYREF
  DWORD pcbData; // [rsp+48h] [rbp-70h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+50h] [rbp-68h] BYREF
  struct _RTL_CRITICAL_SECTION *v19; // [rsp+60h] [rbp-58h]
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+68h] [rbp-50h] BYREF
  void *v21; // [rsp+78h] [rbp-40h]
  int v22; // [rsp+80h] [rbp-38h]
  int v23; // [rsp+84h] [rbp-34h]
  bool *v24; // [rsp+88h] [rbp-30h]
  __int64 v25; // [rsp+90h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+0h]

  v2 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 48);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 48));
  v19 = v2;
  v3 = 0;
  if ( (unsigned __int64)(*((_QWORD *)this + 11) - 1LL) <= 0xFFFFFFFFFFFFFFFDuLL )
    goto LABEL_2;
  *((_BYTE *)this + 100) = 0;
  v5 = 0;
  pcbData = 4;
  if ( !RegGetValueW(
          HKEY_LOCAL_MACHINE,
          L"Software\\Microsoft\\Windows\\CurrentVersion\\Audio",
          L"EnableProtectedAudioDG",
          0x18u,
          0LL,
          &pvData,
          &pcbData) )
    v5 = pvData != 0;
  v6 = CAudioDGProcess::PrepareForADGStartup(this);
  v7 = v6;
  if ( v6 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x157,
      (unsigned int)"avcore\\audiocore\\server\\lib\\audioengineutil\\adgprocess.cpp",
      (const char *)(unsigned int)v6,
      pdwType);
    v3 = v7;
    goto LABEL_2;
  }
  if ( (unsigned int)dword_18019C4B8 > 4 )
  {
    v15 = v5;
    v24 = &v15;
    v25 = 1LL;
    *(_DWORD *)&EventDescriptor.Id = 184549376;
    *(_DWORD *)&EventDescriptor.Level = 4;
    EventDescriptor.Keyword = 0LL;
    UserData.Ptr = (ULONGLONG)off_18019C4C0;
    UserData.Size = *(unsigned __int16 *)off_18019C4C0;
    UserData.Reserved = 2;
    v21 = &unk_18016C1BB;
    v22 = 36;
    v23 = 1;
    pvData = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
    EventWriteTransfer(qword_18019C4D8, &EventDescriptor, 0LL, 0LL, 3u, &UserData);
  }
  v8 = CAudioDGProcess::LaunchAndWaitForADGStartup(this, v5);
  v9 = v8;
  if ( !v5 )
    goto LABEL_11;
  if ( v8 < 0 )
  {
    if ( v8 == -2147024319 )
    {
      OutputDebugStringW(L"********************************************************************************\n");
      OutputDebugStringW(L"********************************************************************************\n");
      OutputDebugStringW(L"\n");
      OutputDebugStringW(L"\n");
      OutputDebugStringW(L"    WARNING WARNING WARNING WARNING WARNING WARNING\n");
      OutputDebugStringW(L"    WARNING WARNING WARNING WARNING WARNING WARNING\n");
      OutputDebugStringW(L"\n");
      OutputDebugStringW(L"\n");
      OutputDebugStringW(L"Launch of AudioDG.EXE as a protected process failed with STATUS_INVALID_IMAGE_HASH\n");
      OutputDebugStringW(L"\n");
      OutputDebugStringW(L"This usually means that there is a problem with PEAUTH, because an unexpected \n");
      OutputDebugStringW(L" DLL was added to the audiodg.exe process\n");
      OutputDebugStringW(L"\n");
      OutputDebugStringW(L"\n");
      OutputDebugStringW(L" To find the offending binary, please do the following:\n");
      OutputDebugStringW(L" \t1. Start Event Viewer (type eventvwr from command line\n");
      OutputDebugStringW(L" \t2. Navigate to Applications and Services Log/Microsoft/Windows/CodeIntegrity/Operational node\n");
      OutputDebugStringW(L" \t3. Check the error level events with ID 3002; you'll see the offending binary path.\n");
      OutputDebugStringW(L" The event text should read as: Code Integrity is unable to verify the image integrity of the file ...\n");
      OutputDebugStringW(L"\n");
      OutputDebugStringW(L"To get the build to boot, audiodg is being restarted outside of the protected \n");
      OutputDebugStringW(L" environment, audio will continue to function, but playback of protected \n");
      OutputDebugStringW(L" content will be disabled \n");
      OutputDebugStringW(L"\n");
      OutputDebugStringW(L" For more information, please see:\n");
      OutputDebugStringW(L"    http://dmd/wmpg/mf/cp/PMP/Lists/Protected%20Environment%20FAQ/Flat.aspx\n");
      OutputDebugStringW(L"\n");
      OutputDebugStringW(L"\n");
      OutputDebugStringW(L"********************************************************************************\n");
      OutputDebugStringW(L"********************************************************************************\n");
    }
    v12 = CAudioDGProcess::PrepareForADGStartup(this);
    v13 = v12;
    if ( v12 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x195,
        (unsigned int)"avcore\\audiocore\\server\\lib\\audioengineutil\\adgprocess.cpp",
        (const char *)(unsigned int)v12,
        pdwType);
      v3 = v13;
      goto LABEL_2;
    }
    v9 = CAudioDGProcess::LaunchAndWaitForADGStartup(this, !v5);
LABEL_11:
    if ( v9 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x198,
        (unsigned int)"avcore\\audiocore\\server\\lib\\audioengineutil\\adgprocess.cpp",
        (const char *)(unsigned int)v9,
        pdwType);
      v3 = v9;
      goto LABEL_2;
    }
  }
  if ( (unsigned __int64)(*((_QWORD *)this + 11) - 1LL) <= 0xFFFFFFFFFFFFFFFDuLL )
  {
    v10 = ThreadPool;
    v11 = (*(__int64 (__fastcall **)(struct CAudioThreadPool *, void (*)(struct _TP_CALLBACK_INSTANCE *, void *, struct _TP_WAIT *, int), CAudioDGProcess *))(*(_QWORD *)ThreadPool + 80LL))(
            ThreadPool,
            CAudioDGProcess::OnADGProcessTerminatedHandler,
            this);
    *((_QWORD *)this + 16) = v11;
    if ( v11 )
      (*(void (__fastcall **)(struct CAudioThreadPool *, __int64, _QWORD, _QWORD))(*(_QWORD *)v10 + 88LL))(
        v10,
        v11,
        *((_QWORD *)this + 11),
        0LL);
  }
LABEL_2:
  if ( v2 )
    LeaveCriticalSection(v2);
  return v3;
}
