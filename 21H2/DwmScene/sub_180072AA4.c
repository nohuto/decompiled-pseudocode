/*
 * XREFs of sub_180072AA4 @ 0x180072AA4
 * Callers:
 *     sub_180072AA4 @ 0x180072AA4 (sub_180072AA4.c)
 *     sub_180077A30 @ 0x180077A30 (sub_180077A30.c)
 *     sub_180077CDC @ 0x180077CDC (sub_180077CDC.c)
 *     sub_18007C1E0 @ 0x18007C1E0 (sub_18007C1E0.c)
 * Callees:
 *     sub_180012A18 @ 0x180012A18 (sub_180012A18.c)
 *     sub_180072AA4 @ 0x180072AA4 (sub_180072AA4.c)
 *     j_j__o_free @ 0x180123E3C (j_j__o_free.c)
 *     _guard_dispatch_icall_nop @ 0x180125480 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_180072AA4(__int64 a1, __int64 a2, __int64 *a3)
{
  __int64 *i; // rbx
  __int64 *v6; // rdi
  volatile signed __int32 *v7; // rcx
  __int64 result; // rax

  for ( i = a3; !*((_BYTE *)i + 25); result = j_j__o_free(v6) )
  {
    sub_180072AA4(a1, a2, i[2]);
    v6 = i;
    i = (__int64 *)*i;
    sub_180012A18(v6 + 6);
    v7 = (volatile signed __int32 *)v6[5];
    if ( v7 )
    {
      if ( _InterlockedExchangeAdd(v7 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v7 + 8LL))(v7);
    }
  }
  return result;
}
