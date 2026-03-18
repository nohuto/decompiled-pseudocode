/*
 * XREFs of sub_1C0014D80 @ 0x1C0014D80
 * Callers:
 *     <none>
 * Callees:
 *     sub_1C0012810 @ 0x1C0012810 (sub_1C0012810.c)
 *     sub_1C002DC78 @ 0x1C002DC78 (sub_1C002DC78.c)
 */

LONG __fastcall sub_1C0014D80(struct _DEVICE_OBJECT *a1, __int64 a2, __int64 a3)
{
  struct _KEVENT *DeviceExtension; // rbx

  if ( !a1 )
    sub_1C002DC78(0LL, 0LL);
  DeviceExtension = (struct _KEVENT *)a1->DeviceExtension;
  if ( !DeviceExtension )
    sub_1C002DC78(a1, 0LL);
  if ( DeviceExtension->Header.LockNV != 541218120 )
    sub_1C002DC78(a1, a1->DeviceExtension);
  sub_1C0012810(a1, 1u, a3);
  return KeSetEvent(DeviceExtension + 143, 0, 0);
}
