/*
 * XREFs of AcpiNotifyPlExtDeleteDeviceAsync @ 0x1C005B3F0
 * Callers:
 *     AcpiNotifyPlExtDeleteDeviceSync @ 0x1C005B5EC (AcpiNotifyPlExtDeleteDeviceSync.c)
 * Callees:
 *     WPP_RECORDER_SF_qD @ 0x1C0019748 (WPP_RECORDER_SF_qD.c)
 *     _guard_dispatch_icall_nop @ 0x1C0031E80 (_guard_dispatch_icall_nop.c)
 *     AcpiCreateDiscoveryDeleteParameters @ 0x1C005AF28 (AcpiCreateDiscoveryDeleteParameters.c)
 *     AcpiNotifyDiscoverDeleteMainCompletion @ 0x1C005B310 (AcpiNotifyDiscoverDeleteMainCompletion.c)
 *     WPP_RECORDER_SF_qqD @ 0x1C005C0B4 (WPP_RECORDER_SF_qqD.c)
 */

__int64 __fastcall AcpiNotifyPlExtDeleteDeviceAsync(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v7; // ebx
  _QWORD *PoolWithTag; // rax
  int v9; // edx
  void *v10; // rdi
  int v11; // edx
  PVOID P; // [rsp+60h] [rbp+18h] BYREF

  P = 0LL;
  if ( qword_1C0081BE8 && (*((unsigned __int8 (**)(void))&xmmword_1C0081BF0 + 1))() )
  {
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x48uLL, 0x4E706341u);
    v10 = PoolWithTag;
    if ( PoolWithTag )
    {
      PoolWithTag[3] = 0LL;
      PoolWithTag[7] = 0LL;
      PoolWithTag[8] = 0LL;
      PoolWithTag[1] = PoolWithTag;
      *PoolWithTag = PoolWithTag;
      PoolWithTag[4] = a2;
      PoolWithTag[5] = AcpiInterpreterPausedSignalEventCallback;
      PoolWithTag[6] = a4;
      PoolWithTag[2] = a1;
      v7 = AcpiCreateDiscoveryDeleteParameters(PoolWithTag, 0, &P);
      if ( v7 >= 0 )
      {
        v7 = ((__int64 (__fastcall *)(PVOID))xmmword_1C0081BF0)(P);
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
            (__int64)&WPP_4ea83bc4352b3df9b35783bbf858603c_Traceguids,
            a1,
            v7);
      }
      else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        WPP_RECORDER_SF_qqD(WPP_GLOBAL_Control->DeviceExtension, v11, 19, 15);
      }
      if ( v7 != 259 )
      {
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
