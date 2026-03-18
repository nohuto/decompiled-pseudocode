/*
 * XREFs of _xxxUserChangeDisplaySettings_::_2_::_AUTO_KM::__AUTO_KM @ 0x1C0069EE4
 * Callers:
 *     xxxUserChangeDisplaySettings @ 0x1C0069850 (xxxUserChangeDisplaySettings.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D36F0 (_guard_dispatch_icall_nop.c)
 */

__int64 (__fastcall *__fastcall xxxUserChangeDisplaySettings_::_2_::_AUTO_KM::__AUTO_KM(_QWORD *a1))(_QWORD)
{
  __int64 (__fastcall *result)(_QWORD); // rax

  if ( a1[4] )
  {
    result = qword_1C024FFE8;
    if ( qword_1C024FFE8 )
      result = (__int64 (__fastcall *)(_QWORD))qword_1C024FFE8(a1 + 5);
  }
  if ( *a1 )
  {
    result = qword_1C024FFE8;
    if ( qword_1C024FFE8 )
      return (__int64 (__fastcall *)(_QWORD))qword_1C024FFE8(a1 + 1);
  }
  return result;
}
