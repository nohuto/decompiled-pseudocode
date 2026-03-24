/*
 * XREFs of HUBDSM_UpdatingDeviceInformationInEnum @ 0x1C001DF20
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0001B50 (WPP_RECORDER_SF_d.c)
 *     HUBUCX_SubmitUcxIoctl @ 0x1C0023950 (HUBUCX_SubmitUcxIoctl.c)
 *     HUBUCX_ComputeUsb20HardwareLpmParameters @ 0x1C00242C0 (HUBUCX_ComputeUsb20HardwareLpmParameters.c)
 *     HUBMISC_CheckIfU2ShouldBeSetForEnumeratedDevice @ 0x1C002D5E8 (HUBMISC_CheckIfU2ShouldBeSetForEnumeratedDevice.c)
 *     _guard_dispatch_icall_nop @ 0x1C0042A60 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0042D40 (memset.c)
 */

__int64 __fastcall HUBDSM_UpdatingDeviceInformationInEnum(__int64 a1)
{
  __int64 *v1; // rdi
  __int64 v2; // rbx
  _DWORD *v3; // rsi
  int v4; // edx
  int v5; // eax
  unsigned int v6; // edx
  __int64 v7; // rcx
  int v8; // eax
  int v9; // eax
  int v10; // eax
  int v12; // [rsp+28h] [rbp-10h]

  v1 = *(__int64 **)(a1 + 960);
  v2 = *v1;
  v3 = (_DWORD *)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 1552))(
                   WdfDriverGlobals,
                   v1[54],
                   0LL);
  memset(v3, 0, 0x48uLL);
  v4 = v3[6] | 0xB;
  v3[6] = v4;
  v5 = v4 | 4;
  v6 = v4 & 0xFFFFFFFB;
  if ( (*(_DWORD *)(v2 + 2496) & 4) == 0 )
    v6 = v5;
  v3[6] = v6;
  if ( (*((_DWORD *)v1 + 411) & 0x400) != 0 )
    v3[6] = v6 | 0x10;
  *v3 = 72;
  *((_QWORD *)v3 + 1) = *(_QWORD *)(*v1 + 248);
  *((_QWORD *)v3 + 2) = v1[3];
  *((_QWORD *)v3 + 4) = (char *)v1 + 1988;
  *((_QWORD *)v3 + 5) = v1[257];
  if ( (unsigned int)HUBMISC_CheckIfU2ShouldBeSetForEnumeratedDevice(v1) == 4089 )
    v8 = *((unsigned __int16 *)v1 + 1102);
  else
    v8 = 0;
  v3[12] = v8;
  if ( (v1[204] & 2) != 0 )
    *((_BYTE *)v3 + 52) = 1;
  HUBUCX_ComputeUsb20HardwareLpmParameters(v7, v3);
  if ( (*((_DWORD *)v1 + 616) & 0x80u) != 0 )
  {
    v9 = *((_DWORD *)v1 + 408);
    if ( (v9 & 0x20) != 0 && (v9 & 2) == 0 && *(_DWORD *)(v1[1] + 208) == 512 )
    {
      v3[6] |= 0x40u;
      if ( *(_BYTE *)(*v1 + 240) )
        *((_WORD *)v3 + 32) = 20;
      else
        *((_WORD *)v3 + 32) = *(unsigned __int8 *)(v1[313] + 5);
    }
  }
  v10 = HUBUCX_SubmitUcxIoctl(v1, 4788259LL);
  if ( v10 < 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v12 = v10;
    WPP_RECORDER_SF_d(
      *(_QWORD *)(v1[1] + 1432),
      2u,
      5u,
      0x20u,
      (__int64)&WPP_0fdba02233013f1195f31cf9301a7589_Traceguids,
      v12);
  }
  return 1000LL;
}
