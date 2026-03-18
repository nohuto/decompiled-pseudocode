/*
 * XREFs of sub_1C001A964 @ 0x1C001A964
 * Callers:
 *     sub_1C001A550 @ 0x1C001A550 (sub_1C001A550.c)
 * Callees:
 *     sub_1C000F050 @ 0x1C000F050 (sub_1C000F050.c)
 *     sub_1C000FD80 @ 0x1C000FD80 (sub_1C000FD80.c)
 *     sub_1C002E188 @ 0x1C002E188 (sub_1C002E188.c)
 *     sub_1C0031838 @ 0x1C0031838 (sub_1C0031838.c)
 *     sub_1C0043C9C @ 0x1C0043C9C (sub_1C0043C9C.c)
 */

__int64 __fastcall sub_1C001A964(__int64 a1, int a2)
{
  __int64 v3; // rdi
  _DWORD *v4; // rsi
  unsigned int v5; // ebp
  __int64 v6; // r8
  int v7; // edi
  int v8; // edi
  unsigned int v9; // esi
  int v10; // edi
  __int64 v11; // rcx
  struct _KSEMAPHORE *v12; // rax
  __int64 Limit; // rcx

  v3 = a2;
  v4 = sub_1C000F050(*(_QWORD *)(a1 + 8));
  sub_1C000F050(*(_QWORD *)(a1 + 8));
  v5 = *(_DWORD *)(a1 + 68);
  sub_1C000FD80(*(_QWORD *)(a1 + 8), 16, 1651722574, a1, v3);
  if ( off_1C006B000 != (_UNKNOWN *)&off_1C006B000 && LOWORD(DeviceObject->DeviceType) )
    sub_1C002E188(DeviceObject->DeviceExtension, 0, 1, 13, (__int64)&unk_1C0062E08, v3);
  v6 = 2LL;
  v7 = v3 - 2;
  if ( !v7 )
  {
    v6 = 1LL;
    goto LABEL_11;
  }
  v8 = v7 - 1;
  if ( !v8 )
  {
    KeResetEvent((PRKEVENT)(v4 + 712));
    sub_1C0043C9C(*(_QWORD *)(a1 + 8));
    IoQueueWorkItem(*((PIO_WORKITEM *)v4 + 148), sub_1C003CB60, DelayedWorkQueue, 0LL);
    v6 = 3LL;
    goto LABEL_11;
  }
  v9 = 6;
  v10 = v8 - 6;
  if ( !v10 )
  {
LABEL_11:
    v11 = *(_QWORD *)(a1 + 8);
    return (unsigned int)sub_1C0031838(v11, a1, v6);
  }
  v11 = *(_QWORD *)(a1 + 8);
  if ( v10 != 1 )
  {
    v6 = v5;
    return (unsigned int)sub_1C0031838(v11, a1, v6);
  }
  v12 = (struct _KSEMAPHORE *)sub_1C000F050(v11);
  v12[87].Limit = 6;
  *(_DWORD *)(a1 + 68) = 6;
  *(_DWORD *)(a1 + 64) = 1734964085;
  Limit = (unsigned int)v12[28].Limit;
  v12[41].Header.WaitListHead.Flink = 0LL;
  v12[Limit + 29].Header.SignalState = 6;
  KeReleaseSemaphore(v12 + 88, 16, 1, 0);
  return v9;
}
