/*
 * XREFs of ?GetToken@CAnimationClock@@QEAAJPEAPEAX@Z @ 0x1800097CC
 * Callers:
 *     ?OnGetAnimationClockToken@CAnimationClockCoordinator@@QEAAJU_GUID@@PEAPEAX@Z @ 0x180009768 (-OnGetAnimationClockToken@CAnimationClockCoordinator@@QEAAJU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x180011FE8 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800560C0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CAnimationClock::GetToken(CAnimationClock *this, void **a2)
{
  int v4; // edi
  char *v6; // [rsp+30h] [rbp+8h] BYREF

  v6 = (char *)this + 24;
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 24));
  *a2 = 0LL;
  if ( *((_QWORD *)this + 13)
    || (v4 = (*(__int64 (__fastcall **)(_QWORD, GUID *, char *))(**(_QWORD **)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance
                                                                               + 5)
                                                                             + 24LL)
                                                               + 216LL))(
               *(_QWORD *)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 5) + 24LL),
               &GUID_64217f82_b1ca_430c_8a88_6cedec74c860,
               (char *)this + 104),
        v4 >= 0) )
  {
    v4 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, void **))(**(_QWORD **)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance
                                                                            + 5)
                                                                          + 24LL)
                                                            + 224LL))(
           *(_QWORD *)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 5) + 24LL),
           *((_QWORD *)this + 13),
           a2);
  }
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v6);
  return (unsigned int)v4;
}
