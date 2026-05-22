/*
 * XREFs of ??1?$unique_ptr@U_EVENT_TRACE_PROPERTIES@@U?$default_delete@U_EVENT_TRACE_PROPERTIES@@@std@@@std@@QEAA@XZ @ 0x18009293C
 * Callers:
 *     _TracingSessionHelper::StartOrStop_::_1_::dtor$1 @ 0x18009620F (_TracingSessionHelper--StartOrStop_--_1_--dtor$1.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18003C660 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

void __fastcall std::unique_ptr<_EVENT_TRACE_PROPERTIES>::~unique_ptr<_EVENT_TRACE_PROPERTIES>(void **a1)
{
  void *v1; // rcx

  v1 = *a1;
  if ( v1 )
    operator delete(v1, (const struct std::nothrow_t *)0x78);
}
