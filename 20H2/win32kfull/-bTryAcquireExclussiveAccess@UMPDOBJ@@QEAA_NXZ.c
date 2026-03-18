/*
 * XREFs of ?bTryAcquireExclussiveAccess@UMPDOBJ@@QEAA_NXZ @ 0x1C0071F60
 * Callers:
 *     NtGdiSetPUMPDOBJ @ 0x1C0071780 (NtGdiSetPUMPDOBJ.c)
 *     ?Thunk@UMPDOBJ@@QEAAKPEAXK0K@Z @ 0x1C0071C3C (-Thunk@UMPDOBJ@@QEAAKPEAXK0K@Z.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C00B4FD0 (W32GetThreadWin32Thread.c)
 */

bool __fastcall UMPDOBJ::bTryAcquireExclussiveAccess(UMPDOBJ *this)
{
  return _InterlockedCompareExchange64(
           (volatile signed __int64 *)this + 3,
           W32GetThreadWin32Thread(KeGetCurrentThread()),
           0LL) == 0;
}
