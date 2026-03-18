/*
 * XREFs of AcpiNotifyPlExtDeleteDeviceAsync @ 0x1C005C430
 * Callers:
 *     AcpiNotifyPlExtDeleteDeviceSync @ 0x1C005C61C (AcpiNotifyPlExtDeleteDeviceSync.c)
 * Callees:
 *     WPP_RECORDER_SF_qD @ 0x1C0007340 (WPP_RECORDER_SF_qD.c)
 *     _guard_dispatch_icall_nop @ 0x1C002FD90 (_guard_dispatch_icall_nop.c)
 *     AcpiCreateDiscoveryDeleteParameters @ 0x1C005BF88 (AcpiCreateDiscoveryDeleteParameters.c)
 *     AcpiNotifyDiscoverDeleteMainCompletion @ 0x1C005C350 (AcpiNotifyDiscoverDeleteMainCompletion.c)
 *     WPP_RECORDER_SF_qqD @ 0x1C005D0E0 (WPP_RECORDER_SF_qqD.c)
 */

__int64 __fastcall AcpiNotifyPlExtDeleteDeviceAsync(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v7; // ebx
  __int64 *Pool2; // rax
  int v9; // edx
  __int64 *v10; // rdi
  int v11; // edx
  PVOID P; // [rsp+60h] [rbp+18h] BYREF

  P = 0LL;
  if ( qword_1C0080DA8 && (*((unsigned __int8 (**)(void))&xmmword_1C0080DB0 + 1))() )
  {
    Pool2 = (__int64 *)ExAllocatePool2(64LL, 72LL, 1315988289LL);
    v10 = Pool2;
    if ( Pool2 )
    {
      Pool2[1] = (__int64)Pool2;
      *Pool2 = (__int64)Pool2;
      Pool2[4] = a2;
      Pool2[6] = a4;
      Pool2[5] = (__int64)AcpiInterpreterPausedSignalEventCallback;
      Pool2[2] = a1;
      v7 = AcpiCreateDiscoveryDeleteParameters(Pool2, 0, (__int64 *)&P);
      if ( v7 >= 0 )
      {
        v7 = ((__int64 (__fastcall *)(PVOID))xmmword_1C0080DB0)(P);
        if ( v7 != 259 )
        {
          AcpiNotifyDiscoverDeleteMainCompletion(P);
          v7 = 259;
        }
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_qD(
            (__int64)WPP_GLOBAL_Control->DeviceExtension,
            4u,
            0x13u,
            0x10u,
            (__int64)&WPP_6b96f8ebb13c3b7665ec42abfcbc7cd5_Traceguids,
            a1,
            v7);
      }
      else
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_qqD(WPP_GLOBAL_Control->DeviceExtension, v11, 19, 15);
        ExFreePoolWithTag(v10, 0x4E706341u);
        if ( P )
          ExFreePoolWithTag(P, 0x4E706341u);
      }
    }
    else
    {
      v7 = -1073741670;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_qqD(WPP_GLOBAL_Control->DeviceExtension, v9, 19, 14);
    }
  }
  else
  {
    return 0;
  }
  return (unsigned int)v7;
}
