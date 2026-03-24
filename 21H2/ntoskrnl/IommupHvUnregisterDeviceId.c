/*
 * XREFs of IommupHvUnregisterDeviceId @ 0x1404DA3BC
 * Callers:
 *     HalpIommuDeleteDevice @ 0x140864C50 (HalpIommuDeleteDevice.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1404085B0 (_guard_dispatch_icall.c)
 */

__int64 IommupHvUnregisterDeviceId()
{
  return ((__int64 (*)(void))qword_140C4A2E8)();
}
