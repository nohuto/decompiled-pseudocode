/*
 * XREFs of _RtlpUnlinkHandlerChain@4 @ 0x4B3666B0
 * Callers:
 *     _KiUserCallbackExceptionHandler@16 @ 0x4B2F4D80 (_KiUserCallbackExceptionHandler@16.c)
 * Callees:
 *     <none>
 */

_EXCEPTION_REGISTRATION_RECORD *__stdcall RtlpUnlinkHandlerChain(int a1)
{
  unsigned int v1; // ecx
  _EXCEPTION_REGISTRATION_RECORD *result; // eax

  v1 = *(_DWORD *)(a1 + 196);
  for ( result = NtCurrentTeb()->NtTib.ExceptionList; result != (_EXCEPTION_REGISTRATION_RECORD *)-1; result = result->Next )
  {
    if ( v1 <= (unsigned int)result )
    {
      for ( result = NtCurrentTeb()->NtTib.ExceptionList;
            result != (_EXCEPTION_REGISTRATION_RECORD *)-1 && v1 > (unsigned int)result;
            result = result->Next )
      {
        ;
      }
      return result;
    }
  }
  return result;
}
