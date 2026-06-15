/*
 * XREFs of ATL::_dynamic_atexit_destructor_for___AtlBaseModule__ @ 0x180042CB0
 * Callers:
 *     <none>
 * Callees:
 *     free @ 0x180040050 (free.c)
 */

void ATL::_dynamic_atexit_destructor_for___AtlBaseModule__()
{
  DeleteCriticalSection(&stru_180055248);
  if ( Block )
  {
    free(Block);
    Block = 0LL;
  }
  dword_180055278 = 0;
  dword_18005527C = 0;
}
