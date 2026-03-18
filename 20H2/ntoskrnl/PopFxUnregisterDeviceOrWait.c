/*
 * XREFs of PopFxUnregisterDeviceOrWait @ 0x140742824
 * Callers:
 *     PoFxAbandonDevice @ 0x140741A08 (PoFxAbandonDevice.c)
 *     PoFxUnregisterDevice @ 0x1407D0D30 (PoFxUnregisterDevice.c)
 * Callees:
 *     KeSetEvent @ 0x140219280 (KeSetEvent.c)
 *     KeWaitForSingleObject @ 0x14021B560 (KeWaitForSingleObject.c)
 *     PopFxLockDevice @ 0x14036FC44 (PopFxLockDevice.c)
 *     PopFxUnregisterDevice @ 0x1407AF52C (PopFxUnregisterDevice.c)
 */

LONG __fastcall PopFxUnregisterDeviceOrWait(struct _KEVENT *a1)
{
  ULONG_PTR v2; // rax

  _m_prefetchw(&a1[12].Header.WaitListHead);
  if ( (_InterlockedOr((volatile signed __int32 *)&a1[12].Header.WaitListHead, 8u) & 8) != 0 )
    return KeWaitForSingleObject(&a1[4], Executive, 0, 0, 0LL);
  v2 = PopFxLockDevice((__int64)a1, 0);
  if ( v2 )
    return PopFxUnregisterDevice(v2);
  else
    return KeSetEvent(a1 + 4, 0, 0);
}
