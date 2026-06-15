/*
 * XREFs of ?Release@?$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil@@QEAAXXZ @ 0x180005398
 * Callers:
 *     wil::details::_dynamic_atexit_destructor_for__g_processLocalData__ @ 0x1800429D0 (wil--details--_dynamic_atexit_destructor_for__g_processLocalData__.c)
 * Callees:
 *     ?FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180004018 (-FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?CloseHandle@details@wil@@YAXPEAX@Z @ 0x18000406C (-CloseHandle@details@wil@@YAXPEAX@Z.c)
 *     ?ReleaseMutex@details@wil@@YAXPEAX@Z @ 0x18000409C (-ReleaseMutex@details@wil@@YAXPEAX@Z.c)
 *     ?Destroy@SemaphoreValue@details_abi@wil@@QEAAXXZ @ 0x1800040EC (-Destroy@SemaphoreValue@details_abi@wil@@QEAAXXZ.c)
 *     ??1ThreadLocalData@details_abi@wil@@QEAA@XZ @ 0x180004964 (--1ThreadLocalData@details_abi@wil@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x180040700 (_guard_dispatch_icall_nop.c)
 */

void __fastcall wil::details_abi::ProcessLocalStorageData<wil::details_abi::ProcessLocalData>::Release(char *lpMem)
{
  int v2; // eax
  void *v3; // rsi
  DWORD v4; // eax
  void *v5; // rdx
  __int64 v6; // r8
  const char *v7; // r9
  void *v9; // rdx
  DWORD LastError; // ebx
  void *v11; // rdx
  char *v12; // rsi
  wil::details *v13; // rbx
  __int64 v14; // rbp
  __int64 v15; // rbx
  HANDLE ProcessHeap; // rax
  wil::details *v17; // rcx
  wil::details *v18; // rcx
  wil::details *v19; // rcx
  HANDLE v20; // rax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  if ( wil::details::g_processShutdownInProgress )
    goto LABEL_29;
  v2 = (int)wil::details::g_pfnDllShutdownInProgress;
  if ( wil::details::g_pfnDllShutdownInProgress )
    v2 = wil::details::g_pfnDllShutdownInProgress();
  if ( v2 )
  {
LABEL_29:
    --*(_DWORD *)lpMem;
    return;
  }
  v3 = (void *)*((_QWORD *)lpMem + 1);
  v4 = WaitForSingleObjectEx(v3, 0xFFFFFFFF, 0);
  if ( v4 == 258 )
    goto LABEL_8;
  if ( v4 )
  {
    if ( v4 != 128 )
    {
      wil::details::in1diag3::FailFast_Unexpected(retaddr, v5, v6, v7);
      JUMPOUT(0x180005542LL);
    }
LABEL_8:
    if ( (v4 & 0xFFFFFF7F) != 0 )
      v3 = 0LL;
  }
  if ( (*(_DWORD *)lpMem)-- == 1 )
  {
    wil::details_abi::SemaphoreValue::Destroy((wil::details **)lpMem + 2);
    if ( v3 )
    {
      LastError = GetLastError();
      wil::details::ReleaseMutex((wil::details *)v3, v11);
      SetLastError(LastError);
    }
    v12 = lpMem + 40;
    v13 = 0LL;
    if ( lpMem + 40 != lpMem + 120 )
    {
      do
      {
        v14 = *(_QWORD *)v12;
        while ( v14 )
        {
          v15 = v14;
          v14 = *(_QWORD *)(v14 + 8);
          wil::details_abi::ThreadLocalData::~ThreadLocalData((wil::details_abi::ThreadLocalData *)(v15 + 16));
          ProcessHeap = GetProcessHeap();
          HeapFree(ProcessHeap, 0, (LPVOID)v15);
        }
        *(_QWORD *)v12 = 0LL;
        v12 += 8;
      }
      while ( v12 != lpMem + 120 );
      v13 = 0LL;
    }
    v17 = (wil::details *)*((_QWORD *)lpMem + 3);
    if ( v17 )
      wil::details::CloseHandle(v17, v9);
    v18 = (wil::details *)*((_QWORD *)lpMem + 2);
    if ( v18 )
      wil::details::CloseHandle(v18, v9);
    v19 = (wil::details *)*((_QWORD *)lpMem + 1);
    if ( v19 )
      wil::details::CloseHandle(v19, v9);
    v20 = GetProcessHeap();
    HeapFree(v20, 0, lpMem);
  }
  else
  {
    v13 = (wil::details *)v3;
  }
  if ( v13 )
    wil::details::ReleaseMutex(v13, v5);
}
