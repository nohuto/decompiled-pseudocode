/*
 * XREFs of KiUserExceptionDispatcher @ 0x1800A0C80
 * Callers:
 *     <none>
 * Callees:
 *     RtlDispatchException @ 0x180051210 (RtlDispatchException.c)
 *     RtlGuardRestoreContext @ 0x18006DCA0 (RtlGuardRestoreContext.c)
 *     ZwRaiseException @ 0x18009FAC0 (ZwRaiseException.c)
 *     RtlRaiseStatus @ 0x180102310 (RtlRaiseStatus.c)
 */

void __noreturn KiUserExceptionDispatcher()
{
  unsigned int v0; // eax
  _UNKNOWN *retaddr; // [rsp+0h] [rbp+0h] BYREF

  if ( Wow64PrepareForException )
    Wow64PrepareForException(&STACK[0x4F0], &retaddr);
  if ( RtlDispatchException((__int64)&STACK[0x4F0], (__int64)&retaddr) )
    RtlGuardRestoreContext((PCONTEXT)&retaddr, 0LL);
  else
    v0 = ZwRaiseException();
  RtlRaiseStatus(v0);
}
