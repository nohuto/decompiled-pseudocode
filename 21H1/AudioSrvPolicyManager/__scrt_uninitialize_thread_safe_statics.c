/*
 * XREFs of __scrt_uninitialize_thread_safe_statics @ 0x18003F8B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall _scrt_uninitialize_thread_safe_statics()
{
  DeleteCriticalSection(&stru_180055DD8);
  if ( hHandle )
    CloseHandle(hHandle);
}
