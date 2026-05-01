/*
 * XREFs of ?IImmersiveApplication_GetNormalDisplayNameWithTitleSafe@@YAJPEAUIImmersiveApplication@@PEAUIImmersiveApplicationManagerSafeForSyncCallouts@@PEAPEAG@Z @ 0x180032A58
 * Callers:
 *     _lambda_34e39aef9b6af58545d6992c86a4e9be_::operator() @ 0x180062E60 (_lambda_34e39aef9b6af58545d6992c86a4e9be_--operator().c)
 *     ?GetViewTitle@ApplicationViewHelpers@@YAJPEAUIApplicationView@@PEAPEAG@Z @ 0x18044E280 (-GetViewTitle@ApplicationViewHelpers@@YAJPEAUIApplicationView@@PEAPEAG@Z.c)
 * Callees:
 *     ?IsBiDiLocale@@YAHK@Z @ 0x18001B8E0 (-IsBiDiLocale@@YAHK@Z.c)
 *     ?ConcatFormat@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAAJPEBGZZ @ 0x180032ED8 (-ConcatFormat@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAAJPEBG.c)
 *     GetThreadUILanguage_0 @ 0x18008E146 (GetThreadUILanguage_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall IImmersiveApplication_GetNormalDisplayNameWithTitleSafe(
        struct IImmersiveApplication *a1,
        struct IImmersiveApplicationManagerSafeForSyncCallouts *a2,
        unsigned __int16 **a3)
{
  __int64 v3; // rax
  int v6; // edi
  __int64 v7; // rcx
  LPVOID v8; // rbx
  LANGID ThreadUILanguage_0; // ax
  int v10; // eax
  const wchar_t *v11; // rdx
  unsigned __int16 *v12; // rax
  void *v13; // rcx
  void *v15; // [rsp+20h] [rbp-30h] BYREF
  __int64 v16; // [rsp+28h] [rbp-28h]
  __int64 v17; // [rsp+30h] [rbp-20h]
  LPVOID pv; // [rsp+38h] [rbp-18h] BYREF
  __int64 v19; // [rsp+40h] [rbp-10h]
  __int64 v20; // [rsp+48h] [rbp-8h]

  *a3 = 0LL;
  v3 = *(_QWORD *)a1;
  pv = 0LL;
  v19 = -1LL;
  v20 = -1LL;
  v6 = (*(__int64 (__fastcall **)(struct IImmersiveApplication *, LPVOID *))(v3 + 376))(a1, &pv);
  if ( v6 >= 0 )
  {
    v7 = *(_QWORD *)a1;
    v15 = 0LL;
    v16 = -1LL;
    v17 = -1LL;
    if ( (*(int (__fastcall **)(struct IImmersiveApplication *, void **))(v7 + 248))(a1, &v15) < 0 )
      goto LABEL_12;
    v8 = pv;
    ThreadUILanguage_0 = GetThreadUILanguage_0();
    v10 = IsBiDiLocale(ThreadUILanguage_0);
    v11 = asc_1804BE1E8;
    if ( !v10 )
      v11 = asc_1804BE1D8;
    if ( (int)Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::ConcatFormat(
                &v15,
                v11,
                v8) < 0 )
    {
LABEL_12:
      v12 = (unsigned __int16 *)pv;
      pv = 0LL;
      v20 = 0LL;
      v19 = 0LL;
      v13 = v15;
    }
    else
    {
      v12 = (unsigned __int16 *)v15;
      v13 = 0LL;
      v17 = 0LL;
      v16 = 0LL;
      v15 = 0LL;
    }
    *a3 = v12;
    if ( v13 )
      CoTaskMemFree(v13);
  }
  if ( pv )
    CoTaskMemFree(pv);
  return (unsigned int)v6;
}
