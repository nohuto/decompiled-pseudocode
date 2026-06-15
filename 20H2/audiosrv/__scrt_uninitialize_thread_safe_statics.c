/*
 * XREFs of __scrt_uninitialize_thread_safe_statics @ 0x18006A550
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall _scrt_uninitialize_thread_safe_statics()
{
  DeleteCriticalSection(&stru_18019E188);
  if ( hHandle )
    CloseHandle(hHandle);
}
