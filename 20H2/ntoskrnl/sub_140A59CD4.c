/*
 * XREFs of sub_140A59CD4 @ 0x140A59CD4
 * Callers:
 *     ExInitLicenseData @ 0x1407A0C50 (ExInitLicenseData.c)
 * Callees:
 *     KeInitializeGuardedMutex @ 0x140240260 (KeInitializeGuardedMutex.c)
 *     KeQueryTimeIncrement @ 0x1402DD740 (KeQueryTimeIncrement.c)
 *     KiInitializeMutant @ 0x14036093C (KiInitializeMutant.c)
 */

unsigned __int64 sub_140A59CD4()
{
  __int64 v0; // rbx
  __int64 v1; // rcx
  unsigned __int64 result; // rax

  KiInitializeMutant((ULONG_PTR)&stru_140C13D00, 0, 0LL, 0LL);
  stru_140C13CE0.Header.Size = 6;
  LOWORD(stru_140C13CE0.Header.Lock) = 0;
  stru_140C13CE0.Header.SignalState = 0;
  stru_140C13CE0.Header.WaitListHead.Blink = &stru_140C13CE0.Header.WaitListHead;
  stru_140C13CE0.Header.WaitListHead.Flink = &stru_140C13CE0.Header.WaitListHead;
  KeInitializeGuardedMutex(&g_TestHookLock);
  v0 = MEMORY[0xFFFFF78000000320];
  v1 = v0 * KeQueryTimeIncrement();
  result = (unsigned __int64)((unsigned __int128)(v1 * (__int128)0x346DC5D63886594BLL) >> 64) >> 63;
  qword_140D2D168 = v1 / 10000;
  g_qwSystemInitTime = v1 / 10000;
  return result;
}
