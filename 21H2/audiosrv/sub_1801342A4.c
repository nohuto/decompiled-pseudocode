/*
 * XREFs of sub_1801342A4 @ 0x1801342A4
 * Callers:
 *     sub_1801380EC @ 0x1801380EC (sub_1801380EC.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

unsigned __int64 __fastcall sub_1801342A4(__int64 a1)
{
  _QWORD *v1; // rbx
  __int64 v2; // rdi
  unsigned __int64 result; // rax
  __int64 v4; // rsi

  v1 = *(_QWORD **)a1;
  v2 = 0LL;
  result = 8LL * *(_QWORD *)(a1 + 8) + *(_QWORD *)a1;
  v4 = *(_QWORD *)(a1 + 8) & 0x1FFFFFFFFFFFFFFFLL;
  if ( *(_QWORD *)a1 > result )
    v4 = 0LL;
  if ( v4 )
  {
    do
    {
      if ( *v1 )
        result = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*v1 + 16LL))(*v1);
      ++v1;
      ++v2;
    }
    while ( v2 != v4 );
  }
  return result;
}
