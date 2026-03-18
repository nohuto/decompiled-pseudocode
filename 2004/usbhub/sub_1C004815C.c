/*
 * XREFs of sub_1C004815C @ 0x1C004815C
 * Callers:
 *     sub_1C000ABD0 @ 0x1C000ABD0 (sub_1C000ABD0.c)
 *     sub_1C001BDDC @ 0x1C001BDDC (sub_1C001BDDC.c)
 *     sub_1C00449C0 @ 0x1C00449C0 (sub_1C00449C0.c)
 *     sub_1C0045408 @ 0x1C0045408 (sub_1C0045408.c)
 *     sub_1C0045710 @ 0x1C0045710 (sub_1C0045710.c)
 *     sub_1C004A8FC @ 0x1C004A8FC (sub_1C004A8FC.c)
 *     sub_1C0050274 @ 0x1C0050274 (sub_1C0050274.c)
 *     sub_1C005B7C4 @ 0x1C005B7C4 (sub_1C005B7C4.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001D060 (_guard_dispatch_icall_nop.c)
 */

__int64 sub_1C004815C(__int64 a1, __int64 a2, __int64 a3, unsigned __int16 a4, __int64 a5, ...)
{
  int v8; // [rsp+20h] [rbp-48h]
  __int64 v9; // [rsp+98h] [rbp+30h] BYREF
  va_list va; // [rsp+98h] [rbp+30h]
  __int64 v11; // [rsp+A0h] [rbp+38h] BYREF
  va_list va1; // [rsp+A0h] [rbp+38h]
  va_list va2; // [rsp+A8h] [rbp+40h] BYREF

  va_start(va2, a5);
  va_start(va1, a5);
  va_start(va, a5);
  v9 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v11 = va_arg(va2, _QWORD);
  if ( (HIDWORD(DeviceObject->Timer) & 1) != 0 )
    ((void (__fastcall *)(struct _DEVICE_OBJECT *, __int64, __int64, _QWORD, __int64 *, __int64, __int64 *, __int64, char *, __int64, _QWORD))qword_1C006B728)(
      DeviceObject->AttachedDevice,
      43LL,
      a5,
      a4,
      (__int64 *)va,
      4LL,
      (__int64 *)va1,
      4LL,
      va2,
      4LL,
      0LL);
  LOWORD(v8) = a4;
  return WppAutoLogTrace(a1, 0LL, 1LL, a5, v8, (__int64 *)va);
}
