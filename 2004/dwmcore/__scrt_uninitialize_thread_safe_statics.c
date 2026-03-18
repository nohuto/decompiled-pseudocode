/*
 * XREFs of __scrt_uninitialize_thread_safe_statics @ 0x1800E3180
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall _scrt_uninitialize_thread_safe_statics()
{
  DeleteCriticalSection(&stru_180344E58);
  if ( hHandle )
    CloseHandle(hHandle);
}
