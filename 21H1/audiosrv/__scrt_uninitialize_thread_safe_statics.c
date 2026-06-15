/*
 * XREFs of __scrt_uninitialize_thread_safe_statics @ 0x18006ADB0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall _scrt_uninitialize_thread_safe_statics()
{
  DeleteCriticalSection(&stru_18019F1C8);
  if ( hHandle )
    CloseHandle(hHandle);
}
