/*
 * XREFs of sub_1C003D790 @ 0x1C003D790
 * Callers:
 *     sub_1C001A550 @ 0x1C001A550 (sub_1C001A550.c)
 * Callees:
 *     sub_1C000F050 @ 0x1C000F050 (sub_1C000F050.c)
 *     sub_1C000FD80 @ 0x1C000FD80 (sub_1C000FD80.c)
 *     sub_1C002E188 @ 0x1C002E188 (sub_1C002E188.c)
 *     sub_1C0031838 @ 0x1C0031838 (sub_1C0031838.c)
 */

__int64 __fastcall sub_1C003D790(__int64 a1, int a2)
{
  __int64 v3; // rdi
  _DWORD *v4; // rbp
  unsigned int v5; // r14d
  unsigned int v6; // ebx

  v3 = a2;
  v4 = sub_1C000F050(*(_QWORD *)(a1 + 8));
  sub_1C000F050(*(_QWORD *)(a1 + 8));
  v5 = *(_DWORD *)(a1 + 68);
  sub_1C000FD80(*(_QWORD *)(a1 + 8), 16, 1651722574, a1, v3);
  if ( off_1C006B000 != (_UNKNOWN *)&off_1C006B000 && LOWORD(DeviceObject->DeviceType) )
    sub_1C002E188((__int64)DeviceObject->DeviceExtension, 0, 1u, 0xEu, (__int64)&unk_1C0062E08, v3);
  if ( (int)v3 > 0 )
  {
    if ( (int)v3 <= 2 )
      goto LABEL_13;
    v6 = 3;
    if ( (_DWORD)v3 == 3 )
      goto LABEL_13;
    if ( (_DWORD)v3 == 9 )
    {
      KeResetEvent((PRKEVENT)(v4 + 712));
      IoQueueWorkItem(*((PIO_WORKITEM *)v4 + 148), (PIO_WORKITEM_ROUTINE)sub_1C003CB60, DelayedWorkQueue, 0LL);
      return sub_1C0031838(*(_QWORD *)(a1 + 8), a1, v6);
    }
    if ( (int)v3 > 9 && (int)v3 <= 11 )
    {
LABEL_13:
      v6 = 4;
      return sub_1C0031838(*(_QWORD *)(a1 + 8), a1, v6);
    }
  }
  v6 = v5;
  return sub_1C0031838(*(_QWORD *)(a1 + 8), a1, v6);
}
