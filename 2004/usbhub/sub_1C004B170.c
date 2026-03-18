/*
 * XREFs of sub_1C004B170 @ 0x1C004B170
 * Callers:
 *     sub_1C004A8FC @ 0x1C004A8FC (sub_1C004A8FC.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001D060 (_guard_dispatch_icall_nop.c)
 */

__int64 sub_1C004B170(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5, ...)
{
  int v7; // [rsp+20h] [rbp-38h]
  __int64 v8; // [rsp+88h] [rbp+30h] BYREF
  va_list va; // [rsp+88h] [rbp+30h]
  va_list va1; // [rsp+90h] [rbp+38h] BYREF

  va_start(va1, a5);
  va_start(va, a5);
  v8 = va_arg(va1, _QWORD);
  if ( (HIDWORD(DeviceObject->Timer) & 1) != 0 )
    ((void (__fastcall *)(struct _DEVICE_OBJECT *, __int64, void *, __int64, __int64 *, __int64, char *, __int64, _QWORD))qword_1C006B728)(
      DeviceObject->AttachedDevice,
      43LL,
      &unk_1C0064998,
      15LL,
      (__int64 *)va,
      4LL,
      va1,
      4LL,
      0LL);
  LOWORD(v7) = 15;
  return WppAutoLogTrace(a1, 0LL, 1LL, &unk_1C0064998, v7, (__int64 *)va);
}
