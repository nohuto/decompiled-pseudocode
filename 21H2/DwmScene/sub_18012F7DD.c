/*
 * XREFs of sub_18012F7DD @ 0x18012F7DD
 * Callers:
 *     <none>
 * Callees:
 *     ?deallocate@?$allocator@D@std@@QEAAXQEAD_K@Z @ 0x18008148C (-deallocate@-$allocator@D@std@@QEAAXQEAD_K@Z.c)
 *     _CxxThrowException @ 0x180123958 (_CxxThrowException.c)
 */

void __fastcall __noreturn sub_18012F7DD(__int64 a1, __int64 a2)
{
  std::allocator<char>::deallocate(*(_QWORD *)(a2 + 48), *(_QWORD *)(a2 + 32), *(_QWORD *)(a2 + 40));
  throw;
}
