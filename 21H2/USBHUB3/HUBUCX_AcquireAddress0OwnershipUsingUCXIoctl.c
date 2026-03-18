/*
 * XREFs of HUBUCX_AcquireAddress0OwnershipUsingUCXIoctl @ 0x1C0023FFC
 * Callers:
 *     HUBDSM_AcquiringAddressZeroOwnershipOnRenum @ 0x1C001E260 (HUBDSM_AcquiringAddressZeroOwnershipOnRenum.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0001C04 (WPP_RECORDER_SF_d.c)
 *     HUBUCX_SubmitUcxIoctl @ 0x1C0023D84 (HUBUCX_SubmitUcxIoctl.c)
 *     _guard_dispatch_icall_nop @ 0x1C00437E0 (_guard_dispatch_icall_nop.c)
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
             (__int64)&WPP_a5663512bb0f384af60f2cebe8e2cf44_Traceguids,
             v4);
  }
  return result;
}
