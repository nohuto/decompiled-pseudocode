/*
 * XREFs of ?OnMessage@MeetNowExperienceManager@@UEAAJI_K_J@Z @ 0x1800A2040
 * Callers:
 *     <none>
 * Callees:
 *     ??$FailedToShowInSpecifiedTime@K@ShowFlyoutActivity@MeetNowTelemetry@@QEAAX$$QEAK@Z @ 0x18009FC2C (--$FailedToShowInSpecifiedTime@K@ShowFlyoutActivity@MeetNowTelemetry@@QEAAX$$QEAK@Z.c)
 *     ?CancelShowFlyoutActivityTimeout@MeetNowExperienceManager@@AEAAXXZ @ 0x1800A0DA8 (-CancelShowFlyoutActivityTimeout@MeetNowExperienceManager@@AEAAXXZ.c)
 */

__int64 __fastcall MeetNowExperienceManager::OnMessage(
        MeetNowExperienceManager *this,
        int a2,
        MeetNowExperienceManager *a3,
        int a4)
{
  MeetNowExperienceManager *v5; // rcx
  int v7; // [rsp+38h] [rbp+10h] BYREF

  if ( !a2 )
  {
    v5 = (MeetNowExperienceManager *)((char *)this - 24);
    if ( a3 == v5 && !a4 )
    {
      MeetNowExperienceManager::CancelShowFlyoutActivityTimeout(v5);
      if ( **((_DWORD **)this + 13) == 1 )
      {
        v7 = 5000;
        MeetNowTelemetry::ShowFlyoutActivity::FailedToShowInSpecifiedTime<unsigned long>((__int64)this + 56, &v7);
      }
    }
  }
  return 0LL;
}
