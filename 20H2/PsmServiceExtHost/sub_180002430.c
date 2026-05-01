/*
 * XREFs of sub_180002430 @ 0x180002430
 * Callers:
 *     sub_18000220C @ 0x18000220C (sub_18000220C.c)
 *     sub_180016100 @ 0x180016100 (sub_180016100.c)
 * Callees:
 *     sub_1800024C4 @ 0x1800024C4 (sub_1800024C4.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800460F0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 */

__int64 __fastcall sub_180002430(_QWORD *a1, __int64 a2)
{
  _QWORD *v2; // rbx
  unsigned int v5; // edi
  _QWORD *v6; // rax
  _QWORD *v7; // rsi
  _QWORD *v8; // rax

  v2 = (_QWORD *)*a1;
  v5 = 0;
  while ( v2 != a1 && *(_DWORD *)(v2[2] + 1288LL) < *(_DWORD *)(a2 + 1288) )
    v2 = (_QWORD *)*v2;
  v6 = operator new(0x18uLL, (const struct std::nothrow_t *)&unk_1800967D8);
  v7 = v6;
  if ( v6 )
  {
    sub_1800024C4(v6 + 2, a2);
    v8 = (_QWORD *)v2[1];
    v7[1] = v8;
    *v7 = v2;
    *v8 = v7;
    v2[1] = v7;
    ++a1[2];
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return v5;
}
