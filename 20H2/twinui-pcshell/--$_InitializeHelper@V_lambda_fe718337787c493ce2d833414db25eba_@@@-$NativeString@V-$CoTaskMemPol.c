/*
 * XREFs of ??$_InitializeHelper@V_lambda_fe718337787c493ce2d833414db25eba_@@@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJPEBGPEADAEBV_lambda_fe718337787c493ce2d833414db25eba_@@@Z @ 0x18002A40C
 * Callers:
 *     ?ConcatFormat@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAAJPEBGZZ @ 0x18002A298 (-ConcatFormat@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAAJPEBG.c)
 *     ?InitializeResFormat@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAAJPEAUHINSTANCE__@@HZZ @ 0x18031A97C (-InitializeResFormat@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QE.c)
 * Callees:
 *     ?_EnsureCount@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x18002A268 (-_EnsureCount@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 *     __local_stdio_printf_options @ 0x18002BFC4 (__local_stdio_printf_options.c)
 *     ?_Free@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x18007D4C4 (-_Free@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 */

__int64 Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_InitializeHelper<_lambda_fe718337787c493ce2d833414db25eba_>(
        wchar_t **a1,
        const wchar_t *a2,
        va_list a3,
        ...)
{
  unsigned __int64 v5; // rcx
  unsigned __int64 v7; // rsi
  signed int v8; // ebx
  unsigned __int64 v9; // r8
  wchar_t *v10; // rax
  wchar_t *v11; // rsi
  wchar_t *v12; // r14
  size_t v13; // rsi
  unsigned __int64 *v14; // rax
  int v15; // eax
  unsigned __int64 v17; // rdx
  wchar_t *v18; // rax
  unsigned __int64 v19; // rax
  __int64 v20; // [rsp+78h] [rbp+20h] BYREF
  va_list va; // [rsp+78h] [rbp+20h]
  va_list va1; // [rsp+80h] [rbp+28h] BYREF

  va_start(va1, a3);
  va_start(va, a3);
  v20 = va_arg(va1, _QWORD);
  v5 = 32LL;
  while ( 1 )
  {
    v7 = -1LL;
    if ( v5 + 1 >= v5 )
      v7 = v5 + 1;
    v8 = v5 + 1 < v5 ? 0x80070216 : 0;
    if ( v5 + 1 >= v5 )
    {
      v9 = (unsigned __int64)a1[2];
      if ( v9 == -1LL )
      {
        Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_EnsureCount(a1);
        if ( *a1 )
          v9 = (unsigned __int64)a1[1] + 1;
        else
          v9 = 0LL;
        a1[2] = (wchar_t *)v9;
      }
      if ( v9 )
      {
        if ( v7 <= v9 )
          goto LABEL_10;
        if ( !is_mul_ok(v9, 2uLL) )
          goto LABEL_42;
        v17 = v9 + 2048;
        v8 = 0;
        if ( v9 <= 0x800 )
          v17 = 2 * v9;
        if ( v7 <= v17 )
          v7 = v17;
        v18 = (wchar_t *)CoTaskMemRealloc(*a1, 2 * v7);
        if ( v18 )
        {
          a1[2] = (wchar_t *)v7;
          *a1 = v18;
          goto LABEL_10;
        }
      }
      else
      {
        if ( !is_mul_ok(v7, 2uLL) )
          goto LABEL_42;
        v8 = 0;
        v10 = (wchar_t *)CoTaskMemAlloc(2 * v7);
        if ( v10 )
        {
          a1[2] = (wchar_t *)v7;
          *a1 = v10;
          *v10 = 0;
          goto LABEL_10;
        }
      }
      v8 = -2147024882;
    }
LABEL_10:
    if ( v8 < 0 )
      goto LABEL_43;
    v11 = a1[2];
    v12 = *a1;
    _o__set_errno(0LL);
    v8 = 0;
    if ( (unsigned __int64)v11 - 1 > 0x7FFFFFFE )
      v8 = -2147024809;
    if ( v8 < 0 )
    {
      if ( v11 )
        *v12 = 0;
    }
    else
    {
      v8 = 0;
      v13 = (size_t)v11 - 1;
      v14 = _local_stdio_printf_options();
      v15 = __stdio_common_vswprintf(*v14 | 1, v12, v13, a2, 0LL, a3);
      if ( v15 < 0 || v15 > v13 )
      {
        v12[v13] = 0;
        v8 = -2147024774;
      }
      else if ( v15 == v13 )
      {
        v12[v13] = 0;
      }
    }
    if ( v8 != -2147024774 )
      break;
    _o__get_errno((__int64 *)va);
    v8 = -2147024809;
    if ( (_DWORD)v20 != 22 )
      v8 = -2147024774;
    if ( v8 != -2147024774 )
      break;
    v19 = (unsigned __int64)a1[2];
    v5 = v19 + 32;
    if ( v19 + 32 < v19 )
    {
LABEL_42:
      v8 = -2147024362;
      goto LABEL_43;
    }
  }
  if ( v8 >= 0 )
  {
    a1[1] = (wchar_t *)-1LL;
    return (unsigned int)v8;
  }
LABEL_43:
  Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(a1);
  return (unsigned int)v8;
}
