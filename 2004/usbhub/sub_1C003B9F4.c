/*
 * XREFs of sub_1C003B9F4 @ 0x1C003B9F4
 * Callers:
 *     sub_1C000F880 @ 0x1C000F880 (sub_1C000F880.c)
 * Callees:
 *     sub_1C000F050 @ 0x1C000F050 (sub_1C000F050.c)
 *     _guard_dispatch_icall_nop @ 0x1C001D060 (_guard_dispatch_icall_nop.c)
 *     sub_1C002E0B4 @ 0x1C002E0B4 (sub_1C002E0B4.c)
 */

__int64 (__fastcall *__fastcall sub_1C003B9F4(__int64 a1))(_QWORD, __int64)
{
  _DWORD *v1; // rbx
  __int64 (__fastcall *result)(_QWORD, __int64); // rax

  v1 = sub_1C000F050(a1);
  result = (__int64 (__fastcall *)(_QWORD, __int64))*((_QWORD *)v1 + 552);
  if ( result )
  {
    if ( off_1C006B000 != (_UNKNOWN *)&off_1C006B000 )
    {
      if ( LOWORD(DeviceObject->DeviceType) )
      {
        sub_1C002E0B4((__int64)DeviceObject->DeviceExtension, 0, 1u, 0xAu, (__int64)&unk_1C0062DE8);
        result = (__int64 (__fastcall *)(_QWORD, __int64))*((_QWORD *)v1 + 552);
      }
    }
    result = (__int64 (__fastcall *)(_QWORD, __int64))result(*((_QWORD *)v1 + 529), 1LL);
    v1[640] |= 0x40000u;
  }
  return result;
}
