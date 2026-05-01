/*
 * XREFs of sub_180041A40 @ 0x180041A40
 * Callers:
 *     sub_180041808 @ 0x180041808 (sub_180041808.c)
 * Callees:
 *     sub_18004198C @ 0x18004198C (sub_18004198C.c)
 *     sub_180041ACC @ 0x180041ACC (sub_180041ACC.c)
 *     sub_180046098 @ 0x180046098 (sub_180046098.c)
 *     _guard_dispatch_icall_nop @ 0x180046860 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_180041A40(__int64 a1, __int64 a2, __int64 *a3)
{
  __int64 v6; // rax
  __int64 v7; // rbx
  int v8; // edi

  v6 = sub_180046098(0xD0uLL);
  if ( v6 )
    v7 = sub_18004198C(v6);
  else
    v7 = 0LL;
  if ( v7 )
  {
    v8 = sub_180041ACC(v7, a1, a2);
    if ( v8 >= 0 )
    {
      *a3 = v7;
      v7 = 0LL;
      v8 = 0;
    }
    if ( v7 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)v8;
}
