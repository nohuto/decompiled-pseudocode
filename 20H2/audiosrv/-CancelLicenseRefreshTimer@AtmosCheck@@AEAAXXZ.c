/*
 * XREFs of ?CancelLicenseRefreshTimer@AtmosCheck@@AEAAXXZ @ 0x1801348B4
 * Callers:
 *     ?UpdateLicenseRefreshTimer@AtmosCheck@@AEAAXXZ @ 0x1800087C4 (-UpdateLicenseRefreshTimer@AtmosCheck@@AEAAXXZ.c)
 *     ?SetExpiryTimer@AtmosCheck@@AEAAX_K@Z @ 0x180136EC0 (-SetExpiryTimer@AtmosCheck@@AEAAX_K@Z.c)
 *     ?Uninitialize@AtmosCheck@@QEAAXXZ @ 0x180137010 (-Uninitialize@AtmosCheck@@QEAAXXZ.c)
 *     ?UninitializeAppServiceMode@AtmosCheck@@AEAAXXZ @ 0x1801371AC (-UninitializeAppServiceMode@AtmosCheck@@AEAAXXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall AtmosCheck::CancelLicenseRefreshTimer(AtmosCheck *this)
{
  struct _RTL_CRITICAL_SECTION *v1; // rsi
  struct _TP_TIMER *v3; // rdi

  v1 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 56);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 56));
  v3 = (struct _TP_TIMER *)*((_QWORD *)this + 25);
  *((_QWORD *)this + 25) = 0LL;
  *((_QWORD *)this + 29) = 0LL;
  if ( v1 )
    LeaveCriticalSection(v1);
  if ( v3 )
  {
    if ( IsThreadpoolTimerSet(v3) )
    {
      SetThreadpoolTimer(v3, 0LL, 0, 0);
      WaitForThreadpoolTimerCallbacks(v3, 1);
    }
    CloseThreadpoolTimer(v3);
  }
}
