/*
 * XREFs of WakeRITForShutdown @ 0x1C0103E40
 * Callers:
 *     <none>
 * Callees:
 *     WakeRIT @ 0x1C0104090 (WakeRIT.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall WakeRITForShutdown(__int64 a1, __int64 a2, __int64 a3)
{
  if ( PsGetCurrentProcess(a1, a2, a3) != gpepCSRSS || !gpkeRITEvent )
    return 3221225473LL;
  gdwHydraHint |= 0x2000000u;
  WakeRIT(2LL);
  return 0LL;
}
