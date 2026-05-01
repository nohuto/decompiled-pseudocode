/*
 * XREFs of sub_1800465F7 @ 0x1800465F7
 * Callers:
 *     <none>
 * Callees:
 *     ?deallocate@?$allocator@D@std@@QEAAXQEAD_K@Z @ 0x1800185C4 (-deallocate@-$allocator@D@std@@QEAAXQEAD_K@Z.c)
 *     _CxxThrowException @ 0x1800453D8 (_CxxThrowException.c)
 */

void __fastcall __noreturn sub_1800465F7(__int64 a1, __int64 a2)
{
  std::allocator<char>::deallocate(a1, *(_QWORD *)(a2 + 80), *(_QWORD *)(a2 + 64));
  throw;
}
