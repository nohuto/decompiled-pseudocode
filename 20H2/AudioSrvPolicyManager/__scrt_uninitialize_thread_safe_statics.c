/*
 * XREFs of __scrt_uninitialize_thread_safe_statics @ 0x180039FF0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall _scrt_uninitialize_thread_safe_statics()
{
  DeleteCriticalSection(&stru_18004FC18);
  if ( hHandle )
    CloseHandle(hHandle);
}
