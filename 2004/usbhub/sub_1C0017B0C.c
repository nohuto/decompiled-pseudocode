/*
 * XREFs of sub_1C0017B0C @ 0x1C0017B0C
 * Callers:
 *     sub_1C000CA20 @ 0x1C000CA20 (sub_1C000CA20.c)
 *     sub_1C000F090 @ 0x1C000F090 (sub_1C000F090.c)
 *     sub_1C00109A0 @ 0x1C00109A0 (sub_1C00109A0.c)
 *     sub_1C00162A8 @ 0x1C00162A8 (sub_1C00162A8.c)
 *     sub_1C0017A30 @ 0x1C0017A30 (sub_1C0017A30.c)
 *     sub_1C001B724 @ 0x1C001B724 (sub_1C001B724.c)
 *     sub_1C002EFC0 @ 0x1C002EFC0 (sub_1C002EFC0.c)
 *     sub_1C002FB30 @ 0x1C002FB30 (sub_1C002FB30.c)
 *     sub_1C002FCB0 @ 0x1C002FCB0 (sub_1C002FCB0.c)
 *     sub_1C003D4C8 @ 0x1C003D4C8 (sub_1C003D4C8.c)
 *     sub_1C0042380 @ 0x1C0042380 (sub_1C0042380.c)
 *     sub_1C004A608 @ 0x1C004A608 (sub_1C004A608.c)
 * Callees:
 *     sub_1C000F050 @ 0x1C000F050 (sub_1C000F050.c)
 *     sub_1C000FD80 @ 0x1C000FD80 (sub_1C000FD80.c)
 *     sub_1C0017C80 @ 0x1C0017C80 (sub_1C0017C80.c)
 *     _guard_dispatch_icall_nop @ 0x1C001D060 (_guard_dispatch_icall_nop.c)
 *     sub_1C002E188 @ 0x1C002E188 (sub_1C002E188.c)
 */

__int64 __fastcall sub_1C0017B0C(__int64 a1, unsigned int a2, int a3, __int64 a4, int a5, unsigned int a6, __int64 a7)
{
  char v10; // r13
  unsigned int v11; // ebx
  __int64 v12; // rdi
  __int64 v13; // rsi
  void (__fastcall *v14)(__int64, __int64, void *, _QWORD, __int64, int); // rax
  int v16; // [rsp+28h] [rbp-40h]

  v10 = *((_BYTE *)sub_1C000F050(a1) + 5268);
  v11 = 0;
  if ( off_1C006B000 != (_UNKNOWN *)&off_1C006B000 && LOWORD(DeviceObject->DeviceType) )
    sub_1C002E188(DeviceObject->DeviceExtension, 0, 1, 46, (__int64)&unk_1C0062088, a5);
  if ( a6 != 2001228627 )
    sub_1C000FD80(a1, 8, 1632720717, a6, a4);
  v12 = a7;
  if ( !a7 )
  {
    v12 = sub_1C0017C80(a1, a3, a4, a5, a6, v10);
    if ( !v12 )
      return 3221225626LL;
  }
  _InterlockedIncrement((volatile signed __int32 *)(v12 + 8));
  if ( off_1C006B000 != (_UNKNOWN *)&off_1C006B000 && LOWORD(DeviceObject->DeviceType) )
    sub_1C002E188(DeviceObject->DeviceExtension, 0, 1, 47, (__int64)&unk_1C0062088, a5);
  if ( a6 != 2001228627 )
    sub_1C000FD80(a1, 8, 1364479275, a6, v12);
  v13 = *(_QWORD *)(v12 + 40);
  v14 = (void (__fastcall *)(__int64, __int64, void *, _QWORD, __int64, int))*((_QWORD *)sub_1C000F050(a1) + 598);
  if ( v14 )
  {
    LOBYTE(v16) = v10;
    v14(a1, v13, &sub_1C001A220, a2, v12, v16);
  }
  else
  {
    return (unsigned int)-1073741822;
  }
  return v11;
}
