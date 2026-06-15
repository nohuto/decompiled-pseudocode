/*
 * XREFs of ?LaunchADGProcess@CAudioDGProcess@@AEAAJ_N@Z @ 0x1800047C0
 * Callers:
 *     ?LaunchAndWaitForADGStartup@CAudioDGProcess@@AEAAJ_N@Z @ 0x1800043AC (-LaunchAndWaitForADGStartup@CAudioDGProcess@@AEAAJ_N@Z.c)
 * Callees:
 *     ?close_reset@?$resource_policy@PEAXP6AHPEAX@Z$1?CloseHandle@@YAH0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@SAXPEAX@Z @ 0x180004534 (-close_reset@-$resource_policy@PEAXP6AHPEAX@Z$1-CloseHandle@@YAH0@ZU-$integral_constant@_K$0A@@w.c)
 *     ?StringCbCatExW@@YAJPEAG_KPEBGPEAPEAGPEA_KK@Z @ 0x180004610 (-StringCbCatExW@@YAJPEAG_KPEBGPEAPEAGPEA_KK@Z.c)
 *     ?StringCbPrintfW@@YAJPEAG_KPEBGZZ @ 0x180004744 (-StringCbPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     ?GetADGProcessSD@CAudioDGProcess@@CAJPEAPEAX@Z @ 0x180006278 (-GetADGProcessSD@CAudioDGProcess@@CAJPEAPEAX@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18004C654 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x18006A580 (__security_check_cookie.c)
 *     memset_0 @ 0x18006B69C (memset_0.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1800B6238 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ?reset@?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x18012E7D0 (-reset@-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CAudioDGProcess::LaunchADGProcess(wchar_t *this, unsigned __int8 a2)
{
  int v2; // ebx
  char v4; // r14
  size_t v5; // rdx
  const unsigned __int16 *v6; // r8
  const char *v7; // r9
  int ADGProcessSD; // eax
  unsigned int LastError; // edi
  const char *v10; // r9
  HANDLE hProcess; // rbx
  char *v12; // rcx
  void *lpSecurityDescriptor; // rbx
  HANDLE ProcessHeap; // rax
  __int64 v16; // rdx
  char *v17; // rcx
  BOOL bInheritHandles[2]; // [rsp+20h] [rbp-E0h]
  _SECURITY_ATTRIBUTES ProcessAttributes; // [rsp+50h] [rbp-B0h] BYREF
  struct _PROCESS_INFORMATION ProcessInformation; // [rsp+68h] [rbp-98h] BYREF
  unsigned __int64 v21; // [rsp+80h] [rbp-80h] BYREF
  wchar_t *v22[2]; // [rsp+88h] [rbp-78h] BYREF
  char v23; // [rsp+98h] [rbp-68h]
  struct _STARTUPINFOW StartupInfo; // [rsp+A0h] [rbp-60h] BYREF
  WCHAR Buffer[264]; // [rsp+110h] [rbp+10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+348h] [rbp+248h]

  v2 = a2;
  v22[1] = this;
  v4 = 1;
  v23 = 1;
  memset_0(Buffer, 0, 0x208uLL);
  if ( !GetSystemDirectoryW(Buffer, 0x104u) )
  {
    LastError = wil::details::in1diag3::Return_GetLastError(
                  retaddr,
                  (void *)0x65,
                  (unsigned int)"avcore\\audiocore\\server\\lib\\audioengineutil\\adgprocess.cpp",
                  v7);
    goto LABEL_11;
  }
  ADGProcessSD = StringCbCatExW(Buffer, v5, v6, v22, &v21);
  LastError = ADGProcessSD;
  if ( ADGProcessSD < 0 )
  {
    v16 = 105LL;
LABEL_17:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v16,
      (unsigned int)"avcore\\audiocore\\server\\lib\\audioengineutil\\adgprocess.cpp",
      (const char *)(unsigned int)ADGProcessSD,
      bInheritHandles[0]);
    goto LABEL_11;
  }
  *(_QWORD *)bInheritHandles = *((_QWORD *)this + 15);
  ADGProcessSD = StringCbPrintfW(v22[0], v21, L" 0x%Ix 0x%Ix", *((_QWORD *)this + 14));
  LastError = ADGProcessSD;
  if ( ADGProcessSD < 0 )
  {
    v16 = 107LL;
    goto LABEL_17;
  }
  memset_0(&StartupInfo.cb + 1, 0, 0x64uLL);
  StartupInfo.cb = 104;
  memset(&ProcessAttributes, 0, sizeof(ProcessAttributes));
  ProcessAttributes.nLength = 24;
  ADGProcessSD = CAudioDGProcess::GetADGProcessSD(&ProcessAttributes.lpSecurityDescriptor);
  LastError = ADGProcessSD;
  if ( ADGProcessSD < 0 )
  {
    v16 = 116LL;
    goto LABEL_17;
  }
  memset(&ProcessInformation, 0, sizeof(ProcessInformation));
  if ( CreateProcessW(0LL, Buffer, &ProcessAttributes, 0LL, 1, v2 << 18, 0LL, 0LL, &StartupInfo, &ProcessInformation) )
  {
    hProcess = ProcessInformation.hProcess;
    v12 = (char *)*((_QWORD *)this + 11);
    if ( (unsigned __int64)(v12 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
      wil::details::resource_policy<void *,int (*)(void *),&int CloseHandle(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>::close_reset(v12);
    *((_QWORD *)this + 11) = hProcess;
    *((_DWORD *)this + 24) = ProcessInformation.dwProcessId;
    v4 = 0;
    LastError = 0;
    if ( (unsigned __int64)ProcessInformation.hThread - 1 <= 0xFFFFFFFFFFFFFFFDuLL )
    {
      CloseHandle(ProcessInformation.hThread);
      ProcessInformation.hThread = 0LL;
    }
  }
  else
  {
    LastError = wil::details::in1diag3::Return_GetLastError(
                  retaddr,
                  (void *)0x78,
                  (unsigned int)"avcore\\audiocore\\server\\lib\\audioengineutil\\adgprocess.cpp",
                  v10);
  }
  lpSecurityDescriptor = ProcessAttributes.lpSecurityDescriptor;
  ProcessHeap = GetProcessHeap();
  HeapFree(ProcessHeap, 0, lpSecurityDescriptor);
  ProcessAttributes.lpSecurityDescriptor = 0LL;
LABEL_11:
  if ( v4 )
  {
    v17 = (char *)*((_QWORD *)this + 11);
    if ( (unsigned __int64)(v17 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
    {
      WaitForSingleObjectEx(v17, 0xFFFFFFFF, 0);
      wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::reset(
        this + 44,
        0LL);
      *((_DWORD *)this + 24) = 0;
    }
  }
  return LastError;
}
