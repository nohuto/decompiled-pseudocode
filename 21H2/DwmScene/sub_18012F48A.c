/*
 * XREFs of sub_18012F48A @ 0x18012F48A
 * Callers:
 *     <none>
 * Callees:
 *     ?deallocate@?$allocator@_W@std@@QEAAXQEA_W_K@Z @ 0x1800FC0E0 (-deallocate@-$allocator@_W@std@@QEAAXQEA_W_K@Z.c)
 *     _CxxThrowException @ 0x180123958 (_CxxThrowException.c)
 */

void __fastcall __noreturn sub_18012F48A(__int64 a1, __int64 *a2)
{
  std::allocator<wchar_t>::deallocate(a2[6], a2[5], a2[4]);
  throw;
}
