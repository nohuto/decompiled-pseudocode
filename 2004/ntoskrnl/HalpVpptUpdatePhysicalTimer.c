/*
 * XREFs of HalpVpptUpdatePhysicalTimer @ 0x1404BBF64
 * Callers:
 *     HalpVpptAcknowledgeInterrupt @ 0x1404BB820 (HalpVpptAcknowledgeInterrupt.c)
 *     HalpVpptArmTimer @ 0x1404BB9D0 (HalpVpptArmTimer.c)
 *     HalpVpptStop @ 0x1404BBCA0 (HalpVpptStop.c)
 * Callees:
 *     RtlGetInterruptTimePrecise @ 0x14021F2E0 (RtlGetInterruptTimePrecise.c)
 *     HalpTimerGetInternalData @ 0x14021F560 (HalpTimerGetInternalData.c)
 *     _guard_dispatch_icall @ 0x1403FFC70 (_guard_dispatch_icall.c)
 *     ExtEnvSetVpptTarget @ 0x1404BA8B4 (ExtEnvSetVpptTarget.c)
 *     HalpSetTimerAnyMode @ 0x1404BAACC (HalpSetTimerAnyMode.c)
 *     ExtEnvCriticalFailure @ 0x1404D042C (ExtEnvCriticalFailure.c)
 */

__int64 HalpVpptUpdatePhysicalTimer()
{
  int v0; // ebx
  LARGE_INTEGER v1; // rdi
  __int64 InternalData; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // rax
  __int64 v6; // rdx
  int v7; // eax
  int v8; // ecx
  LARGE_INTEGER InterruptTimePrecise; // rax
  LARGE_INTEGER v10; // r8
  unsigned __int64 v11; // rdi
  unsigned __int64 v12; // rbx
  __int64 result; // rax
  int v14; // ecx
  LARGE_INTEGER PerformanceCounter; // [rsp+40h] [rbp+8h] BYREF

  v0 = *(_DWORD *)(*(_QWORD *)&HalpVpptQueue + 16LL);
  v1 = *(LARGE_INTEGER *)(*(_QWORD *)&HalpVpptQueue + 32LL);
  if ( HalpVpptPhysicalTimerTarget != v0 )
  {
    InternalData = HalpTimerGetInternalData(*(__int64 *)&HalpVpptPhysicalTimer);
    (*(void (__fastcall **)(__int64))(v3 + 136))(InternalData);
    if ( (*(_DWORD *)(*(_QWORD *)&HalpVpptPhysicalTimer + 224LL) & 0x200000) == 0 )
    {
      v5 = HalpTimerGetInternalData(*(__int64 *)&HalpVpptPhysicalTimer);
      (*(void (__fastcall **)(__int64))(v6 + 104))(v5);
    }
    if ( HalpVpptPhysicalTimerTarget != v0 )
    {
      v7 = ExtEnvSetVpptTarget(v4, v0);
      if ( v7 < 0 )
        ExtEnvCriticalFailure(v8, 276, HalpVpptPhysicalTimerTarget, v0, v7);
      HalpVpptPhysicalTimerTarget = v0;
    }
  }
  InterruptTimePrecise = RtlGetInterruptTimePrecise(&PerformanceCounter);
  if ( InterruptTimePrecise.QuadPart <= (unsigned __int64)v1.QuadPart )
    v11 = v1.QuadPart - InterruptTimePrecise.QuadPart;
  else
    v11 = 0LL;
  v12 = 0x989680uLL / *(_QWORD *)(*(_QWORD *)&HalpVpptPhysicalTimer + 192LL);
  if ( *(_DWORD *)(*(_QWORD *)&HalpVpptPhysicalTimer + 228LL) == 2 )
  {
    if ( v12 < 0x1312 )
      v12 = 4882LL;
  }
  else if ( v12 < 0x1388 )
  {
    v12 = 5000LL;
  }
  if ( v11 >= v12 )
    v12 = v11;
  result = HalpSetTimerAnyMode(
             *(__int64 *)&HalpVpptPhysicalTimer,
             v12,
             v10.QuadPart,
             (unsigned __int64 *)&PerformanceCounter.QuadPart);
  if ( (int)result < 0 )
    ExtEnvCriticalFailure(v14, 277, HalpVpptPhysicalTimer, v12, (int)result);
  return result;
}
