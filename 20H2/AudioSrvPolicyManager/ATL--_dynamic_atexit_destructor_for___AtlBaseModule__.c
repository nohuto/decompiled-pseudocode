/*
 * XREFs of ATL::_dynamic_atexit_destructor_for___AtlBaseModule__ @ 0x18003D2B0
 * Callers:
 *     <none>
 * Callees:
 *     free @ 0x18003A790 (free.c)
 */

void ATL::_dynamic_atexit_destructor_for___AtlBaseModule__()
{
  DeleteCriticalSection(&stru_18004F0F8);
  if ( Block )
  {
    free(Block);
    Block = 0LL;
  }
  dword_18004F128 = 0;
  dword_18004F12C = 0;
}
