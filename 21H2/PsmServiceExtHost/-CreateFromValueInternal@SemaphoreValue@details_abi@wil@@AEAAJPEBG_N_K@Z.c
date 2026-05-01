/*
 * XREFs of ?CreateFromValueInternal@SemaphoreValue@details_abi@wil@@AEAAJPEBG_N_K@Z @ 0x1800655D4
 * Callers:
 *     ?MakeAndInitialize@?$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil@@CAJPEBG$$QEAV?$unique_any_t@V?$mutex_t@V?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@Z$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@Uerr_returncode_policy@3@@wil@@@3@PEAPEAV123@@Z @ 0x1800664D4 (-MakeAndInitialize@-$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil.c)
 *     ?MakeAndInitialize@?$ProcessLocalStorageData@VFeatureStateData@details_abi@wil@@@details_abi@wil@@CAJPEBG$$QEAV?$unique_any_t@V?$mutex_t@V?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@Z$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@Uerr_returncode_policy@3@@wil@@@3@PEAPEAV123@@Z @ 0x18006662C (-MakeAndInitialize@-$ProcessLocalStorageData@VFeatureStateData@details_abi@wil@@@details_abi@wil.c)
 * Callees:
 *     ?StringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x180026AF0 (-StringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@Z$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x18003ABFC (-reset@-$unique_storage@U-$resource_policy@PEAXP6AXPEAX@Z$1-CloseHandle@details@wil@@YAX0@ZU-$in.c)
 *     __security_check_cookie @ 0x1800448B0 (__security_check_cookie.c)
 *     ?GetLastErrorFailHr@details@wil@@YAJXZ @ 0x180065DFC (-GetLastErrorFailHr@details@wil@@YAJXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180066F24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFastImmediate_Unexpected@in1diag3@details@wil@@YAXXZ @ 0x180067714 (-_FailFastImmediate_Unexpected@in1diag3@details@wil@@YAXXZ.c)
 */

__int64 __fastcall wil::details_abi::SemaphoreValue::CreateFromValueInternal(
        wil::details **this,
        char *a2,
        __int64 a3,
        unsigned __int64 a4)
{
  WCHAR *v6; // rax
  __int64 v7; // rcx
  LONG v8; // edi
  __int64 v9; // rax
  WCHAR *v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // r8
  char *v13; // rax
  WCHAR v14; // r9
  WCHAR *v15; // rax
  LONG v16; // r8d
  unsigned __int64 v17; // rbp
  LONG v18; // esi
  wil::details *Semaphore; // rax
  wil::details *v20; // rcx
  unsigned int v21; // r8d
  int LastErrorFailHr; // esi
  __int64 v24; // rcx
  WCHAR *v25; // rax
  __int64 v26; // rax
  WCHAR *v27; // rcx
  __int64 v28; // rbx
  __int64 v29; // rdx
  char *v30; // rax
  WCHAR v31; // r8
  WCHAR *v32; // rax
  wil::details *v33; // rax
  wil::details *v34; // rcx
  unsigned int v35; // r8d
  int v36; // ebx
  DWORD dwFlags; // [rsp+20h] [rbp-258h]
  DWORD dwFlagsa; // [rsp+20h] [rbp-258h]
  WCHAR Name[264]; // [rsp+30h] [rbp-248h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+278h] [rbp+0h]

  if ( (a4 & 0xC000000000000000uLL) != 0 )
    wil::details::in1diag3::_FailFastImmediate_Unexpected((wil::details::in1diag3 *)this);
  StringCchCopyW((char *)Name, 260LL, a2);
  v6 = Name;
  v7 = 260LL;
  v8 = 1;
  do
  {
    if ( !*v6 )
      break;
    ++v6;
    --v7;
  }
  while ( v7 );
  if ( v7 )
    v9 = 260 - v7;
  else
    v9 = 0LL;
  if ( v7 )
  {
    v10 = &Name[v9];
    v11 = 260 - v9;
    if ( v9 != 260 )
    {
      v12 = 2147483646LL;
      v13 = (char *)((char *)L"_p0" - (char *)v10);
      do
      {
        if ( !v12 )
          break;
        v14 = *(WCHAR *)((char *)v10 + (_QWORD)v13);
        if ( !v14 )
          break;
        *v10 = v14;
        --v12;
        ++v10;
        --v11;
      }
      while ( v11 );
    }
    v15 = v10 - 1;
    if ( v11 )
      v15 = v10;
    *v15 = 0;
  }
  v16 = 1;
  v17 = a4 >> 31;
  v18 = a4 & 0x7FFFFFFF;
  if ( v18 )
    v16 = v18;
  Semaphore = (wil::details *)CreateSemaphoreExW(0LL, v18, v16, Name, 0, 0x1F0003u);
  if ( Semaphore )
  {
    wil::details::unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void wil::details::CloseHandle(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::reset(
      this,
      Semaphore);
    LastErrorFailHr = 0;
  }
  else
  {
    LastErrorFailHr = wil::details::GetLastErrorFailHr(v20);
  }
  if ( LastErrorFailHr >= 0 )
  {
    v24 = 260LL;
    v25 = Name;
    do
    {
      if ( !*v25 )
        break;
      ++v25;
      --v24;
    }
    while ( v24 );
    if ( v24 )
      v26 = 260 - v24;
    else
      v26 = 0LL;
    if ( v24 )
    {
      v27 = &Name[v26];
      v28 = 260 - v26;
      if ( 260 != v26 )
      {
        v29 = 2147483646LL;
        v30 = (char *)((char *)L"h" - (char *)v27);
        do
        {
          if ( !v29 )
            break;
          v31 = *(WCHAR *)((char *)v27 + (_QWORD)v30);
          if ( !v31 )
            break;
          *v27 = v31;
          --v29;
          ++v27;
          --v28;
        }
        while ( v28 );
      }
      v32 = v27 - 1;
      if ( v28 )
        v32 = v27;
      *v32 = 0;
    }
    if ( (_DWORD)v17 )
      v8 = v17;
    v33 = (wil::details *)CreateSemaphoreExW(0LL, v17, v8, Name, 0, 0x1F0003u);
    if ( v33 )
    {
      wil::details::unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void wil::details::CloseHandle(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::reset(
        this + 1,
        v33);
      v36 = 0;
    }
    else
    {
      v36 = wil::details::GetLastErrorFailHr(v34);
    }
    if ( v36 >= 0 )
    {
      return 0LL;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(retaddr, (void *)0x89, v35, (const char *)(unsigned int)v36, dwFlagsa);
      return (unsigned int)v36;
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr(retaddr, (void *)0x85, v21, (const char *)(unsigned int)LastErrorFailHr, dwFlags);
    return (unsigned int)LastErrorFailHr;
  }
}
