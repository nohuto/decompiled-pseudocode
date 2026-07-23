/*
 * XREFs of _ZwInitializeRegistry@4 @ 0x4B2F3980
 * Callers:
 *     <none>
 * Callees:
 *     _Wow64SystemServiceCall@0 @ 0x4B308730 (_Wow64SystemServiceCall@0.c)
 */

NTSTATUS __cdecl ZwInitializeRegistry(USHORT BootCondition)
{
  return Wow64SystemServiceCall();
}
