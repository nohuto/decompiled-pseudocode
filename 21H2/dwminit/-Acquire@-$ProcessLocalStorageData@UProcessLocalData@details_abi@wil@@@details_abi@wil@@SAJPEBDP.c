/*
 * XREFs of ?Acquire@?$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil@@SAJPEBDPEAPEAV123@@Z @ 0x180007460
 * Callers:
 *     ?GetThreadLocalDataCache@details_abi@wil@@YAPEAUThreadLocalData@12@_N@Z @ 0x180003C60 (-GetThreadLocalDataCache@details_abi@wil@@YAPEAUThreadLocalData@12@_N@Z.c)
 * Callees:
 *     ?StringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x180001658 (-StringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     ?GetLastErrorFailHr@details@wil@@YAJXZ @ 0x180001CEC (-GetLastErrorFailHr@details@wil@@YAJXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800023A4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180002420 (-FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?CreateFromPointer@SemaphoreValue@details_abi@wil@@QEAAJPEBGPEAX@Z @ 0x180003274 (-CreateFromPointer@SemaphoreValue@details_abi@wil@@QEAAJPEBGPEAX@Z.c)
 *     ?TryGetValueInternal@SemaphoreValue@details_abi@wil@@CAJPEBG_NPEA_KPEA_N@Z @ 0x180003534 (-TryGetValueInternal@SemaphoreValue@details_abi@wil@@CAJPEBG_NPEA_KPEA_N@Z.c)
 *     ??$invoke@P6AXPEAU_RTL_SRWLOCK@@@ZAEAPEAU1@@wistd@@YAX$$QEAP6AXPEAU_RTL_SRWLOCK@@@ZAEAPEAU1@@Z @ 0x180007FC0 (--$invoke@P6AXPEAU_RTL_SRWLOCK@@@ZAEAPEAU1@@wistd@@YAX$$QEAP6AXPEAU_RTL_SRWLOCK@@@ZAEAPEAU1@@Z.c)
 *     __security_check_cookie @ 0x18000C690 (__security_check_cookie.c)
 *     memset_0 @ 0x18000D0A8 (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x18000DED0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall wil::details_abi::ProcessLocalStorageData<wil::details_abi::ProcessLocalData>::Acquire(
        __int64 a1,
        _QWORD *a2)
{
  DWORD CurrentProcessId; // eax
  HANDLE Mutex; // rax
  wil::details *v6; // rcx
  HANDLE v7; // rbx
  int LastErrorFailHr; // edi
  DWORD v9; // eax
  void *v10; // rdx
  __int64 v11; // r8
  char *v12; // r9
  HANDLE v13; // r14
  _DWORD *v14; // rsi
  unsigned __int64 v15; // r15
  int ValueInternal; // eax
  __int64 v17; // r8
  __int64 v18; // rdx
  HANDLE ProcessHeap; // rax
  _QWORD *v21; // rax
  __int64 v22; // r8
  int (*v23)(void *, void *); // rdi
  _QWORD *v24; // rsi
  HANDLE v25; // rax
  int v26; // eax
  __int64 v27; // r8
  HANDLE v28; // rax
  __int64 v29; // rax
  __int64 v30; // rax
  __int128 v31; // [rsp+30h] [rbp-D0h] BYREF
  unsigned __int64 v32; // [rsp+40h] [rbp-C0h] BYREF
  HANDLE v33; // [rsp+48h] [rbp-B8h]
  __int64 v34; // [rsp+50h] [rbp-B0h] BYREF
  void (__fastcall *v35)(wil::details *, void *); // [rsp+58h] [rbp-A8h] BYREF
  __int64 v36; // [rsp+60h] [rbp-A0h] BYREF
  void (__fastcall *v37)(wil::details *, void *); // [rsp+68h] [rbp-98h] BYREF
  HANDLE v38; // [rsp+70h] [rbp-90h] BYREF
  void (__fastcall *v39)(wil::details *, void *); // [rsp+78h] [rbp-88h] BYREF
  HANDLE v40; // [rsp+80h] [rbp-80h] BYREF
  _QWORD v41[3]; // [rsp+88h] [rbp-78h] BYREF
  WCHAR Name[264]; // [rsp+A0h] [rbp-60h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+2E8h] [rbp+1E8h]

  *a2 = 0LL;
  CurrentProcessId = GetCurrentProcessId();
  StringCchPrintfW(Name, 260LL, L"Local\\SM0:%d:%d:%hs", CurrentProcessId, 120, a1);
  Mutex = CreateMutexExW(0LL, Name, 0, 0x1F0001u);
  v33 = Mutex;
  v7 = Mutex;
  if ( !Mutex )
  {
    LastErrorFailHr = wil::details::GetLastErrorFailHr(v6);
    goto LABEL_22;
  }
  v9 = WaitForSingleObjectEx(Mutex, 0xFFFFFFFF, 0);
  if ( v9 != 258 )
  {
    if ( !v9 )
      goto LABEL_8;
    if ( v9 != 128 )
    {
      wil::details::in1diag3::FailFast_Unexpected(retaddr, v10, v11, v12);
      JUMPOUT(0x1800077E8LL);
    }
  }
  if ( (v9 & 0xFFFFFF7F) != 0 )
  {
    v13 = 0LL;
    goto LABEL_9;
  }
LABEL_8:
  v13 = v7;
LABEL_9:
  v14 = 0LL;
  v32 = 0LL;
  v15 = 0LL;
  ValueInternal = wil::details_abi::SemaphoreValue::TryGetValueInternal((char *)Name, (__int64)v10, &v32, (bool *)v12);
  LastErrorFailHr = ValueInternal;
  if ( ValueInternal >= 0 )
  {
    v15 = v32;
    LastErrorFailHr = 0;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(retaddr, (void *)0x62, v17, (const char *)(unsigned int)ValueInternal);
  }
  if ( LastErrorFailHr >= 0 )
  {
    v14 = (_DWORD *)(4 * v15);
    LastErrorFailHr = 0;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(retaddr, (void *)0x6B, v17, (const char *)(unsigned int)LastErrorFailHr);
  }
  if ( LastErrorFailHr >= 0 )
  {
    if ( v14 )
    {
      *a2 = v14;
      v7 = v33;
      *(_DWORD *)*a2 = *v14 + 1;
LABEL_19:
      LastErrorFailHr = 0;
      goto LABEL_20;
    }
    *a2 = 0LL;
    ProcessHeap = GetProcessHeap();
    v21 = HeapAlloc(ProcessHeap, 8u, 0x78uLL);
    v23 = wil::details::g_pfnRtlDisownModuleHeapAllocation;
    v24 = v21;
    if ( wil::details::g_pfnRtlDisownModuleHeapAllocation )
    {
      v25 = GetProcessHeap();
      ((void (__fastcall *)(HANDLE, _QWORD *))v23)(v25, v24);
    }
    v41[1] = v24;
    if ( v24 )
    {
      v31 = 0LL;
      v26 = wil::details_abi::SemaphoreValue::CreateFromPointer(
              (wil::details_abi::SemaphoreValue *)&v31,
              (char *)Name,
              (unsigned __int64)v24);
      LastErrorFailHr = v26;
      if ( v26 >= 0 )
      {
        v29 = v31;
        v24[1] = v7;
        v7 = 0LL;
        v24[2] = v29;
        v30 = *((_QWORD *)&v31 + 1);
        v31 = 0uLL;
        *(_DWORD *)v24 = 1;
        v33 = 0LL;
        v24[3] = v30;
        memset_0((char *)v24 + 34, 0, 0x56uLL);
        *((_WORD *)v24 + 16) = 88;
        *((_DWORD *)v24 + 9) = 1;
        memset_0(v24 + 5, 0, 0x50uLL);
        LastErrorFailHr = 0;
        *a2 = v24;
      }
      else
      {
        wil::details::in1diag3::Return_Hr(retaddr, (void *)0x145, v27, (const char *)(unsigned int)v26);
        if ( *((_QWORD *)&v31 + 1) )
        {
          v34 = *((_QWORD *)&v31 + 1);
          v35 = wil::details::CloseHandle;
          wistd::invoke<void (*)(_RTL_SRWLOCK *),_RTL_SRWLOCK * &>(&v35, &v34);
        }
        if ( (_QWORD)v31 )
        {
          v36 = v31;
          v37 = wil::details::CloseHandle;
          wistd::invoke<void (*)(_RTL_SRWLOCK *),_RTL_SRWLOCK * &>(&v37, &v36);
        }
        v28 = GetProcessHeap();
        HeapFree(v28, 0, v24);
      }
      if ( LastErrorFailHr >= 0 )
        goto LABEL_19;
    }
    else
    {
      LastErrorFailHr = -2147024882;
      wil::details::in1diag3::Return_Hr(retaddr, (void *)0x142, v22, (const char *)0x8007000ELL);
    }
    v18 = 302LL;
    goto LABEL_38;
  }
  v18 = 294LL;
LABEL_38:
  wil::details::in1diag3::Return_Hr(retaddr, (void *)v18, v17, (const char *)(unsigned int)LastErrorFailHr);
LABEL_20:
  if ( v13 )
  {
    v38 = v13;
    v39 = wil::details::ReleaseMutex;
    wistd::invoke<void (*)(_RTL_SRWLOCK *),_RTL_SRWLOCK * &>(&v39, &v38);
  }
LABEL_22:
  if ( v7 )
  {
    v40 = v7;
    v41[0] = wil::details::CloseHandle;
    wistd::invoke<void (*)(_RTL_SRWLOCK *),_RTL_SRWLOCK * &>(v41, &v40);
  }
  return (unsigned int)LastErrorFailHr;
}
