/*
 * XREFs of ?bTryAcquireExclussiveAccess@UMPDOBJ@@QAE_NXZ @ 0x21010F
 * Callers:
 *     ?Thunk@UMPDOBJ@@QAEKPAXK0K@Z @ 0x20A935 (-Thunk@UMPDOBJ@@QAEKPAXK0K@Z.c)
 *     _NtGdiSetPUMPDOBJ@16 @ 0x21AE6D (_NtGdiSetPUMPDOBJ@16.c)
 * Callees:
 *     _W32GetThreadWin32Thread@4 @ 0x3FA3E (_W32GetThreadWin32Thread@4.c)
 */

bool __thiscall UMPDOBJ::bTryAcquireExclussiveAccess(UMPDOBJ *this)
{
  PKTHREAD CurrentThread; // eax

  CurrentThread = KeGetCurrentThread();
  return _InterlockedCompareExchange((volatile signed __int32 *)this + 4, W32GetThreadWin32Thread(CurrentThread), 0) == 0;
}
