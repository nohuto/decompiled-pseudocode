/*
 * XREFs of _NtIsSystemResumeAutomatic@0 @ 0x4B2F39A0
 * Callers:
 *     <none>
 * Callees:
 *     _Wow64SystemServiceCall@0 @ 0x4B308730 (_Wow64SystemServiceCall@0.c)
 */

BOOLEAN NtIsSystemResumeAutomatic(void)
{
  return Wow64SystemServiceCall();
}
