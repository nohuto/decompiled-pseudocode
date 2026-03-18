/*
 * XREFs of PoFxUnregisterDevice @ 0x1407BF030
 * Callers:
 *     <none>
 * Callees:
 *     PopFxDestroyDeviceDpm @ 0x1403C91E8 (PopFxDestroyDeviceDpm.c)
 *     PopFxUnregisterDeviceOrWait @ 0x140736CE8 (PopFxUnregisterDeviceOrWait.c)
 *     PopFxUnregisterDevice @ 0x14079C1FC (PopFxUnregisterDevice.c)
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
