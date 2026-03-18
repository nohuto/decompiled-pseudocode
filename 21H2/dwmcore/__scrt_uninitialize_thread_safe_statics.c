/*
 * XREFs of __scrt_uninitialize_thread_safe_statics @ 0x1801010D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall _scrt_uninitialize_thread_safe_statics()
{
  DeleteCriticalSection(&stru_1803D2DB8);
  if ( hHandle )
    CloseHandle(hHandle);
}
