/*
 * XREFs of sub_1C001B9C0 @ 0x1C001B9C0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1C000F050 @ 0x1C000F050 (sub_1C000F050.c)
 *     sub_1C000F090 @ 0x1C000F090 (sub_1C000F090.c)
 *     sub_1C000FD80 @ 0x1C000FD80 (sub_1C000FD80.c)
 *     sub_1C001BAA4 @ 0x1C001BAA4 (sub_1C001BAA4.c)
 */

__int64 __fastcall sub_1C001B9C0(PDEVICE_OBJECT DeviceObject, unsigned int a2, __int64 a3)
{
  __int64 v6; // r9
  KIRQL v7; // r10
  int v8; // r11d
  KIRQL v9; // r10
  __int64 v10; // rdx
  _QWORD *v11; // rax

  sub_1C000F050((__int64)DeviceObject);
  KeAcquireSpinLockRaiseToDpc(&qword_1C006B658);
  sub_1C000FD80((__int64)DeviceObject, 4, 1230197367, (__int64)DeviceObject, a3);
  if ( *(_DWORD *)(a3 + 152) == 1 )
  {
    sub_1C000FD80((__int64)DeviceObject, v8, 1230201969, v6, a3);
    v10 = *(_QWORD *)(a3 + 160);
    if ( *(_QWORD *)(v10 + 8) != a3 + 160 || (v11 = *(_QWORD **)(a3 + 168), *v11 != a3 + 160) )
      __fastfail(3u);
    *v11 = v10;
    *(_QWORD *)(v10 + 8) = v11;
    *(_DWORD *)(a3 + 152) = 0;
    KeReleaseSpinLock(&qword_1C006B658, v9);
    sub_1C000F090(DeviceObject, a2, a3);
  }
  else
  {
    KeReleaseSpinLock(&qword_1C006B658, v7);
  }
  return sub_1C001BAA4(DeviceObject);
}
