/*
 * XREFs of ?CreateFromValueInternal@SemaphoreValue@details_abi@wil@@AEAAJPEBG_N_K@Z @ 0x1800650D0
 * Callers:
 *     ?MakeAndInitialize@?$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil@@CAJPEBG$$QEAV?$unique_any_t@V?$mutex_t@V?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@Z$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@Uerr_returncode_policy@3@@wil@@@3@PEAPEAV123@@Z @ 0x180065C1C (-MakeAndInitialize@-$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil.c)
 *     ?MakeAndInitialize@?$ProcessLocalStorageData@VFeatureStateData@details_abi@wil@@@details_abi@wil@@CAJPEBG$$QEAV?$unique_any_t@V?$mutex_t@V?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@Z$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@Uerr_returncode_policy@3@@wil@@@3@PEAPEAV123@@Z @ 0x180065D64 (-MakeAndInitialize@-$ProcessLocalStorageData@VFeatureStateData@details_abi@wil@@@details_abi@wil.c)
 * Callees:
 *     ?reset@?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@Z$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x180021CF4 (-reset@-$unique_storage@U-$resource_policy@PEAXP6AXPEAX@Z$1-CloseHandle@details@wil@@YAX0@ZU-$in.c)
 *     ?StringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x180031A9C (-StringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180035710 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x18003C480 (__security_check_cookie.c)
 *     ?GetLastErrorFailHr@details@wil@@YAJXZ @ 0x180065828 (-GetLastErrorFailHr@details@wil@@YAJXZ.c)
 *     ?FailFastImmediate_Unexpected@in1diag3@details@wil@@YAXXZ @ 0x1800683A0 (-FailFastImmediate_Unexpected@in1diag3@details@wil@@YAXXZ.c)
 */

__int64 __fastcall wil::details_abi::SemaphoreValue::CreateFromValueInternal(
        wil::details **this,
        size_t *a2,
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
  int LastErrorFailHr; // esi
  __int64 v23; // rcx
  WCHAR *v24; // rax
  __int64 v25; // rax
  WCHAR *v26; // rcx
  __int64 v27; // rbx
  __int64 v28; // rdx
  char *v29; // rax
  WCHAR v30; // r8
  WCHAR *v31; // rax
  wil::details *v32; // rax
  wil::details *v33; // rcx
  int v34; // ebx
  WCHAR Name[264]; // [rsp+30h] [rbp-248h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+278h] [rbp+0h]

  if ( (a4 & 0xC000000000000000uLL) != 0 )
    wil::details::in1diag3::FailFastImmediate_Unexpected((wil::details::in1diag3 *)this);
  StringCchCopyW(Name, 0x104uLL, a2);
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
    v23 = 260LL;
    v24 = Name;
    do
    {
      if ( !*v24 )
        break;
      ++v24;
      --v23;
    }
    while ( v23 );
    if ( v23 )
      v25 = 260 - v23;
    else
      v25 = 0LL;
    if ( v23 )
    {
      v26 = &Name[v25];
      v27 = 260 - v25;
      if ( 260 != v25 )
      {
        v28 = 2147483646LL;
        v29 = (char *)((char *)L"h" - (char *)v26);
        do
        {
          if ( !v28 )
            break;
          v30 = *(WCHAR *)((char *)v26 + (_QWORD)v29);
          if ( !v30 )
            break;
          *v26 = v30;
          --v28;
          ++v26;
          --v27;
        }
        while ( v27 );
      }
      v31 = v26 - 1;
      if ( v27 )
        v31 = v26;
      *v31 = 0;
    }
    if ( (_DWORD)v17 )
      v8 = v17;
    v32 = (wil::details *)CreateSemaphoreExW(0LL, v17, v8, Name, 0, 0x1F0003u);
    if ( v32 )
    {
      wil::details::unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void wil::details::CloseHandle(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::reset(
        this + 1,
        v32);
      v34 = 0;
    }
    else
    {
      v34 = wil::details::GetLastErrorFailHr(v33);
    }
    if ( v34 >= 0 )
    {
      return 0LL;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(retaddr, (void *)0x89, (__int64)"wil", (const char *)(unsigned int)v34);
      return (unsigned int)v34;
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x85,
      (__int64)"wil",
      (const char *)(unsigned int)LastErrorFailHr);
    return (unsigned int)LastErrorFailHr;
  }
}
