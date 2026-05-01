/*
 * XREFs of sub_180002080 @ 0x180002080
 * Callers:
 *     sub_180001EF8 @ 0x180001EF8 (sub_180001EF8.c)
 * Callees:
 *     sub_1800021AC @ 0x1800021AC (sub_1800021AC.c)
 *     sub_180046098 @ 0x180046098 (sub_180046098.c)
 *     _guard_dispatch_icall_nop @ 0x180046860 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_180002080(__int64 *a1)
{
  __int64 v2; // rax
  __int64 v3; // rbx
  int v4; // edi

  v2 = sub_180046098(0x550uLL);
  if ( v2 )
    v3 = sub_1800021AC(v2);
  else
    v3 = 0LL;
  if ( v3 )
  {
    v4 = TpAllocTimer(v3 + 1344, sub_180073B80, v3, 0LL);
    if ( v4 >= 0 )
    {
      *a1 = v3;
      v3 = 0LL;
      v4 = 0;
    }
    if ( v3 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  }
  else
  {
    v4 = -1073741801;
  }
  return v4 | 0x10000000u;
}
