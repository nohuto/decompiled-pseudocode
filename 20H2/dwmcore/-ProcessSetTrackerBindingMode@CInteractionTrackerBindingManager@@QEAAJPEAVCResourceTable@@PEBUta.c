/*
 * XREFs of ?ProcessSetTrackerBindingMode@CInteractionTrackerBindingManager@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_INTERACTIONTRACKERBINDINGMANAGER_SETTRACKERBINDINGMODE@@@Z @ 0x1801CEFD0
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1800ADEEC (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     ?GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z @ 0x1800ADC94 (-GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EE9F0 (_guard_dispatch_icall_nop.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18016427C (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?AddOrUpdateTrackerBindings@CInteractionTrackerBindingManager@@AEAAXPEAVCInteractionTracker@@0W4InteractionTrackerBindingModeFlags@@@Z @ 0x1801CD98C (-AddOrUpdateTrackerBindings@CInteractionTrackerBindingManager@@AEAAXPEAVCInteractionTracker@@0W4.c)
 *     ?BringBoundTrackersPositionAndScaleInSync@CInteractionTrackerBindingManager@@QEAAXPEBVCInteractionTracker@@PEAV2@W4InteractionTrackerBindingModeFlags@@@Z @ 0x1801CE148 (-BringBoundTrackersPositionAndScaleInSync@CInteractionTrackerBindingManager@@QEAAXPEBVCInteracti.c)
 *     ?BringBoundTrackersStateInSync@CInteractionTrackerBindingManager@@AEAAXPEAVCInteractionTracker@@0W4InteractionTrackerBindingModeFlags@@@Z @ 0x1801CE3D4 (-BringBoundTrackersStateInSync@CInteractionTrackerBindingManager@@AEAAXPEAVCInteractionTracker@@.c)
 */

__int64 __fastcall CInteractionTrackerBindingManager::ProcessSetTrackerBindingMode(
        CInteractionTrackerBindingManager *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_INTERACTIONTRACKERBINDINGMANAGER_SETTRACKERBINDINGMODE *a3)
{
  unsigned int v5; // edx
  _QWORD *Resource; // rsi
  __int64 v8; // rax
  int v9; // ebp
  CInteractionTracker *v10; // rdi
  CInteractionTrackerBindingManager *v11; // rcx
  CInteractionTrackerBindingManager *v12; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v5 = *((_DWORD *)a3 + 2);
  if ( !v5 || !*((_DWORD *)a3 + 3) )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x56,
      (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\interactiontrackerbindingmanager.cpp",
      (const char *)0x88980403LL);
    JUMPOUT(0x1801CF144LL);
  }
  Resource = (_QWORD *)CResourceTable::GetResource((__int64)a2, v5, 0x58u);
  v8 = CResourceTable::GetResource((__int64)a2, *((_DWORD *)a3 + 3), 0x58u);
  v9 = *((_DWORD *)a3 + 4);
  v10 = (CInteractionTracker *)v8;
  if ( !Resource || !v8 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x3D,
      (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\interactiontrackerbindingmanager.cpp",
      (const char *)0x88980403LL);
    __debugbreak();
  }
  v11 = (CInteractionTrackerBindingManager *)Resource[79];
  if ( v11 != this )
  {
    if ( this )
    {
      (*(void (__fastcall **)(CInteractionTrackerBindingManager *))(*(_QWORD *)this + 8LL))(this);
      v11 = (CInteractionTrackerBindingManager *)Resource[79];
    }
    Resource[79] = this;
    if ( v11 )
      (*(void (__fastcall **)(CInteractionTrackerBindingManager *))(*(_QWORD *)v11 + 16LL))(v11);
  }
  v12 = (CInteractionTrackerBindingManager *)*((_QWORD *)v10 + 79);
  if ( v12 != this )
  {
    if ( this )
    {
      (*(void (__fastcall **)(CInteractionTrackerBindingManager *))(*(_QWORD *)this + 8LL))(this);
      v12 = (CInteractionTrackerBindingManager *)*((_QWORD *)v10 + 79);
    }
    *((_QWORD *)v10 + 79) = this;
    if ( v12 )
      (*(void (__fastcall **)(CInteractionTrackerBindingManager *))(*(_QWORD *)v12 + 16LL))(v12);
  }
  CInteractionTrackerBindingManager::BringBoundTrackersStateInSync((int)this, (__int64)Resource, v10, v9);
  CInteractionTrackerBindingManager::BringBoundTrackersPositionAndScaleInSync(
    (int)this,
    (__int64)Resource,
    (int)v10,
    v9);
  CInteractionTrackerBindingManager::AddOrUpdateTrackerBindings(this, Resource, v10, v9);
  return 0LL;
}
