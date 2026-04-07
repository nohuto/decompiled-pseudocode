/*
 * XREFs of ?JumpToFinalValue@CTimelineBase@@AEAAXXZ @ 0x18002595C
 * Callers:
 *     ?AdvanceTimelines@CDesktopManager@@AEAAXN@Z @ 0x1800259B0 (-AdvanceTimelines@CDesktopManager@@AEAAXN@Z.c)
 *     ?UpdateBeforeTickWorker@CTimelineBase@@AEAAJPEAUWindowsAnimation@@@Z @ 0x180025C58 (-UpdateBeforeTickWorker@CTimelineBase@@AEAAJPEAUWindowsAnimation@@@Z.c)
 *     ?Activate@CLivePreview@@QEAAJ_NPEAUHWND__@@1W4LIVEPREVIEW_TRIGGER@@I0PEAUtagRECT@@@Z @ 0x18003F9DC (-Activate@CLivePreview@@QEAAJ_NPEAUHWND__@@1W4LIVEPREVIEW_TRIGGER@@I0PEAUtagRECT@@@Z.c)
 *     ?AbandonActiveAnimations@CDesktopManager@@AEAAXXZ @ 0x180085C18 (-AbandonActiveAnimations@CDesktopManager@@AEAAXXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800560C0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CTimelineBase::JumpToFinalValue(CTimelineBase *this)
{
  __int64 v2; // rcx
  __int64 v3; // xmm0_8

  v2 = *((_QWORD *)this + 8);
  if ( v2 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
    *((_QWORD *)this + 8) = 0LL;
  }
  if ( *((double *)this + 3) < 0.0 )
    v3 = *((_QWORD *)this + 4);
  else
    v3 = *((_QWORD *)this + 5);
  *((_QWORD *)this + 6) = v3;
  *((_BYTE *)this + 72) = 1;
}
