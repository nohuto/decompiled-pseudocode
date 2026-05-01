/*
 * XREFs of CCrashDetector::StartMonitoringThreadOfWindow__lambda_d2034e7222b798c6bcd88609da745fd4___ @ 0x1802CA338
 * Callers:
 *     _lambda_1cf7f7afac08fe2873a8a6306d8dbd84_::operator() @ 0x1802CA4E8 (_lambda_1cf7f7afac08fe2873a8a6306d8dbd84_--operator().c)
 *     _lambda_1c848fc40f8d66460ef5049a4e343f17_::operator() @ 0x1802DB294 (_lambda_1c848fc40f8d66460ef5049a4e343f17_--operator().c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18008D2D4 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 */

__int64 __fastcall CCrashDetector::StartMonitoringThreadOfWindow__lambda_d2034e7222b798c6bcd88609da745fd4___(
        PVOID pv,
        HWND hWnd,
        _QWORD *a3)
{
  struct CCrashDetector::CHandler *v6; // rax
  struct CCrashDetector::CHandler *v7; // r8

  v6 = (struct CCrashDetector::CHandler *)operator new(0x10uLL, (const struct std::nothrow_t *)&std::nothrow);
  v7 = v6;
  if ( v6 )
  {
    *(_QWORD *)v6 = off_1804944B8;
    *((_QWORD *)v6 + 1) = *a3;
  }
  else
  {
    v7 = 0LL;
  }
  return CCrashDetector::_StartMonitoringThreadOfWindow(pv, hWnd, v7);
}
