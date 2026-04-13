/*
 * XREFs of ?ReportFailure@details@wil@@YAXPEAXIPEBD110W4FailureType@2@JPEBGW4ReportFailureOptions@12@@Z @ 0x180005690
 * Callers:
 *     ?ReportFailure_CaughtExceptionCommon@details@wil@@YAJPEAXIPEBD110W4FailureType@2@PEAG_KW4SupportedExceptions@2@@Z @ 0x1800057CC (-ReportFailure_CaughtExceptionCommon@details@wil@@YAJPEAXIPEBD110W4FailureType@2@PEAG_KW4Support.c)
 *     ?ReportFailure_Msg@details@wil@@YAXPEAXIPEBD110W4FailureType@2@J1PEAD@Z @ 0x1800058D4 (-ReportFailure_Msg@details@wil@@YAXPEAXIPEBD110W4FailureType@2@J1PEAD@Z.c)
 *     ?ReportFailure_Hr@details@wil@@YAXPEAXIPEBD110W4FailureType@2@J@Z @ 0x1800059E4 (-ReportFailure_Hr@details@wil@@YAXPEAXIPEBD110W4FailureType@2@J@Z.c)
 *     ?ReportFailure_GetLastError@details@wil@@YAKPEAXIPEBD110W4FailureType@2@@Z @ 0x180005A34 (-ReportFailure_GetLastError@details@wil@@YAKPEAXIPEBD110W4FailureType@2@@Z.c)
 *     ?ReportFailure_GetLastErrorHr@details@wil@@YAJPEAXIPEBD110W4FailureType@2@@Z @ 0x180005B08 (-ReportFailure_GetLastErrorHr@details@wil@@YAJPEAXIPEBD110W4FailureType@2@@Z.c)
 *     ?ReportFailure_NtStatus@details@wil@@YAJPEAXIPEBD110W4FailureType@2@J@Z @ 0x180005BD8 (-ReportFailure_NtStatus@details@wil@@YAJPEAXIPEBD110W4FailureType@2@J@Z.c)
 *     ?ReportFailure_Win32@details@wil@@YAJPEAXIPEBD110W4FailureType@2@K@Z @ 0x180029C10 (-ReportFailure_Win32@details@wil@@YAJPEAXIPEBD110W4FailureType@2@K@Z.c)
 * Callees:
 *     ?RethrowCaughtException@wil@@YAXXZ @ 0x18000502C (-RethrowCaughtException@wil@@YAXXZ.c)
 *     ?ThrowResultException@wil@@YAXAEBUFailureInfo@1@@Z @ 0x180005050 (-ThrowResultException@wil@@YAXAEBUFailureInfo@1@@Z.c)
 *     ?LogFailure@details@wil@@YAXPEAXIPEBD110W4FailureType@2@JPEBG_NPEAG_KPEAD6PEAUFailureInfo@2@@Z @ 0x180005338 (-LogFailure@details@wil@@YAXPEAXIPEBD110W4FailureType@2@JPEBG_NPEAG_KPEAD6PEAUFailureInfo@2@@Z.c)
 *     ?WilFailFast@details@wil@@YAXAEBUFailureInfo@2@@Z @ 0x1800055F4 (-WilFailFast@details@wil@@YAXAEBUFailureInfo@2@@Z.c)
 *     __security_check_cookie @ 0x1800CD6D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800CEB10 (_guard_dispatch_icall_nop.c)
 *     _alloca_probe @ 0x1800CEB30 (_alloca_probe.c)
 */

void __fastcall wil::details::ReportFailure(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        int a7,
        unsigned int a8,
        _WORD *a9,
        char a10)
{
  bool v10; // di
  const struct wil::FailureInfo *v11; // rdx
  wil *v12; // rcx
  const struct wil::FailureInfo *v13; // rdx
  __int64 v14; // [rsp+48h] [rbp-14F0h]
  __int64 v15; // [rsp+58h] [rbp-14E0h]
  __int64 v16; // [rsp+68h] [rbp-14D0h]
  _BYTE v17[144]; // [rsp+80h] [rbp-14B8h] BYREF
  char v18[1024]; // [rsp+110h] [rbp-1428h] BYREF
  WCHAR v19[2048]; // [rsp+510h] [rbp-1028h] BYREF

  v10 = !a7 && (a10 & 4) == 0 && g_pfnThrowPlatformException;
  wil::details::LogFailure(a1, a2, a3, a4, a5, a6, a7, a8, a9, v14, v19, v15, v18, v16, (unsigned __int64)v17);
  if ( (a10 & 2) == 0 )
  {
    if ( a7 == 3 )
      wil::details::WilFailFast((wil::details *)v17, v11);
    if ( !a7 )
    {
      if ( v10 )
        ((void (__fastcall *)(_BYTE *, WCHAR *))g_pfnThrowPlatformException)(v17, v19);
      if ( (a10 & 4) != 0 )
        wil::RethrowCaughtException(v12);
      wil::ThrowResultException((wil *)v17, v11);
      wil::details::WilFailFast((wil::details *)v17, v13);
    }
  }
}
