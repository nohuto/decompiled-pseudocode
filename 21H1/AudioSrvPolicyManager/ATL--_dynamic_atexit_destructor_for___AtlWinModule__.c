/*
 * XREFs of ATL::_dynamic_atexit_destructor_for___AtlWinModule__ @ 0x180042D00
 * Callers:
 *     <none>
 * Callees:
 *     free @ 0x180040050 (free.c)
 */

void ATL::_dynamic_atexit_destructor_for___AtlWinModule__()
{
  if ( ATL::_AtlWinModule == 72 )
  {
    if ( qword_1800557C8 )
    {
      free(qword_1800557C8);
      qword_1800557C8 = 0LL;
    }
    dword_1800557D0 = 0;
    dword_1800557D4 = 0;
    DeleteCriticalSection(&stru_180055798);
    ATL::_AtlWinModule = 0;
  }
  if ( qword_1800557C8 )
  {
    free(qword_1800557C8);
    qword_1800557C8 = 0LL;
  }
  dword_1800557D0 = 0;
  dword_1800557D4 = 0;
}
