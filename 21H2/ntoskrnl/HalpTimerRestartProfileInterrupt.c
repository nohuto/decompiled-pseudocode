/*
 * XREFs of HalpTimerRestartProfileInterrupt @ 0x1404C1AF8
 * Callers:
 *     HalpTimerProfilePowerChange @ 0x1404C1A88 (HalpTimerProfilePowerChange.c)
 *     DefaultRestartProfiling @ 0x1409A7FE0 (DefaultRestartProfiling.c)
 * Callees:
 *     HalpTimerGetInternalData @ 0x1402CF2E0 (HalpTimerGetInternalData.c)
 *     HalpSetTimer @ 0x1402F2BCC (HalpSetTimer.c)
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 */

void HalpTimerRestartProfileInterrupt()
{
  __int64 v0; // rbx
  char v1; // di
  unsigned int Number; // esi
  __int64 v3; // rax
  int v4; // eax
  __int64 InternalData; // rax
  unsigned __int64 v6; // [rsp+40h] [rbp+8h] BYREF

  v0 = HalpProfileTimer;
  v1 = 0;
  if ( HalpProfileTimer )
  {
    Number = KeGetPcr()->Prcb.Number;
    if ( (*(_DWORD *)(HalpProfileTimer + 224) & 1) == 0 && Number
      || (v1 = 1,
          v3 = HalpTimerGetInternalData(HalpProfileTimer),
          v4 = (*(__int64 (__fastcall **)(__int64))(v0 + 104))(v3),
          v4 >= 0) )
    {
      if ( v1 )
      {
        if ( HalpProfilingActive )
        {
          HalpSetTimer(v0, 2u, *(unsigned int *)(32LL * Number + HalpProfileData + 24), 1, &v6);
        }
        else
        {
          InternalData = HalpTimerGetInternalData(v0);
          (*(void (__fastcall **)(__int64))(v0 + 136))(InternalData);
        }
      }
    }
    else
    {
      *(_DWORD *)(v0 + 256) = v4;
      HalpTimerLastProblem = 15;
      *(_QWORD *)(v0 + 264) = "minkernel\\hals\\lib\\timers\\common\\timeprof.c";
      *(_DWORD *)(v0 + 252) = 15;
      *(_DWORD *)(v0 + 272) = 502;
    }
  }
}
