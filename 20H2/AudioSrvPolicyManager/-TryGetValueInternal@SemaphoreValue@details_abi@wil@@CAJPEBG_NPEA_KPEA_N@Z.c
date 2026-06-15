/*
 * XREFs of ?TryGetValueInternal@SemaphoreValue@details_abi@wil@@CAJPEBG_NPEA_KPEA_N@Z @ 0x180003FA4
 * Callers:
 *     ?Acquire@?$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil@@SAJPEBDPEAPEAV123@@Z @ 0x180004AC4 (-Acquire@-$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil@@SAJPEBDP.c)
 * Callees:
 *     ?StringCchCatW@@YAJPEAG_KPEBG@Z @ 0x18000206C (-StringCchCatW@@YAJPEAG_KPEBG@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003AB0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180003AE8 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ?CloseHandle@details@wil@@YAXPEAX@Z @ 0x180003B8C (-CloseHandle@details@wil@@YAXPEAX@Z.c)
 *     ?GetValueFromSemaphore@SemaphoreValue@details_abi@wil@@CAJPEAXPEAJ@Z @ 0x180003E1C (-GetValueFromSemaphore@SemaphoreValue@details_abi@wil@@CAJPEAXPEAJ@Z.c)
 *     __security_check_cookie @ 0x1800396C0 (__security_check_cookie.c)
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
  wil::details *v10; // rax
  wil::details *v11; // rdi
  void *v12; // rdx
  const char *v13; // r9
  __int64 v14; // rdx
  unsigned int LastError; // esi
  int ValueFromSemaphore; // eax
  __int64 v17; // rdx
  wil::details *v18; // rax
  wil::details *v19; // rbx
  int v20; // eax
  void *v21; // rdx
  void *v22; // rdx
  int v24; // [rsp+28h] [rbp-E0h] BYREF
  int v25[3]; // [rsp+2Ch] [rbp-DCh] BYREF
  WCHAR Name[264]; // [rsp+38h] [rbp-D0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+270h] [rbp+168h]

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
  v10 = (wil::details *)OpenSemaphoreW(0x1F0003u, 0, Name);
  v11 = v10;
  if ( v10 )
  {
    v25[0] = 0;
    v24 = 0;
    ValueFromSemaphore = wil::details_abi::SemaphoreValue::GetValueFromSemaphore(v10, v25);
    LastError = ValueFromSemaphore;
    if ( ValueFromSemaphore < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xCF,
        (__int64)"wil",
        (const char *)(unsigned int)ValueFromSemaphore);
      goto LABEL_19;
    }
    StringCchCatW(Name, v17, (char *)L"h");
    v18 = (wil::details *)OpenSemaphoreW(0x1F0003u, 0, Name);
    v19 = v18;
    if ( !v18 )
    {
      v14 = 213LL;
      goto LABEL_10;
    }
    v20 = wil::details_abi::SemaphoreValue::GetValueFromSemaphore(v18, &v24);
    LastError = v20;
    if ( v20 < 0 )
    {
      wil::details::in1diag3::Return_Hr(retaddr, (void *)0xD7, (__int64)"wil", (const char *)(unsigned int)v20);
      wil::details::CloseHandle(v19, v22);
      goto LABEL_19;
    }
    wil::details::CloseHandle(v19, v21);
    *a3 = ((__int64)v24 << 31) | v25[0];
  }
  else if ( GetLastError() != 2 )
  {
    v14 = 201LL;
LABEL_10:
    LastError = wil::details::in1diag3::Return_GetLastError(retaddr, (void *)v14, (__int64)"wil", v13);
    goto LABEL_19;
  }
  LastError = 0;
LABEL_19:
  if ( v11 )
    wil::details::CloseHandle(v11, v12);
  return LastError;
}
