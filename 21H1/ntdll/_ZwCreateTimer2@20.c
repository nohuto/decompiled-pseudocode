/*
 * XREFs of _ZwCreateTimer2@20 @ 0x4B2F35B0
 * Callers:
 *     _TppInitializeTimerSubQueue@12 @ 0x4B2B407F (_TppInitializeTimerSubQueue@12.c)
 * Callees:
 *     _Wow64SystemServiceCall@0 @ 0x4B308730 (_Wow64SystemServiceCall@0.c)
 */

NTSTATUS __cdecl ZwCreateTimer2(
        PHANDLE TimerHandle,
        PVOID Reserved1,
        POBJECT_ATTRIBUTES ObjectAttributes,
        ULONG Attributes,
        ACCESS_MASK DesiredAccess)
{
  return Wow64SystemServiceCall();
}
