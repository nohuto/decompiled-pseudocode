/*
 * XREFs of Endpoint_WdfEvtAbortComplete @ 0x1C003B7C0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ddq @ 0x1C00059E8 (WPP_RECORDER_SF_ddq.c)
 *     _guard_dispatch_icall_nop @ 0x1C00199B0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Endpoint_WdfEvtAbortComplete(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  unsigned __int16 v4; // r9
  int v5; // [rsp+28h] [rbp-20h]
  int v6; // [rsp+30h] [rbp-18h]

  result = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01023 + 1616))(
             WdfDriverGlobals,
             a2,
             off_1C00611A8);
  if ( *(_BYTE *)(result + 37) )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*(_QWORD *)(result + 136) + 16LL), 0xFFFFFFFF) != 1 )
      return result;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v4 = 37;
LABEL_7:
      v6 = *(_DWORD *)(result + 144);
      v5 = *(unsigned __int8 *)(*(_QWORD *)(result + 16) + 135LL);
      WPP_RECORDER_SF_ddq(
        *(_QWORD *)(result + 80),
        4u,
        0xDu,
        v4,
        (__int64)&WPP_60b6c7b69d133891580a7186b105caca_Traceguids,
        v5,
        v6,
        a2);
    }
  }
  else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v4 = 38;
    goto LABEL_7;
  }
  return ((__int64 (__fastcall *)(__int64, __int64))qword_1C0062828)(UcxDriverGlobals, a2);
}
