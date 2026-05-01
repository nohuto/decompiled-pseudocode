/*
 * XREFs of ?__scrt_uninitialize_thread_safe_statics@@YAXXZ @ 0x180044A50
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall __scrt_uninitialize_thread_safe_statics()
{
  DeleteCriticalSection(&stru_18005AA88);
  if ( hObject )
    CloseHandle(hObject);
}
