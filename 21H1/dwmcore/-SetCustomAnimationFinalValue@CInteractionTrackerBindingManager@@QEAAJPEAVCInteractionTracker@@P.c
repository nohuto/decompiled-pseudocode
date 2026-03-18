/*
 * XREFs of ?SetCustomAnimationFinalValue@CInteractionTrackerBindingManager@@QEAAJPEAVCInteractionTracker@@PEAVCKeyframeAnimation@@W4CustomAnimationTarget@@@Z @ 0x1801D3E24
 * Callers:
 *     ?StopCustomAnimation@CInteractionTracker@@AEAAXH_N@Z @ 0x1801D0C54 (-StopCustomAnimation@CInteractionTracker@@AEAAXH_N@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1800E1200 (__security_check_cookie.c)
 *     memset_0 @ 0x1800E261C (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800EBD90 (_guard_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180151814 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SetPosition@CInteractionTracker@@AEAAXAEBUD2DVector3@@W4TrackerUpdateType@1@@Z @ 0x1801CFF70 (-SetPosition@CInteractionTracker@@AEAAXAEBUD2DVector3@@W4TrackerUpdateType@1@@Z.c)
 *     ?SetScale@CInteractionTracker@@AEAAXMW4TrackerUpdateType@1@@Z @ 0x1801D0500 (-SetScale@CInteractionTracker@@AEAAXMW4TrackerUpdateType@1@@Z.c)
 *     ?BringBoundTrackersPositionAndScaleInSync@CInteractionTrackerBindingManager@@QEAAXPEBVCInteractionTracker@@PEAV2@W4InteractionTrackerBindingModeFlags@@@Z @ 0x1801D2918 (-BringBoundTrackersPositionAndScaleInSync@CInteractionTrackerBindingManager@@QEAAXPEBVCInteracti.c)
 *     ?GetLastKeyframeValue@CKeyframeAnimation@@QEBAPEBVKeyframeValue@@XZ @ 0x1801D51FC (-GetLastKeyframeValue@CKeyframeAnimation@@QEBAPEBVKeyframeValue@@XZ.c)
 *     ?GetValue@KeyframeValue@@QEBAJPEAVCExpressionValueStack@@PEAVCExpressionValue@@@Z @ 0x180207F4C (-GetValue@KeyframeValue@@QEBAJPEAVCExpressionValueStack@@PEAVCExpressionValue@@@Z.c)
 */

__int64 __fastcall CInteractionTrackerBindingManager::SetCustomAnimationFinalValue(
        int a1,
        __int64 a2,
        CKeyframeAnimation *a3,
        int a4)
{
  const struct KeyframeValue *LastKeyframeValue; // rdi
  int Value; // eax
  unsigned int v9; // edi
  char v11; // r9
  __int64 v12; // [rsp+20h] [rbp-39h] BYREF
  int v13; // [rsp+28h] [rbp-31h]
  __int64 v14; // [rsp+60h] [rbp+7h]
  int v15; // [rsp+68h] [rbp+Fh]
  char v16; // [rsp+6Ch] [rbp+13h]
  __int64 v17; // [rsp+70h] [rbp+17h] BYREF
  int v18; // [rsp+78h] [rbp+1Fh]
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+5Fh]

  LastKeyframeValue = CKeyframeAnimation::GetLastKeyframeValue(a3);
  if ( *((_DWORD *)LastKeyframeValue + 5) != 1 )
    return 0LL;
  memset_0(&v12, 0, 0x40uLL);
  v14 = 0LL;
  v15 = 18;
  v16 = 0;
  Value = KeyframeValue::GetValue(LastKeyframeValue, 0LL, (struct CExpressionValue *)&v12);
  v9 = Value;
  if ( Value >= 0 )
  {
    if ( a4 )
    {
      if ( a4 != 1 )
        goto LABEL_11;
      CInteractionTracker::SetScale(a2, *(float *)&v12, 1);
      v11 = 4;
    }
    else
    {
      v17 = v12;
      v18 = v13;
      CInteractionTracker::SetPosition(a2, (__int64)&v17, 1);
      v11 = 3;
    }
    CInteractionTrackerBindingManager::BringBoundTrackersPositionAndScaleInSync(a1, a2, a2, v11);
LABEL_11:
    if ( v14 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
    return 0LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x421,
    (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\interactiontrackerbindingmanager.cpp",
    (const char *)(unsigned int)Value);
  if ( v14 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
  return v9;
}
