/*
 * XREFs of ACPIProcessorBuildHiddenApicIds @ 0x1C00907C8
 * Callers:
 *     ACPIProcessorStartDeviceWorker @ 0x1C0004D10 (ACPIProcessorStartDeviceWorker.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C00234AC (WPP_RECORDER_SF_.c)
 *     _guard_dispatch_icall_nop @ 0x1C002FD90 (_guard_dispatch_icall_nop.c)
 */

__int64 ACPIProcessorBuildHiddenApicIds()
{
  __int64 (__fastcall *v0)(__int64); // rax
  unsigned int v1; // eax
  __int64 result; // rax
  __int64 v3; // rbx
  int v4; // [rsp+40h] [rbp+8h] BYREF

  v4 = 0;
  v0 = (__int64 (__fastcall *)(__int64))HalPrivateDispatchTable[145];
  if ( !v0 )
    return 0LL;
  if ( !HalPrivateDispatchTable[146] )
    return 0LL;
  if ( AcpiHiddenProcessorApicIds )
    return 0LL;
  v1 = v0(0xFFFFFFFFLL);
  AcpiHiddenProcessorCount = v1;
  if ( !v1 )
    return 0LL;
  AcpiHiddenProcessorApicIds = ExAllocatePool2(64LL, 4LL * v1, 1299211073LL);
  if ( AcpiHiddenProcessorApicIds )
  {
    v3 = 0LL;
    if ( !AcpiHiddenProcessorCount )
      return 0LL;
    while ( 1 )
    {
      result = ((__int64 (__fastcall *)(_QWORD, int *))HalPrivateDispatchTable[146])((unsigned int)v3, &v4);
      if ( (int)result < 0 )
        break;
      *(_DWORD *)(AcpiHiddenProcessorApicIds + 4 * v3) = v4;
      v3 = (unsigned int)(v3 + 1);
      if ( (unsigned int)v3 >= AcpiHiddenProcessorCount )
        return 0LL;
    }
  }
  else
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        2u,
        0x15u,
        0xBu,
        (__int64)&WPP_dae7fe894c7e323433b1d18b69ca790c_Traceguids);
    return 3221225626LL;
  }
  return result;
}
