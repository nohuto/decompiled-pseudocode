/*
 * XREFs of sub_1C003C9C8 @ 0x1C003C9C8
 * Callers:
 *     CsqCompleteCanceledIrp @ 0x1C001CD00 (CsqCompleteCanceledIrp.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001D060 (_guard_dispatch_icall_nop.c)
 */

__int64 sub_1C003C9C8(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5, ...)
{
  int v7; // [rsp+20h] [rbp-48h]
  __int64 v8; // [rsp+98h] [rbp+30h] BYREF
  va_list va; // [rsp+98h] [rbp+30h]
  __int64 v10; // [rsp+A0h] [rbp+38h] BYREF
  va_list va1; // [rsp+A0h] [rbp+38h]
  va_list va2; // [rsp+A8h] [rbp+40h] BYREF

  va_start(va2, a5);
  va_start(va1, a5);
  va_start(va, a5);
  v8 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v10 = va_arg(va2, _QWORD);
  if ( (HIDWORD(DeviceObject->Timer) & 1) != 0 )
    ((void (__fastcall *)(struct _DEVICE_OBJECT *, __int64, void *, __int64, __int64 *, __int64, __int64 *, __int64, char *, __int64, _QWORD))qword_1C006B728)(
      DeviceObject->AttachedDevice,
      43LL,
      &unk_1C0062DF8,
      24LL,
      (__int64 *)va,
      4LL,
      (__int64 *)va1,
      8LL,
      va2,
      8LL,
      0LL);
  LOWORD(v7) = 24;
  return WppAutoLogTrace(a1, 0LL, 1LL, &unk_1C0062DF8, v7, (__int64 *)va);
}
