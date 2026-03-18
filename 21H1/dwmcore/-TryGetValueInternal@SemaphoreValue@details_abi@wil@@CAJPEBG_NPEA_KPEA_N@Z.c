/*
 * XREFs of ?TryGetValueInternal@SemaphoreValue@details_abi@wil@@CAJPEBG_NPEA_KPEA_N@Z @ 0x18008B344
 * Callers:
 *     ?TryGetPointer@SemaphoreValue@details_abi@wil@@SAJPEBGPEAPEAX@Z @ 0x1800888BC (-TryGetPointer@SemaphoreValue@details_abi@wil@@SAJPEBGPEAPEAX@Z.c)
 * Callees:
 *     ?StringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x18008B2A4 (-StringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@Z$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x18008C32C (--1-$unique_storage@U-$resource_policy@PEAXP6AXPEAX@Z$1-CloseHandle@details@wil@@YAX0@ZU-$integr.c)
 *     ?GetValueFromSemaphore@SemaphoreValue@details_abi@wil@@CAJPEAXPEAJ@Z @ 0x1800E08A4 (-GetValueFromSemaphore@SemaphoreValue@details_abi@wil@@CAJPEAXPEAJ@Z.c)
 *     __security_check_cookie @ 0x1800E1200 (__security_check_cookie.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1801517F4 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180151814 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall wil::details_abi::SemaphoreValue::TryGetValueInternal(
        size_t *a1,
        __int64 a2,
        unsigned __int64 *a3,
        bool *a4)
{
  unsigned int v4; // ebx
  __int64 v6; // rcx
  WCHAR *v7; // rax
  __int64 v8; // rax
  WCHAR *v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // r8
  char *v12; // rax
  WCHAR v13; // r9
  WCHAR *v14; // rax
  HANDLE v15; // rax
  int ValueFromSemaphore; // eax
  int v17; // esi
  __int64 v18; // rcx
  WCHAR *v19; // rax
  __int64 v20; // rax
  WCHAR *v21; // rdx
  __int64 v22; // rdi
  __int64 v23; // rcx
  char *v24; // rax
  WCHAR v25; // r8
  WCHAR *v26; // rax
  HANDLE v27; // rax
  const char *v28; // r9
  int v29; // eax
  int LastError; // edi
  const char *v31; // r9
  int v33; // [rsp+20h] [rbp-E0h] BYREF
  int v34; // [rsp+24h] [rbp-DCh] BYREF
  HANDLE v35; // [rsp+28h] [rbp-D8h] BYREF
  HANDLE v36[2]; // [rsp+30h] [rbp-D0h] BYREF
  WCHAR Name[264]; // [rsp+40h] [rbp-C0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+278h] [rbp+178h]

  v4 = 0;
  *a3 = 0LL;
  StringCchCopyW(Name, 0x104uLL, a1);
  v6 = 260LL;
  v7 = Name;
  do
  {
    if ( !*v7 )
      break;
    ++v7;
    --v6;
  }
  while ( v6 );
  if ( v6 )
    v8 = 260 - v6;
  else
    v8 = 0LL;
  if ( v6 )
  {
    v9 = &Name[v8];
    v10 = 260 - v8;
    if ( v8 != 260 )
    {
      v11 = 2147483646LL;
      v12 = (char *)((char *)L"_p0" - (char *)v9);
      do
      {
        if ( !v11 )
          break;
        v13 = *(WCHAR *)((char *)v9 + (_QWORD)v12);
        if ( !v13 )
          break;
        *v9 = v13;
        --v11;
        ++v9;
        --v10;
      }
      while ( v10 );
    }
    v14 = v9 - 1;
    if ( v10 )
      v14 = v9;
    *v14 = 0;
  }
  v15 = OpenSemaphoreW(0x1F0003u, 0, Name);
  v36[0] = v15;
  if ( v15 )
  {
    v34 = 0;
    v33 = 0;
    ValueFromSemaphore = wil::details_abi::SemaphoreValue::GetValueFromSemaphore(v15, &v34);
    v17 = ValueFromSemaphore;
    if ( ValueFromSemaphore < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xCF,
        (unsigned int)"wil",
        (const char *)(unsigned int)ValueFromSemaphore,
        v33);
      v4 = v17;
      goto LABEL_36;
    }
    v18 = 260LL;
    v19 = Name;
    do
    {
      if ( !*v19 )
        break;
      ++v19;
      --v18;
    }
    while ( v18 );
    if ( v18 )
      v20 = 260 - v18;
    else
      v20 = 0LL;
    if ( v18 )
    {
      v21 = &Name[v20];
      v22 = 260 - v20;
      if ( 260 != v20 )
      {
        v23 = 2147483646LL;
        v24 = (char *)((char *)L"h" - (char *)v21);
        do
        {
          if ( !v23 )
            break;
          v25 = *(WCHAR *)((char *)v21 + (_QWORD)v24);
          if ( !v25 )
            break;
          *v21 = v25;
          --v23;
          ++v21;
          --v22;
        }
        while ( v22 );
      }
      v26 = v21 - 1;
      if ( v22 )
        v26 = v21;
      *v26 = 0;
    }
    v27 = OpenSemaphoreW(0x1F0003u, 0, Name);
    v35 = v27;
    if ( v27 )
    {
      v29 = wil::details_abi::SemaphoreValue::GetValueFromSemaphore(v27, &v33);
      LastError = v29;
      if ( v29 >= 0 )
      {
        wil::details::unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void wil::details::CloseHandle(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void wil::details::CloseHandle(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>(&v35);
        *a3 = ((__int64)v33 << 31) | v34;
        goto LABEL_36;
      }
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xD7,
        (unsigned int)"wil",
        (const char *)(unsigned int)v29,
        v33);
    }
    else
    {
      LastError = wil::details::in1diag3::Return_GetLastError(retaddr, (void *)0xD5, (unsigned int)"wil", v28);
    }
    wil::details::unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void wil::details::CloseHandle(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void wil::details::CloseHandle(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>(&v35);
    v4 = LastError;
    goto LABEL_36;
  }
  if ( GetLastError() != 2 )
    v4 = wil::details::in1diag3::Return_GetLastError(retaddr, (void *)0xC9, (unsigned int)"wil", v31);
LABEL_36:
  wil::details::unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void wil::details::CloseHandle(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void wil::details::CloseHandle(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>(v36);
  return v4;
}
