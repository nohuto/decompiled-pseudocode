/*
 * XREFs of ?Release@?$ProcessLocalStorageData@VFeatureStateData@details_abi@wil@@@details_abi@wil@@QEAAXXZ @ 0x18000D850
 * Callers:
 *     ??_GFeatureStateManager@details@wil@@QEAAPEAXI@Z @ 0x18000DB18 (--_GFeatureStateManager@details@wil@@QEAAPEAXI@Z.c)
 *     wil::details::_dynamic_atexit_destructor_for__g_featureStateManager__ @ 0x180042A80 (wil--details--_dynamic_atexit_destructor_for__g_featureStateManager__.c)
 * Callees:
 *     ?FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180004018 (-FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?CloseHandle@details@wil@@YAXPEAX@Z @ 0x18000406C (-CloseHandle@details@wil@@YAXPEAX@Z.c)
 *     ?ReleaseMutex@details@wil@@YAXPEAX@Z @ 0x18000409C (-ReleaseMutex@details@wil@@YAXPEAX@Z.c)
 *     ?Destroy@SemaphoreValue@details_abi@wil@@QEAAXXZ @ 0x1800040EC (-Destroy@SemaphoreValue@details_abi@wil@@QEAAXXZ.c)
 *     ?Swap@RawUsageIndex@details_abi@wil@@QEAAXAEAV123@@Z @ 0x18000719C (-Swap@RawUsageIndex@details_abi@wil@@QEAAXAEAV123@@Z.c)
 *     ??0UsageIndexes@details_abi@wil@@QEAA@XZ @ 0x180008044 (--0UsageIndexes@details_abi@wil@@QEAA@XZ.c)
 *     ?Record@UsageIndexes@details_abi@wil@@QEAAXXZ @ 0x180008104 (-Record@UsageIndexes@details_abi@wil@@QEAAXXZ.c)
 *     ??1FeatureStateData@details_abi@wil@@QEAA@XZ @ 0x180008470 (--1FeatureStateData@details_abi@wil@@QEAA@XZ.c)
 *     ??1UsageIndexes@details_abi@wil@@QEAA@XZ @ 0x180008604 (--1UsageIndexes@details_abi@wil@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x180040700 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall wil::details_abi::ProcessLocalStorageData<wil::details_abi::FeatureStateData>::Release(char *lpMem)
{
  int v2; // eax
  void *v3; // rsi
  DWORD v4; // eax
  void *v5; // rdx
  __int64 v6; // r8
  const char *v7; // r9
  bool v8; // zf
  DWORD LastError; // ebx
  void *v10; // rdx
  wil::details *v11; // rbx
  void *v12; // rdx
  wil::details *v13; // rcx
  wil::details *v14; // rcx
  wil::details *v15; // rcx
  HANDLE ProcessHeap; // rax
  __int64 v17; // rdx
  __int64 v18; // r8
  const struct wil::details_abi::RawUsageIndex *v19; // r9
  _BYTE v20[64]; // [rsp+20h] [rbp-C8h] BYREF
  _BYTE v21[64]; // [rsp+60h] [rbp-88h] BYREF
  _BYTE v22[64]; // [rsp+A0h] [rbp-48h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+E8h] [rbp+0h]

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
          v8 = (*(_DWORD *)lpMem)-- == 1;
          if ( v8 )
          {
            wil::details_abi::SemaphoreValue::Destroy((wil::details **)lpMem + 2);
            if ( v3 )
            {
              LastError = GetLastError();
              wil::details::ReleaseMutex((wil::details *)v3, v10);
              SetLastError(LastError);
            }
            v11 = 0LL;
            wil::details_abi::FeatureStateData::~FeatureStateData((wil::details_abi::FeatureStateData *)(lpMem + 32));
            v13 = (wil::details *)*((_QWORD *)lpMem + 3);
            if ( v13 )
              wil::details::CloseHandle(v13, v12);
            v14 = (wil::details *)*((_QWORD *)lpMem + 2);
            if ( v14 )
              wil::details::CloseHandle(v14, v12);
            v15 = (wil::details *)*((_QWORD *)lpMem + 1);
            if ( v15 )
              wil::details::CloseHandle(v15, v12);
            ProcessHeap = GetProcessHeap();
            HeapFree(ProcessHeap, 0, lpMem);
          }
          else
          {
            v11 = (wil::details *)v3;
          }
          if ( v11 )
            wil::details::ReleaseMutex(v11, v5);
          return;
        }
        if ( v4 != 128 )
        {
          wil::details::in1diag3::FailFast_Unexpected(retaddr, v5, v6, v7);
          JUMPOUT(0x18000DA1BLL);
        }
      }
      if ( (v4 & 0xFFFFFF7F) != 0 )
        v3 = 0LL;
      goto LABEL_10;
    }
  }
  v8 = (*(_DWORD *)lpMem)-- == 1;
  if ( v8 )
  {
    wil::details_abi::UsageIndexes::UsageIndexes((wil::details_abi::UsageIndexes *)v20);
    if ( lpMem[96] )
      wil::details_abi::RawUsageIndex::Swap(
        (wil::details_abi::RawUsageIndex *)v20,
        (struct wil::details_abi::RawUsageIndex *)(lpMem + 40));
    if ( lpMem[160] )
      wil::details_abi::RawUsageIndex::Swap(
        (wil::details_abi::RawUsageIndex *)v21,
        (struct wil::details_abi::RawUsageIndex *)(lpMem + 104));
    if ( lpMem[224] )
      wil::details_abi::RawUsageIndex::Swap(
        (wil::details_abi::RawUsageIndex *)v22,
        (struct wil::details_abi::RawUsageIndex *)(lpMem + 168));
    wil::details_abi::UsageIndexes::Record((wil::details_abi::UsageIndexes *)v20, v17, v18, v19);
    wil::details_abi::UsageIndexes::~UsageIndexes((wil::details_abi::UsageIndexes *)v20);
  }
}
