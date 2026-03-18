/*
 * XREFs of __scrt_acquire_startup_lock @ 0x1800E2880
 * Callers:
 *     dllmain_crt_process_attach @ 0x1800E2CF8 (dllmain_crt_process_attach.c)
 *     dllmain_crt_process_detach @ 0x1800E2E14 (dllmain_crt_process_detach.c)
 * Callees:
 *     __scrt_is_ucrt_dll_in_use @ 0x1800E36E4 (__scrt_is_ucrt_dll_in_use.c)
 */

char _scrt_acquire_startup_lock()
{
  PVOID StackBase; // rcx
  signed __int64 v1; // rax

  if ( (unsigned int)_scrt_is_ucrt_dll_in_use() )
  {
    StackBase = NtCurrentTeb()->NtTib.StackBase;
    while ( 1 )
    {
      v1 = _InterlockedCompareExchange64(&_scrt_native_startup_lock, (signed __int64)StackBase, 0LL);
      if ( !v1 )
        break;
      if ( StackBase == (PVOID)v1 )
        return 1;
    }
  }
  return 0;
}
