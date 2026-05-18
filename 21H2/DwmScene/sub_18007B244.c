/*
 * XREFs of sub_18007B244 @ 0x18007B244
 * Callers:
 *     sub_1800C2B80 @ 0x1800C2B80 (sub_1800C2B80.c)
 * Callees:
 *     ?_Xlen@?$vector@PEAXV?$allocator@PEAX@std@@@std@@IEBAXXZ_2 @ 0x180071498 (-_Xlen@-$vector@PEAXV-$allocator@PEAX@std@@@std@@IEBAXXZ_2.c)
 */

_QWORD *__fastcall sub_18007B244(__int64 a1, _QWORD *a2, int a3)
{
  unsigned __int64 v3; // r9
  __int64 v4; // r8
  __int64 v5; // r9
  __int64 v6; // rcx
  _QWORD *result; // rax

  v3 = a3;
  v4 = *(_QWORD *)(a1 + 704);
  if ( (*(_QWORD *)(a1 + 712) - v4) >> 4 <= v3 )
    std::vector<void *>::_Xlen();
  *a2 = 0LL;
  v5 = 2 * v3;
  a2[1] = 0LL;
  v6 = *(_QWORD *)(v4 + 8 * v5 + 8);
  if ( v6 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v6 + 8));
    v6 = *(_QWORD *)(v4 + 8 * v5 + 8);
  }
  *a2 = *(_QWORD *)(v4 + 8 * v5);
  result = a2;
  a2[1] = v6;
  return result;
}
