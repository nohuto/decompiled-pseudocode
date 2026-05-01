/*
 * XREFs of __scrt_uninitialize_thread_safe_statics @ 0x18008E520
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall _scrt_uninitialize_thread_safe_statics()
{
  DeleteCriticalSection(&stru_1805CC2B8);
  if ( hHandle )
    CloseHandle(hHandle);
}
