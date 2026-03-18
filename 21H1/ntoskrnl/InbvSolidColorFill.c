/*
 * XREFs of InbvSolidColorFill @ 0x1404F9670
 * Callers:
 *     DisplayBootBitmap @ 0x1403AB120 (DisplayBootBitmap.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1403FE9E0 (_guard_dispatch_icall.c)
 */

__int64 (__fastcall *__fastcall InbvSolidColorFill(__int64 a1, __int64 a2, unsigned int a3))(__int64, __int64, _QWORD)
{
  __int64 (__fastcall *result)(__int64, __int64, _QWORD); // rax

  result = (__int64 (__fastcall *)(__int64, __int64, _QWORD))qword_140C50A98;
  if ( qword_140C50A98 )
  {
    result = *(__int64 (__fastcall **)(__int64, __int64, _QWORD))(qword_140C50A98 + 32);
    if ( result )
      return (__int64 (__fastcall *)(__int64, __int64, _QWORD))result(a1, a2, a3);
  }
  return result;
}
