/*
 * XREFs of PoFxUnregisterDevice @ 0x140864C90
 * Callers:
 *     DifPoFxUnregisterDeviceWrapper @ 0x140619F90 (DifPoFxUnregisterDeviceWrapper.c)
 * Callees:
 *     PopFxDestroyDeviceDpm @ 0x1403DCAD0 (PopFxDestroyDeviceDpm.c)
 *     PopFxUnregisterDeviceOrWait @ 0x14080D7EC (PopFxUnregisterDeviceOrWait.c)
 *     PopFxUnregisterDevice @ 0x14082310C (PopFxUnregisterDevice.c)
 */

__int64 __fastcall PoFxUnregisterDevice(ULONG_PTR a1)
{
  __int64 v1; // rdi

  v1 = *(_QWORD *)(a1 + 48);
  if ( v1 )
    PopFxUnregisterDeviceOrWait(*(struct _KEVENT **)(a1 + 48));
  else
    PopFxUnregisterDevice(a1);
  return PopFxDestroyDeviceDpm(v1, a1);
}
