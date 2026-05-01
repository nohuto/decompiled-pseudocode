/*
 * XREFs of __scrt_uninitialize_thread_safe_statics @ 0x18008E080
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall _scrt_uninitialize_thread_safe_statics()
{
  DeleteCriticalSection(&stru_1805CB2F8);
  if ( hHandle )
    CloseHandle(hHandle);
}
