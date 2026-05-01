/*
 * XREFs of sub_180073C80 @ 0x180073C80
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180046860 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_180073C80(__int64 a1, __int64 *a2, _QWORD *a3)
{
  __int64 v3; // rax

  v3 = *a2;
  if ( !*a2 )
    v3 = a2[1] - 0x46000000000000C0LL;
  if ( v3 )
  {
    *a3 = 0LL;
    return 2147500034LL;
  }
  else
  {
    *a3 = a1;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 8LL))(a1);
    return 0LL;
  }
}
