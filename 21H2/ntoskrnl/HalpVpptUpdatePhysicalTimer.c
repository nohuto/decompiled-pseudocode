/*
 * XREFs of HalpVpptUpdatePhysicalTimer @ 0x1404C0E54
 * Callers:
 *     HalpVpptAcknowledgeInterrupt @ 0x1404C0710 (HalpVpptAcknowledgeInterrupt.c)
 *     HalpVpptArmTimer @ 0x1404C08C0 (HalpVpptArmTimer.c)
 *     HalpVpptStop @ 0x1404C0B90 (HalpVpptStop.c)
 * Callees:
 *     RtlGetInterruptTimePrecise @ 0x14022A7B0 (RtlGetInterruptTimePrecise.c)
 *     HalpTimerGetInternalData @ 0x14022AA30 (HalpTimerGetInternalData.c)
 *     _guard_dispatch_icall @ 0x1404085B0 (_guard_dispatch_icall.c)
 *     ExtEnvSetVpptTarget @ 0x1404BF7A4 (ExtEnvSetVpptTarget.c)
 *     HalpSetTimerAnyMode @ 0x1404BF9BC (HalpSetTimerAnyMode.c)
 *     ExtEnvCriticalFailure @ 0x1404D539C (ExtEnvCriticalFailure.c)
 */

__int64 HalpVpptUpdatePhysicalTimer()
{
  int v0; // ebx
  unsigned __int64 v1; // rdi
  __int64 InternalData; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // rax
  __int64 v6; // rdx
  int v7; // eax
  int v8; // ecx
  unsigned __int64 InterruptTimePrecise; // rax
  __int64 v10; // r8
  unsigned __int64 v11; // rdi
  unsigned __int64 v12; // rbx
  __int64 result; // rax
  int v14; // ecx
  LARGE_INTEGER v15; // [rsp+40h] [rbp+8h] BYREF

  v0 = *(_DWORD *)(*(_QWORD *)&HalpVpptQueue + 16LL);
  v1 = *(_QWORD *)(*(_QWORD *)&HalpVpptQueue + 32LL);
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
  InterruptTimePrecise = RtlGetInterruptTimePrecise(&v15);
  if ( InterruptTimePrecise <= v1 )
    v11 = v1 - InterruptTimePrecise;
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
  result = HalpSetTimerAnyMode(*(__int64 *)&HalpVpptPhysicalTimer, v12, v10, (unsigned __int64 *)&v15.QuadPart);
  if ( (int)result < 0 )
    ExtEnvCriticalFailure(v14, 277, HalpVpptPhysicalTimer, v12, (int)result);
  return result;
}
