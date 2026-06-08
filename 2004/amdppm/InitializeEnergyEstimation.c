/*
 * XREFs of InitializeEnergyEstimation @ 0x1C0032FDC
 * Callers:
 *     ProcLibDeviceStart @ 0x1C0027B70 (ProcLibDeviceStart.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C000EA90 (_guard_dispatch_icall_nop.c)
 *     InitializeEnergyEstimationForEfficiencyClass @ 0x1C0033108 (InitializeEnergyEstimationForEfficiencyClass.c)
 *     RetrieveEfficiencyClassInformation @ 0x1C00333E8 (RetrieveEfficiencyClassInformation.c)
 */

__int64 InitializeEnergyEstimation()
{
  unsigned int v0; // ebx
  __int64 i; // r8
  unsigned int j; // edx
  void *v3; // rcx
  unsigned int v4; // edx
  union _LARGE_INTEGER PerformanceFrequency; // [rsp+30h] [rbp+8h] BYREF

  PerformanceFrequency.QuadPart = 0LL;
  KeQueryPerformanceCounter(&PerformanceFrequency);
  qword_1C0013BE8 = PerformanceFrequency.QuadPart;
  HalPrivateDispatchTable[76]((__int64)&unk_1C0013BF0);
  RetrieveEfficiencyClassInformation();
  qword_1C00135D8 = 0LL;
  v0 = 0;
  qword_1C00135D0 = 0LL;
  for ( i = (unsigned int)dword_1C00139D4; v0 < dword_1C00139D4; ++v0 )
  {
    InitializeEnergyEstimationForEfficiencyClass(v0);
    i = (unsigned int)dword_1C00139D4;
  }
  qword_1C00135D8 = qword_1C0013AD8[0];
  for ( j = 1; j < (unsigned int)i; ++j )
  {
    if ( Globals[32 * (unsigned __int64)j + 223] != qword_1C0013AD8[0] )
    {
      qword_1C00135D8 = (__int64)SnapEnergyCountersDispatch;
      break;
    }
  }
  v3 = (void *)qword_1C0013AD0[0];
  v4 = 1;
  qword_1C00135D0 = qword_1C0013AD0[0];
  while ( v4 < (unsigned int)i )
  {
    if ( Globals[32 * (unsigned __int64)v4 + 222] != qword_1C0013AD0[0] )
    {
      v3 = ComputeEnergyDispatch;
      qword_1C00135D0 = (__int64)ComputeEnergyDispatch;
      break;
    }
    ++v4;
  }
  if ( !v3 )
  {
    v3 = ComputeProcessorEnergy;
    qword_1C00135D0 = (__int64)ComputeProcessorEnergy;
  }
  return ((__int64 (__fastcall *)(void *, __int64, __int64, __int64 *))qword_1C00136C0)(v3, qword_1C00135D8, i, Globals);
}
