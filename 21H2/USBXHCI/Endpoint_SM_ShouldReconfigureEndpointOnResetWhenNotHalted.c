/*
 * XREFs of Endpoint_SM_ShouldReconfigureEndpointOnResetWhenNotHalted @ 0x1C0039FB0
 * Callers:
 *     ESM_CheckingIfEndpointShouldBeReconfiguredOnResetWhenNotHalted @ 0x1C004F440 (ESM_CheckingIfEndpointShouldBeReconfiguredOnResetWhenNotHalted.c)
 * Callees:
 *     WPP_RECORDER_SF_ddq @ 0x1C00059E8 (WPP_RECORDER_SF_ddq.c)
 *     __security_check_cookie @ 0x1C0018EB0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00199B0 (_guard_dispatch_icall_nop.c)
 *     Endpoint_AreTransfersPending @ 0x1C0037E2C (Endpoint_AreTransfersPending.c)
 *     WPP_RECORDER_SF_ddqqD @ 0x1C003BC44 (WPP_RECORDER_SF_ddqqD.c)
 */

__int64 __fastcall Endpoint_SM_ShouldReconfigureEndpointOnResetWhenNotHalted(__int64 a1)
{
  __int64 v1; // rsi
  int v3; // edx
  int v4; // r8d
  int v5; // r9d
  __int64 v6; // rdi
  _OWORD v8[2]; // [rsp+50h] [rbp-38h] BYREF
  __int64 v9; // [rsp+70h] [rbp-18h]

  v1 = *(_QWORD *)(a1 + 272);
  memset(v8, 0, sizeof(v8));
  v9 = 0LL;
  LOWORD(v8[0]) = 40;
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _OWORD *))(WdfFunctions_01023 + 2128))(WdfDriverGlobals, v1, v8);
  v6 = *((_QWORD *)&v8[0] + 1);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_ddqqD(*(_QWORD *)(a1 + 80), v3, v4, v5);
  if ( (*(_DWORD *)(v6 + 32) & 1) != 0 || (*(_BYTE *)(a1 + 99) & 3u) < 2 )
    goto LABEL_10;
  if ( Endpoint_AreTransfersPending(a1) )
  {
    if ( *(_BYTE *)(a1 + 37) )
    {
      *(_DWORD *)(a1 + 280) = -1073741823;
      return 21LL;
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_ddq(
        *(_QWORD *)(a1 + 80),
        4u,
        0xDu,
        0x76u,
        (__int64)&WPP_60b6c7b69d133891580a7186b105caca_Traceguids,
        *(unsigned __int8 *)(*(_QWORD *)(a1 + 16) + 135LL),
        *(_DWORD *)(a1 + 144),
        *(_QWORD *)(a1 + 88));
LABEL_10:
    *(_DWORD *)(a1 + 280) = 0;
    return 21LL;
  }
  return 33LL;
}
