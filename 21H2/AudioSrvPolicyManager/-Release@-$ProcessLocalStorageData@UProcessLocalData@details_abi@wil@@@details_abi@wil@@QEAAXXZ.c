/*
 * XREFs of ?Release@?$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil@@QEAAXXZ @ 0x180004E28
 * Callers:
 *     wil::details::_dynamic_atexit_destructor_for__g_processLocalData__ @ 0x18003D090 (wil--details--_dynamic_atexit_destructor_for__g_processLocalData__.c)
 * Callees:
 *     ?FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180003B38 (-FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?CloseHandle@details@wil@@YAXPEAX@Z @ 0x180003B8C (-CloseHandle@details@wil@@YAXPEAX@Z.c)
 *     ?ReleaseMutex@details@wil@@YAXPEAX@Z @ 0x180003BBC (-ReleaseMutex@details@wil@@YAXPEAX@Z.c)
 *     ??1ThreadLocalData@details_abi@wil@@QEAA@XZ @ 0x1800043F8 (--1ThreadLocalData@details_abi@wil@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x18003AE40 (_guard_dispatch_icall_nop.c)
 */

void __fastcall wil::details_abi::ProcessLocalStorageData<wil::details_abi::ProcessLocalData>::Release(_QWORD *lpMem)
{
  int v2; // eax
  void *v3; // rsi
  DWORD v4; // eax
  void *v5; // rdx
  __int64 v6; // r8
  const char *v7; // r9
  wil::details *v9; // rbp
  DWORD LastError; // ebx
  void *v11; // rdx
  wil::details *v12; // rbp
  DWORD v13; // ebx
  void *v14; // rdx
  DWORD v15; // ebx
  void *v16; // rdx
  __int64 *v17; // rsi
  wil::details *v18; // rbx
  __int64 v19; // rbp
  __int64 v20; // rbx
  HANDLE ProcessHeap; // rax
  wil::details *v22; // rcx
  wil::details *v23; // rcx
  wil::details *v24; // rcx
  HANDLE v25; // rax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  if ( wil::details::g_processShutdownInProgress )
    goto LABEL_33;
  v2 = (int)wil::details::g_pfnDllShutdownInProgress;
  if ( wil::details::g_pfnDllShutdownInProgress )
    v2 = wil::details::g_pfnDllShutdownInProgress();
  if ( v2 )
  {
LABEL_33:
    --*(_DWORD *)lpMem;
    return;
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
      JUMPOUT(0x180005021LL);
    }
LABEL_8:
    if ( (v4 & 0xFFFFFF7F) != 0 )
      v3 = 0LL;
  }
  if ( (*(_DWORD *)lpMem)-- == 1 )
  {
    v9 = (wil::details *)lpMem[2];
    if ( v9 )
    {
      LastError = GetLastError();
      wil::details::CloseHandle(v9, v11);
      SetLastError(LastError);
    }
    lpMem[2] = 0LL;
    v12 = (wil::details *)lpMem[3];
    if ( v12 )
    {
      v13 = GetLastError();
      wil::details::CloseHandle(v12, v14);
      SetLastError(v13);
    }
    lpMem[3] = 0LL;
    if ( v3 )
    {
      v15 = GetLastError();
      wil::details::ReleaseMutex((wil::details *)v3, v16);
      SetLastError(v15);
    }
    v17 = lpMem + 5;
    v18 = 0LL;
    if ( lpMem + 5 != lpMem + 15 )
    {
      do
      {
        v19 = *v17;
        while ( v19 )
        {
          v20 = v19;
          v19 = *(_QWORD *)(v19 + 8);
          wil::details_abi::ThreadLocalData::~ThreadLocalData((wil::details_abi::ThreadLocalData *)(v20 + 16));
          ProcessHeap = GetProcessHeap();
          HeapFree(ProcessHeap, 0, (LPVOID)v20);
        }
        *v17++ = 0LL;
      }
      while ( v17 != lpMem + 15 );
      v18 = 0LL;
    }
    v22 = (wil::details *)lpMem[3];
    if ( v22 )
      wil::details::CloseHandle(v22, v5);
    v23 = (wil::details *)lpMem[2];
    if ( v23 )
      wil::details::CloseHandle(v23, v5);
    v24 = (wil::details *)lpMem[1];
    if ( v24 )
      wil::details::CloseHandle(v24, v5);
    v25 = GetProcessHeap();
    HeapFree(v25, 0, lpMem);
  }
  else
  {
    v18 = (wil::details *)v3;
  }
  if ( v18 )
    wil::details::ReleaseMutex(v18, v5);
}
