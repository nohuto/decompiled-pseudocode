/*
 * XREFs of ClipInitHandles @ 0x1403B8180
 * Callers:
 *     ExInitLicenseData @ 0x1407AAD08 (ExInitLicenseData.c)
 * Callees:
 *     sub_1407ABDF4 @ 0x1407ABDF4 (sub_1407ABDF4.c)
 */

__int64 ClipInitHandles()
{
  qword_140D2D490 = (__int64)ExUpdateLicenseData;
  qword_140D2D498 = (__int64)ntoskrnl_27;
  qword_140D2D4A0 = (__int64)ExUpdateOsPfnInRegistry;
  qword_140D2D4A8 = (__int64)SeExports;
  ClipSpInitialize(0LL, &g_kernelCallbacks);
  return sub_1407ABDF4();
}
