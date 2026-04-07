/*
 * XREFs of ?ScheduleStopAnimation@CStoryboard@@QEAAJXZ @ 0x180008214
 * Callers:
 *     ?Abandon@CStoryboard@@QEAAXXZ @ 0x180008088 (-Abandon@CStoryboard@@QEAAXXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800039DC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x180011FE8 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?_Cleanup@CStoryboard@@IEAAXXZ @ 0x180032048 (-_Cleanup@CStoryboard@@IEAAXXZ.c)
 *     ?Release@CAnimationEngine@@UEAAKXZ @ 0x1800370E0 (-Release@CAnimationEngine@@UEAAKXZ.c)
 *     ?AcquireAnimationEngine@CDesktopManager@@SAPEAVCAnimationEngine@@XZ @ 0x1800379C4 (-AcquireAnimationEngine@CDesktopManager@@SAPEAVCAnimationEngine@@XZ.c)
 *     ?ScheduleStopAnimation@CAnimationEngine@@QEAAJI@Z @ 0x1800392A4 (-ScheduleStopAnimation@CAnimationEngine@@QEAAJI@Z.c)
 */

__int64 __fastcall CStoryboard::ScheduleStopAnimation(CStoryboard *this)
{
  unsigned int v2; // edi
  CAnimationEngine *v3; // rax
  CAnimationEngine *v4; // rbx
  unsigned int v5; // edx
  int v7; // eax
  struct _RTL_CRITICAL_SECTION *v8; // [rsp+48h] [rbp+10h] BYREF

  v8 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v2 = 0;
  v3 = CDesktopManager::AcquireAnimationEngine();
  v4 = v3;
  if ( v3 )
  {
    v5 = *((_DWORD *)this + 7);
    if ( v5 != -1 )
    {
      v7 = CAnimationEngine::ScheduleStopAnimation(v3, v5);
      v2 = v7;
      if ( v7 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, &CStoryboard::MILINSTRUMENTATIONHRESULTLIST, 1LL, v7, 0x1601u);
    }
  }
  CStoryboard::_Cleanup(this);
  if ( v4 )
    CAnimationEngine::Release(v4);
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v8);
  return v2;
}
