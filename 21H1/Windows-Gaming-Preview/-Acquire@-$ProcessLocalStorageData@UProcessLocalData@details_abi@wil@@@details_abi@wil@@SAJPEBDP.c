/*
 * XREFs of ?Acquire@?$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil@@SAJPEBDPEAPEAV123@@Z @ 0x18000871C
 * Callers:
 *     ?GetThreadLocalDataCache@details_abi@wil@@YAPEAUThreadLocalData@12@_N@Z @ 0x180003BA8 (-GetThreadLocalDataCache@details_abi@wil@@YAPEAUThreadLocalData@12@_N@Z.c)
 * Callees:
 *     ?StringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x180001B58 (-StringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     ?GetLastErrorFailHr@details@wil@@YAJXZ @ 0x1800022EC (-GetLastErrorFailHr@details@wil@@YAJXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003268 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1800032E0 (-FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?CloseHandle@details@wil@@YAXPEAX@Z @ 0x18000336C (-CloseHandle@details@wil@@YAXPEAX@Z.c)
 *     ?ReleaseMutex@details@wil@@YAXPEAX@Z @ 0x18000339C (-ReleaseMutex@details@wil@@YAXPEAX@Z.c)
 *     ?CreateFromPointer@SemaphoreValue@details_abi@wil@@QEAAJPEBGPEAX@Z @ 0x1800034C8 (-CreateFromPointer@SemaphoreValue@details_abi@wil@@QEAAJPEBGPEAX@Z.c)
 *     ??$TryGetValue@_K@SemaphoreValue@details_abi@wil@@SAJPEBGPEA_KPEA_N@Z @ 0x18000900C (--$TryGetValue@_K@SemaphoreValue@details_abi@wil@@SAJPEBGPEA_KPEA_N@Z.c)
 *     __security_check_cookie @ 0x180044200 (__security_check_cookie.c)
 *     memset_0 @ 0x1800454FC (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x180045DE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall wil::details_abi::ProcessLocalStorageData<wil::details_abi::ProcessLocalData>::Acquire(
        __int64 a1,
        _QWORD *a2)
{
  DWORD CurrentProcessId; // eax
  wil::details *Mutex; // rax
  wil::details *v6; // rcx
  wil::details *v7; // rbx
  void *v8; // rdx
  int LastErrorFailHr; // edi
  DWORD v10; // eax
  void *v11; // rdx
  __int64 v12; // r8
  const char *v13; // r9
  wil::details *v14; // r14
  _DWORD *v15; // rsi
  int v16; // eax
  __int64 v17; // rdx
  HANDLE ProcessHeap; // rax
  _QWORD *v20; // rsi
  HANDLE v21; // rax
  int v22; // eax
  void *v23; // rdx
  HANDLE v24; // rax
  wil::details *v25[2]; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v26; // [rsp+40h] [rbp-C0h]
  wil::details *v27; // [rsp+48h] [rbp-B8h]
  wil::details *v28; // [rsp+50h] [rbp-B0h]
  _QWORD *v29; // [rsp+58h] [rbp-A8h]
  WCHAR Name[264]; // [rsp+60h] [rbp-A0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+2A8h] [rbp+1A8h]

  *a2 = 0LL;
  CurrentProcessId = GetCurrentProcessId();
  StringCchPrintfW(Name, 260LL, L"Local\\SM0:%d:%d:%hs", CurrentProcessId, 120, a1);
  Mutex = (wil::details *)CreateMutexExW(0LL, Name, 0, 0x1F0001u);
  v7 = Mutex;
  v27 = Mutex;
  if ( !Mutex )
  {
    LastErrorFailHr = wil::details::GetLastErrorFailHr(v6);
    goto LABEL_19;
  }
  v10 = WaitForSingleObjectEx(Mutex, 0xFFFFFFFF, 0);
  if ( v10 != 258 )
  {
    if ( !v10 )
      goto LABEL_8;
    if ( v10 != 128 )
    {
      wil::details::in1diag3::FailFast_Unexpected(retaddr, v11, v12, v13);
      JUMPOUT(0x180008A35LL);
    }
  }
  if ( (v10 & 0xFFFFFF7F) != 0 )
  {
    v14 = 0LL;
    goto LABEL_9;
  }
LABEL_8:
  v14 = v7;
LABEL_9:
  v28 = v14;
  v15 = 0LL;
  v26 = 0LL;
  v16 = wil::details_abi::SemaphoreValue::TryGetValue<unsigned __int64>(Name);
  LastErrorFailHr = v16;
  if ( v16 >= 0 )
  {
    v15 = (_DWORD *)(4 * v26);
    LastErrorFailHr = 0;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(retaddr, (void *)0x6B, (__int64)"wil", (const char *)(unsigned int)v16);
  }
  if ( LastErrorFailHr >= 0 )
  {
    if ( v15 )
    {
      *a2 = v15;
      *(_DWORD *)*a2 = *v15 + 1;
      v7 = v27;
LABEL_16:
      LastErrorFailHr = 0;
      goto LABEL_17;
    }
    *a2 = 0LL;
    ProcessHeap = GetProcessHeap();
    v20 = HeapAlloc(ProcessHeap, 8u, 0x78uLL);
    if ( wil::details::g_pfnRtlDisownModuleHeapAllocation )
    {
      v21 = GetProcessHeap();
      ((void (__fastcall *)(HANDLE, _QWORD *))wil::details::g_pfnRtlDisownModuleHeapAllocation)(v21, v20);
    }
    v29 = v20;
    if ( v20 )
    {
      *(_OWORD *)v25 = 0LL;
      v22 = wil::details_abi::SemaphoreValue::CreateFromPointer(v25, (char *)Name, (unsigned __int64)v20);
      LastErrorFailHr = v22;
      if ( v22 >= 0 )
      {
        *(_DWORD *)v20 = 1;
        v20[1] = v7;
        v7 = 0LL;
        v27 = 0LL;
        v20[2] = v25[0];
        v25[0] = 0LL;
        v20[3] = v25[1];
        v25[1] = 0LL;
        memset_0((char *)v20 + 34, 0, 0x56uLL);
        *((_WORD *)v20 + 16) = 88;
        *((_DWORD *)v20 + 9) = 1;
        memset_0(v20 + 5, 0, 0x50uLL);
        *a2 = v20;
        LastErrorFailHr = 0;
      }
      else
      {
        wil::details::in1diag3::Return_Hr(retaddr, (void *)0x145, (__int64)"wil", (const char *)(unsigned int)v22);
        if ( v25[1] )
          wil::details::CloseHandle(v25[1], v23);
        if ( v25[0] )
          wil::details::CloseHandle(v25[0], v23);
        v24 = GetProcessHeap();
        HeapFree(v24, 0, v20);
      }
      if ( LastErrorFailHr >= 0 )
        goto LABEL_16;
    }
    else
    {
      LastErrorFailHr = -2147024882;
      wil::details::in1diag3::Return_Hr(retaddr, (void *)0x142, (__int64)"wil", (const char *)0x8007000ELL);
    }
    v17 = 302LL;
    goto LABEL_35;
  }
  v17 = 294LL;
LABEL_35:
  wil::details::in1diag3::Return_Hr(retaddr, (void *)v17, (__int64)"wil", (const char *)(unsigned int)LastErrorFailHr);
LABEL_17:
  if ( v14 )
    wil::details::ReleaseMutex(v14, v8);
LABEL_19:
  if ( v7 )
    wil::details::CloseHandle(v7, v8);
  return (unsigned int)LastErrorFailHr;
}
