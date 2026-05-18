/*
 * XREFs of ?Acquire@?$ProcessLocalStorageData@VFeatureStateData@details_abi@wil@@@details_abi@wil@@SAJPEBDPEAPEAV123@@Z @ 0x180006EA0
 * Callers:
 *     ?EnsureStateData@FeatureStateManager@details@wil@@AEAA_NXZ @ 0x180005F7C (-EnsureStateData@FeatureStateManager@details@wil@@AEAA_NXZ.c)
 * Callees:
 *     ?StringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x180001658 (-StringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     ?GetLastErrorFailHr@details@wil@@YAJXZ @ 0x180001CEC (-GetLastErrorFailHr@details@wil@@YAJXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800023A4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180002420 (-FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?CreateFromPointer@SemaphoreValue@details_abi@wil@@QEAAJPEBGPEAX@Z @ 0x180003274 (-CreateFromPointer@SemaphoreValue@details_abi@wil@@QEAAJPEBGPEAX@Z.c)
 *     ?TryGetValueInternal@SemaphoreValue@details_abi@wil@@CAJPEBG_NPEA_KPEA_N@Z @ 0x180003534 (-TryGetValueInternal@SemaphoreValue@details_abi@wil@@CAJPEBG_NPEA_KPEA_N@Z.c)
 *     ??0UsageIndexes@details_abi@wil@@QEAA@XZ @ 0x1800053B0 (--0UsageIndexes@details_abi@wil@@QEAA@XZ.c)
 *     ??$invoke@P6AXPEAU_RTL_SRWLOCK@@@ZAEAPEAU1@@wistd@@YAX$$QEAP6AXPEAU_RTL_SRWLOCK@@@ZAEAPEAU1@@Z @ 0x180007FC0 (--$invoke@P6AXPEAU_RTL_SRWLOCK@@@ZAEAPEAU1@@wistd@@YAX$$QEAP6AXPEAU_RTL_SRWLOCK@@@ZAEAPEAU1@@Z.c)
 *     __security_check_cookie @ 0x18000C690 (__security_check_cookie.c)
 *     memset_0 @ 0x18000D0A8 (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x18000DED0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall wil::details_abi::ProcessLocalStorageData<wil::details_abi::FeatureStateData>::Acquire(
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
  char *v21; // rax
  __int64 v22; // r8
  int (*v23)(void *, void *); // rdi
  char *v24; // rsi
  HANDLE v25; // rax
  int v26; // eax
  __int64 v27; // r8
  HANDLE v28; // rax
  __int64 v29; // rax
  unsigned __int64 v30; // [rsp+30h] [rbp-D0h] BYREF
  __int128 v31; // [rsp+38h] [rbp-C8h] BYREF
  HANDLE v32; // [rsp+48h] [rbp-B8h]
  __int64 v33; // [rsp+50h] [rbp-B0h] BYREF
  void (__fastcall *v34)(wil::details *, void *); // [rsp+58h] [rbp-A8h] BYREF
  __int64 v35; // [rsp+60h] [rbp-A0h] BYREF
  void (__fastcall *v36)(wil::details *, void *); // [rsp+68h] [rbp-98h] BYREF
  HANDLE v37; // [rsp+70h] [rbp-90h] BYREF
  void (__fastcall *v38)(wil::details *, void *); // [rsp+78h] [rbp-88h] BYREF
  HANDLE v39; // [rsp+80h] [rbp-80h] BYREF
  _QWORD v40[3]; // [rsp+88h] [rbp-78h] BYREF
  WCHAR Name[264]; // [rsp+A0h] [rbp-60h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+2E8h] [rbp+1E8h]

  *a2 = 0LL;
  CurrentProcessId = GetCurrentProcessId();
  StringCchPrintfW(Name, 260LL, L"Local\\SM0:%d:%d:%hs", CurrentProcessId, 304, a1);
  Mutex = CreateMutexExW(0LL, Name, 0, 0x1F0001u);
  v32 = Mutex;
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
      JUMPOUT(0x18000723DLL);
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
  v30 = 0LL;
  v15 = 0LL;
  ValueInternal = wil::details_abi::SemaphoreValue::TryGetValueInternal((char *)Name, (__int64)v10, &v30, (bool *)v12);
  LastErrorFailHr = ValueInternal;
  if ( ValueInternal >= 0 )
  {
    v15 = v30;
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
      v7 = v32;
      *(_DWORD *)*a2 = *v14 + 1;
LABEL_19:
      LastErrorFailHr = 0;
      goto LABEL_20;
    }
    *a2 = 0LL;
    ProcessHeap = GetProcessHeap();
    v21 = (char *)HeapAlloc(ProcessHeap, 8u, 0x130uLL);
    v23 = wil::details::g_pfnRtlDisownModuleHeapAllocation;
    v24 = v21;
    if ( wil::details::g_pfnRtlDisownModuleHeapAllocation )
    {
      v25 = GetProcessHeap();
      ((void (__fastcall *)(HANDLE, char *))v23)(v25, v24);
    }
    v40[1] = v24;
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
        *((_QWORD *)v24 + 2) = v31;
        v29 = *((_QWORD *)&v31 + 1);
        *((_QWORD *)v24 + 1) = v7;
        v7 = 0LL;
        *((_QWORD *)v24 + 3) = v29;
        *(_DWORD *)v24 = 1;
        memset_0(v24 + 40, 0, 0x108uLL);
        *((_QWORD *)v24 + 4) = 0LL;
        wil::details_abi::UsageIndexes::UsageIndexes((wil::details_abi::UsageIndexes *)(v24 + 40));
        InitializeCriticalSectionEx((LPCRITICAL_SECTION)(v24 + 232), 0, 0);
        *((_QWORD *)v24 + 34) = 0LL;
        *((_QWORD *)v24 + 35) = 0LL;
        *((_QWORD *)v24 + 36) = 0LL;
        *((_QWORD *)v24 + 37) = 0LL;
        LastErrorFailHr = 0;
        *a2 = v24;
      }
      else
      {
        wil::details::in1diag3::Return_Hr(retaddr, (void *)0x145, v27, (const char *)(unsigned int)v26);
        if ( *((_QWORD *)&v31 + 1) )
        {
          v33 = *((_QWORD *)&v31 + 1);
          v34 = wil::details::CloseHandle;
          wistd::invoke<void (*)(_RTL_SRWLOCK *),_RTL_SRWLOCK * &>(&v34, &v33);
        }
        if ( (_QWORD)v31 )
        {
          v35 = v31;
          v36 = wil::details::CloseHandle;
          wistd::invoke<void (*)(_RTL_SRWLOCK *),_RTL_SRWLOCK * &>(&v36, &v35);
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
    v37 = v13;
    v38 = wil::details::ReleaseMutex;
    wistd::invoke<void (*)(_RTL_SRWLOCK *),_RTL_SRWLOCK * &>(&v38, &v37);
  }
LABEL_22:
  if ( v7 )
  {
    v39 = v7;
    v40[0] = wil::details::CloseHandle;
    wistd::invoke<void (*)(_RTL_SRWLOCK *),_RTL_SRWLOCK * &>(v40, &v39);
  }
  return (unsigned int)LastErrorFailHr;
}
