/*
 * XREFs of XDCOBJ_vSetDefaultFontWrap @ 0x1C00D1CC4
 * Callers:
 *     ?bCleanDC@XDCOBJ@@QEAAHH@Z @ 0x1C00829C0 (-bCleanDC@XDCOBJ@@QEAAHH@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D2DC0 (_guard_dispatch_icall_nop.c)
 */

__int64 (__fastcall *__fastcall XDCOBJ_vSetDefaultFontWrap(__int64 a1, __int64 a2))(_QWORD, _QWORD)
{
  __int64 (__fastcall *result)(_QWORD, _QWORD); // rax

  result = qword_1C0257568;
  if ( qword_1C0257568 )
    return (__int64 (__fastcall *)(_QWORD, _QWORD))qword_1C0257568(a1, a2);
  return result;
}
