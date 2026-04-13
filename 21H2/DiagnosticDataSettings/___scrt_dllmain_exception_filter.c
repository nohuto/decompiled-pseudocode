/*
 * XREFs of ___scrt_dllmain_exception_filter @ 0x1000443F
 * Callers:
 *     dllmain_dispatch @ 0x1000411C (dllmain_dispatch.c)
 * Callees:
 *     @_guard_check_icall_nop@4 @ 0x10004890 (@_guard_check_icall_nop@4.c)
 *     ___scrt_is_ucrt_dll_in_use @ 0x10004B7E (___scrt_is_ucrt_dll_in_use.c)
 *     __seh_filter_dll @ 0x10004BC0 (__seh_filter_dll.c)
 */

int __cdecl __scrt_dllmain_exception_filter(
        int a1,
        int a2,
        int a3,
        void (__thiscall *a4)(_DWORD, int, _DWORD, int),
        unsigned int ExceptionNum,
        struct _EXCEPTION_POINTERS *ExceptionPtr)
{
  if ( !__scrt_is_ucrt_dll_in_use() && a2 == 1 )
    a4(a4, a1, 0, a3);
  return _seh_filter_dll(ExceptionNum, ExceptionPtr);
}
