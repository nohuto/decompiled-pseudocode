/*
 * XREFs of sub_140A538E8 @ 0x140A538E8
 * Callers:
 *     ExInitLicenseData @ 0x140791B78 (ExInitLicenseData.c)
 * Callees:
 *     KeQueryTimeIncrement @ 0x1402443A0 (KeQueryTimeIncrement.c)
 *     KiInitializeMutant @ 0x1402DEBE8 (KiInitializeMutant.c)
 */

unsigned __int64 __fastcall sub_140A538E8(__int64 a1, __int64 a2, __int64 a3, _DWORD *a4)
{
  __int64 v4; // rbx
  __int64 v5; // rcx
  unsigned __int64 result; // rax

  KiInitializeMutant((__int64)&Mutex, 0LL, 0LL, a4);
  stru_140C13C60.Header.Size = 6;
  LOWORD(stru_140C13C60.Header.Lock) = 0;
  stru_140C13C60.Header.SignalState = 0;
  stru_140C13C60.Header.WaitListHead.Blink = &stru_140C13C60.Header.WaitListHead;
  stru_140C13C60.Header.WaitListHead.Flink = &stru_140C13C60.Header.WaitListHead;
  v4 = MEMORY[0xFFFFF78000000320];
  v5 = v4 * KeQueryTimeIncrement();
  result = (unsigned __int64)((unsigned __int128)(v5 * (__int128)0x346DC5D63886594BLL) >> 64) >> 63;
  qword_140D2C170 = v5 / 10000;
  g_qwSystemInitTime = v5 / 10000;
  return result;
}
