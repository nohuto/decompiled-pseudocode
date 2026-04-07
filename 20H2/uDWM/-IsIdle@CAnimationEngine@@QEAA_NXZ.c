/*
 * XREFs of ?IsIdle@CAnimationEngine@@QEAA_NXZ @ 0x18000FF80
 * Callers:
 *     ?OnTick@CAnimationEngine@@QEAAJNPEA_N@Z @ 0x18001041C (-OnTick@CAnimationEngine@@QEAAJNPEA_N@Z.c)
 *     ?_ScheduleStartAnimations@CAnimationScheduler@@AEAAJXZ @ 0x180034A24 (-_ScheduleStartAnimations@CAnimationScheduler@@AEAAJXZ.c)
 * Callees:
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x180012D2C (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 */

char __fastcall CAnimationEngine::IsIdle(CAnimationEngine *this)
{
  char v2; // bl
  struct _RTL_CRITICAL_SECTION *v4; // [rsp+30h] [rbp+8h] BYREF

  v4 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v2 = 0;
  if ( !*((_DWORD *)this + 16) || !*((_BYTE *)this + 120) )
    v2 = 1;
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v4);
  return v2;
}
