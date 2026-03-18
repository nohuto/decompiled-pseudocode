/*
 * XREFs of ClipInitHandles @ 0x1403B5A80
 * Callers:
 *     ExInitLicenseData @ 0x1407943A8 (ExInitLicenseData.c)
 * Callees:
 *     sub_14078BA9C @ 0x14078BA9C (sub_14078BA9C.c)
 */

__int64 ClipInitHandles()
{
  qword_140D2D4A8 = (__int64)ExUpdateLicenseData;
  qword_140D2D4B0 = (__int64)ntoskrnl_27;
  qword_140D2D4B8 = (__int64)ExUpdateOsPfnInRegistry;
  qword_140D2D4C0 = (__int64)SeExports;
  ClipSpInitialize(0LL, &g_kernelCallbacks);
  return sub_14078BA9C();
}
