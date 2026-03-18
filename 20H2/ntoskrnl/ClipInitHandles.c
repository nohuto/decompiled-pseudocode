/*
 * XREFs of ClipInitHandles @ 0x1403B6B40
 * Callers:
 *     ExInitLicenseData @ 0x1407A0C50 (ExInitLicenseData.c)
 * Callees:
 *     sub_1407A1D4C @ 0x1407A1D4C (sub_1407A1D4C.c)
 */

__int64 ClipInitHandles()
{
  qword_140D2D4B0 = (__int64)ExUpdateLicenseData;
  qword_140D2D4B8 = (__int64)ntoskrnl_27;
  qword_140D2D4C0 = (__int64)ExUpdateOsPfnInRegistry;
  qword_140D2D4C8 = (__int64)SeExports;
  ClipSpInitialize(0LL, &g_kernelCallbacks);
  return sub_1407A1D4C();
}
