/*
 * XREFs of sub_1C0038F30 @ 0x1C0038F30
 * Callers:
 *     <none>
 * Callees:
 *     sub_1C0001AE8 @ 0x1C0001AE8 (sub_1C0001AE8.c)
 *     sub_1C0001BF8 @ 0x1C0001BF8 (sub_1C0001BF8.c)
 *     sub_1C000F050 @ 0x1C000F050 (sub_1C000F050.c)
 *     sub_1C000FD80 @ 0x1C000FD80 (sub_1C000FD80.c)
 *     sub_1C001B88C @ 0x1C001B88C (sub_1C001B88C.c)
 *     sub_1C002DC78 @ 0x1C002DC78 (sub_1C002DC78.c)
 *     sub_1C002E188 @ 0x1C002E188 (sub_1C002E188.c)
 *     sub_1C003439C @ 0x1C003439C (sub_1C003439C.c)
 */

void __fastcall sub_1C0038F30(
        struct _KDPC *Dpc,
        unsigned __int16 *DeferredContext,
        PVOID SystemArgument1,
        PVOID SystemArgument2)
{
  KSPIN_LOCK *v5; // rsi
  _DWORD *v6; // rdi
  __int64 v7; // rcx
  KIRQL v8; // r10
  __int64 v9; // rcx
  int v10; // [rsp+20h] [rbp-28h]
  __int64 v11; // [rsp+28h] [rbp-20h]
  __int64 v12; // [rsp+58h] [rbp+10h] BYREF

  v12 = 0LL;
  if ( off_1C006B000 != (_UNKNOWN *)&off_1C006B000 && LOWORD(DeviceObject->DeviceType) )
    sub_1C002E188((__int64)DeviceObject->DeviceExtension, 0, 1u, 0x16u, (__int64)"FKh&", DeferredContext[2]);
  sub_1C000FD80(*((_QWORD *)DeferredContext + 2), 4, 1382314083, (__int64)DeferredContext, DeferredContext[2]);
  if ( off_1C006B000 != (_UNKNOWN *)&off_1C006B000 && LOWORD(DeviceObject->DeviceType) )
  {
    LODWORD(v11) = DeferredContext[2];
    sub_1C002E188((__int64)DeviceObject->DeviceExtension, 0, 1u, 0x17u, (__int64)"FKh&", v11);
  }
  v5 = (KSPIN_LOCK *)(sub_1C000F050(*((_QWORD *)DeferredContext + 2)) + 1236);
  KeAcquireSpinLockRaiseToDpc(v5);
  sub_1C000FD80(*((_QWORD *)DeferredContext + 2), 4, 1382314033, (__int64)DeferredContext, DeferredContext[2]);
  v6 = (_DWORD *)*((_QWORD *)DeferredContext + 85);
  v7 = *((_QWORD *)DeferredContext + 2);
  if ( !v6 )
    sub_1C002DC78(v7, 0LL);
  if ( *v6 != 1867468116 )
    sub_1C002DC78(v7, *((_QWORD *)DeferredContext + 85));
  sub_1C000FD80(v7, 4, 1383361903, *((_QWORD *)DeferredContext + 85), DeferredContext[2]);
  *((_DWORD *)DeferredContext + 174) = 4;
  KeReleaseSpinLock(v5, v8);
  v9 = *((_QWORD *)DeferredContext + 2);
  LODWORD(v12) = 0x10000;
  v6[2] = sub_1C0001BF8(v9);
  sub_1C0001AE8(*((_QWORD *)DeferredContext + 2), (__int64)&v12, 1869444177);
  sub_1C001B88C(*((_QWORD *)DeferredContext + 2), (__int64)(DeferredContext + 276));
  KeSetEvent((PRKEVENT)DeferredContext + 32, 0, 0);
  sub_1C003439C(
    *((_QWORD *)DeferredContext + 2),
    DeferredContext[2],
    v12,
    (__int64)(DeferredContext + 12),
    v10,
    (__int64)v6);
  sub_1C000FD80(*((_QWORD *)DeferredContext + 2), 4, 1383294324, DeferredContext[2], (__int64)v6);
  sub_1C001B88C(*((_QWORD *)DeferredContext + 2), (__int64)&v12);
}
