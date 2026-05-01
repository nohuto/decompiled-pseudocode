/*
 * XREFs of ?ReportFailure@details@wil@@YAXPEAXIPEBD110W4FailureType@2@JPEBGW4ReportFailureOptions@12@@Z @ 0x1800056D0
 * Callers:
 *     ?ReportFailure_NtStatus@details@wil@@YAJPEAXIPEBD110W4FailureType@2@J@Z @ 0x180005754 (-ReportFailure_NtStatus@details@wil@@YAJPEAXIPEBD110W4FailureType@2@J@Z.c)
 * Callees:
 *     ?LogFailure@details@wil@@YAXPEAXIPEBD110W4FailureType@2@JPEBG_NPEAG_KPEAD6PEAUFailureInfo@2@@Z @ 0x1800054CC (-LogFailure@details@wil@@YAXPEAXIPEBD110W4FailureType@2@JPEBG_NPEAG_KPEAD6PEAUFailureInfo@2@@Z.c)
 *     __security_check_cookie @ 0x1800062A0 (__security_check_cookie.c)
 *     _alloca_probe @ 0x180006B90 (_alloca_probe.c)
 */

void __fastcall wil::details::ReportFailure(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        unsigned int a8)
{
  __int64 v8; // [rsp+20h] [rbp-1508h]
  __int64 v9; // [rsp+30h] [rbp-14F8h]
  __int64 v10; // [rsp+40h] [rbp-14E8h]
  __int64 v11; // [rsp+48h] [rbp-14E0h]
  __int64 v12; // [rsp+58h] [rbp-14D0h]
  __int64 v13; // [rsp+68h] [rbp-14C0h]
  _BYTE v14[144]; // [rsp+80h] [rbp-14A8h] BYREF
  char v15[1024]; // [rsp+110h] [rbp-1418h] BYREF
  _BYTE v16[4096]; // [rsp+510h] [rbp-1018h] BYREF

  wil::details::LogFailure(a1, a2, a3, a4, v8, a6, v9, a8, v10, v11, (wil *)v16, v12, v15, v13, (unsigned __int64)v14);
}
