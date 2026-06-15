/*
 * XREFs of ?TryGetValueInternal@SemaphoreValue@details_abi@wil@@CAJPEBG_NPEA_KPEA_N@Z @ 0x140014F18
 * Callers:
 *     ?TryGetPointer@SemaphoreValue@details_abi@wil@@SAJPEBGPEAPEAX@Z @ 0x140015388 (-TryGetPointer@SemaphoreValue@details_abi@wil@@SAJPEBGPEAPEAX@Z.c)
 * Callees:
 *     ?StringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x140014A14 (-StringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14001B400 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CloseHandle@details@wil@@YAXPEAX@Z @ 0x14001B7B0 (-CloseHandle@details@wil@@YAXPEAX@Z.c)
 *     __security_check_cookie @ 0x14001CFC0 (__security_check_cookie.c)
 *     ?GetValueFromSemaphore@SemaphoreValue@details_abi@wil@@CAJPEAXPEAJ@Z @ 0x14003B618 (-GetValueFromSemaphore@SemaphoreValue@details_abi@wil@@CAJPEAXPEAJ@Z.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x14003C084 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall wil::details_abi::SemaphoreValue::TryGetValueInternal(
        size_t *a1,
        __int64 a2,
        unsigned __int64 *a3,
        bool *a4)
{
  __int64 v5; // rcx
  WCHAR *v6; // rax
  __int64 v7; // rax
  WCHAR *v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // r8
  char *v11; // rax
  WCHAR v12; // r9
  WCHAR *v13; // rax
  wil::details *v14; // rax
  wil::details *v15; // rdi
  void *v16; // rdx
  const char *v17; // r9
  unsigned int LastError; // esi
  __int64 v20; // rdx
  int ValueFromSemaphore; // eax
  __int64 v22; // rcx
  WCHAR *v23; // rax
  __int64 v24; // rax
  WCHAR *v25; // rdx
  __int64 v26; // rbx
  __int64 v27; // rcx
  char *v28; // r8
  WCHAR v29; // ax
  WCHAR *v30; // rax
  wil::details *v31; // rax
  wil::details *v32; // rbx
  int v33; // eax
  void *v34; // rdx
  void *v35; // rdx
  int v36; // [rsp+28h] [rbp-E0h] BYREF
  int v37[3]; // [rsp+2Ch] [rbp-DCh] BYREF
  WCHAR Name[264]; // [rsp+38h] [rbp-D0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+270h] [rbp+168h]

  *a3 = 0LL;
  StringCchCopyW(Name, 0x104uLL, a1);
  v5 = 260LL;
  v6 = Name;
  do
  {
    if ( !*v6 )
      break;
    ++v6;
    --v5;
  }
  while ( v5 );
  if ( v5 )
    v7 = 260 - v5;
  else
    v7 = 0LL;
  if ( v5 )
  {
    v8 = &Name[v7];
    v9 = 260 - v7;
    if ( v7 != 260 )
    {
      v10 = 2147483646LL;
      v11 = (char *)((char *)L"_p0" - (char *)v8);
      do
      {
        if ( !v10 )
          break;
        v12 = *(WCHAR *)((char *)v8 + (_QWORD)v11);
        if ( !v12 )
          break;
        *v8 = v12;
        --v10;
        ++v8;
        --v9;
      }
      while ( v9 );
    }
    v13 = v8 - 1;
    if ( v9 )
      v13 = v8;
    *v13 = 0;
  }
  v14 = (wil::details *)OpenSemaphoreW(0x1F0003u, 0, Name);
  v15 = v14;
  if ( !v14 )
  {
    if ( GetLastError() == 2 )
    {
LABEL_17:
      LastError = 0;
      goto LABEL_18;
    }
    v20 = 201LL;
    goto LABEL_24;
  }
  v37[0] = 0;
  v36 = 0;
  ValueFromSemaphore = wil::details_abi::SemaphoreValue::GetValueFromSemaphore(v14, v37);
  LastError = ValueFromSemaphore;
  if ( ValueFromSemaphore >= 0 )
  {
    v22 = 260LL;
    v23 = Name;
    do
    {
      if ( !*v23 )
        break;
      ++v23;
      --v22;
    }
    while ( v22 );
    if ( v22 )
      v24 = 260 - v22;
    else
      v24 = 0LL;
    if ( v22 )
    {
      v25 = &Name[v24];
      v26 = 260 - v24;
      if ( 260 != v24 )
      {
        v27 = 2147483646LL;
        v28 = (char *)((char *)L"h" - (char *)v25);
        do
        {
          if ( !v27 )
            break;
          v29 = *(WCHAR *)((char *)v25 + (_QWORD)v28);
          if ( !v29 )
            break;
          *v25 = v29;
          --v27;
          ++v25;
          --v26;
        }
        while ( v26 );
      }
      v30 = v25 - 1;
      if ( v26 )
        v30 = v25;
      *v30 = 0;
    }
    v31 = (wil::details *)OpenSemaphoreW(0x1F0003u, 0, Name);
    v32 = v31;
    if ( !v31 )
    {
      v20 = 213LL;
LABEL_24:
      LastError = wil::details::in1diag3::Return_GetLastError(retaddr, (void *)v20, (unsigned int)"wil", v17);
      goto LABEL_18;
    }
    v33 = wil::details_abi::SemaphoreValue::GetValueFromSemaphore(v31, &v36);
    LastError = v33;
    if ( v33 >= 0 )
    {
      wil::details::CloseHandle(v32, v34);
      *a3 = ((__int64)v36 << 31) | v37[0];
      goto LABEL_17;
    }
    wil::details::in1diag3::Return_Hr(retaddr, (void *)0xD7, (unsigned int)"wil", (const char *)(unsigned int)v33, v36);
    wil::details::CloseHandle(v32, v35);
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xCF,
      (unsigned int)"wil",
      (const char *)(unsigned int)ValueFromSemaphore,
      v36);
  }
LABEL_18:
  if ( v15 )
    wil::details::CloseHandle(v15, v16);
  return LastError;
}
