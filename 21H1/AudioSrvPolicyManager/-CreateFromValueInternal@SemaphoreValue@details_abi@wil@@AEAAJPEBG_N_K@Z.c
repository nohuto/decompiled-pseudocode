/*
 * XREFs of ?CreateFromValueInternal@SemaphoreValue@details_abi@wil@@AEAAJPEBG_N_K@Z @ 0x180004178
 * Callers:
 *     ?Acquire@?$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil@@SAJPEBDPEAPEAV123@@Z @ 0x180005034 (-Acquire@-$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil@@SAJPEBDP.c)
 *     ?Acquire@?$ProcessLocalStorageData@VFeatureStateData@details_abi@wil@@@details_abi@wil@@SAJPEBDPEAPEAV123@@Z @ 0x18000D4D0 (-Acquire@-$ProcessLocalStorageData@VFeatureStateData@details_abi@wil@@@details_abi@wil@@SAJPEBDP.c)
 * Callees:
 *     ?StringCchCatW@@YAJPEAG_KPEBG@Z @ 0x18000254C (-StringCchCatW@@YAJPEAG_KPEBG@Z.c)
 *     ?GetLastErrorFailHr@details@wil@@YAJXZ @ 0x180002E3C (-GetLastErrorFailHr@details@wil@@YAJXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003F90 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFastImmediate_Unexpected@in1diag3@details@wil@@YAXXZ @ 0x18000405C (-_FailFastImmediate_Unexpected@in1diag3@details@wil@@YAXXZ.c)
 *     ?CloseHandle@details@wil@@YAXPEAX@Z @ 0x18000406C (-CloseHandle@details@wil@@YAXPEAX@Z.c)
 *     __security_check_cookie @ 0x18003EF80 (__security_check_cookie.c)
 */

__int64 __fastcall wil::details_abi::SemaphoreValue::CreateFromValueInternal(
        wil::details **this,
        char *a2,
        __int64 a3,
        unsigned __int64 a4)
{
  __int64 v7; // rdx
  signed __int64 v8; // r8
  WCHAR *v9; // rcx
  LONG v10; // esi
  WCHAR v11; // ax
  WCHAR *v12; // rax
  LONG v13; // r8d
  unsigned __int64 v14; // r14
  LONG v15; // ebx
  __int64 v16; // rdx
  wil::details *v17; // rcx
  wil::details *Semaphore; // r15
  wil::details *v19; // rbp
  DWORD LastError; // ebx
  void *v21; // rdx
  int LastErrorFailHr; // ebx
  __int64 v23; // rdx
  wil::details *v25; // rcx
  wil::details *v26; // rbp
  wil::details *v27; // rsi
  DWORD v28; // ebx
  void *v29; // rdx
  WCHAR Name[264]; // [rsp+30h] [rbp-248h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+278h] [rbp+0h]

  if ( (a4 & 0xC000000000000000uLL) != 0 )
    wil::details::in1diag3::_FailFastImmediate_Unexpected((wil::details::in1diag3 *)this);
  v7 = 260LL;
  v8 = a2 - (char *)Name;
  v9 = Name;
  v10 = 1;
  do
  {
    if ( v7 == -2147483386 )
      break;
    v11 = *(WCHAR *)((char *)v9 + v8);
    if ( !v11 )
      break;
    *v9++ = v11;
    --v7;
  }
  while ( v7 );
  v12 = v9 - 1;
  if ( v7 )
    v12 = v9;
  *v12 = 0;
  StringCchCatW(Name, v7, (char *)L"_p0");
  v13 = 1;
  v14 = a4 >> 31;
  v15 = a4 & 0x7FFFFFFF;
  if ( v15 )
    v13 = v15;
  Semaphore = (wil::details *)CreateSemaphoreExW(0LL, v15, v13, Name, 0, 0x1F0003u);
  if ( Semaphore )
  {
    v19 = *this;
    if ( *this )
    {
      LastError = GetLastError();
      wil::details::CloseHandle(v19, v21);
      SetLastError(LastError);
    }
    *this = Semaphore;
    LastErrorFailHr = 0;
  }
  else
  {
    LastErrorFailHr = wil::details::GetLastErrorFailHr(v17);
  }
  if ( LastErrorFailHr < 0 )
  {
    v23 = 133LL;
LABEL_17:
    wil::details::in1diag3::Return_Hr(retaddr, (void *)v23, (__int64)"wil", (const char *)(unsigned int)LastErrorFailHr);
    return (unsigned int)LastErrorFailHr;
  }
  StringCchCatW(Name, v16, (char *)L"h");
  if ( (_DWORD)v14 )
    v10 = v14;
  v26 = (wil::details *)CreateSemaphoreExW(0LL, v14, v10, Name, 0, 0x1F0003u);
  if ( v26 )
  {
    v27 = this[1];
    if ( v27 )
    {
      v28 = GetLastError();
      wil::details::CloseHandle(v27, v29);
      SetLastError(v28);
    }
    this[1] = v26;
    LastErrorFailHr = 0;
  }
  else
  {
    LastErrorFailHr = wil::details::GetLastErrorFailHr(v25);
  }
  if ( LastErrorFailHr < 0 )
  {
    v23 = 137LL;
    goto LABEL_17;
  }
  return 0LL;
}
