/*
 * XREFs of sub_180041454 @ 0x180041454
 * Callers:
 *     sub_180041454 @ 0x180041454 (sub_180041454.c)
 *     sub_180041804 @ 0x180041804 (sub_180041804.c)
 *     _expandlocale @ 0x1800418BC (_expandlocale.c)
 * Callees:
 *     sub_180041454 @ 0x180041454 (sub_180041454.c)
 *     j_j__o_free @ 0x180123E3C (j_j__o_free.c)
 *     _guard_dispatch_icall_nop @ 0x180125480 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_180041454(__int64 a1, __int64 a2, __int64 *a3)
{
  __int64 *i; // rbx
  __int64 *v6; // rdi
  __int64 v7; // rcx
  __int64 result; // rax

  for ( i = a3; !*((_BYTE *)i + 25); result = j_j__o_free(v6) )
  {
    sub_180041454(a1, a2, i[2]);
    v6 = i;
    i = (__int64 *)*i;
    v7 = v6[5];
    if ( v7 )
    {
      v6[5] = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
    }
  }
  return result;
}
