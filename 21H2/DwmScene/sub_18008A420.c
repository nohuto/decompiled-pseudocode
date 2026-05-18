/*
 * XREFs of sub_18008A420 @ 0x18008A420
 * Callers:
 *     sub_18008B040 @ 0x18008B040 (sub_18008B040.c)
 *     sub_1800BD538 @ 0x1800BD538 (sub_1800BD538.c)
 *     sub_18010D18C @ 0x18010D18C (sub_18010D18C.c)
 *     sub_180111184 @ 0x180111184 (sub_180111184.c)
 *     sub_18011CC9C @ 0x18011CC9C (sub_18011CC9C.c)
 *     sub_180122354 @ 0x180122354 (sub_180122354.c)
 * Callees:
 *     ?_Xlen@?$vector@PEAXV?$allocator@PEAX@std@@@std@@IEBAXXZ_0 @ 0x180010BD8 (-_Xlen@-$vector@PEAXV-$allocator@PEAX@std@@@std@@IEBAXXZ_0.c)
 *     sub_180020F10 @ 0x180020F10 (sub_180020F10.c)
 *     sub_18008B420 @ 0x18008B420 (sub_18008B420.c)
 */

void __fastcall sub_18008A420(_QWORD *a1, unsigned __int64 a2, _QWORD *a3)
{
  unsigned __int64 v4; // rbx
  _QWORD *v6; // rax
  _QWORD v7[3]; // [rsp+20h] [rbp-18h] BYREF

  if ( a2 )
  {
    v4 = a2;
    if ( a2 > 0x1FFFFFFFFFFFFFFFLL )
      std::vector<void *>::_Xlen();
    v6 = sub_180020F10((__int64)a1, a2);
    *a1 = v6;
    a1[1] = v6;
    a1[2] = &v6[v4];
    do
    {
      *v6++ = *a3;
      --v4;
    }
    while ( v4 );
    v7[0] = 0LL;
    a1[1] = v6;
    sub_18008B420(v7);
  }
}
