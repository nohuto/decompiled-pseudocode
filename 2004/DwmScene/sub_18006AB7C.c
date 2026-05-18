/*
 * XREFs of sub_18006AB7C @ 0x18006AB7C
 * Callers:
 *     sub_180025ED0 @ 0x180025ED0 (sub_180025ED0.c)
 *     sub_18006A4A0 @ 0x18006A4A0 (sub_18006A4A0.c)
 *     sub_18006B940 @ 0x18006B940 (sub_18006B940.c)
 *     sub_18007354C @ 0x18007354C (sub_18007354C.c)
 *     sub_180073FB4 @ 0x180073FB4 (sub_180073FB4.c)
 *     sub_180079804 @ 0x180079804 (sub_180079804.c)
 *     sub_1800AAAB0 @ 0x1800AAAB0 (sub_1800AAAB0.c)
 * Callees:
 *     sub_180061808 @ 0x180061808 (sub_180061808.c)
 *     ?_Xlen@?$vector@PEAXV?$allocator@PEAX@std@@@std@@IEBAXXZ_2 @ 0x18006BBC8 (-_Xlen@-$vector@PEAXV-$allocator@PEAX@std@@@std@@IEBAXXZ_2.c)
 */

_QWORD *__fastcall sub_18006AB7C(__int64 a1, _QWORD *a2, unsigned int a3)
{
  unsigned __int64 v4; // rbx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // rcx
  _QWORD *result; // rax

  v4 = a3;
  sub_180061808(a1 + 24);
  v7 = *(_QWORD *)(a1 + 248);
  if ( (*(_QWORD *)(a1 + 256) - v7) >> 4 <= v4 )
    std::vector<void *>::_Xlen(v6, (unsigned int)v4);
  *a2 = 0LL;
  a2[1] = 0LL;
  v8 = *(_QWORD *)(v7 + 16LL * (unsigned int)v4 + 8);
  if ( v8 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v8 + 8));
    v8 = *(_QWORD *)(v7 + 16LL * (unsigned int)v4 + 8);
  }
  *a2 = *(_QWORD *)(v7 + 16LL * (unsigned int)v4);
  result = a2;
  a2[1] = v8;
  return result;
}
