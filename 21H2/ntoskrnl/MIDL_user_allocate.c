/*
 * XREFs of MIDL_user_allocate @ 0x1406DD160
 * Callers:
 *     <none>
 * Callees:
 *     ExAllocatePoolWithTag @ 0x140A6E910 (ExAllocatePoolWithTag.c)
 */

void *__stdcall MIDL_user_allocate(size_t size)
{
  return ExAllocatePoolWithTag(PagedPool, size, 0x6370726Bu);
}
