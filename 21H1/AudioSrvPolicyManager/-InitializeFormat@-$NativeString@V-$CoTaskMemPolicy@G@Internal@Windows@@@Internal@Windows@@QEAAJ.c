/*
 * XREFs of ?InitializeFormat@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAAJPEBGZZ @ 0x18003E9BC
 * Callers:
 *     ?DoesProfileExistInStore@AssignedAccessConfigStoreV1@AssignedAccess@Internal@Windows@@EEAA_NPEBG@Z @ 0x18003E400 (-DoesProfileExistInStore@AssignedAccessConfigStoreV1@AssignedAccess@Internal@Windows@@EEAA_NPEBG.c)
 *     ?DoesGroupConfigExistInStore@AssignedAccessConfigStoreV1@AssignedAccess@Internal@Windows@@EEAA_NXZ @ 0x18003E610 (-DoesGroupConfigExistInStore@AssignedAccessConfigStoreV1@AssignedAccess@Internal@Windows@@EEAA_N.c)
 *     ?IsGlobalProfileConfiguredInStore@AssignedAccessConfigStoreV2@AssignedAccess@Internal@Windows@@EEAA_NXZ @ 0x18003E800 (-IsGlobalProfileConfiguredInStore@AssignedAccessConfigStoreV2@AssignedAccess@Internal@Windows@@E.c)
 * Callees:
 *     ?_EnsureCapacity@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJ_K@Z @ 0x18003CF0C (-_EnsureCapacity@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJ_.c)
 *     _get_errno @ 0x18003FFEE (_get_errno.c)
 *     _set_errno @ 0x180040044 (_set_errno.c)
 *     _vsnwprintf @ 0x1800400A4 (_vsnwprintf.c)
 */

__int64 Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::InitializeFormat(
        __int64 a1,
        const wchar_t *a2,
        ...)
{
  __int64 v3; // rbp
  unsigned __int64 v5; // r15
  signed int v6; // ebx
  __int64 v7; // rsi
  wchar_t *v8; // r14
  size_t v9; // rsi
  int v10; // eax
  bool v11; // zf
  bool v12; // al
  unsigned __int64 v13; // rcx
  int Value[22]; // [rsp+20h] [rbp-58h] BYREF
  va_list Args; // [rsp+90h] [rbp+18h] BYREF

  va_start(Args, a2);
  v3 = -1LL;
  v5 = 32LL;
  while ( 1 )
  {
    v6 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_EnsureCapacity(a1, v5);
    if ( v6 < 0 )
      break;
    v7 = *(_QWORD *)(a1 + 16);
    v8 = *(wchar_t **)a1;
    set_errno(0);
    v6 = 0;
    if ( (unsigned __int64)(v7 - 1) > 0x7FFFFFFE )
      v6 = -2147024809;
    if ( v6 < 0 )
    {
      if ( v7 )
        *v8 = 0;
    }
    else
    {
      v9 = v7 - 1;
      v6 = 0;
      v10 = vsnwprintf(v8, v9, a2, Args);
      if ( v10 < 0 || v10 > v9 )
      {
        v8[v9] = 0;
        v6 = -2147024774;
      }
      else if ( v10 == v9 )
      {
        v8[v9] = 0;
      }
    }
    v11 = v6 == -2147024774;
    if ( v6 == -2147024774 )
    {
      get_errno(Value);
      v6 = -2147024809;
      if ( Value[0] != 22 )
        v6 = -2147024774;
      v11 = v6 == -2147024774;
    }
    v12 = v11;
    if ( v11 )
    {
      v13 = *(_QWORD *)(a1 + 16);
      v5 = -1LL;
      if ( v13 + 32 >= v13 )
        v5 = v13 + 32;
      v6 = v13 + 32 < v13 ? 0x80070216 : 0;
      v12 = v13 + 32 >= v13;
    }
    if ( !v12 )
    {
      if ( v6 >= 0 )
        goto LABEL_26;
      break;
    }
  }
  if ( *(_QWORD *)a1 )
  {
    CoTaskMemFree(*(LPVOID *)a1);
    *(_QWORD *)a1 = 0LL;
  }
  *(_QWORD *)(a1 + 16) = 0LL;
  v3 = 0LL;
LABEL_26:
  *(_QWORD *)(a1 + 8) = v3;
  return (unsigned int)v6;
}
