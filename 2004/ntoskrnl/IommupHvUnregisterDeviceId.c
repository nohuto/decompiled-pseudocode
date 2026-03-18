/*
 * XREFs of IommupHvUnregisterDeviceId @ 0x1404D541C
 * Callers:
 *     HalpIommuDeleteDevice @ 0x140861620 (HalpIommuDeleteDevice.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1403FFC70 (_guard_dispatch_icall.c)
 */

__int64 IommupHvUnregisterDeviceId()
{
  return ((__int64 (*)(void))qword_140C4A368)();
}
