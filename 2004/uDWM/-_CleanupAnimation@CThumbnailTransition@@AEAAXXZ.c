/*
 * XREFs of ?_CleanupAnimation@CThumbnailTransition@@AEAAXXZ @ 0x1800B8000
 * Callers:
 *     ?StartAnimation@CThumbnailTransition@@QEAAJPEAVCThumbnailAnimatedVisual@@H@Z @ 0x1800B7E40 (-StartAnimation@CThumbnailTransition@@QEAAJPEAVCThumbnailAnimatedVisual@@H@Z.c)
 *     ?StopAnimation@CThumbnailTransition@@QEAAXXZ @ 0x1800B7F6C (-StopAnimation@CThumbnailTransition@@QEAAXXZ.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180017894 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?Release@CAnimationEngine@@UEAAKXZ @ 0x1800370E0 (-Release@CAnimationEngine@@UEAAKXZ.c)
 *     ?AcquireAnimationEngine@CDesktopManager@@SAPEAVCAnimationEngine@@XZ @ 0x1800379C4 (-AcquireAnimationEngine@CDesktopManager@@SAPEAVCAnimationEngine@@XZ.c)
 *     ?ScheduleStopAnimation@CAnimationEngine@@QEAAJI@Z @ 0x1800392A4 (-ScheduleStopAnimation@CAnimationEngine@@QEAAJI@Z.c)
 *     ?UnregisterForAnimationCompleteNotification@CAnimationEngine@@QEAAJPEAUIAnimationListener@@@Z @ 0x18003A394 (-UnregisterForAnimationCompleteNotification@CAnimationEngine@@QEAAJPEAUIAnimationListener@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800560C0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CThumbnailTransition::_CleanupAnimation(CThumbnailTransition *this)
{
  CAnimationEngine *v2; // rax
  CAnimationEngine *v3; // rdi
  __int64 v4; // rcx
  CBaseObject *v5; // rcx

  _InterlockedIncrement((volatile signed __int32 *)this + 2);
  v2 = CDesktopManager::AcquireAnimationEngine();
  v3 = v2;
  if ( v2 )
  {
    CAnimationEngine::UnregisterForAnimationCompleteNotification(
      v2,
      (struct IAnimationListener *)(((unsigned __int64)this + 16) & -(__int64)(this != 0LL)));
    CAnimationEngine::ScheduleStopAnimation(v3, *((_DWORD *)this + 8));
    CAnimationEngine::Release(v3);
  }
  v4 = *((_QWORD *)this + 3);
  if ( v4 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 200LL))(v4);
    v5 = (CBaseObject *)*((_QWORD *)this + 3);
    if ( v5 )
    {
      CBaseObject::Release(v5);
      *((_QWORD *)this + 3) = 0LL;
    }
  }
  CBaseObject::Release(this);
}
