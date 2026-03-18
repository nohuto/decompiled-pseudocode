/*
 * XREFs of ClipInitHandles @ 0x1403B3380
 * Callers:
 *     ExInitLicenseData @ 0x140791B78 (ExInitLicenseData.c)
 * Callees:
 *     sub_140792C74 @ 0x140792C74 (sub_140792C74.c)
 */

__int64 ClipInitHandles()
{
  qword_140D2C4A8 = (__int64)ExUpdateLicenseData;
  qword_140D2C4B0 = (__int64)ntoskrnl_27;
  qword_140D2C4B8 = (__int64)ExUpdateOsPfnInRegistry;
  qword_140D2C4C0 = (__int64)SeExports;
  ClipSpInitialize(0LL, &g_kernelCallbacks);
  return sub_140792C74();
}
