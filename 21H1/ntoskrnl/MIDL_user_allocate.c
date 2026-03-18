/*
 * XREFs of MIDL_user_allocate @ 0x1406EABE0
 * Callers:
 *     <none>
 * Callees:
 *     ExAllocatePoolWithTag @ 0x1409B1030 (ExAllocatePoolWithTag.c)
 */

void *__stdcall MIDL_user_allocate(size_t size)
{
  return ExAllocatePoolWithTag(PagedPool, size, 0x6370726Bu);
}
