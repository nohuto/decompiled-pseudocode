/*
 * XREFs of ClipInitHandles @ 0x1403C54B0
 * Callers:
 *     ExInitLicenseData @ 0x14082D3F8 (ExInitLicenseData.c)
 * Callees:
 *     sub_14082E638 @ 0x14082E638 (sub_14082E638.c)
 */

__int64 ClipInitHandles()
{
  qword_140D3B460 = (__int64)ExUpdateLicenseData;
  qword_140D3B468 = (__int64)ntoskrnl_27;
  qword_140D3B470 = (__int64)ExUpdateOsPfnInRegistry;
  qword_140D3B478 = (__int64)SeExports;
  ClipSpInitialize(0LL, &g_kernelCallbacks);
  return sub_14082E638();
}
