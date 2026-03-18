/*
 * XREFs of Endpoint_UcxEvtEndpointPurge @ 0x1C000FC50
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ddq @ 0x1C0008A48 (WPP_RECORDER_SF_ddq.c)
 *     _guard_dispatch_icall_nop @ 0x1C00191C0 (_guard_dispatch_icall_nop.c)
 *     WPP_RECORDER_SF_ddqd @ 0x1C003AC3C (WPP_RECORDER_SF_ddqd.c)
 */

_UNKNOWN **__fastcall Endpoint_UcxEvtEndpointPurge(__int64 a1, __int64 a2)
{
  __int64 v3; // rax
  int v4; // edx
  int v5; // r8d
  _QWORD *v6; // rbx
  _UNKNOWN **result; // rax
  __int64 v8; // rdi
  int v9; // edx
  unsigned int v10; // ebp

  v3 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01023 + 1616))(
         WdfDriverGlobals,
         a2,
         off_1C00601A8);
  v6 = (_QWORD *)v3;
  if ( *(_BYTE *)(v3 + 37) && (v8 = *(_QWORD *)(v3 + 136)) != 0 )
  {
    v9 = *(_DWORD *)(v8 + 8);
    *(_DWORD *)(v8 + 16) = v9;
    result = &WPP_RECORDER_INITIALIZED;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v9) = 4;
      result = (_UNKNOWN **)WPP_RECORDER_SF_ddqd(v6[10], v9, v5, 34);
      v9 = *(_DWORD *)(v8 + 8);
    }
    v10 = 1;
    if ( v9 )
    {
      do
        result = (_UNKNOWN **)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, __int64 (__fastcall *)(), __int64))(WdfFunctions_01023 + 1320))(
                                WdfDriverGlobals,
                                *(_QWORD *)(*(_QWORD *)(104LL * (v10++ - 1) + v6[17] + 48) + 72LL),
                                Endpoint_WdfEvtPurgeComplete,
                                a2);
      while ( v10 <= *(_DWORD *)(v8 + 8) );
    }
  }
  else
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v4) = 4;
      WPP_RECORDER_SF_ddq(
        *(_QWORD *)(v3 + 80),
        v4,
        13,
        35,
        (__int64)&WPP_90fdb84eefba3b5477bce0ca4c98412a_Traceguids,
        *(_BYTE *)(*(_QWORD *)(v3 + 16) + 135LL),
        *(_DWORD *)(v3 + 144),
        a2);
    }
    return (_UNKNOWN **)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, __int64 (__fastcall *)(), __int64))(WdfFunctions_01023 + 1320))(
                          WdfDriverGlobals,
                          *(_QWORD *)(v6[11] + 72LL),
                          Endpoint_WdfEvtPurgeComplete,
                          a2);
  }
  return result;
}
