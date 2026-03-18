/*
 * XREFs of sub_1C0013AE0 @ 0x1C0013AE0
 * Callers:
 *     sub_1C00023E0 @ 0x1C00023E0 (sub_1C00023E0.c)
 *     sub_1C0010540 @ 0x1C0010540 (sub_1C0010540.c)
 *     sub_1C0018F50 @ 0x1C0018F50 (sub_1C0018F50.c)
 *     sub_1C00195F0 @ 0x1C00195F0 (sub_1C00195F0.c)
 *     sub_1C0039C2C @ 0x1C0039C2C (sub_1C0039C2C.c)
 *     sub_1C004CC80 @ 0x1C004CC80 (sub_1C004CC80.c)
 *     sub_1C004D8C0 @ 0x1C004D8C0 (sub_1C004D8C0.c)
 *     sub_1C004DB30 @ 0x1C004DB30 (sub_1C004DB30.c)
 *     sub_1C004E0B0 @ 0x1C004E0B0 (sub_1C004E0B0.c)
 *     sub_1C004E120 @ 0x1C004E120 (sub_1C004E120.c)
 * Callees:
 *     sub_1C000F050 @ 0x1C000F050 (sub_1C000F050.c)
 *     sub_1C000FD80 @ 0x1C000FD80 (sub_1C000FD80.c)
 *     sub_1C001853C @ 0x1C001853C (sub_1C001853C.c)
 *     sub_1C001B88C @ 0x1C001B88C (sub_1C001B88C.c)
 *     sub_1C001C87C @ 0x1C001C87C (sub_1C001C87C.c)
 *     sub_1C001CB8C @ 0x1C001CB8C (sub_1C001CB8C.c)
 *     sub_1C0037200 @ 0x1C0037200 (sub_1C0037200.c)
 */

void __fastcall sub_1C0013AE0(__int64 a1, __int64 a2, int a3)
{
  char v5; // bp
  KSPIN_LOCK *v7; // rdi
  KIRQL v8; // r14
  void *v9; // r10
  KIRQL v10; // al
  KIRQL v11; // al
  KIRQL v12; // r10

  v5 = 1;
  sub_1C000FD80(*(_QWORD *)(a2 + 16), 4, 1667322452, a2, *(unsigned __int16 *)(a2 + 4));
  v7 = (KSPIN_LOCK *)(sub_1C000F050(*(_QWORD *)(a2 + 16)) + 1236);
  if ( KeCancelTimer((PKTIMER)(a2 + 552)) )
  {
    v8 = KeAcquireSpinLockRaiseToDpc(v7);
    sub_1C000FD80(*(_QWORD *)(a2 + 16), 4, 1667322417, a2, _InterlockedExchange64((volatile __int64 *)(a2 + 680), 0LL));
    *(_DWORD *)(a2 + 696) = 0;
    if ( v9 )
      ExFreePoolWithTag(v9, 0);
    if ( !a3 )
      *(_DWORD *)(a2 + 696) = 0;
    sub_1C000FD80(*(_QWORD *)(a2 + 16), 4, 1667323992, a2, *(unsigned __int16 *)(a2 + 4));
    KeSetEvent((PRKEVENT)(a2 + 768), 0, 0);
    if ( *(_DWORD *)(a2 + 696) == 1 )
    {
      *(_DWORD *)(a2 + 696) = 0;
      KeReleaseSpinLock(v7, v8);
      sub_1C001853C(a1, 50LL);
    }
    else
    {
      KeReleaseSpinLock(v7, v8);
    }
    if ( a3 == 1 )
      sub_1C0037200(a1, a2);
  }
  else
  {
    v5 = 0;
    v11 = KeAcquireSpinLockRaiseToDpc(v7);
    if ( *(_DWORD *)(a2 + 696) == 4 )
    {
      KeReleaseSpinLock(v7, v11);
      if ( !(unsigned __int8)sub_1C001CB8C(a1, a2) )
        sub_1C001C87C(a1, a2);
    }
    else
    {
      sub_1C000FD80(*(_QWORD *)(a2 + 16), 4, 1668768052, 0LL, *(unsigned __int16 *)(a2 + 4));
      KeReleaseSpinLock(v7, v12);
      sub_1C001C87C(a1, a2);
      sub_1C001CB8C(a1, a2);
    }
  }
  v10 = KeAcquireSpinLockRaiseToDpc(v7);
  KeReleaseSpinLock(v7, v10);
  if ( v5 )
    sub_1C001B88C(*(_QWORD *)(a2 + 16), a2 + 552);
}
