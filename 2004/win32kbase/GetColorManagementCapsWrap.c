/*
 * XREFs of GetColorManagementCapsWrap @ 0x1C002B488
 * Callers:
 *     ?GreGetDeviceCapsInternal@@YAHAEAVPDEVOBJ@@H@Z @ 0x1C00CFAB4 (-GreGetDeviceCapsInternal@@YAHAEAVPDEVOBJ@@H@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D3820 (_guard_dispatch_icall_nop.c)
 */

__int64 (__fastcall *__fastcall GetColorManagementCapsWrap(__int64 a1))(_QWORD)
{
  __int64 (__fastcall *result)(_QWORD); // rax

  result = qword_1C0251150;
  if ( qword_1C0251150 )
    return (__int64 (__fastcall *)(_QWORD))qword_1C0251150(a1);
  return result;
}
