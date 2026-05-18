/*
 * XREFs of sub_18001CA70 @ 0x18001CA70
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180125480 (_guard_dispatch_icall_nop.c)
 */

__int64 (__fastcall *__fastcall sub_18001CA70(__int64 a1, __int64 a2, __int64 a3))(__int64, __int64, __int64, _QWORD)
{
  __int64 (__fastcall *result)(__int64, __int64, __int64, _QWORD); // rax

  result = (__int64 (__fastcall *)(__int64, __int64, __int64, _QWORD))qword_18021F8B8;
  LODWORD(a2) = a2 | 0x40000000;
  if ( qword_18021F8B8 )
    return (__int64 (__fastcall *)(__int64, __int64, __int64, _QWORD))result(a1, a2, a3, 0LL);
  result = (__int64 (__fastcall *)(__int64, __int64, __int64, _QWORD))qword_18021F8C0;
  if ( qword_18021F8C0 )
    return (__int64 (__fastcall *)(__int64, __int64, __int64, _QWORD))result(a1, a2, a3, 0LL);
  return result;
}
