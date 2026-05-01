/*
 * XREFs of ?Release@?$weak_ref@$00@impl@winrt@@UEAAIXZ @ 0x180464CC0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18008D274 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

__int64 __fastcall winrt::impl::weak_ref<1>::Release(volatile signed __int32 *a1)
{
  unsigned __int32 v1; // ebx

  v1 = _InterlockedDecrement(a1 + 7);
  if ( !v1 )
    operator delete((void *)a1, (const struct std::nothrow_t *)0x20);
  return v1;
}
