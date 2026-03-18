/*
 * XREFs of HUBUCX_AcquireAddress0OwnershipUsingUCXIoctl @ 0x1C0023BBC
 * Callers:
 *     HUBDSM_AcquiringAddressZeroOwnershipOnRenum @ 0x1C001DD20 (HUBDSM_AcquiringAddressZeroOwnershipOnRenum.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0001B50 (WPP_RECORDER_SF_d.c)
 *     HUBUCX_SubmitUcxIoctl @ 0x1C0023950 (HUBUCX_SubmitUcxIoctl.c)
 *     _guard_dispatch_icall_nop @ 0x1C0042A60 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall HUBUCX_AcquireAddress0OwnershipUsingUCXIoctl(__int64 a1)
{
  __int64 v2; // rax
  __int64 result; // rax
  int v4; // [rsp+28h] [rbp-10h]

  v2 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, _QWORD))(WdfFunctions_01015 + 1552))(
         WdfDriverGlobals,
         *(_QWORD *)(a1 + 432),
         0LL);
  *(_OWORD *)v2 = 0LL;
  *(_QWORD *)(v2 + 16) = 0LL;
  *(_DWORD *)v2 = 24;
  *(_QWORD *)(v2 + 8) = *(_QWORD *)(**(_QWORD **)(a1 + 8) + 248LL);
  *(_QWORD *)(v2 + 16) = *(_QWORD *)(a1 + 24);
  result = HUBUCX_SubmitUcxIoctl((__int64 *)a1, 0x491007u);
  if ( (int)result < 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v4 = result;
    return WPP_RECORDER_SF_d(
             *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL),
             2u,
             5u,
             0x15u,
             (__int64)&WPP_0fdba02233013f1195f31cf9301a7589_Traceguids,
             v4);
  }
  return result;
}
