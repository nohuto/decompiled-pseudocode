/*
 * XREFs of sub_1C005D9D8 @ 0x1C005D9D8
 * Callers:
 *     sub_1C005CFC8 @ 0x1C005CFC8 (sub_1C005CFC8.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001D060 (_guard_dispatch_icall_nop.c)
 */

__int64 sub_1C005D9D8(__int64 a1, _DWORD a2, _DWORD a3, unsigned __int16 a4, __int64 a5, ...)
{
  int v8; // [rsp+20h] [rbp-28h]
  va_list va; // [rsp+78h] [rbp+30h] BYREF

  va_start(va, a5);
  if ( (HIDWORD(DeviceObject->Timer) & 1) != 0 && BYTE1(DeviceObject->Timer) >= 4u )
    ((void (__fastcall *)(struct _DEVICE_OBJECT *, __int64, void *, _QWORD, char *, __int64, _QWORD))qword_1C006B728)(
      DeviceObject->AttachedDevice,
      43LL,
      &unk_1C0065940,
      a4,
      va,
      4LL,
      0LL);
  LOWORD(v8) = a4;
  return WppAutoLogTrace(a1, 4LL, 1LL, &unk_1C0065940, v8, va);
}
