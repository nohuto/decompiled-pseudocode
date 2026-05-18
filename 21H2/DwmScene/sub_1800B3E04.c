/*
 * XREFs of sub_1800B3E04 @ 0x1800B3E04
 * Callers:
 *     sub_1800B3E04 @ 0x1800B3E04 (sub_1800B3E04.c)
 *     sub_1800B4614 @ 0x1800B4614 (sub_1800B4614.c)
 *     sub_1800B4640 @ 0x1800B4640 (sub_1800B4640.c)
 *     sub_1800B5C84 @ 0x1800B5C84 (sub_1800B5C84.c)
 * Callees:
 *     sub_1800B3E04 @ 0x1800B3E04 (sub_1800B3E04.c)
 *     j_j__o_free @ 0x180123E3C (j_j__o_free.c)
 *     _guard_dispatch_icall_nop @ 0x180125480 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_1800B3E04(__int64 a1, __int64 a2, __int64 *a3)
{
  __int64 *i; // rbx
  __int64 *v6; // rdi
  volatile signed __int32 *v7; // rcx
  __int64 result; // rax

  for ( i = a3; !*((_BYTE *)i + 25); result = j_j__o_free(v6) )
  {
    sub_1800B3E04(a1, a2, i[2]);
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
