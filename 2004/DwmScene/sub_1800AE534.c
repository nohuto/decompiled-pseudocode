/*
 * XREFs of sub_1800AE534 @ 0x1800AE534
 * Callers:
 *     sub_1800AE534 @ 0x1800AE534 (sub_1800AE534.c)
 *     sub_1800AED44 @ 0x1800AED44 (sub_1800AED44.c)
 *     sub_1800AED70 @ 0x1800AED70 (sub_1800AED70.c)
 *     sub_1800B03B4 @ 0x1800B03B4 (sub_1800B03B4.c)
 * Callees:
 *     sub_1800AE534 @ 0x1800AE534 (sub_1800AE534.c)
 *     j_j__o_free @ 0x18011E56C (j_j__o_free.c)
 *     _guard_dispatch_icall_nop @ 0x18011FBB0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_1800AE534(__int64 a1, __int64 a2, __int64 *a3)
{
  __int64 *i; // rbx
  __int64 *v6; // rdi
  volatile signed __int32 *v7; // rcx
  __int64 result; // rax

  for ( i = a3; !*((_BYTE *)i + 25); result = j_j__o_free(v6) )
  {
    sub_1800AE534(a1, a2, i[2]);
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
