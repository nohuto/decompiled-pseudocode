/*
 * XREFs of RtlpFunctionAddressTableEntry @ 0x140A54168
 * Callers:
 *     RtlInitializeHistoryTable @ 0x140A54074 (RtlInitializeHistoryTable.c)
 * Callees:
 *     <none>
 */

void (__fastcall __noreturn *__fastcall RtlpFunctionAddressTableEntry(unsigned __int64 a1))(unsigned int a1)
{
  int v1; // ecx
  int v2; // ecx
  int v3; // ecx
  int v4; // ecx
  int v5; // ecx

  if ( a1 <= 6 )
  {
    if ( !(_DWORD)a1 )
      return (void (__fastcall __noreturn *)(unsigned int))RtlUnwindEx;
    v1 = a1 - 1;
    if ( !v1 )
      return (void (__fastcall __noreturn *)(unsigned int))_C_specific_handler;
    v2 = v1 - 1;
    if ( !v2 )
      return (void (__fastcall __noreturn *)(unsigned int))RtlpExecuteHandlerForException;
    v3 = v2 - 1;
    if ( !v3 )
      return (void (__fastcall __noreturn *)(unsigned int))RtlDispatchException;
    v4 = v3 - 1;
    if ( !v4 )
      return RtlRaiseStatus;
    v5 = v4 - 1;
    if ( !v5 )
      return (void (__fastcall __noreturn *)(unsigned int))KiDispatchException;
    if ( v5 == 1 )
      return (void (__fastcall __noreturn *)(unsigned int))KiExceptionDispatch;
  }
  return 0LL;
}
