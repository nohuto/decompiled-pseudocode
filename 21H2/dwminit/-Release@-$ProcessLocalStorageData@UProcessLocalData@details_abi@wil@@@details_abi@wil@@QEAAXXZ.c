/*
 * XREFs of ?Release@?$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil@@QEAAXXZ @ 0x1800077F0
 * Callers:
 *     wil::details::_dynamic_atexit_destructor_for__g_processLocalData__ @ 0x18000DF80 (wil--details--_dynamic_atexit_destructor_for__g_processLocalData__.c)
 * Callees:
 *     ?FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180002420 (-FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?Destroy@SemaphoreValue@details_abi@wil@@QEAAXXZ @ 0x1800031C0 (-Destroy@SemaphoreValue@details_abi@wil@@QEAAXXZ.c)
 *     ??1ThreadLocalData@details_abi@wil@@QEAA@XZ @ 0x180003A24 (--1ThreadLocalData@details_abi@wil@@QEAA@XZ.c)
 *     ??$invoke@P6AXPEAU_RTL_SRWLOCK@@@ZAEAPEAU1@@wistd@@YAX$$QEAP6AXPEAU_RTL_SRWLOCK@@@ZAEAPEAU1@@Z @ 0x180007FC0 (--$invoke@P6AXPEAU_RTL_SRWLOCK@@@ZAEAPEAU1@@wistd@@YAX$$QEAP6AXPEAU_RTL_SRWLOCK@@@ZAEAPEAU1@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18000DED0 (_guard_dispatch_icall_nop.c)
 */

int __fastcall wil::details_abi::ProcessLocalStorageData<wil::details_abi::ProcessLocalData>::Release(_QWORD *lpMem)
{
  int v2; // eax
  void *v3; // rbx
  DWORD v4; // eax
  void *v5; // rdx
  __int64 v6; // r8
  const char *v7; // r9
  bool v8; // zf
  int result; // eax
  DWORD LastError; // eax
  DWORD v11; // ebx
  __int64 *v12; // r14
  __int64 v13; // r15
  __int64 v14; // rdi
  HANDLE ProcessHeap; // rax
  HANDLE v16; // rax
  void (__fastcall *v17)(wil::details *, void *); // [rsp+20h] [rbp-40h] BYREF
  __int64 v18; // [rsp+28h] [rbp-38h] BYREF
  void (__fastcall *v19)(wil::details *, void *); // [rsp+30h] [rbp-30h] BYREF
  __int64 v20; // [rsp+38h] [rbp-28h] BYREF
  void (__fastcall *v21)(wil::details *, void *); // [rsp+40h] [rbp-20h] BYREF
  void *v22; // [rsp+48h] [rbp-18h] BYREF
  void (__fastcall *v23[2])(wil::details *, void *); // [rsp+50h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+38h]
  void *v25; // [rsp+A8h] [rbp+48h] BYREF
  void (__fastcall *v26)(wil::details *, void *); // [rsp+B0h] [rbp+50h] BYREF
  __int64 v27; // [rsp+B8h] [rbp+58h] BYREF

  if ( wil::details::g_processShutdownInProgress )
    goto LABEL_28;
  v2 = (int)wil::details::g_pfnDllShutdownInProgress;
  if ( wil::details::g_pfnDllShutdownInProgress )
    v2 = wil::details::g_pfnDllShutdownInProgress();
  if ( v2 )
  {
LABEL_28:
    result = *(_DWORD *)lpMem - 1;
    *(_DWORD *)lpMem = result;
    return result;
  }
  v3 = (void *)lpMem[1];
  v4 = WaitForSingleObjectEx(v3, 0xFFFFFFFF, 0);
  if ( v4 == 258 )
    goto LABEL_8;
  if ( v4 )
  {
    if ( v4 != 128 )
    {
      wil::details::in1diag3::FailFast_Unexpected(retaddr, v5, v6, v7);
      JUMPOUT(0x1800079DDLL);
    }
LABEL_8:
    if ( (v4 & 0xFFFFFF7F) != 0 )
      v3 = 0LL;
  }
  v8 = *(_DWORD *)lpMem == 1;
  result = *(_DWORD *)lpMem - 1;
  *(_DWORD *)lpMem = result;
  if ( v8 )
  {
    wil::details_abi::SemaphoreValue::Destroy((wil::details_abi::SemaphoreValue *)(lpMem + 2));
    if ( v3 )
    {
      v25 = v3;
      LastError = GetLastError();
      v26 = wil::details::ReleaseMutex;
      v11 = LastError;
      wistd::invoke<void (*)(_RTL_SRWLOCK *),_RTL_SRWLOCK * &>(&v26, &v25);
      SetLastError(v11);
    }
    v12 = lpMem + 5;
    v3 = 0LL;
    while ( v12 != lpMem + 15 )
    {
      v13 = *v12;
      while ( v13 )
      {
        v14 = v13;
        v13 = *(_QWORD *)(v13 + 8);
        wil::details_abi::ThreadLocalData::~ThreadLocalData((wil::details_abi::ThreadLocalData *)(v14 + 16));
        ProcessHeap = GetProcessHeap();
        HeapFree(ProcessHeap, 0, (LPVOID)v14);
      }
      *v12++ = 0LL;
    }
    if ( lpMem[3] )
    {
      v27 = lpMem[3];
      v17 = wil::details::CloseHandle;
      wistd::invoke<void (*)(_RTL_SRWLOCK *),_RTL_SRWLOCK * &>(&v17, &v27);
    }
    if ( lpMem[2] )
    {
      v18 = lpMem[2];
      v19 = wil::details::CloseHandle;
      wistd::invoke<void (*)(_RTL_SRWLOCK *),_RTL_SRWLOCK * &>(&v19, &v18);
    }
    if ( lpMem[1] )
    {
      v20 = lpMem[1];
      v21 = wil::details::CloseHandle;
      wistd::invoke<void (*)(_RTL_SRWLOCK *),_RTL_SRWLOCK * &>(&v21, &v20);
    }
    v16 = GetProcessHeap();
    result = HeapFree(v16, 0, lpMem);
  }
  if ( v3 )
  {
    v22 = v3;
    v23[0] = wil::details::ReleaseMutex;
    return wistd::invoke<void (*)(_RTL_SRWLOCK *),_RTL_SRWLOCK * &>(v23, &v22);
  }
  return result;
}
