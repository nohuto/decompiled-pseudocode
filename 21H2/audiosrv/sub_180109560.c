/*
 * XREFs of sub_180109560 @ 0x180109560
 * Callers:
 *     sub_1801059D0 @ 0x1801059D0 (sub_1801059D0.c)
 *     sub_180105B20 @ 0x180105B20 (sub_180105B20.c)
 * Callees:
 *     sub_1800472E0 @ 0x1800472E0 (sub_1800472E0.c)
 *     sub_180052600 @ 0x180052600 (sub_180052600.c)
 */

void __fastcall sub_180109560(_QWORD *a1)
{
  __int64 v2; // rdx
  std::_Ref_count_base *v3; // rcx
  __int64 v4; // rdi
  __int64 v5; // rcx
  __int64 v6; // rcx

  while ( 1 )
  {
    v2 = a1[4];
    if ( !v2 )
      break;
    v3 = *(std::_Ref_count_base **)(*(_QWORD *)(a1[1] + 8 * ((a1[2] - 1LL) & (v2 + a1[3] - 1LL))) + 8LL);
    if ( v3 )
    {
      sub_180052600(v3);
      v2 = a1[4];
    }
    a1[4] = v2 - 1;
    if ( v2 == 1 )
      a1[3] = 0LL;
  }
  v4 = a1[2];
  while ( v4 )
  {
    --v4;
    v5 = *(_QWORD *)(a1[1] + 8 * v4);
    if ( v5 )
      sub_1800472E0(v5, 0x10uLL);
  }
  v6 = a1[1];
  if ( v6 )
    sub_1800472E0(v6, 8LL * a1[2]);
  a1[2] = 0LL;
  a1[1] = 0LL;
}
