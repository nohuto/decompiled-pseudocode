/*
 * XREFs of sub_180047164 @ 0x180047164
 * Callers:
 *     sub_180047150 @ 0x180047150 (sub_180047150.c)
 *     sub_1800D07A0 @ 0x1800D07A0 (sub_1800D07A0.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_180047164(_BYTE *a1, char a2)
{
  __int64 result; // rax

  result = (*(__int64 (__fastcall **)(_BYTE *))(*(_QWORD *)a1 + 56LL))(a1);
  if ( (_DWORD)result )
    return 2290679811LL;
  a1[484] = a2;
  return result;
}
