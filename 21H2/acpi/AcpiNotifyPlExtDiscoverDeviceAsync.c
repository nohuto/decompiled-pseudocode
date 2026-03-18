/*
 * XREFs of AcpiNotifyPlExtDiscoverDeviceAsync @ 0x1C0002434
 * Callers:
 *     ACPIRootDeviceNotifyPepDiscoverDevice @ 0x1C0002034 (ACPIRootDeviceNotifyPepDiscoverDevice.c)
 *     ACPIAmliPreDefinedRootObjectsNotifyPepDiscoverDevice @ 0x1C000230C (ACPIAmliPreDefinedRootObjectsNotifyPepDiscoverDevice.c)
 *     ACPIBuildProcessDevicePhasePep @ 0x1C00094E0 (ACPIBuildProcessDevicePhasePep.c)
 *     ACPIBuildProcessRunMethodPhaseCheckPep @ 0x1C000F6D0 (ACPIBuildProcessRunMethodPhaseCheckPep.c)
 *     ACPIBuildProcessPowerResourcePhasePep @ 0x1C002A8D0 (ACPIBuildProcessPowerResourcePhasePep.c)
 *     ACPIBuildProcessThermalZonePep @ 0x1C002EAD0 (ACPIBuildProcessThermalZonePep.c)
 * Callees:
 *     WPP_RECORDER_SF_qD @ 0x1C0007340 (WPP_RECORDER_SF_qD.c)
 *     AMLIDereferenceHandleEx @ 0x1C000B860 (AMLIDereferenceHandleEx.c)
 *     ACPIAmliBuildObjectPathnameUnicode @ 0x1C0021FCC (ACPIAmliBuildObjectPathnameUnicode.c)
 *     _guard_dispatch_icall_nop @ 0x1C002FD90 (_guard_dispatch_icall_nop.c)
 *     AcpiCreateDiscoveryDeleteParameters @ 0x1C005BF88 (AcpiCreateDiscoveryDeleteParameters.c)
 *     AcpiNotifyDiscoverDeleteMainCompletion @ 0x1C005C350 (AcpiNotifyDiscoverDeleteMainCompletion.c)
 */

__int64 __fastcall AcpiNotifyPlExtDiscoverDeviceAsync(__int64 a1, __int64 a2, __int64 a3)
{
  PVOID v3; // rsi
  char v4; // r14
  void *v5; // rdi
  int v9; // ebx
  int v11; // edx
  __int64 Pool2; // rax
  __int64 v13; // rdx
  __int128 v14; // xmm0
  int v15; // edx
  PVOID v16; // rsi
  int v17; // edx
  PVOID P[2]; // [rsp+40h] [rbp-38h] BYREF
  PVOID v19; // [rsp+98h] [rbp+20h] BYREF

  v3 = 0LL;
  v4 = 0;
  v5 = 0LL;
  v19 = 0LL;
  *(_OWORD *)P = 0LL;
  if ( !qword_1C0080DA8 || !(*((unsigned __int8 (**)(void))&xmmword_1C0080DB0 + 1))() )
  {
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
  v9 = ACPIAmliBuildObjectPathnameUnicode(a1, P, 1LL);
  if ( v9 < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v11) = 2;
      WPP_RECORDER_SF_qD(
        WPP_GLOBAL_Control->DeviceExtension,
        v11,
        19,
        11,
        (__int64)&WPP_6b96f8ebb13c3b7665ec42abfcbc7cd5_Traceguids,
        a1,
        v9);
    }
    goto LABEL_4;
  }
  Pool2 = ExAllocatePool2(64LL, 72LL, 1315988289LL);
  v5 = (void *)Pool2;
  if ( !Pool2 )
  {
    v9 = -1073741670;
    goto LABEL_4;
  }
  v14 = *(_OWORD *)P;
  *(_QWORD *)(Pool2 + 8) = Pool2;
  *(_QWORD *)Pool2 = Pool2;
  *(_OWORD *)(Pool2 + 56) = v14;
  *(_QWORD *)(Pool2 + 40) = a2;
  *(_QWORD *)(Pool2 + 48) = a3;
  dword_1C0081AC8 = 0;
  byte_1C0081ACC = 0;
  if ( (gdwfAMLI & 4) != 0 )
    _InterlockedIncrement((volatile signed __int32 *)(a1 + 8));
  v4 = 1;
  *(_QWORD *)(Pool2 + 16) = a1;
  LOBYTE(v13) = 1;
  v9 = AcpiCreateDiscoveryDeleteParameters(Pool2, v13, &v19);
  if ( v9 < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v15) = 2;
      WPP_RECORDER_SF_qD(
        WPP_GLOBAL_Control->DeviceExtension,
        v15,
        19,
        12,
        (__int64)&WPP_6b96f8ebb13c3b7665ec42abfcbc7cd5_Traceguids,
        a1,
        v9);
    }
    v3 = v19;
    goto LABEL_4;
  }
  v16 = v19;
  v9 = ((__int64 (__fastcall *)(PVOID))xmmword_1C0080DB0)(v19);
  if ( v9 != 259 )
  {
    AcpiNotifyDiscoverDeleteMainCompletion(v16);
    v9 = 259;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v17) = 4;
    WPP_RECORDER_SF_qD(
      WPP_GLOBAL_Control->DeviceExtension,
      v17,
      19,
      13,
      (__int64)&WPP_6b96f8ebb13c3b7665ec42abfcbc7cd5_Traceguids,
      a1,
      v9);
  }
  return (unsigned int)v9;
}
