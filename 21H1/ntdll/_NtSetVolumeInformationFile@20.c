/*
 * XREFs of _NtSetVolumeInformationFile@20 @ 0x4B2F44A0
 * Callers:
 *     <none>
 * Callees:
 *     _Wow64SystemServiceCall@0 @ 0x4B308730 (_Wow64SystemServiceCall@0.c)
 */

int __stdcall NtSetVolumeInformationFile(int a1, int a2, int a3, int a4, int a5)
{
  return Wow64SystemServiceCall();
}
