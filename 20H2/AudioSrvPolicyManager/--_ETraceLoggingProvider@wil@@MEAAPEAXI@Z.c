/*
 * XREFs of ??_ETraceLoggingProvider@wil@@MEAAPEAXI@Z @ 0x180005520
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180039D98 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

wil::TraceLoggingProvider *__fastcall wil::TraceLoggingProvider::`vector deleting destructor'(
        wil::TraceLoggingProvider *this,
        char a2)
{
  __int64 v4; // rax
  REGHANDLE v5; // rcx

  *(_QWORD *)this = &wil::TraceLoggingProvider::`vftable';
  if ( *((_BYTE *)this + 16) )
  {
    v4 = *((_QWORD *)this + 1);
    v5 = *(_QWORD *)(v4 + 32);
    *(_QWORD *)(v4 + 32) = 0LL;
    *(_DWORD *)v4 = 0;
    EventUnregister(v5);
  }
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x18);
  return this;
}
