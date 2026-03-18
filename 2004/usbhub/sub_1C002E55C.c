/*
 * XREFs of sub_1C002E55C @ 0x1C002E55C
 * Callers:
 *     sub_1C0002478 @ 0x1C0002478 (sub_1C0002478.c)
 *     sub_1C0004C90 @ 0x1C0004C90 (sub_1C0004C90.c)
 *     sub_1C0005240 @ 0x1C0005240 (sub_1C0005240.c)
 *     WorkerRoutine @ 0x1C00057E0 (WorkerRoutine.c)
 *     sub_1C0006460 @ 0x1C0006460 (sub_1C0006460.c)
 *     sub_1C00071D0 @ 0x1C00071D0 (sub_1C00071D0.c)
 *     sub_1C0007A40 @ 0x1C0007A40 (sub_1C0007A40.c)
 *     sub_1C0007F60 @ 0x1C0007F60 (sub_1C0007F60.c)
 *     sub_1C0008570 @ 0x1C0008570 (sub_1C0008570.c)
 *     sub_1C0008BD0 @ 0x1C0008BD0 (sub_1C0008BD0.c)
 *     sub_1C000B0E0 @ 0x1C000B0E0 (sub_1C000B0E0.c)
 *     sub_1C000F880 @ 0x1C000F880 (sub_1C000F880.c)
 *     sub_1C00131B0 @ 0x1C00131B0 (sub_1C00131B0.c)
 *     sub_1C00162A8 @ 0x1C00162A8 (sub_1C00162A8.c)
 *     sub_1C0016F40 @ 0x1C0016F40 (sub_1C0016F40.c)
 *     sub_1C0017E8C @ 0x1C0017E8C (sub_1C0017E8C.c)
 *     sub_1C00195F0 @ 0x1C00195F0 (sub_1C00195F0.c)
 *     sub_1C001C160 @ 0x1C001C160 (sub_1C001C160.c)
 *     sub_1C002B680 @ 0x1C002B680 (sub_1C002B680.c)
 *     sub_1C0033A0C @ 0x1C0033A0C (sub_1C0033A0C.c)
 *     sub_1C0033EEC @ 0x1C0033EEC (sub_1C0033EEC.c)
 *     sub_1C0033FC4 @ 0x1C0033FC4 (sub_1C0033FC4.c)
 *     sub_1C00340A0 @ 0x1C00340A0 (sub_1C00340A0.c)
 *     sub_1C00342BC @ 0x1C00342BC (sub_1C00342BC.c)
 *     sub_1C0034728 @ 0x1C0034728 (sub_1C0034728.c)
 *     sub_1C00348FC @ 0x1C00348FC (sub_1C00348FC.c)
 *     sub_1C0035154 @ 0x1C0035154 (sub_1C0035154.c)
 *     sub_1C0035284 @ 0x1C0035284 (sub_1C0035284.c)
 *     sub_1C00354A8 @ 0x1C00354A8 (sub_1C00354A8.c)
 *     sub_1C0035A44 @ 0x1C0035A44 (sub_1C0035A44.c)
 *     sub_1C0035BB0 @ 0x1C0035BB0 (sub_1C0035BB0.c)
 *     sub_1C0035E78 @ 0x1C0035E78 (sub_1C0035E78.c)
 *     sub_1C004A8FC @ 0x1C004A8FC (sub_1C004A8FC.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001D060 (_guard_dispatch_icall_nop.c)
 */

__int64 sub_1C002E55C(__int64 a1, __int64 a2, __int64 a3, unsigned __int16 a4, __int64 a5, ...)
{
  int v8; // [rsp+20h] [rbp-38h]
  __int64 v9; // [rsp+88h] [rbp+30h] BYREF
  va_list va; // [rsp+88h] [rbp+30h]
  va_list va1; // [rsp+90h] [rbp+38h] BYREF

  va_start(va1, a5);
  va_start(va, a5);
  v9 = va_arg(va1, _QWORD);
  if ( (HIDWORD(DeviceObject->Timer) & 1) != 0 )
    ((void (__fastcall *)(struct _DEVICE_OBJECT *, __int64, __int64, _QWORD, __int64 *, __int64, char *, __int64, _QWORD))qword_1C006B728)(
      DeviceObject->AttachedDevice,
      43LL,
      a5,
      a4,
      (__int64 *)va,
      4LL,
      va1,
      8LL,
      0LL);
  LOWORD(v8) = a4;
  return WppAutoLogTrace(a1, 0LL, 1LL, a5, v8, (__int64 *)va);
}
