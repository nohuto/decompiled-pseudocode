/*
 * XREFs of ?CreateFromValueInternal@SemaphoreValue@details_abi@wil@@AEAAJPEBG_N_K@Z @ 0x180006124
 * Callers:
 *     ?Acquire@?$ProcessLocalStorageData@VFeatureStateData@details_abi@wil@@@details_abi@wil@@SAJPEBDPEAPEAV123@@Z @ 0x180016AF4 (-Acquire@-$ProcessLocalStorageData@VFeatureStateData@details_abi@wil@@@details_abi@wil@@SAJPEBDP.c)
 *     ?Acquire@?$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil@@SAJPEBDPEAPEAV123@@Z @ 0x1800170BC (-Acquire@-$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil@@SAJPEBDP.c)
 * Callees:
 *     ?StringCchCatW@@YAJPEAG_KPEBG@Z @ 0x180004048 (-StringCchCatW@@YAJPEAG_KPEBG@Z.c)
 *     ?GetLastErrorFailHr@details@wil@@YAJXZ @ 0x18000494C (-GetLastErrorFailHr@details@wil@@YAJXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180005D58 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?FailFastImmediate_Unexpected@in1diag3@details@wil@@YAXXZ @ 0x180005F48 (-FailFastImmediate_Unexpected@in1diag3@details@wil@@YAXXZ.c)
 *     ?CloseHandle@details@wil@@YAXPEAX@Z @ 0x180005FB0 (-CloseHandle@details@wil@@YAXPEAX@Z.c)
 *     __security_check_cookie @ 0x1800CF780 (__security_check_cookie.c)
 */

__int64 __fastcall wil::details_abi::SemaphoreValue::CreateFromValueInternal(
        wil::details **this,
        char *a2,
        __int64 a3,
        unsigned __int64 a4)
{
  signed __int64 v6; // r8
  WCHAR *v7; // rcx
  __int64 v8; // rdx
  LONG v9; // esi
  WCHAR v10; // ax
  WCHAR *v11; // rax
  LONG v12; // r8d
  unsigned __int64 v13; // r14
  LONG v14; // ebx
  wil::details *v15; // rcx
  wil::details *Semaphore; // r15
  wil::details *v17; // rbp
  DWORD LastError; // ebx
  void *v19; // rdx
  int LastErrorFailHr; // ebx
  __int64 v21; // rdx
  wil::details *v23; // rcx
  wil::details *v24; // rbp
  wil::details *v25; // rsi
  DWORD v26; // ebx
  void *v27; // rdx
  WCHAR Name[264]; // [rsp+30h] [rbp-258h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+288h] [rbp+0h]

  if ( (a4 & 0xC000000000000000uLL) != 0 )
    wil::details::in1diag3::FailFastImmediate_Unexpected((wil::details::in1diag3 *)this);
  v6 = a2 - (char *)Name;
  v7 = Name;
  v8 = 260LL;
  v9 = 1;
  do
  {
    if ( v8 == -2147483386 )
      break;
    v10 = *(WCHAR *)((char *)v7 + v6);
    if ( !v10 )
      break;
    *v7++ = v10;
    --v8;
  }
  while ( v8 );
  v11 = v7 - 1;
  if ( v8 )
    v11 = v7;
  *v11 = 0;
  StringCchCatW(Name, 260LL, (char *)L"_p0");
  v12 = 1;
  v13 = a4 >> 31;
  v14 = a4 & 0x7FFFFFFF;
  if ( v14 )
    v12 = v14;
  Semaphore = (wil::details *)CreateSemaphoreExW(0LL, v14, v12, Name, 0, 0x1F0003u);
  if ( Semaphore )
  {
    v17 = *this;
    if ( *this )
    {
      LastError = GetLastError();
      wil::details::CloseHandle(v17, v19);
      SetLastError(LastError);
    }
    *this = Semaphore;
    LastErrorFailHr = 0;
  }
  else
  {
    LastErrorFailHr = wil::details::GetLastErrorFailHr(v15);
  }
  if ( LastErrorFailHr < 0 )
  {
    v21 = 133LL;
LABEL_17:
    wil::details::in1diag3::Return_Hr(retaddr, (void *)v21, (__int64)"wil", (const char *)(unsigned int)LastErrorFailHr);
    return (unsigned int)LastErrorFailHr;
  }
  StringCchCatW(Name, 260LL, (char *)L"h");
  if ( (_DWORD)v13 )
    v9 = v13;
  v24 = (wil::details *)CreateSemaphoreExW(0LL, v13, v9, Name, 0, 0x1F0003u);
  if ( v24 )
  {
    v25 = this[1];
    if ( v25 )
    {
      v26 = GetLastError();
      wil::details::CloseHandle(v25, v27);
      SetLastError(v26);
    }
    this[1] = v24;
    LastErrorFailHr = 0;
  }
  else
  {
    LastErrorFailHr = wil::details::GetLastErrorFailHr(v23);
  }
  if ( LastErrorFailHr < 0 )
  {
    v21 = 137LL;
    goto LABEL_17;
  }
  return 0LL;
}
