/*
 * XREFs of sub_180017F24 @ 0x180017F24
 * Callers:
 *     sub_180010090 @ 0x180010090 (sub_180010090.c)
 *     sub_1800128F0 @ 0x1800128F0 (sub_1800128F0.c)
 *     sub_180014EDC @ 0x180014EDC (sub_180014EDC.c)
 *     sub_180015454 @ 0x180015454 (sub_180015454.c)
 *     sub_180017610 @ 0x180017610 (sub_180017610.c)
 *     sub_180017F24 @ 0x180017F24 (sub_180017F24.c)
 *     sub_180017FBC @ 0x180017FBC (sub_180017FBC.c)
 *     sub_180018020 @ 0x180018020 (sub_180018020.c)
 *     sub_18001AFD0 @ 0x18001AFD0 (sub_18001AFD0.c)
 *     HHOSTEDAPPMANAGERCONTEXTRundown @ 0x180023F40 (HHOSTEDAPPMANAGERCONTEXTRundown.c)
 *     sub_180025BB0 @ 0x180025BB0 (sub_180025BB0.c)
 *     sub_180026564 @ 0x180026564 (sub_180026564.c)
 *     sub_180026714 @ 0x180026714 (sub_180026714.c)
 *     sub_1800295AC @ 0x1800295AC (sub_1800295AC.c)
 *     sub_180029AAC @ 0x180029AAC (sub_180029AAC.c)
 *     sub_18003D170 @ 0x18003D170 (sub_18003D170.c)
 * Callees:
 *     sub_18000A174 @ 0x18000A174 (sub_18000A174.c)
 *     sub_180017F24 @ 0x180017F24 (sub_180017F24.c)
 */

void __fastcall sub_180017F24(__int64 a1)
{
  _QWORD *v2; // rcx
  bool v3; // zf
  __int64 v4; // rax
  _QWORD *v5; // rcx
  _QWORD *v6; // rbx

  if ( *(_QWORD *)(a1 + 16) )
  {
    do
    {
      v2 = *(_QWORD **)a1;
      if ( !*(_QWORD *)a1 )
        sub_18000A174(-2147467259);
      *(_QWORD *)a1 = *v2;
      *v2 = *(_QWORD *)(a1 + 32);
      v3 = (*(_QWORD *)(a1 + 16))-- == 1LL;
      v4 = *(_QWORD *)(a1 + 16);
      *(_QWORD *)(a1 + 32) = v2;
      if ( v3 )
      {
        sub_180017F24(a1);
        v4 = *(_QWORD *)(a1 + 16);
      }
    }
    while ( v4 );
  }
  *(_QWORD *)a1 = 0LL;
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_QWORD *)(a1 + 32) = 0LL;
  v5 = *(_QWORD **)(a1 + 24);
  if ( v5 )
  {
    do
    {
      v6 = (_QWORD *)*v5;
      _o_free(v5);
      v5 = v6;
    }
    while ( v6 );
    *(_QWORD *)(a1 + 24) = 0LL;
  }
}
