/*
 * XREFs of XDCOBJ_vSetDefaultFontWrap @ 0x1C00D2734
 * Callers:
 *     ?bCleanDC@XDCOBJ@@QEAAHH@Z @ 0x1C0089A90 (-bCleanDC@XDCOBJ@@QEAAHH@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D3820 (_guard_dispatch_icall_nop.c)
 */

__int64 (__fastcall *__fastcall XDCOBJ_vSetDefaultFontWrap(__int64 a1, __int64 a2))(_QWORD, _QWORD)
{
  __int64 (__fastcall *result)(_QWORD, _QWORD); // rax

  result = qword_1C02515A8;
  if ( qword_1C02515A8 )
    return (__int64 (__fastcall *)(_QWORD, _QWORD))qword_1C02515A8(a1, a2);
  return result;
}
