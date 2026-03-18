/*
 * XREFs of Endpoint_WdfEvtPurgeComplete @ 0x1C000FD30
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ddq @ 0x1C0008A48 (WPP_RECORDER_SF_ddq.c)
 *     _guard_dispatch_icall_nop @ 0x1C00191C0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Endpoint_WdfEvtPurgeComplete(__int64 a1, __int64 a2)
{
  __int64 v3; // rax
  int v4; // edx
  __int64 v5; // r10
  int v6; // r9d
  __int64 result; // rax

  v3 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01023 + 1616))(
         WdfDriverGlobals,
         a2,
         off_1C00601A8);
  v5 = v3;
  if ( !*(_BYTE *)(v3 + 37) || (result = *(_QWORD *)(v3 + 136)) == 0 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return ((__int64 (__fastcall *)(__int64, __int64))qword_1C0061720)(UcxDriverGlobals, a2);
    v6 = 33;
LABEL_4:
    LOBYTE(v4) = 4;
    WPP_RECORDER_SF_ddq(
      *(_QWORD *)(v5 + 80),
      v4,
      13,
      v6,
      (__int64)&WPP_90fdb84eefba3b5477bce0ca4c98412a_Traceguids,
      *(_BYTE *)(*(_QWORD *)(v5 + 16) + 135LL),
      *(_DWORD *)(v5 + 144),
      a2);
    return ((__int64 (__fastcall *)(__int64, __int64))qword_1C0061720)(UcxDriverGlobals, a2);
  }
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)(result + 16), 0xFFFFFFFF) == 1 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return ((__int64 (__fastcall *)(_QWORD, _QWORD))qword_1C0061720)(UcxDriverGlobals, a2);
    v6 = 32;
    goto LABEL_4;
  }
  return result;
}
