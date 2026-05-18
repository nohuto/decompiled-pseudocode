/*
 * XREFs of sub_18007044C @ 0x18007044C
 * Callers:
 *     sub_18002B7A0 @ 0x18002B7A0 (sub_18002B7A0.c)
 *     sub_18006FD70 @ 0x18006FD70 (sub_18006FD70.c)
 *     sub_180071210 @ 0x180071210 (sub_180071210.c)
 *     sub_180078E1C @ 0x180078E1C (sub_180078E1C.c)
 *     sub_180079884 @ 0x180079884 (sub_180079884.c)
 *     sub_18007F0D4 @ 0x18007F0D4 (sub_18007F0D4.c)
 *     sub_1800B0380 @ 0x1800B0380 (sub_1800B0380.c)
 * Callees:
 *     sub_1800670D8 @ 0x1800670D8 (sub_1800670D8.c)
 *     ?_Xlen@?$vector@PEAXV?$allocator@PEAX@std@@@std@@IEBAXXZ_2 @ 0x180071498 (-_Xlen@-$vector@PEAXV-$allocator@PEAX@std@@@std@@IEBAXXZ_2.c)
 */

_QWORD *__fastcall sub_18007044C(__int64 a1, _QWORD *a2, unsigned int a3)
{
  unsigned __int64 v4; // rbx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // rcx
  _QWORD *result; // rax

  v4 = a3;
  sub_1800670D8(a1 + 24);
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
