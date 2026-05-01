/*
 * XREFs of ??1NavigationLevelHelper@LegacyWindowWrapper@@QEAA@XZ @ 0x1802DC394
 * Callers:
 *     _LegacyWindowWrapper::LegacyWindowWrapper_::_1_::dtor$2 @ 0x1802DA1D9 (_LegacyWindowWrapper--LegacyWindowWrapper_--_1_--dtor$2.c)
 * Callees:
 *     <none>
 */

void __fastcall LegacyWindowWrapper::NavigationLevelHelper::~NavigationLevelHelper(
        LegacyWindowWrapper::NavigationLevelHelper *this)
{
  struct _TP_TIMER *v2; // rcx

  v2 = (struct _TP_TIMER *)*((_QWORD *)this + 1);
  if ( v2 )
  {
    SetThreadpoolTimer(v2, 0LL, 0, 0);
    WaitForThreadpoolTimerCallbacks(*((PTP_TIMER *)this + 1), 1);
    CloseThreadpoolTimer(*((PTP_TIMER *)this + 1));
  }
}
