/*
 * XREFs of HalpDispatchSystemStateTransition @ 0x14038BD40
 * Callers:
 *     HalpDispatchPower @ 0x1409991A0 (HalpDispatchPower.c)
 * Callees:
 *     HalpEfiLockOutRuntimeCallsForSystemSleep @ 0x14038BDE4 (HalpEfiLockOutRuntimeCallsForSystemSleep.c)
 *     KeBugCheckEx @ 0x1403FE0D0 (KeBugCheckEx.c)
 *     HalpInterruptMaskAcpi @ 0x14099923C (HalpInterruptMaskAcpi.c)
 *     HalpFreeResumeStructures @ 0x1409992DC (HalpFreeResumeStructures.c)
 *     HalpBuildResumeStructures @ 0x14099935C (HalpBuildResumeStructures.c)
 */

__int64 __fastcall HalpDispatchSystemStateTransition(__int64 a1)
{
  __int64 v1; // rax
  char v2; // di
  int v3; // eax
  int v4; // eax
  __int64 v5; // rcx

  v1 = *(_QWORD *)(a1 + 184);
  v2 = *(_BYTE *)(v1 + 1);
  v3 = *(_DWORD *)(v1 + 24);
  if ( v3 == 1 )
  {
    if ( HalpReEnableDiagnosticEventsOnResume )
    {
      HalpDiagnosticEventsRegistered = 1;
      HalpReEnableDiagnosticEventsOnResume = 0;
    }
    if ( HalpResumeStructuresAllocated )
    {
      HalpFreeResumeStructures();
      HalpResumeStructuresAllocated = 0;
    }
    LOBYTE(a1) = 1;
    HalpEfiLockOutRuntimeCallsForSystemSleep(a1);
    if ( (HalpPlatformFlags & 1) != 0 )
    {
      LOBYTE(v5) = 1;
      goto LABEL_9;
    }
  }
  else
  {
    if ( (unsigned int)(v3 - 2) > 3 )
      return 0LL;
    if ( !HalpResumeStructuresAllocated )
    {
      v4 = HalpBuildResumeStructures();
      if ( v4 < 0 )
      {
        if ( v2 == 2 )
          KeBugCheckEx(0x5Cu, 0x10CuLL, v4, 0LL, 0LL);
        return 0LL;
      }
      HalpResumeStructuresAllocated = 1;
    }
    if ( v2 == 2 )
    {
      HalpEfiLockOutRuntimeCallsForSystemSleep(0LL);
      if ( (HalpPlatformFlags & 1) != 0 )
      {
        v5 = 0LL;
LABEL_9:
        HalpInterruptMaskAcpi(v5);
      }
    }
  }
  return 0LL;
}
