/*
 * XREFs of ?Release@?$ProcessLocalStorageData@VFeatureStateData@details_abi@wil@@@details_abi@wil@@QEAAXXZ @ 0x180016C78
 * Callers:
 *     ??_GFeatureStateManager@details@wil@@QEAAPEAXI@Z @ 0x180017580 (--_GFeatureStateManager@details@wil@@QEAAPEAXI@Z.c)
 *     wil::details::_dynamic_atexit_destructor_for__g_featureStateManager__ @ 0x1800D8BE0 (wil--details--_dynamic_atexit_destructor_for__g_featureStateManager__.c)
 * Callees:
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180005F00 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?CloseHandle@details@wil@@YAXPEAX@Z @ 0x180005F80 (-CloseHandle@details@wil@@YAXPEAX@Z.c)
 *     ?ReleaseMutex@details@wil@@YAXPEAX@Z @ 0x180005FB0 (-ReleaseMutex@details@wil@@YAXPEAX@Z.c)
 *     ?Destroy@SemaphoreValue@details_abi@wil@@QEAAXXZ @ 0x180006068 (-Destroy@SemaphoreValue@details_abi@wil@@QEAAXXZ.c)
 *     ?ProcessShutdown@FeatureStateData@details_abi@wil@@QEAAXXZ @ 0x18000B250 (-ProcessShutdown@FeatureStateData@details_abi@wil@@QEAAXXZ.c)
 *     ??1UsageIndexes@details_abi@wil@@QEAA@XZ @ 0x18000B51C (--1UsageIndexes@details_abi@wil@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800CEB10 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall wil::details_abi::ProcessLocalStorageData<wil::details_abi::FeatureStateData>::Release(char *lpMem)
{
  int v2; // eax
  void *v3; // rsi
  DWORD v4; // eax
  void *v5; // rdx
  const char *v6; // r9
  bool v7; // zf
  DWORD LastError; // ebx
  void *v9; // rdx
  wil::details *v10; // rbx
  void *v11; // r15
  HANDLE ProcessHeap; // rax
  void *v13; // rdx
  wil::details *v14; // rcx
  wil::details *v15; // rcx
  wil::details *v16; // rcx
  HANDLE v17; // rax
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  if ( !wil::details::g_processShutdownInProgress )
  {
    v2 = (int)wil::details::g_pfnDllShutdownInProgress;
    if ( wil::details::g_pfnDllShutdownInProgress )
      v2 = wil::details::g_pfnDllShutdownInProgress();
    if ( !v2 )
    {
      v3 = (void *)*((_QWORD *)lpMem + 1);
      v4 = WaitForSingleObjectEx(v3, 0xFFFFFFFF, 0);
      if ( v4 != 258 )
      {
        if ( !v4 )
        {
LABEL_10:
          v7 = (*(_DWORD *)lpMem)-- == 1;
          if ( v7 )
          {
            wil::details_abi::SemaphoreValue::Destroy((wil::details **)lpMem + 2);
            if ( v3 )
            {
              LastError = GetLastError();
              wil::details::ReleaseMutex((wil::details *)v3, v9);
              SetLastError(LastError);
            }
            v10 = 0LL;
            wil::details_abi::FeatureStateData::ProcessShutdown((wil::details_abi::FeatureStateData *)(lpMem + 32));
            v11 = (void *)*((_QWORD *)lpMem + 37);
            *((_QWORD *)lpMem + 37) = 0LL;
            if ( v11 )
            {
              ProcessHeap = GetProcessHeap();
              HeapFree(ProcessHeap, 0, v11);
            }
            DeleteCriticalSection((LPCRITICAL_SECTION)(lpMem + 232));
            wil::details_abi::UsageIndexes::~UsageIndexes((wil::details_abi::UsageIndexes *)(lpMem + 40));
            v14 = (wil::details *)*((_QWORD *)lpMem + 3);
            if ( v14 )
              wil::details::CloseHandle(v14, v13);
            v15 = (wil::details *)*((_QWORD *)lpMem + 2);
            if ( v15 )
              wil::details::CloseHandle(v15, v13);
            v16 = (wil::details *)*((_QWORD *)lpMem + 1);
            if ( v16 )
              wil::details::CloseHandle(v16, v13);
            v17 = GetProcessHeap();
            HeapFree(v17, 0, lpMem);
          }
          else
          {
            v10 = (wil::details *)v3;
          }
          if ( v10 )
            wil::details::ReleaseMutex(v10, v5);
          return;
        }
        if ( v4 != 128 )
        {
          wil::details::in1diag3::_FailFast_Unexpected(
            retaddr,
            (void *)0xB4C,
            (__int64)"onecore\\internal\\sdk\\inc\\wil\\opensource\\wil\\resource.h",
            v6);
          JUMPOUT(0x180016E3BLL);
        }
      }
      if ( (v4 & 0xFFFFFF7F) != 0 )
        v3 = 0LL;
      goto LABEL_10;
    }
  }
  v7 = (*(_DWORD *)lpMem)-- == 1;
  if ( v7 )
    wil::details_abi::FeatureStateData::ProcessShutdown((wil::details_abi::FeatureStateData *)(lpMem + 32));
}
