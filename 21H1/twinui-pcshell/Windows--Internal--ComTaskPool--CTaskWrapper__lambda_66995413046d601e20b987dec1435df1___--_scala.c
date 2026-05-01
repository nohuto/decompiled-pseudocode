/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_66995413046d601e20b987dec1435df1___::_scalar_deleting_destructor_ @ 0x1800A2320
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18008CE60 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1OnPreloadInputAppActivity@TouchKeyboardExperienceTelemetryLogger@@QEAA@XZ @ 0x180326558 (--1OnPreloadInputAppActivity@TouchKeyboardExperienceTelemetryLogger@@QEAA@XZ.c)
 */

_DWORD *__fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_66995413046d601e20b987dec1435df1___::_scalar_deleting_destructor_(
        _DWORD *a1,
        char a2)
{
  TouchKeyboardExperienceTelemetryLogger::OnPreloadInputAppActivity::~OnPreloadInputAppActivity((TouchKeyboardExperienceTelemetryLogger::OnPreloadInputAppActivity *)(a1 + 6));
  a1[3] = -1073741823;
  if ( (a2 & 1) != 0 )
    operator delete(a1, (const struct std::nothrow_t *)0x150);
  return a1;
}
