/*
 * XREFs of ?Release@?$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil@@QEAAXXZ @ 0x180016AC4
 * Callers:
 *     wil::details::_dynamic_atexit_destructor_for__g_processLocalData__ @ 0x1800D62D0 (wil--details--_dynamic_atexit_destructor_for__g_processLocalData__.c)
 * Callees:
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180005F00 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?CloseHandle@details@wil@@YAXPEAX@Z @ 0x180005F80 (-CloseHandle@details@wil@@YAXPEAX@Z.c)
 *     ?ReleaseMutex@details@wil@@YAXPEAX@Z @ 0x180005FB0 (-ReleaseMutex@details@wil@@YAXPEAX@Z.c)
 *     ?Destroy@SemaphoreValue@details_abi@wil@@QEAAXXZ @ 0x180006068 (-Destroy@SemaphoreValue@details_abi@wil@@QEAAXXZ.c)
 *     ??1ThreadLocalData@details_abi@wil@@QEAA@XZ @ 0x1800066A0 (--1ThreadLocalData@details_abi@wil@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC480 (_guard_dispatch_icall_nop.c)
 */

void __fastcall wil::details_abi::ProcessLocalStorageData<wil::details_abi::ProcessLocalData>::Release(char *lpMem)
{
  int v2; // eax
  void *v3; // rsi
  DWORD v4; // eax
  void *v5; // rdx
  const char *v6; // r9
  void *v8; // rdx
  DWORD LastError; // ebx
  void *v10; // rdx
  char *v11; // rsi
  wil::details *v12; // rbx
  __int64 v13; // rbp
  __int64 v14; // rbx
  HANDLE ProcessHeap; // rax
  wil::details *v16; // rcx
  wil::details *v17; // rcx
  wil::details *v18; // rcx
  HANDLE v19; // rax
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

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
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        (void *)0xB4C,
        (__int64)"onecore\\internal\\sdk\\inc\\wil\\opensource\\wil\\resource.h",
        v6);
      JUMPOUT(0x180016C7BLL);
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
      wil::details::ReleaseMutex((wil::details *)v3, v10);
      SetLastError(LastError);
    }
    v11 = lpMem + 40;
    v12 = 0LL;
    if ( lpMem + 40 != lpMem + 120 )
    {
      do
      {
        v13 = *(_QWORD *)v11;
        while ( v13 )
        {
          v14 = v13;
          v13 = *(_QWORD *)(v13 + 8);
          wil::details_abi::ThreadLocalData::~ThreadLocalData((wil::details_abi::ThreadLocalData *)(v14 + 16));
          ProcessHeap = GetProcessHeap();
          HeapFree(ProcessHeap, 0, (LPVOID)v14);
        }
        *(_QWORD *)v11 = 0LL;
        v11 += 8;
      }
      while ( v11 != lpMem + 120 );
      v12 = 0LL;
    }
    v16 = (wil::details *)*((_QWORD *)lpMem + 3);
    if ( v16 )
      wil::details::CloseHandle(v16, v8);
    v17 = (wil::details *)*((_QWORD *)lpMem + 2);
    if ( v17 )
      wil::details::CloseHandle(v17, v8);
    v18 = (wil::details *)*((_QWORD *)lpMem + 1);
    if ( v18 )
      wil::details::CloseHandle(v18, v8);
    v19 = GetProcessHeap();
    HeapFree(v19, 0, lpMem);
  }
  else
  {
    v12 = (wil::details *)v3;
  }
  if ( v12 )
    wil::details::ReleaseMutex(v12, v5);
}
