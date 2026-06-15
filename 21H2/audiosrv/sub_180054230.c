/*
 * XREFs of sub_180054230 @ 0x180054230
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_180054230(__int64 a1, BOOL *a2)
{
  BOOL v3; // ecx
  __int64 result; // rax

  v3 = (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)qword_18019E618 + 384LL))(qword_18019E618) != 0;
  result = 0LL;
  *a2 = v3;
  return result;
}
