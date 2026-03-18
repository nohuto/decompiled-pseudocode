/*
 * XREFs of WPP_RECORDER_SF_Dqss @ 0x1C001D994
 * Callers:
 *     ACPIInternalRegisterPowerCallBack @ 0x1C000C6B0 (ACPIInternalRegisterPowerCallBack.c)
 *     ACPIProcessorStartDeviceWorker @ 0x1C000CC80 (ACPIProcessorStartDeviceWorker.c)
 *     ACPIFanPowerCallback @ 0x1C000CF00 (ACPIFanPowerCallback.c)
 *     ACPIInitStartDevice @ 0x1C000D5A8 (ACPIInitStartDevice.c)
 *     ACPIBuildProcessorExtension @ 0x1C0015DC4 (ACPIBuildProcessorExtension.c)
 *     ACPIInitDosDeviceName @ 0x1C0016808 (ACPIInitDosDeviceName.c)
 *     PciConfigSpaceHandlerWorker @ 0x1C0018240 (PciConfigSpaceHandlerWorker.c)
 *     ACPISystemPowerUpdateDeviceCapabilities @ 0x1C00199EC (ACPISystemPowerUpdateDeviceCapabilities.c)
 *     ACPIBuildProcessSpecialSynchronizationList @ 0x1C001D094 (ACPIBuildProcessSpecialSynchronizationList.c)
 *     ACPIWakeRemoveDevicesAndUpdate @ 0x1C0026138 (ACPIWakeRemoveDevicesAndUpdate.c)
 *     ACPIWakeEnableDisableAsync @ 0x1C002F304 (ACPIWakeEnableDisableAsync.c)
 *     ACPIBuildThermalZoneExtension @ 0x1C002F864 (ACPIBuildThermalZoneExtension.c)
 *     ACPIBuildProcessThermalZoneCheckType @ 0x1C002FE50 (ACPIBuildProcessThermalZoneCheckType.c)
 *     ACPICMButtonNotify @ 0x1C004E7A8 (ACPICMButtonNotify.c)
 *     ACPICMExperienceButtonHandleEvent @ 0x1C004EC0C (ACPICMExperienceButtonHandleEvent.c)
 *     ACPICMLidPowerStateCallBack @ 0x1C004ECE0 (ACPICMLidPowerStateCallBack.c)
 *     ACPIFanEvent @ 0x1C0055110 (ACPIFanEvent.c)
 *     ACPIFanFSTCallback @ 0x1C00551E0 (ACPIFanFSTCallback.c)
 *     ACPIInitDeleteDeviceExtension @ 0x1C00562A8 (ACPIInitDeleteDeviceExtension.c)
 *     ACPIInternalEvaluateOST @ 0x1C0056B24 (ACPIInternalEvaluateOST.c)
 *     ACPIRootEvent @ 0x1C005EA30 (ACPIRootEvent.c)
 *     ACPIProcessorGetInitialApicId @ 0x1C0090DA8 (ACPIProcessorGetInitialApicId.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0031E80 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall WPP_RECORDER_SF_Dqss(
        __int64 a1,
        unsigned __int8 a2,
        unsigned int a3,
        unsigned __int16 a4,
        __int64 a5,
        char a6,
        char a7,
        const char *a8,
        const char *a9)
{
  __int64 v9; // rdi
  __int64 v10; // rsi
  unsigned __int64 v12; // r14
  unsigned int v13; // r15d
  unsigned int v14; // r12d
  __int64 v15; // rbx
  int v16; // eax
  unsigned __int8 v17; // cf
  __int64 v18; // r8
  __int64 v19; // rax
  __int64 v21; // r8
  const char *v22; // r9
  __int64 v23; // rdx
  __int64 v24; // rdx
  const char *v25; // rcx
  int v26; // [rsp+20h] [rbp-78h]
  __int64 v27; // [rsp+A0h] [rbp+8h]

  v27 = a1;
  v9 = (__int64)a9;
  v10 = (__int64)a8;
  v12 = (unsigned __int64)a3 >> 16;
  v13 = a2;
  v14 = a4;
  v15 = -1LL;
  v16 = *((_DWORD *)&WPP_GLOBAL_Control->Timer + 20 * v12 + (((a3 - 1) >> 5) & 0x7FF) + 1);
  v17 = _bittest(&v16, (a3 - 1) & 0x1F);
  v18 = 5LL;
  if ( v17 && *((_BYTE *)&WPP_GLOBAL_Control->Timer + 80 * v12 + 1) >= a2 )
  {
    if ( a9 )
    {
      v21 = -1LL;
      do
        ++v21;
      while ( a9[v21] );
      v18 = v21 + 1;
    }
    v22 = a9;
    if ( !a9 )
      v22 = "NULL";
    if ( a8 )
    {
      v23 = -1LL;
      do
        ++v23;
      while ( a8[v23] );
      v24 = v23 + 1;
    }
    else
    {
      v24 = 5LL;
    }
    v25 = a8;
    if ( !a8 )
      v25 = "NULL";
    ((void (__fastcall *)(_QWORD, __int64, __int64, _QWORD, char *, __int64, char *, __int64, const char *, __int64, const char *, __int64, _QWORD))pfnWppTraceMessage)(
      *((_QWORD *)&WPP_GLOBAL_Control->AttachedDevice + 10 * v12),
      43LL,
      a5,
      v14,
      &a6,
      4LL,
      &a7,
      8LL,
      v25,
      v24,
      v22,
      v18,
      0LL);
    a1 = v27;
  }
  if ( v9 )
  {
    v19 = -1LL;
    do
      ++v19;
    while ( *(_BYTE *)(v9 + v19) );
  }
  if ( v10 )
  {
    do
      ++v15;
    while ( *(_BYTE *)(v10 + v15) );
  }
  LOWORD(v26) = v14;
  return WppAutoLogTrace(a1, v13, a3, a5, v26, &a6);
}
