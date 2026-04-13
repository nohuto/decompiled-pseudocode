/*
 * XREFs of ?Acquire@?$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil@@SAJPEBDPEAPEAV123@@Z @ 0x18001674C
 * Callers:
 *     ?GetThreadLocalDataCache@details_abi@wil@@YAPEAUThreadLocalData@12@_N@Z @ 0x180006CE0 (-GetThreadLocalDataCache@details_abi@wil@@YAPEAUThreadLocalData@12@_N@Z.c)
 * Callees:
 *     ?StringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x1800041A0 (-StringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     ?GetLastErrorFailHr@details@wil@@YAJXZ @ 0x18000493C (-GetLastErrorFailHr@details@wil@@YAJXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180005D48 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180005F00 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?FailFastImmediate_Unexpected@in1diag3@details@wil@@YAXXZ @ 0x180005F38 (-FailFastImmediate_Unexpected@in1diag3@details@wil@@YAXXZ.c)
 *     ?CloseHandle@details@wil@@YAXPEAX@Z @ 0x180005F80 (-CloseHandle@details@wil@@YAXPEAX@Z.c)
 *     ?ReleaseMutex@details@wil@@YAXPEAX@Z @ 0x180005FB0 (-ReleaseMutex@details@wil@@YAXPEAX@Z.c)
 *     ?CreateFromValueInternal@SemaphoreValue@details_abi@wil@@AEAAJPEBG_N_K@Z @ 0x1800060F4 (-CreateFromValueInternal@SemaphoreValue@details_abi@wil@@AEAAJPEBG_N_K@Z.c)
 *     ?TryGetValueInternal@SemaphoreValue@details_abi@wil@@CAJPEBG_NPEA_KPEA_N@Z @ 0x1800064A0 (-TryGetValueInternal@SemaphoreValue@details_abi@wil@@CAJPEBG_NPEA_KPEA_N@Z.c)
 *     __security_check_cookie @ 0x1800CB070 (__security_check_cookie.c)
 *     memset_0 @ 0x1800CB7E1 (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC480 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall wil::details_abi::ProcessLocalStorageData<wil::details_abi::ProcessLocalData>::Acquire(
        __int64 a1,
        unsigned __int64 *a2)
{
  DWORD CurrentProcessId; // eax
  wil::details *Mutex; // rax
  wil::details *v6; // rcx
  wil::details *v7; // rbx
  void *v8; // rdx
  int LastErrorFailHr; // edi
  DWORD v10; // eax
  __int64 v11; // rdx
  char *v12; // r9
  wil::details *v13; // r14
  _DWORD *v14; // rsi
  unsigned __int64 v15; // r12
  int ValueInternal; // eax
  __int64 v17; // rdx
  HANDLE ProcessHeap; // rax
  wil::details::in1diag3 *v20; // rcx
  unsigned __int64 v21; // rsi
  __int64 v22; // r8
  int (*v23)(void *, void *); // rdi
  HANDLE v24; // rcx
  int v25; // eax
  void *v26; // rdx
  HANDLE v27; // rax
  wil::details *v28[2]; // [rsp+38h] [rbp-D0h] BYREF
  unsigned __int64 v29; // [rsp+48h] [rbp-C0h] BYREF
  wil::details *v30; // [rsp+50h] [rbp-B8h]
  __int64 v31; // [rsp+58h] [rbp-B0h]
  wil::details *v32; // [rsp+60h] [rbp-A8h]
  unsigned __int64 v33; // [rsp+68h] [rbp-A0h]
  WCHAR Name[264]; // [rsp+78h] [rbp-90h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+2C0h] [rbp+1B8h]

  v31 = -2LL;
  *a2 = 0LL;
  CurrentProcessId = GetCurrentProcessId();
  StringCchPrintfW(Name, 260LL, L"Local\\SM0:%d:%d:%hs", CurrentProcessId, 120, a1);
  Mutex = (wil::details *)CreateMutexExW(0LL, Name, 0, 0x1F0001u);
  v7 = Mutex;
  v30 = Mutex;
  if ( !Mutex )
  {
    LastErrorFailHr = wil::details::GetLastErrorFailHr(v6);
    goto LABEL_22;
  }
  v10 = WaitForSingleObjectEx(Mutex, 0xFFFFFFFF, 0);
  if ( v10 != 258 )
  {
    if ( !v10 )
      goto LABEL_8;
    if ( v10 != 128 )
    {
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        (void *)0xB4C,
        (__int64)"onecore\\internal\\sdk\\inc\\wil\\opensource\\wil\\resource.h",
        v12);
      JUMPOUT(0x180016ABCLL);
    }
  }
  if ( (v10 & 0xFFFFFF7F) != 0 )
  {
    v13 = 0LL;
    goto LABEL_9;
  }
LABEL_8:
  v13 = v7;
LABEL_9:
  v32 = v13;
  v14 = 0LL;
  v15 = 0LL;
  v29 = 0LL;
  ValueInternal = wil::details_abi::SemaphoreValue::TryGetValueInternal((char *)Name, v11, &v29, (bool *)v12);
  LastErrorFailHr = ValueInternal;
  if ( ValueInternal >= 0 )
  {
    v15 = v29;
    LastErrorFailHr = 0;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(retaddr, (void *)0x62, (__int64)"wil", (const char *)(unsigned int)ValueInternal);
  }
  if ( LastErrorFailHr >= 0 )
  {
    v14 = (_DWORD *)(4 * v15);
    LastErrorFailHr = 0;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x6B,
      (__int64)"wil",
      (const char *)(unsigned int)LastErrorFailHr);
  }
  if ( LastErrorFailHr >= 0 )
  {
    if ( v14 )
    {
      *a2 = (unsigned __int64)v14;
      *(_DWORD *)*a2 = *v14 + 1;
      v7 = v30;
LABEL_19:
      LastErrorFailHr = 0;
      goto LABEL_20;
    }
    *a2 = 0LL;
    ProcessHeap = GetProcessHeap();
    v21 = (unsigned __int64)HeapAlloc(ProcessHeap, 8u, 0x78uLL);
    v23 = wil::details::g_pfnRtlDisownModuleHeapAllocation;
    if ( wil::details::g_pfnRtlDisownModuleHeapAllocation )
    {
      v24 = GetProcessHeap();
      ((void (__fastcall *)(HANDLE, unsigned __int64))v23)(v24, v21);
    }
    v33 = v21;
    if ( v21 )
    {
      *(_OWORD *)v28 = 0LL;
      if ( (v21 & 3) != 0 )
        wil::details::in1diag3::FailFastImmediate_Unexpected(v20);
      v25 = wil::details_abi::SemaphoreValue::CreateFromValueInternal(v28, (char *)Name, v22, v21 >> 2);
      LastErrorFailHr = v25;
      if ( v25 >= 0 )
      {
        *(_DWORD *)v21 = 1;
        *(_QWORD *)(v21 + 8) = v7;
        v7 = 0LL;
        v30 = 0LL;
        *(wil::details **)(v21 + 16) = v28[0];
        v28[0] = 0LL;
        *(wil::details **)(v21 + 24) = v28[1];
        v28[1] = 0LL;
        memset_0((void *)(v21 + 34), 0, 0x56uLL);
        *(_WORD *)(v21 + 32) = 88;
        *(_DWORD *)(v21 + 36) = 1;
        memset_0((void *)(v21 + 40), 0, 0x50uLL);
        *a2 = v21;
        LastErrorFailHr = 0;
      }
      else
      {
        wil::details::in1diag3::Return_Hr(retaddr, (void *)0x145, (__int64)"wil", (const char *)(unsigned int)v25);
        if ( v28[1] )
          wil::details::CloseHandle(v28[1], v26);
        if ( v28[0] )
          wil::details::CloseHandle(v28[0], v26);
        v27 = GetProcessHeap();
        HeapFree(v27, 0, (LPVOID)v21);
      }
      if ( LastErrorFailHr >= 0 )
        goto LABEL_19;
    }
    else
    {
      LastErrorFailHr = -2147024882;
      wil::details::in1diag3::Return_Hr(retaddr, (void *)0x142, (__int64)"wil", (const char *)0x8007000ELL);
    }
    v17 = 302LL;
    goto LABEL_39;
  }
  v17 = 294LL;
LABEL_39:
  wil::details::in1diag3::Return_Hr(retaddr, (void *)v17, (__int64)"wil", (const char *)(unsigned int)LastErrorFailHr);
LABEL_20:
  if ( v13 )
    wil::details::ReleaseMutex(v13, v8);
LABEL_22:
  if ( v7 )
    wil::details::CloseHandle(v7, v8);
  return (unsigned int)LastErrorFailHr;
}
