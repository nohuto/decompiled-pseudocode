/*
 * XREFs of UsbhAsyncStartComplete @ 0x1C0041F88
 * Callers:
 *     Usbh_FDO_WaitPnpStop_CB @ 0x1C0044590 (Usbh_FDO_WaitPnpStop_CB.c)
 * Callees:
 *     UsbhDispatch_BusEvent @ 0x1C0002AF0 (UsbhDispatch_BusEvent.c)
 *     FdoExt @ 0x1C000F050 (FdoExt.c)
 *     Log @ 0x1C000FD80 (Log.c)
 *     UsbhFinishStart @ 0x1C0037328 (UsbhFinishStart.c)
 */

__int64 __fastcall UsbhAsyncStartComplete(_QWORD *Tag)
{
  _DWORD *v2; // rdi
  int v3; // ebx
  int v4; // r8d

  v2 = FdoExt(Tag[1]);
  Log(Tag[1], 2, 1634957635, Tag[1], (__int64)Tag);
  v3 = UsbhFinishStart(Tag[1], (__int64)Tag);
  v4 = 9;
  if ( v3 >= 0 )
    v4 = 5;
  UsbhDispatch_BusEvent((struct _DEVICE_OBJECT *)Tag[1], (__int64)Tag, v4);
  *((_QWORD *)v2 + 639) = MEMORY[0xFFFFF78000000014];
  KeSetEvent((PRKEVENT)(v2 + 644), 0, 0);
  IoReleaseRemoveLockEx((PIO_REMOVE_LOCK)(v2 + 306), Tag, 0x20u);
  return (unsigned int)v3;
}
