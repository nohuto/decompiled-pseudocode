/*
 * XREFs of __seh_filter_dll @ 0x10004BC0
 * Callers:
 *     ___scrt_dllmain_exception_filter @ 0x1000443F (___scrt_dllmain_exception_filter.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
int __cdecl _seh_filter_dll(unsigned int ExceptionNum, struct _EXCEPTION_POINTERS *ExceptionPtr)
{
  return __o__seh_filter_dll(ExceptionNum, ExceptionPtr);
}
