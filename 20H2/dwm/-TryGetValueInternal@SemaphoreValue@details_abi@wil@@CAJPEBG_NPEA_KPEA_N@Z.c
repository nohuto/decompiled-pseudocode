/*
 * XREFs of ?TryGetValueInternal@SemaphoreValue@details_abi@wil@@CAJPEBG_NPEA_KPEA_N@Z @ 0x14000776C
 * Callers:
 *     ?Acquire@?$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil@@SAJPEBDPEAPEAV123@@Z @ 0x1400059BC (-Acquire@-$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil@@SAJPEBDP.c)
 * Callees:
 *     __security_check_cookie @ 0x140003190 (__security_check_cookie.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@Z$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x1400058F4 (--1-$unique_storage@U-$resource_policy@PEAXP6AXPEAX@Z$1-CloseHandle@details@wil@@YAX0@ZU-$integr.c)
 *     ?GetValueFromSemaphore@SemaphoreValue@details_abi@wil@@CAJPEAXPEAJ@Z @ 0x140006640 (-GetValueFromSemaphore@SemaphoreValue@details_abi@wil@@CAJPEAXPEAJ@Z.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x14000733C (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14000735C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     StringCopyWorkerW @ 0x1400076A8 (StringCopyWorkerW.c)
 */

__int64 __fastcall wil::details_abi::SemaphoreValue::TryGetValueInternal(
        STRSAFE_PCNZWCH pszSrc,
        __int64 a2,
        unsigned __int64 *a3,
        bool *a4)
{
  unsigned int v4; // ebx
  wchar_t *v6; // rax
  __int64 v7; // r11
  __int64 v8; // rax
  wchar_t *v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // r8
  char *v12; // rax
  wchar_t v13; // r9
  wchar_t *v14; // rax
  wil::details *v15; // rax
  void *v16; // rdx
  __int64 v17; // r8
  const char *v18; // r9
  int ValueFromSemaphore; // eax
  int v20; // esi
  __int64 v21; // rcx
  wchar_t *v22; // rax
  __int64 v23; // rax
  wchar_t *v24; // rdx
  __int64 v25; // rdi
  __int64 v26; // rcx
  char *v27; // rax
  wchar_t v28; // r8
  wchar_t *v29; // rax
  wil::details *v30; // rax
  __int64 v31; // r8
  const char *v32; // r9
  void *v33; // rdx
  unsigned int LastError; // edi
  int v35; // eax
  void *v36; // rdx
  size_t v38; // [rsp+20h] [rbp-E0h]
  int v39; // [rsp+30h] [rbp-D0h] BYREF
  int v40; // [rsp+34h] [rbp-CCh] BYREF
  wil::details *v41; // [rsp+38h] [rbp-C8h] BYREF
  wil::details *v42; // [rsp+40h] [rbp-C0h] BYREF
  wchar_t pszDest[264]; // [rsp+50h] [rbp-B0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+288h] [rbp+188h]

  v4 = 0;
  *a3 = 0LL;
  StringCopyWorkerW(pszDest, 0x104uLL, a3, pszSrc, v38);
  v6 = pszDest;
  v7 = 260LL;
  do
  {
    if ( !*v6 )
      break;
    ++v6;
    --v7;
  }
  while ( v7 );
  if ( v7 )
    v8 = 260 - v7;
  else
    v8 = 0LL;
  if ( v7 )
  {
    v9 = &pszDest[v8];
    v10 = 260 - v8;
    if ( v8 != 260 )
    {
      v11 = 2147483646LL;
      v12 = (char *)((char *)L"_p0" - (char *)v9);
      do
      {
        if ( !v11 )
          break;
        v13 = *(wchar_t *)((char *)v9 + (_QWORD)v12);
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
  v15 = (wil::details *)OpenSemaphoreW(0x1F0003u, 0, pszDest);
  v42 = v15;
  if ( v15 )
  {
    v40 = 0;
    v39 = 0;
    ValueFromSemaphore = wil::details_abi::SemaphoreValue::GetValueFromSemaphore(v15, &v40);
    v20 = ValueFromSemaphore;
    if ( ValueFromSemaphore >= 0 )
    {
      v21 = 260LL;
      v22 = pszDest;
      do
      {
        if ( !*v22 )
          break;
        ++v22;
        --v21;
      }
      while ( v21 );
      if ( v21 )
        v23 = 260 - v21;
      else
        v23 = 0LL;
      if ( v21 )
      {
        v24 = &pszDest[v23];
        v25 = 260 - v23;
        if ( 260 != v23 )
        {
          v26 = 2147483646LL;
          v27 = (char *)((char *)L"h" - (char *)v24);
          do
          {
            if ( !v26 )
              break;
            v28 = *(wchar_t *)((char *)v24 + (_QWORD)v27);
            if ( !v28 )
              break;
            *v24 = v28;
            --v26;
            ++v24;
            --v25;
          }
          while ( v25 );
        }
        v29 = v24 - 1;
        if ( v25 )
          v29 = v24;
        *v29 = 0;
      }
      v30 = (wil::details *)OpenSemaphoreW(0x1F0003u, 0, pszDest);
      v41 = v30;
      if ( v30 )
      {
        v35 = wil::details_abi::SemaphoreValue::GetValueFromSemaphore(v30, &v39);
        LastError = v35;
        if ( v35 >= 0 )
        {
          wil::details::unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void wil::details::CloseHandle(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void wil::details::CloseHandle(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>(
            &v41,
            v36);
          *a3 = ((__int64)v39 << 31) | v40;
          goto LABEL_42;
        }
        wil::details::in1diag3::Return_Hr(retaddr, (void *)0xD7, (__int64)"wil", (const char *)(unsigned int)v35);
      }
      else
      {
        LastError = wil::details::in1diag3::Return_GetLastError(retaddr, (void *)0xD5, v31, v32);
      }
      wil::details::unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void wil::details::CloseHandle(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void wil::details::CloseHandle(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>(
        &v41,
        v33);
      v4 = LastError;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xCF,
        (__int64)"wil",
        (const char *)(unsigned int)ValueFromSemaphore);
      v4 = v20;
    }
  }
  else if ( GetLastError() != 2 )
  {
    v4 = wil::details::in1diag3::Return_GetLastError(retaddr, (void *)0xC9, v17, v18);
  }
LABEL_42:
  wil::details::unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void wil::details::CloseHandle(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void wil::details::CloseHandle(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>(
    &v42,
    v16);
  return v4;
}
