/*
 * XREFs of IommupHvUnregisterDeviceId @ 0x1404D89AC
 * Callers:
 *     HalpIommuDeleteDevice @ 0x140867040 (HalpIommuDeleteDevice.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140405F40 (_guard_dispatch_icall.c)
 */

__int64 IommupHvUnregisterDeviceId()
{
  return ((__int64 (*)(void))qword_140C4A3C8)();
}
