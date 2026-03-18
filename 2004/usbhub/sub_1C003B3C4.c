/*
 * XREFs of sub_1C003B3C4 @ 0x1C003B3C4
 * Callers:
 *     sub_1C0017E8C @ 0x1C0017E8C (sub_1C0017E8C.c)
 *     sub_1C001C3C0 @ 0x1C001C3C0 (sub_1C001C3C0.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001D060 (_guard_dispatch_icall_nop.c)
 */

__int64 sub_1C003B3C4(__int64 a1, __int64 a2, __int64 a3, unsigned __int16 a4, __int64 a5, ...)
{
  int v8; // [rsp+20h] [rbp-28h]
  va_list va; // [rsp+78h] [rbp+30h] BYREF

  va_start(va, a5);
  if ( (HIDWORD(DeviceObject->Timer) & 1) != 0 )
    ((void (__fastcall *)(struct _DEVICE_OBJECT *, __int64, __int64, _QWORD, char *, __int64, _QWORD))qword_1C006B728)(
      DeviceObject->AttachedDevice,
      43LL,
      a5,
      a4,
      va,
      1LL,
      0LL);
  LOWORD(v8) = a4;
  return WppAutoLogTrace(a1, 0LL, 1LL, a5, v8, va);
}
