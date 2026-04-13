/*
 * XREFs of ___scrt_release_startup_lock @ 0x10004612
 * Callers:
 *     dllmain_crt_process_attach @ 0x10003F85 (dllmain_crt_process_attach.c)
 *     dllmain_crt_process_detach @ 0x1000408C (dllmain_crt_process_detach.c)
 * Callees:
 *     ___scrt_is_ucrt_dll_in_use @ 0x10004B7E (___scrt_is_ucrt_dll_in_use.c)
 */

__int32 __cdecl __scrt_release_startup_lock(char a1)
{
  __int32 result; // eax

  result = __scrt_is_ucrt_dll_in_use();
  if ( result )
  {
    if ( !a1 )
      return _InterlockedExchange(&__scrt_native_startup_lock, 0);
  }
  return result;
}
