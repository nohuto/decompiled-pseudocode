/*
 * XREFs of ?Acquire@?$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil@@SAJPEBDPEAPEAV123@@Z @ 0x180004AC4
 * Callers:
 *     ?GetThreadLocalDataCache@details_abi@wil@@YAPEAUThreadLocalData@12@_N@Z @ 0x180004608 (-GetThreadLocalDataCache@details_abi@wil@@YAPEAUThreadLocalData@12@_N@Z.c)
 * Callees:
 *     ?StringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x18000210C (-StringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     ?GetLastErrorFailHr@details@wil@@YAJXZ @ 0x18000295C (-GetLastErrorFailHr@details@wil@@YAJXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003AB0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180003B38 (-FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?_FailFastImmediate_Unexpected@in1diag3@details@wil@@YAXXZ @ 0x180003B7C (-_FailFastImmediate_Unexpected@in1diag3@details@wil@@YAXXZ.c)
 *     ?CloseHandle@details@wil@@YAXPEAX@Z @ 0x180003B8C (-CloseHandle@details@wil@@YAXPEAX@Z.c)
 *     ?ReleaseMutex@details@wil@@YAXPEAX@Z @ 0x180003BBC (-ReleaseMutex@details@wil@@YAXPEAX@Z.c)
 *     ?CreateFromValueInternal@SemaphoreValue@details_abi@wil@@AEAAJPEBG_N_K@Z @ 0x180003C0C (-CreateFromValueInternal@SemaphoreValue@details_abi@wil@@AEAAJPEBG_N_K@Z.c)
 *     ?TryGetValueInternal@SemaphoreValue@details_abi@wil@@CAJPEBG_NPEA_KPEA_N@Z @ 0x180003FA4 (-TryGetValueInternal@SemaphoreValue@details_abi@wil@@CAJPEBG_NPEA_KPEA_N@Z.c)
 *     __security_check_cookie @ 0x1800396C0 (__security_check_cookie.c)
 *     memset_0 @ 0x18003A7D8 (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x18003AE40 (_guard_dispatch_icall_nop.c)
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
  void *v11; // rdx
  __int64 v12; // r8
  char *v13; // r9
  wil::details *v14; // r14
  _DWORD *v15; // rsi
  unsigned __int64 v16; // r12
  int ValueInternal; // eax
  __int64 v18; // rdx
  HANDLE ProcessHeap; // rax
  wil::details::in1diag3 *v21; // rcx
  unsigned __int64 v22; // rsi
  __int64 v23; // r8
  HANDLE v24; // rax
  int v25; // eax
  void *v26; // rdx
  HANDLE v27; // rax
  wil::details *v28[2]; // [rsp+30h] [rbp-D0h] BYREF
  unsigned __int64 v29; // [rsp+40h] [rbp-C0h] BYREF
  wil::details *v30; // [rsp+48h] [rbp-B8h]
  wil::details *v31; // [rsp+50h] [rbp-B0h]
  unsigned __int64 v32; // [rsp+58h] [rbp-A8h]
  WCHAR Name[264]; // [rsp+60h] [rbp-A0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+2A8h] [rbp+1A8h]

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
      wil::details::in1diag3::FailFast_Unexpected(retaddr, v11, v12, v13);
      JUMPOUT(0x180004E21LL);
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
  v31 = v14;
  v15 = 0LL;
  v16 = 0LL;
  v29 = 0LL;
  ValueInternal = wil::details_abi::SemaphoreValue::TryGetValueInternal((char *)Name, (__int64)v11, &v29, (bool *)v13);
  LastErrorFailHr = ValueInternal;
  if ( ValueInternal >= 0 )
  {
    v16 = v29;
    LastErrorFailHr = 0;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(retaddr, (void *)0x62, (__int64)"wil", (const char *)(unsigned int)ValueInternal);
  }
  if ( LastErrorFailHr >= 0 )
  {
    v15 = (_DWORD *)(4 * v16);
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
    if ( v15 )
    {
      *a2 = (unsigned __int64)v15;
      *(_DWORD *)*a2 = *v15 + 1;
      v7 = v30;
LABEL_19:
      LastErrorFailHr = 0;
      goto LABEL_20;
    }
    *a2 = 0LL;
    ProcessHeap = GetProcessHeap();
    v22 = (unsigned __int64)HeapAlloc(ProcessHeap, 8u, 0x78uLL);
    if ( wil::details::g_pfnRtlDisownModuleHeapAllocation )
    {
      v24 = GetProcessHeap();
      ((void (__fastcall *)(HANDLE, unsigned __int64))wil::details::g_pfnRtlDisownModuleHeapAllocation)(v24, v22);
    }
    v32 = v22;
    if ( v22 )
    {
      *(_OWORD *)v28 = 0LL;
      if ( (v22 & 3) != 0 )
        wil::details::in1diag3::_FailFastImmediate_Unexpected(v21);
      v25 = wil::details_abi::SemaphoreValue::CreateFromValueInternal(v28, (char *)Name, v23, v22 >> 2);
      LastErrorFailHr = v25;
      if ( v25 >= 0 )
      {
        *(_DWORD *)v22 = 1;
        *(_QWORD *)(v22 + 8) = v7;
        v7 = 0LL;
        v30 = 0LL;
        *(wil::details **)(v22 + 16) = v28[0];
        v28[0] = 0LL;
        *(wil::details **)(v22 + 24) = v28[1];
        v28[1] = 0LL;
        memset_0((void *)(v22 + 34), 0, 0x56uLL);
        *(_WORD *)(v22 + 32) = 88;
        *(_DWORD *)(v22 + 36) = 1;
        memset_0((void *)(v22 + 40), 0, 0x50uLL);
        *a2 = v22;
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
        HeapFree(v27, 0, (LPVOID)v22);
      }
      if ( LastErrorFailHr >= 0 )
        goto LABEL_19;
    }
    else
    {
      LastErrorFailHr = -2147024882;
      wil::details::in1diag3::Return_Hr(retaddr, (void *)0x142, (__int64)"wil", (const char *)0x8007000ELL);
    }
    v18 = 302LL;
    goto LABEL_39;
  }
  v18 = 294LL;
LABEL_39:
  wil::details::in1diag3::Return_Hr(retaddr, (void *)v18, (__int64)"wil", (const char *)(unsigned int)LastErrorFailHr);
LABEL_20:
  if ( v14 )
    wil::details::ReleaseMutex(v14, v8);
LABEL_22:
  if ( v7 )
    wil::details::CloseHandle(v7, v8);
  return (unsigned int)LastErrorFailHr;
}
