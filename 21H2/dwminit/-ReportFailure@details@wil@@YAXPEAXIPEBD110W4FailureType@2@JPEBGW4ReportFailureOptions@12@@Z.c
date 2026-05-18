/*
 * XREFs of ?ReportFailure@details@wil@@YAXPEAXIPEBD110W4FailureType@2@JPEBGW4ReportFailureOptions@12@@Z @ 0x1800020D4
 * Callers:
 *     ?ReportFailure_Hr@details@wil@@YAXPEAXIPEBD110W4FailureType@2@J@Z @ 0x1800021E0 (-ReportFailure_Hr@details@wil@@YAXPEAXIPEBD110W4FailureType@2@J@Z.c)
 *     ?ReportFailure_GetLastError@details@wil@@YAKPEAXIPEBD110W4FailureType@2@@Z @ 0x180002228 (-ReportFailure_GetLastError@details@wil@@YAKPEAXIPEBD110W4FailureType@2@@Z.c)
 *     ?ReportFailure_GetLastErrorHr@details@wil@@YAJPEAXIPEBD110W4FailureType@2@@Z @ 0x1800022E8 (-ReportFailure_GetLastErrorHr@details@wil@@YAJPEAXIPEBD110W4FailureType@2@@Z.c)
 * Callees:
 *     ?ThrowResultException@wil@@YAXAEBUFailureInfo@1@@Z @ 0x180001D50 (-ThrowResultException@wil@@YAXAEBUFailureInfo@1@@Z.c)
 *     ?LogFailure@details@wil@@YAXPEAXIPEBD110W4FailureType@2@JPEBG_NPEAG_KPEAD6PEAUFailureInfo@2@@Z @ 0x180001D74 (-LogFailure@details@wil@@YAXPEAXIPEBD110W4FailureType@2@JPEBG_NPEAG_KPEAD6PEAUFailureInfo@2@@Z.c)
 *     ?WilFailFast@details@wil@@YAXAEBUFailureInfo@2@@Z @ 0x180002038 (-WilFailFast@details@wil@@YAXAEBUFailureInfo@2@@Z.c)
 *     __security_check_cookie @ 0x18000C690 (__security_check_cookie.c)
 *     _alloca_probe @ 0x18000DE40 (_alloca_probe.c)
 *     _guard_dispatch_icall_nop @ 0x18000DED0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall wil::details::ReportFailure(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        int a7,
        unsigned int a8)
{
  bool v8; // bl
  const struct wil::FailureInfo *v9; // rdx
  const struct wil::FailureInfo *v10; // rdx
  __int64 v11; // [rsp+48h] [rbp-14F0h]
  __int64 v12; // [rsp+58h] [rbp-14E0h]
  __int64 v13; // [rsp+68h] [rbp-14D0h]
  _BYTE v14[144]; // [rsp+80h] [rbp-14B8h] BYREF
  char v15[1024]; // [rsp+110h] [rbp-1428h] BYREF
  _BYTE v16[4096]; // [rsp+510h] [rbp-1028h] BYREF

  v8 = !a7 && g_pfnThrowPlatformException;
  wil::details::LogFailure(a1, a2, a3, a4, a5, a6, a7, a8, 0LL, v11, (wil *)v16, v12, v15, v13, (unsigned __int64)v14);
  if ( a7 == 3 )
    wil::details::WilFailFast((wil::details *)v14, v9);
  if ( !a7 )
  {
    if ( v8 )
      ((void (__fastcall *)(_BYTE *, _BYTE *))g_pfnThrowPlatformException)(v14, v16);
    wil::ThrowResultException((wil *)v14, v9);
    wil::details::WilFailFast((wil::details *)v14, v10);
  }
}
