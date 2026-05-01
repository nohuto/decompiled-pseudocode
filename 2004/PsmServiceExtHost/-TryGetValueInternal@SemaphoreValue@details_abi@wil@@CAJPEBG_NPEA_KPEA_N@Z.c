/*
 * XREFs of ?TryGetValueInternal@SemaphoreValue@details_abi@wil@@CAJPEBG_NPEA_KPEA_N@Z @ 0x18003AE1C
 * Callers:
 *     ?TryGetPointer@SemaphoreValue@details_abi@wil@@SAJPEBGPEAPEAX@Z @ 0x18003ADB8 (-TryGetPointer@SemaphoreValue@details_abi@wil@@SAJPEBGPEAPEAX@Z.c)
 * Callees:
 *     ?StringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x180026980 (-StringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     ?CloseHandle@details@wil@@YAXPEAX@Z @ 0x180038004 (-CloseHandle@details@wil@@YAXPEAX@Z.c)
 *     ?GetValueFromSemaphore@SemaphoreValue@details_abi@wil@@CAJPEAXPEAJ@Z @ 0x18003B04C (-GetValueFromSemaphore@SemaphoreValue@details_abi@wil@@CAJPEAXPEAJ@Z.c)
 *     __security_check_cookie @ 0x180044E00 (__security_check_cookie.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180065FCC (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180065FEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall wil::details_abi::SemaphoreValue::TryGetValueInternal(
        char *a1,
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
  int ValueFromSemaphore; // eax
  unsigned int v17; // r8d
  unsigned int LastError; // esi
  __int64 v19; // rcx
  WCHAR *v20; // rax
  __int64 v21; // rax
  WCHAR *v22; // rdx
  __int64 v23; // rbx
  __int64 v24; // rcx
  char *v25; // r8
  WCHAR v26; // ax
  WCHAR *v27; // rax
  wil::details *v28; // rax
  unsigned int v29; // r8d
  const char *v30; // r9
  wil::details *v31; // rbx
  int v32; // eax
  void *v33; // rdx
  unsigned int v34; // r8d
  void *v35; // rdx
  __int64 v37; // rdx
  void *v38; // rdx
  int v39; // [rsp+28h] [rbp-E0h] BYREF
  int v40[3]; // [rsp+2Ch] [rbp-DCh] BYREF
  WCHAR Name[264]; // [rsp+38h] [rbp-D0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+270h] [rbp+168h]

  *a3 = 0LL;
  StringCchCopyW((char *)Name, 260LL, a1);
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
      goto LABEL_34;
    v37 = 201LL;
    goto LABEL_42;
  }
  v40[0] = 0;
  v39 = 0;
  ValueFromSemaphore = wil::details_abi::SemaphoreValue::GetValueFromSemaphore(v14, v40);
  LastError = ValueFromSemaphore;
  if ( ValueFromSemaphore < 0 )
  {
    wil::details::in1diag3::Return_Hr(retaddr, (void *)0xCF, v17, (const char *)(unsigned int)ValueFromSemaphore, v39);
    goto LABEL_35;
  }
  v19 = 260LL;
  v20 = Name;
  do
  {
    if ( !*v20 )
      break;
    ++v20;
    --v19;
  }
  while ( v19 );
  if ( v19 )
    v21 = 260 - v19;
  else
    v21 = 0LL;
  if ( v19 )
  {
    v22 = &Name[v21];
    v23 = 260 - v21;
    if ( 260 != v21 )
    {
      v24 = 2147483646LL;
      v25 = (char *)((char *)L"h" - (char *)v22);
      do
      {
        if ( !v24 )
          break;
        v26 = *(WCHAR *)((char *)v22 + (_QWORD)v25);
        if ( !v26 )
          break;
        *v22 = v26;
        --v24;
        ++v22;
        --v23;
      }
      while ( v23 );
    }
    v27 = v22 - 1;
    if ( v23 )
      v27 = v22;
    *v27 = 0;
  }
  v28 = (wil::details *)OpenSemaphoreW(0x1F0003u, 0, Name);
  v31 = v28;
  if ( !v28 )
  {
    v37 = 213LL;
LABEL_42:
    LastError = wil::details::in1diag3::Return_GetLastError(retaddr, (void *)v37, v29, v30);
    goto LABEL_35;
  }
  v32 = wil::details_abi::SemaphoreValue::GetValueFromSemaphore(v28, &v39);
  LastError = v32;
  if ( v32 >= 0 )
  {
    wil::details::CloseHandle(v31, v33);
    *a3 = ((__int64)v39 << 31) | v40[0];
LABEL_34:
    LastError = 0;
    goto LABEL_35;
  }
  wil::details::in1diag3::Return_Hr(retaddr, (void *)0xD7, v34, (const char *)(unsigned int)v32, v39);
  wil::details::CloseHandle(v31, v38);
LABEL_35:
  if ( v15 )
    wil::details::CloseHandle(v15, v35);
  return LastError;
}
