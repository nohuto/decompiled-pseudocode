/*
 * XREFs of IommupHvUnregisterDeviceId @ 0x140527CA8
 * Callers:
 *     HalpIommuDeleteDevice @ 0x140908DD4 (HalpIommuDeleteDevice.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 */

__int64 IommupHvUnregisterDeviceId()
{
  return ((__int64 (*)(void))qword_140C4C5E8)();
}
