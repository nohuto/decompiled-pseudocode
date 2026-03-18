/*
 * XREFs of __scrt_uninitialize_thread_safe_statics @ 0x1800E1CE0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall _scrt_uninitialize_thread_safe_statics()
{
  DeleteCriticalSection(&stru_180348E58);
  if ( hHandle )
    CloseHandle(hHandle);
}
