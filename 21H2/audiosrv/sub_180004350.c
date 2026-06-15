/*
 * XREFs of sub_180004350 @ 0x180004350
 * Callers:
 *     sub_180003F3C @ 0x180003F3C (sub_180003F3C.c)
 * Callees:
 *     sub_1800040C4 @ 0x1800040C4 (sub_1800040C4.c)
 *     sub_1800041A0 @ 0x1800041A0 (sub_1800041A0.c)
 *     sub_1800042D4 @ 0x1800042D4 (sub_1800042D4.c)
 *     sub_180005E08 @ 0x180005E08 (sub_180005E08.c)
 *     sub_18004BD84 @ 0x18004BD84 (sub_18004BD84.c)
 *     __security_check_cookie @ 0x180069A70 (__security_check_cookie.c)
 *     memset @ 0x18006AB8C (memset.c)
 *     sub_1800B5768 @ 0x1800B5768 (sub_1800B5768.c)
 *     sub_18012DC50 @ 0x18012DC50 (sub_18012DC50.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_180004350(__int64 a1, unsigned __int8 a2)
{
  int v2; // ebx
  char v4; // r14
  __int64 v5; // rdx
  __int64 v6; // r8
  int v7; // eax
  unsigned int v8; // edi
  HANDLE hProcess; // rbx
  char *v10; // rcx
  void *lpSecurityDescriptor; // rbx
  HANDLE ProcessHeap; // rax
  __int64 v14; // rdx
  char *v15; // rcx
  _SECURITY_ATTRIBUTES ProcessAttributes; // [rsp+50h] [rbp-B0h] BYREF
  struct _PROCESS_INFORMATION ProcessInformation; // [rsp+68h] [rbp-98h] BYREF
  unsigned __int64 v18; // [rsp+80h] [rbp-80h] BYREF
  char *DstBuf[2]; // [rsp+88h] [rbp-78h] BYREF
  char v20; // [rsp+98h] [rbp-68h]
  struct _STARTUPINFOW StartupInfo; // [rsp+A0h] [rbp-60h] BYREF
  WCHAR Buffer[264]; // [rsp+110h] [rbp+10h] BYREF
  void *retaddr; // [rsp+348h] [rbp+248h]

  v2 = a2;
  DstBuf[1] = (char *)a1;
  v4 = 1;
  v20 = 1;
  memset(Buffer, 0, 0x208uLL);
  if ( !GetSystemDirectoryW(Buffer, 0x104u) )
  {
    v8 = sub_1800B5768(retaddr, 101LL, "avcore\\audiocore\\server\\lib\\audioengineutil\\adgprocess.cpp");
    goto LABEL_11;
  }
  v7 = sub_1800041A0((__int64)Buffer, v5, v6, DstBuf, &v18);
  v8 = v7;
  if ( v7 < 0 )
  {
    v14 = 105LL;
LABEL_17:
    sub_18004BD84(retaddr, v14, "avcore\\audiocore\\server\\lib\\audioengineutil\\adgprocess.cpp", (unsigned int)v7);
    goto LABEL_11;
  }
  v7 = sub_1800042D4(DstBuf[0], v18, (const char *)L" 0x%Ix 0x%Ix", *(_QWORD *)(a1 + 112), *(_QWORD *)(a1 + 120));
  v8 = v7;
  if ( v7 < 0 )
  {
    v14 = 107LL;
    goto LABEL_17;
  }
  memset(&StartupInfo.cb + 1, 0, 0x64uLL);
  StartupInfo.cb = 104;
  memset(&ProcessAttributes, 0, sizeof(ProcessAttributes));
  ProcessAttributes.nLength = 24;
  v7 = sub_180005E08(&ProcessAttributes.lpSecurityDescriptor);
  v8 = v7;
  if ( v7 < 0 )
  {
    v14 = 116LL;
    goto LABEL_17;
  }
  memset(&ProcessInformation, 0, sizeof(ProcessInformation));
  if ( CreateProcessW(0LL, Buffer, &ProcessAttributes, 0LL, 1, v2 << 18, 0LL, 0LL, &StartupInfo, &ProcessInformation) )
  {
    hProcess = ProcessInformation.hProcess;
    v10 = *(char **)(a1 + 88);
    if ( (unsigned __int64)(v10 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
      sub_1800040C4(v10);
    *(_QWORD *)(a1 + 88) = hProcess;
    *(_DWORD *)(a1 + 96) = ProcessInformation.dwProcessId;
    v4 = 0;
    v8 = 0;
    if ( (unsigned __int64)ProcessInformation.hThread - 1 <= 0xFFFFFFFFFFFFFFFDuLL )
    {
      CloseHandle(ProcessInformation.hThread);
      ProcessInformation.hThread = 0LL;
    }
  }
  else
  {
    v8 = sub_1800B5768(retaddr, 120LL, "avcore\\audiocore\\server\\lib\\audioengineutil\\adgprocess.cpp");
  }
  lpSecurityDescriptor = ProcessAttributes.lpSecurityDescriptor;
  ProcessHeap = GetProcessHeap();
  HeapFree(ProcessHeap, 0, lpSecurityDescriptor);
  ProcessAttributes.lpSecurityDescriptor = 0LL;
LABEL_11:
  if ( v4 )
  {
    v15 = *(char **)(a1 + 88);
    if ( (unsigned __int64)(v15 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
    {
      WaitForSingleObjectEx(v15, 0xFFFFFFFF, 0);
      sub_18012DC50(a1 + 88, 0LL);
      *(_DWORD *)(a1 + 96) = 0;
    }
  }
  return v8;
}
