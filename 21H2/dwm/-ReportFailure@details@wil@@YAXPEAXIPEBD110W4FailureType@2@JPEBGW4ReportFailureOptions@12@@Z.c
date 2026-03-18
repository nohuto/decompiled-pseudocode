/*
 * XREFs of ?ReportFailure@details@wil@@YAXPEAXIPEBD110W4FailureType@2@JPEBGW4ReportFailureOptions@12@@Z @ 0x140007020
 * Callers:
 *     ?ReportFailure_GetLastError@details@wil@@YAKPEAXIPEBD110W4FailureType@2@@Z @ 0x140007168 (-ReportFailure_GetLastError@details@wil@@YAKPEAXIPEBD110W4FailureType@2@@Z.c)
 *     ?ReportFailure_GetLastErrorHr@details@wil@@YAJPEAXIPEBD110W4FailureType@2@@Z @ 0x140007200 (-ReportFailure_GetLastErrorHr@details@wil@@YAJPEAXIPEBD110W4FailureType@2@@Z.c)
 *     ?ReportFailure_Hr@details@wil@@YAXPEAXIPEBD110W4FailureType@2@J@Z @ 0x140007294 (-ReportFailure_Hr@details@wil@@YAXPEAXIPEBD110W4FailureType@2@J@Z.c)
 *     ?ReportFailure_CaughtExceptionCommon@details@wil@@YAJPEAXIPEBD110W4FailureType@2@PEAG_KW4SupportedExceptions@2@@Z @ 0x14000B45C (-ReportFailure_CaughtExceptionCommon@details@wil@@YAJPEAXIPEBD110W4FailureType@2@PEAG_KW4Support.c)
 *     ?ReportFailure_Msg@details@wil@@YAXPEAXIPEBD110W4FailureType@2@J1PEAD@Z @ 0x14000C8E4 (-ReportFailure_Msg@details@wil@@YAXPEAXIPEBD110W4FailureType@2@J1PEAD@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x140003190 (__security_check_cookie.c)
 *     _alloca_probe @ 0x140004A80 (_alloca_probe.c)
 *     _guard_dispatch_icall_nop @ 0x140004B00 (_guard_dispatch_icall_nop.c)
 *     ?LogFailure@details@wil@@YAXPEAXIPEBD110W4FailureType@2@JPEBG_NPEAG_KPEAD6PEAUFailureInfo@2@@Z @ 0x140006800 (-LogFailure@details@wil@@YAXPEAXIPEBD110W4FailureType@2@JPEBG_NPEAG_KPEAD6PEAUFailureInfo@2@@Z.c)
 *     ?WilFailFast@details@wil@@YAXAEBUFailureInfo@2@@Z @ 0x140007A0C (-WilFailFast@details@wil@@YAXAEBUFailureInfo@2@@Z.c)
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
  __int64 v12; // [rsp+48h] [rbp-14F0h]
  __int64 v13; // [rsp+58h] [rbp-14E0h]
  __int64 v14; // [rsp+68h] [rbp-14D0h]
  _BYTE v15[144]; // [rsp+80h] [rbp-14B8h] BYREF
  char v16[1024]; // [rsp+110h] [rbp-1428h] BYREF
  _BYTE v17[4096]; // [rsp+510h] [rbp-1028h] BYREF

  v10 = !a7 && (a10 & 4) == 0 && g_pfnThrowPlatformException;
  wil::details::LogFailure(a1, a2, a3, a4, a5, a6, a7, a8, a9, v12, (wil *)v17, v13, v16, v14, (unsigned __int64)v15);
  if ( (a10 & 2) == 0 )
  {
    if ( a7 == 3 )
      goto LABEL_16;
    if ( !a7 )
    {
      if ( v10 )
        ((void (__fastcall *)(_BYTE *, _BYTE *))g_pfnThrowPlatformException)(v15, v17);
      if ( (a10 & 4) != 0 && wil::details::g_pfnRethrow )
        wil::details::g_pfnRethrow();
      if ( wil::details::g_pfnThrowResultException )
        wil::details::g_pfnThrowResultException((const struct wil::FailureInfo *)v15);
LABEL_16:
      wil::details::WilFailFast((wil::details *)v15, v11);
    }
  }
}
