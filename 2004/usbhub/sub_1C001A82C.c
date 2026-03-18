/*
 * XREFs of sub_1C001A82C @ 0x1C001A82C
 * Callers:
 *     sub_1C001A550 @ 0x1C001A550 (sub_1C001A550.c)
 * Callees:
 *     sub_1C000F050 @ 0x1C000F050 (sub_1C000F050.c)
 *     sub_1C000FD80 @ 0x1C000FD80 (sub_1C000FD80.c)
 *     sub_1C002E188 @ 0x1C002E188 (sub_1C002E188.c)
 *     sub_1C0031838 @ 0x1C0031838 (sub_1C0031838.c)
 */

__int64 __fastcall sub_1C001A82C(__int64 a1, int a2)
{
  __int64 v3; // rbx
  _DWORD *v4; // rsi
  unsigned int v5; // ebp
  int v6; // ebx
  int v7; // ebx
  __int64 v8; // r8
  int v9; // ebx
  int v10; // ebx
  int v11; // ebx
  struct _KSEMAPHORE *v12; // rax
  unsigned int v13; // ebx
  __int64 Limit; // rcx

  v3 = a2;
  v4 = sub_1C000F050(*(_QWORD *)(a1 + 8));
  sub_1C000F050(*(_QWORD *)(a1 + 8));
  v5 = *(_DWORD *)(a1 + 68);
  sub_1C000FD80(*(_QWORD *)(a1 + 8), 16, 1920159827, a1, v3);
  if ( off_1C006B000 != (_UNKNOWN *)&off_1C006B000 && LOWORD(DeviceObject->DeviceType) )
    sub_1C002E188(DeviceObject->DeviceExtension, 0, 1, 12, (__int64)&unk_1C0062E08, v3);
  v6 = v3 - 1;
  if ( v6 )
  {
    v7 = v6 - 1;
    if ( v7 )
    {
      v8 = 6LL;
      v9 = v7 - 1;
      if ( v9 && (v10 = v9 - 6) != 0 )
      {
        v11 = v10 - 1;
        if ( v11 )
        {
          if ( v11 == 1 )
            goto LABEL_10;
          v8 = v5;
        }
      }
      else
      {
        v4[640] |= 0x10u;
      }
    }
    else
    {
      v8 = 1LL;
    }
    return (unsigned int)sub_1C0031838(*(_QWORD *)(a1 + 8), a1, v8);
  }
LABEL_10:
  if ( (v4[640] & 0x10) != 0 )
  {
    KeResetEvent((PRKEVENT)(v4 + 712));
    IoQueueWorkItem(*((PIO_WORKITEM *)v4 + 148), sub_1C003CB60, DelayedWorkQueue, 0LL);
    v8 = 3LL;
    return (unsigned int)sub_1C0031838(*(_QWORD *)(a1 + 8), a1, v8);
  }
  v12 = (struct _KSEMAPHORE *)sub_1C000F050(*(_QWORD *)(a1 + 8));
  v13 = 2;
  v12[87].Limit = 2;
  *(_DWORD *)(a1 + 68) = 2;
  *(_DWORD *)(a1 + 64) = 1734964085;
  Limit = (unsigned int)v12[28].Limit;
  v12[41].Header.WaitListHead.Flink = 0LL;
  v12[Limit + 29].Header.SignalState = 2;
  KeReleaseSemaphore(v12 + 88, 16, 1, 0);
  return v13;
}
