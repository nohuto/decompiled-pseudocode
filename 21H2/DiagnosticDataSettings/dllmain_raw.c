/*
 * XREFs of dllmain_raw @ 0x10004222
 * Callers:
 *     dllmain_dispatch @ 0x1000411C (dllmain_dispatch.c)
 * Callees:
 *     @_guard_check_icall_nop@4 @ 0x10004890 (@_guard_check_icall_nop@4.c)
 */

int __stdcall dllmain_raw(int a1, int a2, int a3)
{
  if ( _pRawDllMain )
    return _pRawDllMain(_pRawDllMain, a1, a2, a3);
  else
    return 1;
}
