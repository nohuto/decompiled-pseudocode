/*
 * XREFs of sub_18003BB84 @ 0x18003BB84
 * Callers:
 *     sub_18003BB84 @ 0x18003BB84 (sub_18003BB84.c)
 *     sub_18003BF34 @ 0x18003BF34 (sub_18003BF34.c)
 *     _expandlocale @ 0x18003BFEC (_expandlocale.c)
 * Callees:
 *     sub_18003BB84 @ 0x18003BB84 (sub_18003BB84.c)
 *     j_j__o_free @ 0x18011E56C (j_j__o_free.c)
 *     _guard_dispatch_icall_nop @ 0x18011FBB0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_18003BB84(__int64 a1, __int64 a2, __int64 *a3)
{
  __int64 *i; // rbx
  __int64 *v6; // rdi
  __int64 v7; // rcx
  __int64 result; // rax

  for ( i = a3; !*((_BYTE *)i + 25); result = j_j__o_free(v6) )
  {
    sub_18003BB84(a1, a2, i[2]);
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
