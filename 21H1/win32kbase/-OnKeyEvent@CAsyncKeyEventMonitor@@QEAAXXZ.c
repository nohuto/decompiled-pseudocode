/*
 * XREFs of ?OnKeyEvent@CAsyncKeyEventMonitor@@QEAAXXZ @ 0x1C00621F4
 * Callers:
 *     xxxKeyEventEx @ 0x1C0060840 (xxxKeyEventEx.c)
 * Callees:
 *     ?ReportGetAsyncKeyStateAnomaly@CAsyncKeyEventMonitor@@AEAAXK@Z @ 0x1C0046CE4 (-ReportGetAsyncKeyStateAnomaly@CAsyncKeyEventMonitor@@AEAAXK@Z.c)
 */

void __fastcall CAsyncKeyEventMonitor::OnKeyEvent(CAsyncKeyEventMonitor *this)
{
  CAsyncKeyEventMonitor *v1; // rbx
  int v2; // r8d
  unsigned __int64 v3; // rdx

  v1 = gpAsyncKeyEventMonitor;
  ExAcquirePushLockExclusiveEx((char *)gpAsyncKeyEventMonitor + 96, 0LL);
  if ( *(_DWORD *)v1 && *((_BYTE *)v1 + 88) )
    CAsyncKeyEventMonitor::ReportGetAsyncKeyStateAnomaly(
      v1,
      ((MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24) - *(_DWORD *)v1,
      v2);
  v3 = MEMORY[0xFFFFF78000000320] * MEMORY[0xFFFFF78000000004];
  *((_BYTE *)v1 + 88) = 0;
  *(_DWORD *)v1 = v3 >> 24;
  ExReleasePushLockExclusiveEx((char *)v1 + 96, 0LL);
}
