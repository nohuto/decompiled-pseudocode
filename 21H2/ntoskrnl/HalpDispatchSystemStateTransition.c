/*
 * XREFs of HalpDispatchSystemStateTransition @ 0x14039693C
 * Callers:
 *     HalpDispatchPower @ 0x140A52150 (HalpDispatchPower.c)
 * Callees:
 *     HalpEfiLockOutRuntimeCallsForSystemSleep @ 0x1403969E8 (HalpEfiLockOutRuntimeCallsForSystemSleep.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     HalpInterruptMaskAcpi @ 0x140A521EC (HalpInterruptMaskAcpi.c)
 *     HalpFreeResumeStructures @ 0x140A5228C (HalpFreeResumeStructures.c)
 *     HalpBuildResumeStructures @ 0x140A522B8 (HalpBuildResumeStructures.c)
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
