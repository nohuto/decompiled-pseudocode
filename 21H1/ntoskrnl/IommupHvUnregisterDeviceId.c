/*
 * XREFs of IommupHvUnregisterDeviceId @ 0x1404D4F6C
 * Callers:
 *     HalpIommuDeleteDevice @ 0x14086031C (HalpIommuDeleteDevice.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1403FE9E0 (_guard_dispatch_icall.c)
 */

__int64 IommupHvUnregisterDeviceId()
{
  return ((__int64 (*)(void))qword_140C4A4C8)();
}
