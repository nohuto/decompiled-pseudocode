/*
 * XREFs of sub_1800A7C10 @ 0x1800A7C10
 * Callers:
 *     sub_1800A7C10 @ 0x1800A7C10 (sub_1800A7C10.c)
 *     sub_1800A8F24 @ 0x1800A8F24 (sub_1800A8F24.c)
 *     sub_1800A8F80 @ 0x1800A8F80 (sub_1800A8F80.c)
 *     sub_1800A90D8 @ 0x1800A90D8 (sub_1800A90D8.c)
 *     sub_1800AA9C8 @ 0x1800AA9C8 (sub_1800AA9C8.c)
 *     sub_1800AB2E0 @ 0x1800AB2E0 (sub_1800AB2E0.c)
 *     sub_18012C8DA @ 0x18012C8DA (sub_18012C8DA.c)
 * Callees:
 *     sub_1800A7C10 @ 0x1800A7C10 (sub_1800A7C10.c)
 *     j_j__o_free @ 0x180123E3C (j_j__o_free.c)
 *     _guard_dispatch_icall_nop @ 0x180125480 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_1800A7C10(__int64 a1, __int64 a2, __int64 *a3)
{
  __int64 *i; // rbx
  __int64 *v6; // rdi
  volatile signed __int32 *v7; // rcx
  __int64 result; // rax

  for ( i = a3; !*((_BYTE *)i + 25); result = j_j__o_free(v6) )
  {
    sub_1800A7C10(a1, a2, i[2]);
    v6 = i;
    i = (__int64 *)*i;
    v7 = (volatile signed __int32 *)v6[5];
    if ( v7 )
    {
      if ( _InterlockedExchangeAdd(v7 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v7 + 8LL))(v7);
    }
  }
  return result;
}
