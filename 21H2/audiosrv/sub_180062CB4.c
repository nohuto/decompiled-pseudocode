/*
 * XREFs of sub_180062CB4 @ 0x180062CB4
 * Callers:
 *     sub_180062C18 @ 0x180062C18 (sub_180062C18.c)
 *     sub_1800B8200 @ 0x1800B8200 (sub_1800B8200.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

unsigned __int64 __fastcall sub_180062CB4(__int64 a1, char a2)
{
  unsigned __int64 v2; // rbx
  unsigned __int64 result; // rax

  v2 = qword_18019E6A0;
  result = qword_18019E6A8;
  while ( v2 < result )
  {
    if ( *(_QWORD *)v2 )
    {
      LOBYTE(a1) = a2;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 64LL))(a1);
      result = qword_18019E6A8;
    }
    v2 += 8LL;
  }
  return result;
}
