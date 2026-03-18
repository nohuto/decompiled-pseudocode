/*
 * XREFs of Endpoint_WdfEvtAbortComplete @ 0x1C0018670
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ddq @ 0x1C0008A48 (WPP_RECORDER_SF_ddq.c)
 *     _guard_dispatch_icall_nop @ 0x1C00191C0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Endpoint_WdfEvtAbortComplete(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v4; // rdx
  int v5; // r9d

  result = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01023 + 1616))(
             WdfDriverGlobals,
             a2,
             off_1C00601A8);
  if ( !*(_BYTE *)(result + 37) )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return ((__int64 (__fastcall *)(__int64, __int64))qword_1C0061728)(UcxDriverGlobals, a2);
    v5 = 37;
LABEL_4:
    LOBYTE(v4) = 4;
    WPP_RECORDER_SF_ddq(
      *(_QWORD *)(result + 80),
      v4,
      13,
      v5,
      (__int64)&WPP_90fdb84eefba3b5477bce0ca4c98412a_Traceguids,
      *(_BYTE *)(*(_QWORD *)(result + 16) + 135LL),
      *(_DWORD *)(result + 144),
      a2);
    return ((__int64 (__fastcall *)(__int64, __int64))qword_1C0061728)(UcxDriverGlobals, a2);
  }
  v4 = *(_QWORD *)(result + 136);
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v4 + 16), 0xFFFFFFFF) == 1 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return ((__int64 (__fastcall *)(_QWORD, _QWORD))qword_1C0061728)(UcxDriverGlobals, a2);
    v5 = 36;
    goto LABEL_4;
  }
  return result;
}
