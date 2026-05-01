/*
 * XREFs of ?ConcatFormat@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAAJPEBGZZ @ 0x180033138
 * Callers:
 *     ?IImmersiveApplication_GetNormalDisplayNameWithTitleSafe@@YAJPEAUIImmersiveApplication@@PEAUIImmersiveApplicationManagerSafeForSyncCallouts@@PEAPEAG@Z @ 0x180032CB8 (-IImmersiveApplication_GetNormalDisplayNameWithTitleSafe@@YAJPEAUIImmersiveApplication@@PEAUIImm.c)
 *     ?GetViewName@ApplicationViewTraceLoggingHelpers@@YAJPEAUIApplicationView@@PEAPEAG@Z @ 0x1803F85F4 (-GetViewName@ApplicationViewTraceLoggingHelpers@@YAJPEAUIApplicationView@@PEAPEAG@Z.c)
 * Callees:
 *     ?_EnsureCount@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x180033108 (-_EnsureCount@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 *     ?StringCchCopyNW@@YAJPEAG_KPEBG1@Z @ 0x180033218 (-StringCchCopyNW@@YAJPEAG_KPEBG1@Z.c)
 *     ??$_InitializeHelper@V_lambda_fe718337787c493ce2d833414db25eba_@@@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJPEBGPEADAEBV_lambda_fe718337787c493ce2d833414db25eba_@@@Z @ 0x1800332AC (--$_InitializeHelper@V_lambda_fe718337787c493ce2d833414db25eba_@@@-$NativeString@V-$CoTaskMemPol.c)
 *     ?_EnsureCapacity@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJ_K@Z @ 0x180034E80 (-_EnsureCapacity@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJ_.c)
 */

__int64 Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::ConcatFormat(
        _QWORD *a1,
        __int64 a2,
        ...)
{
  int v3; // eax
  unsigned __int16 *v4; // rdi
  int v5; // esi
  unsigned __int64 v6; // rbx
  __int64 v7; // rcx
  LPVOID pv; // [rsp+20h] [rbp-48h] BYREF
  unsigned __int64 v10; // [rsp+28h] [rbp-40h]
  __int64 v11; // [rsp+30h] [rbp-38h]
  va_list va; // [rsp+80h] [rbp+18h] BYREF

  va_start(va, a2);
  if ( !*a1 || !*(_WORD *)*a1 )
    return (unsigned int)Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_InitializeHelper<_lambda_fe718337787c493ce2d833414db25eba_>(
                           a1,
                           a2,
                           (__int64 *)va);
  pv = 0LL;
  v10 = 0LL;
  v11 = 0LL;
  v3 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_InitializeHelper<_lambda_fe718337787c493ce2d833414db25eba_>(
         &pv,
         a2,
         (__int64 *)va);
  v4 = (unsigned __int16 *)pv;
  v5 = v3;
  if ( v3 < 0 )
    goto LABEL_10;
  v6 = v10;
  if ( v10 == -1LL )
  {
    if ( pv )
    {
      do
        ++v6;
      while ( *((_WORD *)pv + v6) );
    }
    else
    {
      v6 = 0LL;
    }
  }
  v5 = 0;
  if ( pv )
  {
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_EnsureCount(a1);
    v5 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_EnsureCapacity(
           v7,
           v6 + a1[1]);
    if ( v5 >= 0 )
    {
      StringCchCopyNW((unsigned __int16 *)(*a1 + 2LL * a1[1]), v6 + 1, v4, v6);
      a1[1] += v6;
    }
LABEL_10:
    if ( v4 )
      CoTaskMemFree(v4);
  }
  return (unsigned int)v5;
}
