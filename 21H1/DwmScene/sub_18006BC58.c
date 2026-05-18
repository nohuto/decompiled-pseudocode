/*
 * XREFs of sub_18006BC58 @ 0x18006BC58
 * Callers:
 *     sub_1800716F8 @ 0x1800716F8 (sub_1800716F8.c)
 * Callees:
 *     sub_1801168B8 @ 0x1801168B8 (sub_1801168B8.c)
 *     memset @ 0x18011E09A (memset.c)
 *     ??_L@YAXPEAX_K1P6AX0@Z2@Z @ 0x18011EB10 (--_L@YAXPEAX_K1P6AX0@Z2@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_18006BC58(__int64 a1)
{
  __int64 v2; // rbx
  __int64 v3; // rdx

  *(_DWORD *)(a1 + 8) = 1;
  *(_DWORD *)(a1 + 12) = 1;
  *(_QWORD *)a1 = &std::_Ref_count_obj<Spectre::Engine::CpuProfiler>::`vftable';
  v2 = a1 + 16;
  memset((void *)(a1 + 16), 0, 0x128uLL);
  sub_1801168B8(v2, v3);
  *(_BYTE *)(v2 + 8) = 1;
  *(_QWORD *)(v2 + 16) = 0LL;
  *(_QWORD *)(v2 + 24) = 0LL;
  *(_QWORD *)(v2 + 32) = 0LL;
  *(_QWORD *)(v2 + 40) = 0LL;
  *(_QWORD *)(v2 + 48) = 0LL;
  `eh vector constructor iterator'(
    (void *)(v2 + 56),
    0x18uLL,
    0xAuLL,
    (void (*)(void *))unknown_libname_160,
    (void (*)(void *))sub_180018C60);
  return a1;
}
