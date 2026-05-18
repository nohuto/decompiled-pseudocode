/*
 * XREFs of sub_18007EAC0 @ 0x18007EAC0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800839A4 @ 0x1800839A4 (sub_1800839A4.c)
 */

__int64 __fastcall sub_18007EAC0(__int64 a1, __int64 a2)
{
  sub_1800839A4(a1);
  return (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)a2 + 208LL))(a2, a1);
}
