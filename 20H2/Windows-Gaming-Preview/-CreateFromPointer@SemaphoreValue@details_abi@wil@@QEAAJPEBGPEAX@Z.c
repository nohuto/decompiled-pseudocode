/*
 * XREFs of ?CreateFromPointer@SemaphoreValue@details_abi@wil@@QEAAJPEBGPEAX@Z @ 0x1800034C8
 * Callers:
 *     ?Acquire@?$ProcessLocalStorageData@VFeatureStateData@details_abi@wil@@@details_abi@wil@@SAJPEBDPEAPEAV123@@Z @ 0x18000820C (-Acquire@-$ProcessLocalStorageData@VFeatureStateData@details_abi@wil@@@details_abi@wil@@SAJPEBDP.c)
 *     ?Acquire@?$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil@@SAJPEBDPEAPEAV123@@Z @ 0x18000871C (-Acquire@-$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil@@SAJPEBDP.c)
 * Callees:
 *     ?StringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x180001A2C (-StringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     ?StringCchCatW@@YAJPEAG_KPEBG@Z @ 0x180001AB8 (-StringCchCatW@@YAJPEAG_KPEBG@Z.c)
 *     ?GetLastErrorFailHr@details@wil@@YAJXZ @ 0x1800022EC (-GetLastErrorFailHr@details@wil@@YAJXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003268 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFastImmediate_Unexpected@in1diag3@details@wil@@YAXXZ @ 0x18000335C (-_FailFastImmediate_Unexpected@in1diag3@details@wil@@YAXXZ.c)
 *     ?CloseHandle@details@wil@@YAXPEAX@Z @ 0x18000336C (-CloseHandle@details@wil@@YAXPEAX@Z.c)
 *     __security_check_cookie @ 0x1800443F0 (__security_check_cookie.c)
 */

__int64 __fastcall wil::details_abi::SemaphoreValue::CreateFromPointer(
        wil::details **this,
        char *a2,
        unsigned __int64 a3)
{
  unsigned __int64 v4; // rbx
  __int64 v5; // rdx
  unsigned __int64 v6; // rbp
  LONG v7; // ebx
  LONG v8; // r14d
  LONG v9; // r8d
  __int64 v10; // rdx
  wil::details *v11; // rcx
  wil::details *Semaphore; // r15
  wil::details *v13; // rsi
  DWORD LastError; // ebx
  void *v15; // rdx
  int LastErrorFailHr; // ebx
  __int64 v17; // rdx
  wil::details *v18; // rcx
  wil::details *v19; // rbp
  wil::details *v20; // rsi
  DWORD v21; // ebx
  void *v22; // rdx
  WCHAR Name[264]; // [rsp+30h] [rbp-248h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+278h] [rbp+0h]

  if ( (a3 & 3) != 0 )
    wil::details::in1diag3::_FailFastImmediate_Unexpected((wil::details::in1diag3 *)this);
  v4 = a3 >> 2;
  StringCchCopyW((char *)Name, 260LL, a2);
  StringCchCatW(Name, v5, (char *)L"_p0");
  v6 = v4 >> 31;
  v7 = v4 & 0x7FFFFFFF;
  v8 = 1;
  v9 = 1;
  if ( v7 )
    v9 = v7;
  Semaphore = (wil::details *)CreateSemaphoreExW(0LL, v7, v9, Name, 0, 0x1F0003u);
  if ( Semaphore )
  {
    v13 = *this;
    if ( *this )
    {
      LastError = GetLastError();
      wil::details::CloseHandle(v13, v15);
      SetLastError(LastError);
    }
    *this = Semaphore;
    LastErrorFailHr = 0;
  }
  else
  {
    LastErrorFailHr = wil::details::GetLastErrorFailHr(v11);
  }
  if ( LastErrorFailHr >= 0 )
  {
    StringCchCatW(Name, v10, (char *)L"h");
    if ( (_DWORD)v6 )
      v8 = v6;
    v19 = (wil::details *)CreateSemaphoreExW(0LL, v6, v8, Name, 0, 0x1F0003u);
    if ( v19 )
    {
      v20 = this[1];
      if ( v20 )
      {
        v21 = GetLastError();
        wil::details::CloseHandle(v20, v22);
        SetLastError(v21);
      }
      this[1] = v19;
      LastErrorFailHr = 0;
    }
    else
    {
      LastErrorFailHr = wil::details::GetLastErrorFailHr(v18);
    }
    if ( LastErrorFailHr >= 0 )
      return 0;
    v17 = 137LL;
  }
  else
  {
    v17 = 133LL;
  }
  wil::details::in1diag3::Return_Hr(retaddr, (void *)v17, (__int64)"wil", (const char *)(unsigned int)LastErrorFailHr);
  return (unsigned int)LastErrorFailHr;
}
