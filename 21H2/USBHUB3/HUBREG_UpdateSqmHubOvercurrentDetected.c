/*
 * XREFs of HUBREG_UpdateSqmHubOvercurrentDetected @ 0x1C0031834
 * Callers:
 *     HUBHTX_Get20PortChangeEvent @ 0x1C00045EC (HUBHTX_Get20PortChangeEvent.c)
 *     HUBHTX_GetPortLostChangeEvent @ 0x1C0004CE8 (HUBHTX_GetPortLostChangeEvent.c)
 *     HUBHTX_Get30PortChangeEvent @ 0x1C0004FF8 (HUBHTX_Get30PortChangeEvent.c)
 *     HUBHTX_GetErrorResponseEventForInvalidPortStatusInPendingReset @ 0x1C0005A9C (HUBHTX_GetErrorResponseEventForInvalidPortStatusInPendingReset.c)
 *     HUBHSM_CheckIfThereIsAValidHubChange @ 0x1C0007D20 (HUBHSM_CheckIfThereIsAValidHubChange.c)
 *     HUBPSM20_CheckingIfOvercurrentBitOne @ 0x1C0010620 (HUBPSM20_CheckingIfOvercurrentBitOne.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0001B50 (WPP_RECORDER_SF_d.c)
 *     _guard_dispatch_icall_nop @ 0x1C0042A60 (_guard_dispatch_icall_nop.c)
 */

void __fastcall HUBREG_UpdateSqmHubOvercurrentDetected(__int64 a1)
{
  unsigned __int64 v2; // rax
  int v3; // eax
  int v4; // [rsp+28h] [rbp-58h]
  __int128 v5; // [rsp+30h] [rbp-50h] BYREF
  __int64 v6; // [rsp+40h] [rbp-40h]
  __int128 v7; // [rsp+48h] [rbp-38h] BYREF
  __int64 v8; // [rsp+58h] [rbp-28h]
  __int64 v9; // [rsp+60h] [rbp-20h]
  __int128 v10; // [rsp+68h] [rbp-18h]
  __int64 v11; // [rsp+78h] [rbp-8h]
  __int64 v12; // [rsp+90h] [rbp+10h] BYREF

  v12 = 0LL;
  if ( (*(_DWORD *)(a1 + 40) & 0x20000000) == 0 )
  {
    _InterlockedOr((volatile signed __int32 *)(a1 + 40), 0x20000000u);
    v11 = 0LL;
    v5 = 0LL;
    LODWORD(v5) = 24;
    v2 = *(_QWORD *)(a1 + 16);
    v8 = 0LL;
    v9 = 0x100000001LL;
    v10 = v2;
    v6 = 1LL;
    *((_QWORD *)&v5 + 1) = HUBREG_EvtWorkItemUpdateSqmHubOvercurrentDetected;
    v7 = 0LL;
    LODWORD(v7) = 56;
    v3 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int128 *, __int128 *, __int64 *))(WdfFunctions_01015 + 3032))(
           WdfDriverGlobals,
           &v5,
           &v7,
           &v12);
    if ( v3 >= 0 )
    {
      (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 3040))(WdfDriverGlobals, v12);
    }
    else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v4 = v3;
      WPP_RECORDER_SF_d(
        *(_QWORD *)(a1 + 2520),
        2u,
        3u,
        0x3Au,
        (__int64)&WPP_bb780d5c926432a673b7a78c72bdde31_Traceguids,
        v4);
    }
  }
}
