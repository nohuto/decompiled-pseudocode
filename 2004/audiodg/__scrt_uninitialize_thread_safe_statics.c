/*
 * XREFs of __scrt_uninitialize_thread_safe_statics @ 0x14001E4B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall _scrt_uninitialize_thread_safe_statics()
{
  DeleteCriticalSection(&stru_140084D78);
  if ( hEvent )
    CloseHandle(hEvent);
}
