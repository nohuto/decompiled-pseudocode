/*
 * XREFs of _ZwCompressKey@4 @ 0x4B2F3370
 * Callers:
 *     <none>
 * Callees:
 *     _Wow64SystemServiceCall@0 @ 0x4B308730 (_Wow64SystemServiceCall@0.c)
 */

NTSTATUS __cdecl ZwCompressKey(HANDLE KeyHandle)
{
  return Wow64SystemServiceCall();
}
