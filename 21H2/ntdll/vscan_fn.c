/*
 * XREFs of vscan_fn @ 0x18009110C
 * Callers:
 *     sscanf @ 0x1800910D0 (sscanf.c)
 * Callees:
 *     _invalid_parameter @ 0x18008C868 (_invalid_parameter.c)
 *     _guard_dispatch_icall_nop @ 0x1800A1120 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall vscan_fn(
        __int64 (__fastcall *a1)(__int64 *, __int64, __int64, __int64),
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5)
{
  unsigned __int64 v5; // rax
  __int64 v7; // [rsp+30h] [rbp-38h] BYREF
  int v8; // [rsp+38h] [rbp-30h]
  __int64 v9; // [rsp+40h] [rbp-28h]
  int v10; // [rsp+48h] [rbp-20h]

  v5 = -1LL;
  do
    ++v5;
  while ( *(_BYTE *)(a2 + v5) );
  if ( a2 && a3 )
  {
    v9 = a2;
    v7 = a2;
    if ( v5 > 0x7FFFFFFF )
      LODWORD(v5) = 0x7FFFFFFF;
    v10 = 73;
    v8 = v5;
    return a1(&v7, a3, a4, a5);
  }
  else
  {
    invalid_parameter();
    return 0xFFFFFFFFLL;
  }
}
