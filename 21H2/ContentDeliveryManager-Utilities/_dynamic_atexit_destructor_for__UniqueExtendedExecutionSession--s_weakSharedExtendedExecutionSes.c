/*
 * XREFs of _dynamic_atexit_destructor_for__UniqueExtendedExecutionSession::s_weakSharedExtendedExecutionSession__ @ 0x1800DAFE0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800D0BC0 (_guard_dispatch_icall_nop.c)
 */

__int64 dynamic_atexit_destructor_for__UniqueExtendedExecutionSession::s_weakSharedExtendedExecutionSession__()
{
  __int64 v0; // rcx
  __int64 result; // rax

  v0 = UniqueExtendedExecutionSession::s_weakSharedExtendedExecutionSession;
  if ( UniqueExtendedExecutionSession::s_weakSharedExtendedExecutionSession )
  {
    UniqueExtendedExecutionSession::s_weakSharedExtendedExecutionSession = 0LL;
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v0 + 16LL))(v0);
  }
  return result;
}
