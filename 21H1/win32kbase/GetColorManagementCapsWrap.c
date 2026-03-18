/*
 * XREFs of GetColorManagementCapsWrap @ 0x1C0055648
 * Callers:
 *     ?GreGetDeviceCapsInternal@@YAHAEAVPDEVOBJ@@H@Z @ 0x1C00CF0B4 (-GreGetDeviceCapsInternal@@YAHAEAVPDEVOBJ@@H@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D2DC0 (_guard_dispatch_icall_nop.c)
 */

__int64 (__fastcall *__fastcall GetColorManagementCapsWrap(__int64 a1))(_QWORD)
{
  __int64 (__fastcall *result)(_QWORD); // rax

  result = qword_1C0257110;
  if ( qword_1C0257110 )
    return (__int64 (__fastcall *)(_QWORD))qword_1C0257110(a1);
  return result;
}
