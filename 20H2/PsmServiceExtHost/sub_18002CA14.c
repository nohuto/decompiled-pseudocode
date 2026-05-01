/*
 * XREFs of sub_18002CA14 @ 0x18002CA14
 * Callers:
 *     sub_18002CAD4 @ 0x18002CAD4 (sub_18002CAD4.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800460F0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 */

char *__fastcall sub_18002CA14(__int64 a1, _OWORD *a2, _OWORD *a3)
{
  char *v5; // rax
  char *v6; // rdx
  _OWORD *v7; // rcx
  __int64 v8; // rax
  __int128 v9; // xmm1

  v5 = (char *)operator new(0x250uLL, (const struct std::nothrow_t *)&unk_1800967D8);
  v6 = v5;
  if ( !v5 )
    return 0LL;
  v7 = v5 + 24;
  v8 = 4LL;
  do
  {
    *v7 = *a2;
    v7[1] = a2[1];
    v7[2] = a2[2];
    v7[3] = a2[3];
    v7[4] = a2[4];
    v7[5] = a2[5];
    v7[6] = a2[6];
    v7 += 8;
    v9 = a2[7];
    a2 += 8;
    *(v7 - 1) = v9;
    --v8;
  }
  while ( v8 );
  *v7 = *a2;
  v7[1] = a2[1];
  *((_QWORD *)v7 + 4) = *((_QWORD *)a2 + 4);
  *((_OWORD *)v6 + 36) = *a3;
  return v6;
}
