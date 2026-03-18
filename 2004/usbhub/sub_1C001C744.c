/*
 * XREFs of sub_1C001C744 @ 0x1C001C744
 * Callers:
 *     sub_1C000F880 @ 0x1C000F880 (sub_1C000F880.c)
 * Callees:
 *     sub_1C000F050 @ 0x1C000F050 (sub_1C000F050.c)
 *     _guard_dispatch_icall_nop @ 0x1C001D060 (_guard_dispatch_icall_nop.c)
 *     sub_1C002E0B4 @ 0x1C002E0B4 (sub_1C002E0B4.c)
 */

__int64 (__fastcall *__fastcall sub_1C001C744(__int64 a1))(_QWORD, _QWORD)
{
  _DWORD *v1; // rbx
  __int64 (__fastcall *result)(_QWORD, _QWORD); // rax

  v1 = sub_1C000F050(a1);
  result = (__int64 (__fastcall *)(_QWORD, _QWORD))*((_QWORD *)v1 + 552);
  if ( result )
  {
    if ( off_1C006B000 != (_UNKNOWN *)&off_1C006B000 && LOWORD(DeviceObject->DeviceType) )
    {
      sub_1C002E0B4(DeviceObject->DeviceExtension, 0, 1, 11, (__int64)&unk_1C0062DE8);
      result = (__int64 (__fastcall *)(_QWORD, _QWORD))(*((__int64 (__fastcall **)(_QWORD, _QWORD))v1 + 552))(
                                                         *((_QWORD *)v1 + 529),
                                                         0LL);
    }
    else
    {
      result = (__int64 (__fastcall *)(_QWORD, _QWORD))result(*((_QWORD *)v1 + 529), 0LL);
    }
    v1[640] &= ~0x40000u;
  }
  return result;
}
