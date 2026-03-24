/*
 * XREFs of AcpiNotifyPlExtDiscoverDeviceAsync @ 0x1C002A9AC
 * Callers:
 *     ACPIBuildProcessDevicePhasePep @ 0x1C001A480 (ACPIBuildProcessDevicePhasePep.c)
 *     ACPIBuildProcessRunMethodPhaseCheckPep @ 0x1C001FD20 (ACPIBuildProcessRunMethodPhaseCheckPep.c)
 *     ACPIRootDeviceNotifyPepDiscoverDevice @ 0x1C002A59C (ACPIRootDeviceNotifyPepDiscoverDevice.c)
 *     ACPIAmliPreDefinedRootObjectsNotifyPepDiscoverDevice @ 0x1C002A884 (ACPIAmliPreDefinedRootObjectsNotifyPepDiscoverDevice.c)
 *     ACPIBuildProcessPowerResourcePhasePep @ 0x1C002E950 (ACPIBuildProcessPowerResourcePhasePep.c)
 *     ACPIBuildProcessThermalZonePep @ 0x1C0031080 (ACPIBuildProcessThermalZonePep.c)
 * Callees:
 *     AMLIDereferenceHandleEx @ 0x1C000BC6C (AMLIDereferenceHandleEx.c)
 *     ACPIAmliBuildObjectPathnameUnicode @ 0x1C0010920 (ACPIAmliBuildObjectPathnameUnicode.c)
 *     WPP_RECORDER_SF_qD @ 0x1C00199A8 (WPP_RECORDER_SF_qD.c)
 *     _guard_dispatch_icall_nop @ 0x1C0032180 (_guard_dispatch_icall_nop.c)
 *     AcpiCreateDiscoveryDeleteParameters @ 0x1C005B0B8 (AcpiCreateDiscoveryDeleteParameters.c)
 *     AcpiNotifyDiscoverDeleteMainCompletion @ 0x1C005B4A0 (AcpiNotifyDiscoverDeleteMainCompletion.c)
 */

__int64 __fastcall AcpiNotifyPlExtDiscoverDeviceAsync(__int64 a1, __int64 a2, __int64 a3)
{
  PVOID v3; // rsi
  char v4; // r12
  void *v5; // rdi
  int v9; // ebx
  unsigned __int16 v11; // r9
  unsigned __int8 v12; // dl
  char *PoolWithTag; // rax
  __int64 v14; // rdx
  __int128 v15; // xmm0
  PVOID P[2]; // [rsp+40h] [rbp-38h] BYREF
  PVOID v17; // [rsp+98h] [rbp+20h] BYREF

  v3 = 0LL;
  v4 = 0;
  v5 = 0LL;
  v17 = 0LL;
  *(_OWORD *)P = 0LL;
  if ( qword_1C0081BE8 && (*((unsigned __int8 (**)(void))&xmmword_1C0081BF0 + 1))() )
  {
    v9 = ACPIAmliBuildObjectPathnameUnicode(a1, (__int64)P);
    if ( v9 < 0 )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_28;
      v11 = 11;
      v12 = 2;
      goto LABEL_27;
    }
    PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x48uLL, 0x4E706341u);
    v5 = PoolWithTag;
    if ( !PoolWithTag )
    {
      v9 = -1073741670;
      goto LABEL_4;
    }
    *((_QWORD *)PoolWithTag + 2) = 0LL;
    *((_QWORD *)PoolWithTag + 3) = 0LL;
    *((_QWORD *)PoolWithTag + 4) = 0LL;
    v15 = *(_OWORD *)P;
    *((_QWORD *)PoolWithTag + 1) = PoolWithTag;
    *(_QWORD *)PoolWithTag = PoolWithTag;
    *(_OWORD *)(PoolWithTag + 56) = v15;
    *((_QWORD *)PoolWithTag + 5) = a2;
    *((_QWORD *)PoolWithTag + 6) = a3;
    dword_1C0082908 = 0;
    pszDest = 0;
    if ( (gdwfAMLI & 4) != 0 )
      _InterlockedIncrement((volatile signed __int32 *)(a1 + 8));
    v4 = 1;
    *((_QWORD *)PoolWithTag + 2) = a1;
    LOBYTE(v14) = 1;
    v9 = AcpiCreateDiscoveryDeleteParameters(PoolWithTag, v14, &v17);
    if ( v9 >= 0 )
    {
      v3 = v17;
      v9 = ((__int64 (__fastcall *)(PVOID))xmmword_1C0081BF0)(v17);
      if ( v9 != 259 )
      {
        AcpiNotifyDiscoverDeleteMainCompletion(v3);
        v9 = 259;
      }
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v11 = 13;
        v12 = 4;
LABEL_27:
        WPP_RECORDER_SF_qD(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          v12,
          0x13u,
          v11,
          (__int64)&WPP_4ea83bc4352b3df9b35783bbf858603c_Traceguids,
          a1,
          v9);
      }
    }
    else
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_qD(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          2u,
          0x13u,
          0xCu,
          (__int64)&WPP_4ea83bc4352b3df9b35783bbf858603c_Traceguids,
          a1,
          v9);
      v3 = v17;
    }
LABEL_28:
    if ( v9 == 259 )
      return (unsigned int)v9;
    goto LABEL_4;
  }
  v9 = 0;
LABEL_4:
  if ( P[1] )
    ExFreePoolWithTag(P[1], 0x53706341u);
  if ( v5 )
    ExFreePoolWithTag(v5, 0x4E706341u);
  if ( v3 )
    ExFreePoolWithTag(v3, 0x4E706341u);
  if ( v9 < 0 && v4 )
    AMLIDereferenceHandleEx(a1);
  return (unsigned int)v9;
}
