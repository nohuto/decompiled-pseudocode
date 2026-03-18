/*
 * XREFs of SleepstudyHelper_GetPdoFriendlyName @ 0x1408F8030
 * Callers:
 *     <none>
 * Callees:
 *     SshpGenerateDeviceFriendlyName @ 0x1408F7D60 (SshpGenerateDeviceFriendlyName.c)
 */

__int64 __fastcall SleepstudyHelper_GetPdoFriendlyName(struct _DEVICE_OBJECT *a1, UNICODE_STRING *a2)
{
  return SshpGenerateDeviceFriendlyName(a1, 0LL, 0x6C687373u, a2);
}
