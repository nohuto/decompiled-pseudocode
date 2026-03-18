/*
 * XREFs of ?TryGetValueInternal@SemaphoreValue@details_abi@wil@@CAJPEBG_NPEA_KPEA_N@Z @ 0x180027A00
 * Callers:
 *     ?TryGetPointer@SemaphoreValue@details_abi@wil@@SAJPEBGPEAPEAX@Z @ 0x180026B9C (-TryGetPointer@SemaphoreValue@details_abi@wil@@SAJPEBGPEAPEAX@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180024060 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?StringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x180027CD0 (-StringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     ?GetValueFromSemaphore@SemaphoreValue@details_abi@wil@@CAJPEAXPEAJ@Z @ 0x180027E8C (-GetValueFromSemaphore@SemaphoreValue@details_abi@wil@@CAJPEAXPEAJ@Z.c)
 *     ?CloseHandle@details@wil@@YAXPEAX@Z @ 0x1800F6630 (-CloseHandle@details@wil@@YAXPEAX@Z.c)
 *     __security_check_cookie @ 0x180100650 (__security_check_cookie.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180178750 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall wil::details_abi::SemaphoreValue::TryGetValueInternal(
        const unsigned __int16 *a1,
        __int64 a2,
        unsigned __int64 *a3,
        bool *a4)
{
  WCHAR *v5; // rax
  __int64 v6; // r11
  __int64 v7; // r14
  __int64 v8; // r8
  WCHAR *v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // rax
  char *v12; // r8
  WCHAR v13; // r9
  WCHAR *v14; // rax
  wil::details *v15; // rax
  wil::details *v16; // rdi
  void *v17; // rdx
  const char *v18; // r9
  unsigned int LastError; // esi
  WCHAR *v20; // rax
  wil::details *v21; // rax
  const char *v22; // r9
  wil::details *v23; // rbx
  int v24; // eax
  void *v25; // rdx
  int ValueFromSemaphore; // eax
  __int64 v28; // rdx
  WCHAR *v29; // rax
  __int64 v30; // r8
  WCHAR *v31; // rdx
  __int64 v32; // rbx
  char *v33; // rcx
  WCHAR v34; // ax
  void *v35; // rdx
  int v36; // [rsp+20h] [rbp-E0h] BYREF
  int v37[3]; // [rsp+24h] [rbp-DCh] BYREF
  WCHAR Name[264]; // [rsp+30h] [rbp-D0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+278h] [rbp+178h]

  *a3 = 0LL;
  StringCchCopyW(Name, 0x104uLL, a1);
  v5 = Name;
  v6 = 260LL;
  do
  {
    if ( !*v5 )
      break;
    ++v5;
    --v6;
  }
  while ( v6 );
  v7 = 2147483646LL;
  v8 = (260 - v6) & -(__int64)(v6 != 0);
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
  v15 = (wil::details *)OpenSemaphoreW(0x1F0003u, 0, Name);
  v16 = v15;
  if ( !v15 )
  {
    if ( GetLastError() == 2 )
      LastError = 0;
    else
      LastError = wil::details::in1diag3::Return_GetLastError(retaddr, (void *)0xC9, (unsigned int)"wil", v18);
LABEL_16:
    if ( !v16 )
      return LastError;
    goto LABEL_24;
  }
  v37[0] = 0;
  v36 = 0;
  ValueFromSemaphore = wil::details_abi::SemaphoreValue::GetValueFromSemaphore(v15, v37);
  LastError = ValueFromSemaphore;
  if ( ValueFromSemaphore < 0 )
  {
    wil::details::in1diag3::Return_Hr(retaddr, (void *)0xCF, (int)"wil", (const char *)(unsigned int)ValueFromSemaphore);
    goto LABEL_16;
  }
  v28 = 260LL;
  v29 = Name;
  do
  {
    if ( !*v29 )
      break;
    ++v29;
    --v28;
  }
  while ( v28 );
  v30 = (260 - v28) & -(__int64)(v28 != 0);
  if ( v28 )
  {
    v31 = &Name[v30];
    v32 = 260 - v30;
    if ( 260 != v30 )
    {
      v33 = (char *)((char *)L"h" - (char *)v31);
      do
      {
        if ( !v7 )
          break;
        v34 = *(WCHAR *)((char *)v31 + (_QWORD)v33);
        if ( !v34 )
          break;
        *v31 = v34;
        --v7;
        ++v31;
        --v32;
      }
      while ( v32 );
    }
    v20 = v31 - 1;
    if ( v32 )
      v20 = v31;
    *v20 = 0;
  }
  v21 = (wil::details *)OpenSemaphoreW(0x1F0003u, 0, Name);
  v23 = v21;
  if ( v21 )
  {
    v24 = wil::details_abi::SemaphoreValue::GetValueFromSemaphore(v21, &v36);
    LastError = v24;
    if ( v24 < 0 )
    {
      wil::details::in1diag3::Return_Hr(retaddr, (void *)0xD7, (int)"wil", (const char *)(unsigned int)v24);
      wil::details::CloseHandle(v23, v35);
    }
    else
    {
      wil::details::CloseHandle(v23, v25);
      LastError = 0;
      *a3 = v37[0] | (unsigned __int64)((__int64)v36 << 31);
    }
  }
  else
  {
    LastError = wil::details::in1diag3::Return_GetLastError(retaddr, (void *)0xD5, (unsigned int)"wil", v22);
  }
LABEL_24:
  wil::details::CloseHandle(v16, v17);
  return LastError;
}
