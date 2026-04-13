/*
 * XREFs of MIDL_user_allocate @ 0x1800263B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
void *__stdcall MIDL_user_allocate(size_t size)
{
  return malloc(size);
}
