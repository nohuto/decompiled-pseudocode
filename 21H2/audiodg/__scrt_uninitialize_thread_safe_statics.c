/*
 * XREFs of __scrt_uninitialize_thread_safe_statics @ 0x14001E810
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall _scrt_uninitialize_thread_safe_statics()
{
  DeleteCriticalSection(&stru_14008FD78);
  if ( hEvent )
    CloseHandle(hEvent);
}
