/*
 * XREFs of sub_180071528 @ 0x180071528
 * Callers:
 *     sub_180076FC8 @ 0x180076FC8 (sub_180076FC8.c)
 * Callees:
 *     sub_18011C188 @ 0x18011C188 (sub_18011C188.c)
 *     memset @ 0x18012396A (memset.c)
 *     ??_L@YAXPEAX_K1P6AX0@Z2@Z @ 0x1801243E0 (--_L@YAXPEAX_K1P6AX0@Z2@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_180071528(__int64 a1)
{
  __int64 v2; // rbx
  __int64 v3; // rdx

  *(_DWORD *)(a1 + 8) = 1;
  *(_DWORD *)(a1 + 12) = 1;
  *(_QWORD *)a1 = &std::_Ref_count_obj<Spectre::Engine::CpuProfiler>::`vftable';
  v2 = a1 + 16;
  memset((void *)(a1 + 16), 0, 0x128uLL);
  sub_18011C188(v2, v3);
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
    (void (*)(void *))unknown_libname_162,
    (void (*)(void *))sub_180019400);
  return a1;
}
