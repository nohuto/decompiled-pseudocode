/*
 * XREFs of ??__Fs_Lock@?1??Instance@HolographicDeviceSnapshot@Holographic@Internal@Windows@@KAAEAV1234@XZ@YAXXZ @ 0x180051F10
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall `Windows::Internal::Holographic::HolographicDeviceSnapshot::Instance'::`2'::`dynamic atexit destructor for 's_Lock''()
{
  DeleteCriticalSection(&`Windows::Internal::Holographic::HolographicDeviceSnapshot::Instance'::`2'::s_Lock);
}
