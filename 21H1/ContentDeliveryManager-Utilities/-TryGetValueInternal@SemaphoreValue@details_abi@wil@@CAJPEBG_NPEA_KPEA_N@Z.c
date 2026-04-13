/*
 * XREFs of ?TryGetValueInternal@SemaphoreValue@details_abi@wil@@CAJPEBG_NPEA_KPEA_N@Z @ 0x1800064A0
 * Callers:
 *     ?Acquire@?$ProcessLocalStorageData@VFeatureStateData@details_abi@wil@@@details_abi@wil@@SAJPEBDPEAPEAV123@@Z @ 0x180016184 (-Acquire@-$ProcessLocalStorageData@VFeatureStateData@details_abi@wil@@@details_abi@wil@@SAJPEBDP.c)
 *     ?Acquire@?$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil@@SAJPEBDPEAPEAV123@@Z @ 0x18001674C (-Acquire@-$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil@@SAJPEBDP.c)
 * Callees:
 *     ?StringCchCatW@@YAJPEAG_KPEBG@Z @ 0x180004038 (-StringCchCatW@@YAJPEAG_KPEBG@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180005D48 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180005D80 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ?CloseHandle@details@wil@@YAXPEAX@Z @ 0x180005F80 (-CloseHandle@details@wil@@YAXPEAX@Z.c)
 *     ?GetValueFromSemaphore@SemaphoreValue@details_abi@wil@@CAJPEAXPEAJ@Z @ 0x18000630C (-GetValueFromSemaphore@SemaphoreValue@details_abi@wil@@CAJPEAXPEAJ@Z.c)
 *     __security_check_cookie @ 0x1800CB070 (__security_check_cookie.c)
 */

__int64 __fastcall wil::details_abi::SemaphoreValue::TryGetValueInternal(
        char *a1,
        __int64 a2,
        unsigned __int64 *a3,
        bool *a4)
{
  __int64 v4; // r9
  WCHAR *v5; // rdx
  signed __int64 v6; // rcx
  WCHAR v8; // ax
  WCHAR *v9; // rax
  wil::details *v10; // rax
  wil::details *v11; // rdi
  void *v12; // rdx
  const char *v13; // r9
  __int64 v14; // rdx
  unsigned int LastError; // esi
  int ValueFromSemaphore; // eax
  wil::details *v17; // rax
  wil::details *v18; // rbx
  int v19; // eax
  void *v20; // rdx
  void *v21; // rdx
  int v23; // [rsp+28h] [rbp-E0h] BYREF
  int v24[3]; // [rsp+2Ch] [rbp-DCh] BYREF
  WCHAR Name[264]; // [rsp+38h] [rbp-D0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+270h] [rbp+168h]

  *a3 = 0LL;
  v4 = 260LL;
  v5 = Name;
  v6 = a1 - (char *)Name;
  do
  {
    if ( v4 == -2147483386 )
      break;
    v8 = *(WCHAR *)((char *)v5 + v6);
    if ( !v8 )
      break;
    *v5++ = v8;
    --v4;
  }
  while ( v4 );
  v9 = v5 - 1;
  if ( v4 )
    v9 = v5;
  *v9 = 0;
  StringCchCatW(Name, 260LL, (char *)L"_p0");
  v10 = (wil::details *)OpenSemaphoreW(0x1F0003u, 0, Name);
  v11 = v10;
  if ( v10 )
  {
    v24[0] = 0;
    v23 = 0;
    ValueFromSemaphore = wil::details_abi::SemaphoreValue::GetValueFromSemaphore(v10, v24);
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
    StringCchCatW(Name, 260LL, (char *)L"h");
    v17 = (wil::details *)OpenSemaphoreW(0x1F0003u, 0, Name);
    v18 = v17;
    if ( !v17 )
    {
      v14 = 213LL;
      goto LABEL_10;
    }
    v19 = wil::details_abi::SemaphoreValue::GetValueFromSemaphore(v17, &v23);
    LastError = v19;
    if ( v19 < 0 )
    {
      wil::details::in1diag3::Return_Hr(retaddr, (void *)0xD7, (__int64)"wil", (const char *)(unsigned int)v19);
      wil::details::CloseHandle(v18, v21);
      goto LABEL_19;
    }
    wil::details::CloseHandle(v18, v20);
    *a3 = ((__int64)v23 << 31) | v24[0];
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
