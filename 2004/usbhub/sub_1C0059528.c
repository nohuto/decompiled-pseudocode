/*
 * XREFs of sub_1C0059528 @ 0x1C0059528
 * Callers:
 *     sub_1C0058F24 @ 0x1C0058F24 (sub_1C0058F24.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001D060 (_guard_dispatch_icall_nop.c)
 */

__int64 sub_1C0059528(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5, ...)
{
  int v7; // [rsp+20h] [rbp-58h]
  __int64 v8; // [rsp+A8h] [rbp+30h] BYREF
  va_list va; // [rsp+A8h] [rbp+30h]
  __int64 v10; // [rsp+B0h] [rbp+38h] BYREF
  va_list va1; // [rsp+B0h] [rbp+38h]
  __int64 v12; // [rsp+B8h] [rbp+40h] BYREF
  va_list va2; // [rsp+B8h] [rbp+40h]
  va_list va3; // [rsp+C0h] [rbp+48h] BYREF

  va_start(va3, a5);
  va_start(va2, a5);
  va_start(va1, a5);
  va_start(va, a5);
  v8 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v10 = va_arg(va2, _QWORD);
  va_copy(va3, va2);
  v12 = va_arg(va3, _QWORD);
  if ( (HIDWORD(DeviceObject->Timer) & 1) != 0 )
    qword_1C006B728(
      DeviceObject->AttachedDevice,
      43LL,
      &unk_1C0065268,
      13LL,
      (__int64 *)va,
      4LL,
      (__int64 *)va1,
      8LL,
      (__int64 *)va2,
      8LL,
      va3,
      4LL,
      0LL);
  LOWORD(v7) = 13;
  return WppAutoLogTrace(a1, 0LL, 1LL, &unk_1C0065268, v7, (__int64 *)va);
}
