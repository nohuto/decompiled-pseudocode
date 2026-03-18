/*
 * XREFs of HalpTimerProfilePowerChange @ 0x1404BFE78
 * Callers:
 *     HalpTimerPowerChange @ 0x1404BE904 (HalpTimerPowerChange.c)
 * Callees:
 *     HalpTimerGetInternalData @ 0x140288EA0 (HalpTimerGetInternalData.c)
 *     _guard_dispatch_icall @ 0x140405F40 (_guard_dispatch_icall.c)
 *     HalpTimerRestartProfileInterrupt @ 0x1404BFEE8 (HalpTimerRestartProfileInterrupt.c)
 */

void __fastcall HalpTimerProfilePowerChange(__int64 a1, char a2)
{
  __int64 InternalData; // rax
  __int64 v4; // rdx

  if ( a2 )
  {
    InternalData = HalpTimerGetInternalData(HalpProfileTimer);
    if ( (*(int (__fastcall **)(__int64))(v4 + 104))(InternalData) >= 0 )
    {
      if ( HalpProfilingActive )
        HalpTimerRestartProfileInterrupt();
    }
    else
    {
      *(_DWORD *)(a1 + 184) = *(_DWORD *)(a1 + 184) & 0xFFFFFFFC | 1;
    }
  }
}
