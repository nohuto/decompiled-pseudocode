/*
 * XREFs of UsbhReferenceListOpen @ 0x1C00413CC
 * Callers:
 *     UsbhAddDevice @ 0x1C0041990 (UsbhAddDevice.c)
 * Callees:
 *     UsbhReferenceListAdd @ 0x1C0001AE8 (UsbhReferenceListAdd.c)
 *     FdoExt @ 0x1C000F050 (FdoExt.c)
 *     Log @ 0x1C000FD80 (Log.c)
 */

__int64 __fastcall UsbhReferenceListOpen(__int64 a1)
{
  _DWORD *v2; // rbx
  int v3; // eax
  unsigned int v4; // r10d

  v2 = FdoExt(a1);
  *((_QWORD *)v2 + 315) = v2 + 628;
  *((_QWORD *)v2 + 314) = v2 + 628;
  KeInitializeEvent((PRKEVENT)(v2 + 622), NotificationEvent, 0);
  *((_BYTE *)v2 + 2480) = 1;
  v3 = UsbhReferenceListAdd(a1, a1, 1329874536);
  if ( (v3 & 0xC0000000) == 0xC0000000 )
    *((_BYTE *)v2 + 2480) = 0;
  Log(a1, 8, 1919315023, 0LL, v3);
  return v4;
}
