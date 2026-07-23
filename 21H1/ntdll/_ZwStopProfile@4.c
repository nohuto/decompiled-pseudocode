/*
 * XREFs of _ZwStopProfile@4 @ 0x4B2F4510
 * Callers:
 *     <none>
 * Callees:
 *     _Wow64SystemServiceCall@0 @ 0x4B308730 (_Wow64SystemServiceCall@0.c)
 */

NTSTATUS __cdecl ZwStopProfile(HANDLE ProfileHandle)
{
  return Wow64SystemServiceCall();
}
