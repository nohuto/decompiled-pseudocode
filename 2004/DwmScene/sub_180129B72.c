/*
 * XREFs of sub_180129B72 @ 0x180129B72
 * Callers:
 *     <none>
 * Callees:
 *     ?deallocate@?$allocator@_W@std@@QEAAXQEA_W_K@Z @ 0x1800F6810 (-deallocate@-$allocator@_W@std@@QEAAXQEA_W_K@Z.c)
 *     _CxxThrowException @ 0x18011E088 (_CxxThrowException.c)
 */

void __fastcall __noreturn sub_180129B72(__int64 a1, __int64 *a2)
{
  std::allocator<wchar_t>::deallocate(a2[6], a2[5], a2[4]);
  throw;
}
