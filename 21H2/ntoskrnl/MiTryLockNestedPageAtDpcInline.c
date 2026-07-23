/*
 * XREFs of MiTryLockNestedPageAtDpcInline @ 0x14030E6B0
 * Callers:
 *     MiDeleteClusterPage @ 0x140336580 (MiDeleteClusterPage.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall MiTryLockNestedPageAtDpcInline(__int64 a1)
{
  return !_interlockedbittestandset64((volatile signed __int32 *)(a1 + 24), 0x3FuLL);
}
