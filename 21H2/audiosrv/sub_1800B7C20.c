/*
 * XREFs of sub_1800B7C20 @ 0x1800B7C20
 * Callers:
 *     sub_18007A686 @ 0x18007A686 (sub_18007A686.c)
 *     sub_1800CDEE5 @ 0x1800CDEE5 (sub_1800CDEE5.c)
 * Callees:
 *     sub_1800472E0 @ 0x1800472E0 (sub_1800472E0.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

void __fastcall sub_1800B7C20(__int64 *a1)
{
  __int64 v2; // rsi
  __int64 *v3; // rbp
  __int64 *v4; // rdi
  __int64 v5; // rcx

  v2 = *a1;
  if ( *a1 )
  {
    v3 = (__int64 *)a1[1];
    v4 = (__int64 *)*a1;
    if ( (__int64 *)v2 != v3 )
    {
      do
      {
        v5 = *v4;
        if ( *v4 )
        {
          *v4 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
        }
        ++v4;
      }
      while ( v4 != v3 );
    }
    sub_1800472E0(v2, (a1[2] - v2) & 0xFFFFFFFFFFFFFFF8uLL);
    *a1 = 0LL;
    a1[1] = 0LL;
    a1[2] = 0LL;
  }
}
