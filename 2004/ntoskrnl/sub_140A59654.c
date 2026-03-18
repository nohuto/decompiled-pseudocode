/*
 * XREFs of sub_140A59654 @ 0x140A59654
 * Callers:
 *     ExInitLicenseData @ 0x1407943A8 (ExInitLicenseData.c)
 * Callees:
 *     KeQueryTimeIncrement @ 0x140280AA0 (KeQueryTimeIncrement.c)
 *     KiInitializeMutant @ 0x1402FF79C (KiInitializeMutant.c)
 */

unsigned __int64 sub_140A59654()
{
  __int64 v0; // rbx
  __int64 v1; // rcx
  unsigned __int64 result; // rax

  KiInitializeMutant((ULONG_PTR)&stru_140C13CA0, 0, 0LL, 0LL);
  stru_140C13C80.Header.Size = 6;
  LOWORD(stru_140C13C80.Header.Lock) = 0;
  stru_140C13C80.Header.SignalState = 0;
  stru_140C13C80.Header.WaitListHead.Blink = &stru_140C13C80.Header.WaitListHead;
  stru_140C13C80.Header.WaitListHead.Flink = &stru_140C13C80.Header.WaitListHead;
  v0 = MEMORY[0xFFFFF78000000320];
  v1 = v0 * KeQueryTimeIncrement();
  result = (unsigned __int64)((unsigned __int128)(v1 * (__int128)0x346DC5D63886594BLL) >> 64) >> 63;
  qword_140D2D168 = v1 / 10000;
  g_qwSystemInitTime = v1 / 10000;
  return result;
}
