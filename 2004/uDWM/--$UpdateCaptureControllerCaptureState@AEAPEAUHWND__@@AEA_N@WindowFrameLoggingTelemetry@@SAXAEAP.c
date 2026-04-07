/*
 * XREFs of ??$UpdateCaptureControllerCaptureState@AEAPEAUHWND__@@AEA_N@WindowFrameLoggingTelemetry@@SAXAEAPEAUHWND__@@AEA_N@Z @ 0x18008D4A8
 * Callers:
 *     ?UpdateCaptureControllerCaptureState@CProjectionBorderManager@@UEAAJPEAUHWND__@@_N@Z @ 0x180090CE0 (-UpdateCaptureControllerCaptureState@CProjectionBorderManager@@UEAAJPEAUHWND__@@_N@Z.c)
 * Callees:
 *     _tlgWriteTransfer_EtwEventWriteTransfer @ 0x1800057B8 (_tlgWriteTransfer_EtwEventWriteTransfer.c)
 *     ?get@?$static_lazy@VWindowFrameLogging@@@details@wil@@QEAAPEAVWindowFrameLogging@@P6AXXZ@Z @ 0x18002E3D8 (-get@-$static_lazy@VWindowFrameLogging@@@details@wil@@QEAAPEAVWindowFrameLogging@@P6AXXZ@Z.c)
 *     __security_check_cookie @ 0x180053520 (__security_check_cookie.c)
 */

__int64 __fastcall WindowFrameLoggingTelemetry::UpdateCaptureControllerCaptureState<HWND__ * &,bool &>(
        __int64 *a1,
        char *a2)
{
  __int64 result; // rax
  __int64 v5; // rcx
  char v6; // al
  char v7; // [rsp+30h] [rbp-68h] BYREF
  __int64 v8; // [rsp+38h] [rbp-60h] BYREF
  _BYTE v9[32]; // [rsp+40h] [rbp-58h] BYREF
  __int64 *v10; // [rsp+60h] [rbp-38h]
  int v11; // [rsp+68h] [rbp-30h]
  int v12; // [rsp+6Ch] [rbp-2Ch]
  char *v13; // [rsp+70h] [rbp-28h]
  int v14; // [rsp+78h] [rbp-20h]
  int v15; // [rsp+7Ch] [rbp-1Ch]

  result = (__int64)wil::details::static_lazy<WindowFrameLogging>::get(
                      (__int64)a1,
                      _lambda_e6d4de8c865c86d40bfbebb968f8a12c_::_lambda_invoker_cdecl_);
  v5 = *(_QWORD *)(result + 8);
  if ( *(_DWORD *)v5 > 5u && (*(_QWORD *)(v5 + 16) & 0x200000000000LL) != 0 )
  {
    result = *(_QWORD *)(v5 + 24) & 0x200000000000LL;
    if ( result == *(_QWORD *)(v5 + 24) )
    {
      v6 = *a2;
      v15 = 0;
      v12 = 0;
      v7 = v6;
      v8 = *a1;
      v13 = &v7;
      v10 = &v8;
      v14 = 1;
      v11 = 8;
      return tlgWriteTransfer_EtwEventWriteTransfer(v5, byte_1800D0150, 0LL, 0LL, 4, (__int64)v9);
    }
  }
  return result;
}
