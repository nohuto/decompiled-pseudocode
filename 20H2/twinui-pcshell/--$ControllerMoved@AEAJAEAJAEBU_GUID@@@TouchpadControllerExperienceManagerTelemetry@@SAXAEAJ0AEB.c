/*
 * XREFs of ??$ControllerMoved@AEAJAEAJAEBU_GUID@@@TouchpadControllerExperienceManagerTelemetry@@SAXAEAJ0AEBU_GUID@@@Z @ 0x1801E1514
 * Callers:
 *     ?SaveFramePosition@CVirtualTouchpadExperienceManager@@AEAAJXZ @ 0x1801E4E00 (-SaveFramePosition@CVirtualTouchpadExperienceManager@@AEAAJXZ.c)
 * Callees:
 *     _tlgKeywordOn @ 0x18001EC84 (_tlgKeywordOn.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x18004AB5C (_tlgWriteTransfer_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x18008CB20 (__security_check_cookie.c)
 *     ?get@?$static_lazy@VTouchpadControllerExperienceManagerLogging@@@details@wil@@QEAAPEAVTouchpadControllerExperienceManagerLogging@@P6AXXZ@Z @ 0x1801E60E0 (-get@-$static_lazy@VTouchpadControllerExperienceManagerLogging@@@details@wil@@QEAAPEAVTouchpadCo.c)
 */

char __fastcall TouchpadControllerExperienceManagerTelemetry::ControllerMoved<long &,long &,_GUID const &>(
        int *a1,
        int *a2,
        __int128 *a3)
{
  __int64 v6; // rax
  _DWORD *v7; // rcx
  __int64 v8; // rcx
  __int128 v9; // xmm0
  int v11; // [rsp+38h] [rbp-29h] BYREF
  int v12; // [rsp+3Ch] [rbp-25h] BYREF
  __int128 v13; // [rsp+40h] [rbp-21h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v14; // [rsp+58h] [rbp-9h] BYREF
  int *v15; // [rsp+78h] [rbp+17h]
  __int64 v16; // [rsp+80h] [rbp+1Fh]
  int *v17; // [rsp+88h] [rbp+27h]
  __int64 v18; // [rsp+90h] [rbp+2Fh]
  __int128 *v19; // [rsp+98h] [rbp+37h]
  __int64 v20; // [rsp+A0h] [rbp+3Fh]

  v6 = wil::details::static_lazy<TouchpadControllerExperienceManagerLogging>::get(
         a1,
         _lambda_fcbe7e8e9d69bc7433d8ee1b3dc43461_::_lambda_invoker_cdecl_);
  v7 = *(_DWORD **)(v6 + 8);
  if ( *v7 > 5u )
  {
    LOBYTE(v6) = tlgKeywordOn((__int64)v7, 0x400000000000LL);
    if ( (_BYTE)v6 )
    {
      v9 = *a3;
      v11 = *a2;
      v12 = *a1;
      v19 = &v13;
      v17 = &v11;
      v15 = &v12;
      v13 = v9;
      v20 = 16LL;
      v18 = 4LL;
      v16 = 4LL;
      LOBYTE(v6) = tlgWriteTransfer_EventWriteTransfer(v8, (unsigned __int8 *)dword_180503BA1, 0LL, 0LL, 5u, &v14);
    }
  }
  return v6;
}
