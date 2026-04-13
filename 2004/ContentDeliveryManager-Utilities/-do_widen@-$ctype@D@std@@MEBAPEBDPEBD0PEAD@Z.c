/*
 * XREFs of ?do_widen@?$ctype@D@std@@MEBAPEBDPEBD0PEAD@Z @ 0x1800B79A0
 * Callers:
 *     <none>
 * Callees:
 *     memcpy_0 @ 0x1800CDCF8 (memcpy_0.c)
 */

__int64 __fastcall std::ctype<char>::do_widen(__int64 a1, const void *a2, __int64 a3, void *a4)
{
  memcpy_0(a4, a2, a3 - (_QWORD)a2);
  return a3;
}
