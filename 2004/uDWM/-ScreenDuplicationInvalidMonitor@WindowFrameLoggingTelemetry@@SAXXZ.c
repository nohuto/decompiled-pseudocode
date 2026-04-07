/*
 * XREFs of ?ScreenDuplicationInvalidMonitor@WindowFrameLoggingTelemetry@@SAXXZ @ 0x18008EDE4
 * Callers:
 *     ?UpdateOutputDuplication@CProjectionBorderManager@@UEAAJPEBU_D3DKMT_OUTPUTDUPL_LOWBOX_CONTEXTS_@@@Z @ 0x180090E10 (-UpdateOutputDuplication@CProjectionBorderManager@@UEAAJPEBU_D3DKMT_OUTPUTDUPL_LOWBOX_CONTEXTS_@.c)
 * Callees:
 *     _tlgWriteTransfer_EtwEventWriteTransfer @ 0x1800057B8 (_tlgWriteTransfer_EtwEventWriteTransfer.c)
 *     ?get@?$static_lazy@VWindowFrameLogging@@@details@wil@@QEAAPEAVWindowFrameLogging@@P6AXXZ@Z @ 0x18002E3D8 (-get@-$static_lazy@VWindowFrameLogging@@@details@wil@@QEAAPEAVWindowFrameLogging@@P6AXXZ@Z.c)
 *     __security_check_cookie @ 0x180053520 (__security_check_cookie.c)
 */

void __fastcall WindowFrameLoggingTelemetry::ScreenDuplicationInvalidMonitor(__int64 a1)
{
  __int64 v1; // rcx
  _BYTE v2[32]; // [rsp+30h] [rbp-38h] BYREF

  v1 = wil::details::static_lazy<WindowFrameLogging>::get(
         a1,
         _lambda_e6d4de8c865c86d40bfbebb968f8a12c_::_lambda_invoker_cdecl_)[1];
  if ( *(_DWORD *)v1 > 5u
    && (*(_QWORD *)(v1 + 16) & 0x200000000000LL) != 0
    && (*(_QWORD *)(v1 + 24) & 0x200000000000LL) == *(_QWORD *)(v1 + 24) )
  {
    tlgWriteTransfer_EtwEventWriteTransfer(v1, byte_1800D0C58, 0LL, 0LL, 2, (__int64)v2);
  }
}
