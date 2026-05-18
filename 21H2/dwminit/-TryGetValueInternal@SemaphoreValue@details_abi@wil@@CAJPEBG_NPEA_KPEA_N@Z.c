/*
 * XREFs of ?TryGetValueInternal@SemaphoreValue@details_abi@wil@@CAJPEBG_NPEA_KPEA_N@Z @ 0x180003534
 * Callers:
 *     ?Acquire@?$ProcessLocalStorageData@VFeatureStateData@details_abi@wil@@@details_abi@wil@@SAJPEBDPEAPEAV123@@Z @ 0x180006EA0 (-Acquire@-$ProcessLocalStorageData@VFeatureStateData@details_abi@wil@@@details_abi@wil@@SAJPEBDP.c)
 *     ?Acquire@?$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil@@SAJPEBDPEAPEAV123@@Z @ 0x180007460 (-Acquire@-$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil@@SAJPEBDP.c)
 * Callees:
 *     ?StringCchCatW@@YAJPEAG_KPEBG@Z @ 0x1800015B8 (-StringCchCatW@@YAJPEAG_KPEBG@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800023A4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1800023E0 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ?GetValueFromSemaphore@SemaphoreValue@details_abi@wil@@CAJPEAXPEAJ@Z @ 0x1800033BC (-GetValueFromSemaphore@SemaphoreValue@details_abi@wil@@CAJPEAXPEAJ@Z.c)
 *     ??$?8V?$semaphore_t@V?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@Z$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@Uerr_returncode_policy@3@@wil@@@wil@@YA_NAEBV?$unique_any_t@V?$semaphore_t@V?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@Z$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@Uerr_returncode_policy@3@@wil@@@0@$$T@Z @ 0x180007B6C (--$-8V-$semaphore_t@V-$unique_storage@U-$resource_policy@PEAXP6AXPEAX@Z$1-CloseHandle@details@wi.c)
 *     ??$invoke@P6AXPEAU_RTL_SRWLOCK@@@ZAEAPEAU1@@wistd@@YAX$$QEAP6AXPEAU_RTL_SRWLOCK@@@ZAEAPEAU1@@Z @ 0x180007FC0 (--$invoke@P6AXPEAU_RTL_SRWLOCK@@@ZAEAPEAU1@@wistd@@YAX$$QEAP6AXPEAU_RTL_SRWLOCK@@@ZAEAPEAU1@@Z.c)
 *     __security_check_cookie @ 0x18000C690 (__security_check_cookie.c)
 */

__int64 __fastcall wil::details_abi::SemaphoreValue::TryGetValueInternal(
        char *a1,
        __int64 a2,
        unsigned __int64 *a3,
        bool *a4)
{
  WCHAR *v4; // rdx
  signed __int64 v5; // rcx
  __int64 v7; // r9
  WCHAR v8; // ax
  WCHAR *v9; // rax
  void (__fastcall *v10)(wil::details *, void *); // rax
  void (__fastcall *v11)(wil::details *, void *); // rdi
  __int64 v12; // r8
  const char *v13; // r9
  unsigned int LastError; // esi
  int ValueFromSemaphore; // eax
  __int64 v16; // rdx
  __int64 v17; // r8
  void *v18; // rbx
  __int64 v19; // r8
  const char *v20; // r9
  int v21; // eax
  __int64 v22; // r8
  int v24[2]; // [rsp+20h] [rbp-E0h] BYREF
  int v25; // [rsp+28h] [rbp-D8h] BYREF
  int v26[2]; // [rsp+30h] [rbp-D0h] BYREF
  void (__fastcall *v27)(wil::details *, void *); // [rsp+38h] [rbp-C8h] BYREF
  WCHAR Name[264]; // [rsp+40h] [rbp-C0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+288h] [rbp+188h]

  *a3 = 0LL;
  v4 = Name;
  v5 = a1 - (char *)Name;
  v7 = 260LL;
  do
  {
    if ( v7 == -2147483386 )
      break;
    v8 = *(WCHAR *)((char *)v4 + v5);
    if ( !v8 )
      break;
    *v4++ = v8;
    --v7;
  }
  while ( v7 );
  v9 = v4 - 1;
  if ( v7 )
    v9 = v4;
  *v9 = 0;
  StringCchCatW(Name, (__int64)v4, (char *)L"_p0");
  v10 = (void (__fastcall *)(wil::details *, void *))OpenSemaphoreW(0x1F0003u, 0, Name);
  v11 = v10;
  if ( !v10 )
  {
    if ( GetLastError() != 2 )
    {
      LastError = wil::details::in1diag3::Return_GetLastError(retaddr, (void *)0xC9, v12, v13);
      goto LABEL_22;
    }
    goto LABEL_21;
  }
  v26[0] = 0;
  v25 = 0;
  ValueFromSemaphore = wil::details_abi::SemaphoreValue::GetValueFromSemaphore(v10, v26);
  LastError = ValueFromSemaphore;
  if ( ValueFromSemaphore < 0 )
  {
    wil::details::in1diag3::Return_Hr(retaddr, (void *)0xCF, v17, (const char *)(unsigned int)ValueFromSemaphore);
    goto LABEL_22;
  }
  StringCchCatW(Name, v16, (char *)L"h");
  *(_QWORD *)v24 = OpenSemaphoreW(0x1F0003u, 0, Name);
  v18 = *(void **)v24;
  if ( (unsigned __int8)wil::operator==<wil::semaphore_t<wil::details::unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void wil::details::CloseHandle(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>,wil::err_returncode_policy>>(v24) )
  {
    LastError = wil::details::in1diag3::Return_GetLastError(retaddr, (void *)0xD5, v19, v20);
  }
  else
  {
    v21 = wil::details_abi::SemaphoreValue::GetValueFromSemaphore(v18, &v25);
    LastError = v21;
    if ( v21 >= 0 )
    {
      if ( v18 )
      {
        *(_QWORD *)v24 = v18;
        v27 = wil::details::CloseHandle;
        wistd::invoke<void (*)(_RTL_SRWLOCK *),_RTL_SRWLOCK * &>(&v27, v24);
      }
      *a3 = ((__int64)v25 << 31) | v26[0];
LABEL_21:
      LastError = 0;
      goto LABEL_22;
    }
    wil::details::in1diag3::Return_Hr(retaddr, (void *)0xD7, v22, (const char *)(unsigned int)v21);
  }
  if ( v18 )
  {
    *(_QWORD *)v24 = v18;
    *(_QWORD *)v26 = wil::details::CloseHandle;
    wistd::invoke<void (*)(_RTL_SRWLOCK *),_RTL_SRWLOCK * &>(v26, v24);
  }
LABEL_22:
  if ( v11 )
  {
    v27 = v11;
    *(_QWORD *)v24 = wil::details::CloseHandle;
    wistd::invoke<void (*)(_RTL_SRWLOCK *),_RTL_SRWLOCK * &>(v24, &v27);
  }
  return LastError;
}
